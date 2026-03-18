/*
 * XREFs of WmipProcessEvent @ 0x14071A5BC
 * Callers:
 *     WmipEventNotification @ 0x14071A550 (WmipEventNotification.c)
 *     WmipSendGuidUpdateNotifications @ 0x140732F98 (WmipSendGuidUpdateNotifications.c)
 *     WmipGenerateMofResourceNotification @ 0x14077CF70 (WmipGenerateMofResourceNotification.c)
 *     WmipGenerateBinaryMofNotification @ 0x140787BE4 (WmipGenerateBinaryMofNotification.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x14006B9F0 (KeReleaseMutex.c)
 *     ObReferenceObjectSafe @ 0x140104560 (ObReferenceObjectSafe.c)
 *     WmipWriteWnodeToObject @ 0x14015A650 (WmipWriteWnodeToObject.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     WmipFindGEByGuid @ 0x1405C0690 (WmipFindGEByGuid.c)
 *     WmipUnreferenceEntry @ 0x140669758 (WmipUnreferenceEntry.c)
 *     WmipDereferenceEvent @ 0x1408F0874 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1408F0C1C (WmipIncludeStaticNames.c)
 */

__int64 __fastcall WmipProcessEvent(_DWORD *P, char a2, char a3)
{
  char v3; // bp
  PVOID v4; // rsi
  PVOID v5; // rdi
  PVOID v6; // rbx
  volatile signed __int64 *GEByGuid; // r13
  unsigned int v8; // r15d
  volatile signed __int64 *v10; // r12
  __int64 v11; // rbp
  void (__fastcall *v12)(PVOID, _QWORD); // rax
  __int64 v13; // rax
  void *v17; // [rsp+98h] [rbp+20h]

  v3 = a3;
  v4 = P;
  if ( (P[11] & 0x2000) == 0 )
  {
    v5 = 0LL;
    v6 = P;
    v17 = 0LL;
LABEL_3:
    if ( (*((_DWORD *)v6 + 11) & 0x80u) != 0 )
      v6 = (PVOID)WmipIncludeStaticNames(v6);
    GEByGuid = WmipFindGEByGuid((_QWORD *)v6 + 3, 1);
    if ( GEByGuid )
    {
      v8 = 0;
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      v10 = (volatile signed __int64 *)*((_QWORD *)GEByGuid + 5);
      if ( v10 != GEByGuid + 5 )
      {
        do
        {
          v11 = (__int64)(v10 - 5);
          v10 = (volatile signed __int64 *)*v10;
          if ( ObReferenceObjectSafe(v11) )
          {
            if ( (*(_DWORD *)(v11 + 164) & 2) != 0 )
            {
              v12 = *(void (__fastcall **)(PVOID, _QWORD))(v11 + 72);
              if ( v12 )
                v12(v6, *(_QWORD *)(v11 + 80));
            }
            else if ( (int)WmipWriteWnodeToObject(v11, (unsigned int *)v6, a2) < 0 )
            {
              v8 = -1073741823;
            }
            ObfDereferenceObject((PVOID)v11);
          }
        }
        while ( v10 != GEByGuid + 5 );
        v5 = v17;
        v4 = P;
        v3 = a3;
      }
      KeReleaseMutex(&WmipSMMutex, 0);
      WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, GEByGuid);
    }
    else
    {
      v8 = -1073741163;
    }
    if ( v3 )
      ExFreePoolWithTag(v4, 0);
    if ( v6 != v4 && v6 != v5 )
      ExFreePoolWithTag(v6, 0);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    return v8;
  }
  v13 = WmipDereferenceEvent();
  v17 = (void *)v13;
  v5 = (PVOID)v13;
  if ( v13 )
  {
    v6 = (PVOID)v13;
    goto LABEL_3;
  }
  if ( v3 )
    ExFreePoolWithTag(v4, 0);
  return 3221225473LL;
}
