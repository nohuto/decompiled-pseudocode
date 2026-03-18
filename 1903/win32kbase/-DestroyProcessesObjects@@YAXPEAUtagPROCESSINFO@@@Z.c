/*
 * XREFs of ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0027FC0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0033038 (xxxDestroyThreadInfo.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x1C0023C00 (HMAssignmentUnlock.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C002EA2C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002EBC4 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     GreGetObjectOwner @ 0x1C007A080 (GreGetObjectOwner.c)
 *     HMChangeOwnerPheProcessWorker @ 0x1C008AEA8 (HMChangeOwnerPheProcessWorker.c)
 *     FixupGlobalCursor @ 0x1C00B9010 (FixupGlobalCursor.c)
 */

void __fastcall DestroyProcessesObjects(struct tagPROCESSINFO *a1)
{
  _BOOL8 v2; // r14
  char *v3; // rbx
  __int64 v4; // rsi
  __int64 *v5; // rdi
  struct _HANDLEENTRY *v6; // rbx
  _QWORD *v7; // rdi
  struct _HANDLEENTRY *v8; // rsi
  unsigned __int8 v9; // dl
  char v10; // al
  unsigned int CurrentProcessId; // ebx
  _BYTE v12[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)a1 == (_QWORD)gpepCSRSS;
  if ( qword_1C0218870 )
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    if ( (unsigned int)GreGetObjectOwner(qword_1C0218868, 1LL) == (CurrentProcessId & 0xFFFFFFFC) )
      StopFade();
  }
  v3 = (char *)&gcachedCaptions;
  v4 = 5LL;
  v5 = (__int64 *)&gcachedCaptions;
  do
  {
    if ( *(_QWORD *)v3 && *(struct tagPROCESSINFO **)(*(_QWORD *)v3 + 24LL) == a1 )
      HMAssignmentUnlock(v5);
    v5 += 2;
    v3 += 16;
    --v4;
  }
  while ( v4 );
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v12);
  v6 = qword_1C0213758;
  v7 = gpKernelHandleTable;
  v8 = (struct _HANDLEENTRY *)((char *)qword_1C0213758 + 32 * (unsigned int)giheLast);
  if ( qword_1C0213758 <= v8 )
  {
    do
    {
      v9 = *((_BYTE *)v6 + 24);
      if ( v9 && (*((_BYTE *)&unk_1C01D2E9C + 24 * v9) & 2) != 0 && (struct tagPROCESSINFO *)v7[1] == a1 )
      {
        if ( v2 && v9 == 3 )
          FixupGlobalCursor(*v7, a1);
        if ( (*((_BYTE *)v6 + 25) & 1) == 0 )
          HMDestroyUnlockedObjectWorker(v6);
        v10 = *((_BYTE *)v6 + 24);
        if ( v10 && gptiRit )
        {
          if ( v10 == 3 )
          {
            if ( (int)IsZombieCursorSupported() >= 0 )
              ZombieCursor(*v7);
          }
          else
          {
            HMChangeOwnerPheProcessWorker(v6);
          }
        }
      }
      v6 = (struct _HANDLEENTRY *)((char *)v6 + 32);
      v7 += 3;
    }
    while ( v6 <= v8 );
  }
}
