/*
 * XREFs of ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0028960
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00322E8 (xxxDestroyThreadInfo.c)
 * Callees:
 *     GreGetObjectOwner @ 0x1C00220F0 (GreGetObjectOwner.c)
 *     HMAssignmentUnlock @ 0x1C0024120 (HMAssignmentUnlock.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002D794 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMChangeOwnerPheProcessWorker @ 0x1C0086AC8 (HMChangeOwnerPheProcessWorker.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00AA02C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     FixupGlobalCursor @ 0x1C00B5AB0 (FixupGlobalCursor.c)
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
  if ( qword_1C0215870 )
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    if ( (unsigned int)GreGetObjectOwner((unsigned int)qword_1C0215868, 1) == (CurrentProcessId & 0xFFFFFFFC) )
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
  v6 = qword_1C0210758;
  v7 = gpKernelHandleTable;
  v8 = (struct _HANDLEENTRY *)((char *)qword_1C0210758 + 32 * (unsigned int)giheLast);
  if ( qword_1C0210758 <= v8 )
  {
    do
    {
      v9 = *((_BYTE *)v6 + 24);
      if ( v9 && (*((_BYTE *)&unk_1C01D0EAC + 24 * v9) & 2) != 0 && (struct tagPROCESSINFO *)v7[1] == a1 )
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
