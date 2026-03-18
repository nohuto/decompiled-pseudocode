/*
 * XREFs of WmipAddDataSource @ 0x140732528
 * Callers:
 *     WmipProcessWmiRegInfo @ 0x140732B4C (WmipProcessWmiRegInfo.c)
 *     WmipInitializeDataStructs @ 0x140A18B8C (WmipInitializeDataStructs.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KeReleaseMutex @ 0x14006B9F0 (KeReleaseMutex.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     WmipUnreferenceEntry @ 0x140669758 (WmipUnreferenceEntry.c)
 *     WmipCountedToSz @ 0x140711CCC (WmipCountedToSz.c)
 *     WmipBuildInstanceSet @ 0x140732824 (WmipBuildInstanceSet.c)
 *     WmipGenerateRegistrationNotification @ 0x140732D48 (WmipGenerateRegistrationNotification.c)
 *     WmipLinkDataSourceToList @ 0x14073310C (WmipLinkDataSourceToList.c)
 *     WmipAllocDataSource @ 0x140733244 (WmipAllocDataSource.c)
 *     WmipAllocEntry @ 0x140733294 (WmipAllocEntry.c)
 *     WmipAddMofResource @ 0x1407769EC (WmipAddMofResource.c)
 *     WmipLegacyEtwWorker @ 0x14077C7D0 (WmipLegacyEtwWorker.c)
 *     WmipGenerateMofResourceNotification @ 0x14077CF70 (WmipGenerateMofResourceNotification.c)
 *     WmipGenerateBinaryMofNotification @ 0x140787BE4 (WmipGenerateBinaryMofNotification.c)
 */

__int64 __fastcall WmipAddDataSource(__int64 a1, __int64 a2, int a3, unsigned __int16 *a4, unsigned __int16 *a5)
{
  int v5; // edi
  __int64 v8; // rbx
  __int64 v9; // rsi
  unsigned int v10; // r12d
  int v11; // eax
  int v12; // eax
  _QWORD **v13; // r14
  char v14; // r12
  __int64 v15; // rdx
  int v16; // edi
  _WORD *v17; // rsi
  _WORD *v18; // rdi
  _QWORD *v20; // rsi
  _QWORD **v21; // r14
  _QWORD *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // rcx
  bool v27; // zf
  __int64 v28; // rax
  _QWORD *v29; // r14
  __int64 v30; // rcx
  _QWORD *v31; // rax
  _QWORD *v32; // r15
  _QWORD *v33; // rcx
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // [rsp+30h] [rbp-30h]
  _QWORD v37[5]; // [rsp+38h] [rbp-28h] BYREF
  char v38; // [rsp+A0h] [rbp+40h] BYREF
  int v39; // [rsp+B0h] [rbp+50h]
  unsigned __int16 *v40; // [rsp+B8h] [rbp+58h]

  v40 = a4;
  v39 = a3;
  v5 = a3;
  v36 = 0LL;
  memset(v37, 0, 0x20uLL);
  v8 = *(_QWORD *)(a1 + 32);
  v38 = 0;
  if ( !v8 )
  {
    v8 = WmipAllocDataSource();
    if ( !v8 )
      return (unsigned int)-1073741670;
    *(_DWORD *)(v8 + 56) = *(_DWORD *)(a1 + 56);
    v38 = 1;
  }
  v9 = a2 + 24;
  v10 = 0;
  if ( !*(_DWORD *)(a2 + 16) )
  {
LABEL_8:
    v12 = *(_DWORD *)(a1 + 48) & 0x40000000;
    if ( v12 )
    {
      v37[1] = v37;
      v37[0] = v37;
      v37[3] = &v37[2];
      v37[2] = &v37[2];
    }
    v13 = (_QWORD **)((unsigned __int64)v37 & -(__int64)(v12 != 0));
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    v14 = v38;
    LOBYTE(v15) = v38;
    v16 = WmipLinkDataSourceToList(v8, v15, v13);
    KeReleaseMutex(&WmipSMMutex, 0);
    if ( v13 )
    {
      while ( 1 )
      {
        v20 = *v13;
        if ( *v13 == v13 )
          break;
        if ( (_QWORD **)v20[1] != v13 )
          goto LABEL_59;
        v31 = (_QWORD *)*v20;
        if ( *(_QWORD **)(*v20 + 8LL) != v20 )
          goto LABEL_59;
        *v13 = v31;
        v31[1] = v13;
        WmipLegacyEtwWorker(v20[2]);
        v32 = v20 + 5;
        while ( 1 )
        {
          v33 = (_QWORD *)*v32;
          if ( (_QWORD *)*v32 == v32 )
            break;
          if ( (_QWORD *)v33[1] != v32 )
            goto LABEL_59;
          v34 = *v33;
          if ( *(_QWORD **)(*v33 + 8LL) != v33 )
            goto LABEL_59;
          *v32 = v34;
          *(_QWORD *)(v34 + 8) = v32;
          KeSetEvent((PRKEVENT)(v33 + 2), 0, 0);
        }
        ExFreePoolWithTag(v20, 0x70696D57u);
      }
      v21 = v13 + 2;
      while ( 1 )
      {
        v22 = *v21;
        if ( *v21 == v21 )
          break;
        if ( (_QWORD **)v22[1] != v21 )
          goto LABEL_59;
        v35 = (_QWORD *)*v22;
        if ( *(_QWORD **)(*v22 + 8LL) != v22 )
          goto LABEL_59;
        *v21 = v35;
        v35[1] = v21;
        KeWaitForSingleObject(v22 + 4, Executive, 0, 0, 0LL);
        ExFreePoolWithTag(v22, 0x70696D57u);
      }
    }
    if ( v16 >= 0 )
    {
      *(_QWORD *)(a1 + 32) = v8;
      if ( v36 )
        WmipGenerateBinaryMofNotification(v36, &GUID_MOF_RESOURCE_ADDED_NOTIFICATION);
      if ( v40 )
        v17 = WmipCountedToSz(v40);
      else
        v17 = 0LL;
      if ( a5 )
        v18 = WmipCountedToSz(a5);
      else
        v18 = 0LL;
      if ( v17 )
      {
        if ( *v17 && v18 && *v18 && (int)WmipAddMofResource(v8, v17, 0LL, v18, &v38) >= 0 && v38 )
          WmipGenerateMofResourceNotification(v17, v18);
        ExFreePoolWithTag(v17, 0);
      }
      if ( v18 )
        ExFreePoolWithTag(v18, 0);
      WmipGenerateRegistrationNotification(v8, 1LL);
      v8 = 0LL;
      v16 = 0;
    }
    goto LABEL_26;
  }
  while ( 1 )
  {
    v11 = *(_DWORD *)(v9 + 16);
    if ( (v11 & 0x10000) != 0 || (v11 & 0x81000) == 0x80000 )
      goto LABEL_7;
    v23 = WmipAllocEntry(&WmipISChunkInfo);
    v24 = v23;
    if ( !v23 )
      break;
    *(_DWORD *)(v23 + 16) |= 8u;
    *(_QWORD *)(v23 + 56) = v9;
    *(_QWORD *)(v23 + 64) = v8;
    v16 = WmipBuildInstanceSet(v9, a2, v5, v23, *(_DWORD *)(v8 + 56));
    v25 = *(_QWORD *)v9 - WmipBinaryMofGuid;
    if ( *(_QWORD *)v9 == WmipBinaryMofGuid )
      v25 = *(_QWORD *)(v9 + 8) - 0x102906C9A000F0B2LL;
    v26 = v36;
    v27 = v25 == 0;
    v28 = v8 + 40;
    if ( v27 )
      v26 = v24;
    v29 = (_QWORD *)(v24 + 40);
    v36 = v26;
    v30 = *(_QWORD *)v28;
    if ( *(_QWORD *)(*(_QWORD *)v28 + 8LL) != v28 )
LABEL_59:
      __fastfail(3u);
    *v29 = v30;
    v29[1] = v28;
    *(_QWORD *)(v30 + 8) = v29;
    *(_QWORD *)v28 = v29;
    if ( v16 < 0 )
      goto LABEL_45;
    v5 = v39;
LABEL_7:
    ++v10;
    v9 += 32LL;
    if ( v10 >= *(_DWORD *)(a2 + 16) )
      goto LABEL_8;
  }
  v16 = -1073741670;
LABEL_45:
  v14 = v38;
LABEL_26:
  if ( v8 && v14 )
  {
    *(_DWORD *)(v8 + 16) |= 1u;
    WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, (volatile signed __int64 *)v8);
  }
  return (unsigned int)v16;
}
