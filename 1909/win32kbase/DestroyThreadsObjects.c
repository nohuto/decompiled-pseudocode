/*
 * XREFs of DestroyThreadsObjects @ 0x1C0028B40
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00322E8 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ThreadUnlock1 @ 0x1C0026330 (ThreadUnlock1.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002D794 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMAssignmentUnlockWorker @ 0x1C002FF6C (HMAssignmentUnlockWorker.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C003009C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00300E8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     DestroyCacheDCEntries @ 0x1C007E6B4 (DestroyCacheDCEntries.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00AA02C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 */

void DestroyThreadsObjects()
{
  struct tagTHREADINFO *v0; // rdi
  unsigned int v1; // ebx
  char *v2; // rdx
  unsigned __int8 v3; // r8
  _QWORD *v4; // r9
  __int64 v5; // rax
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+40h] [rbp+8h] BYREF

  v0 = gptiCurrent;
  DestroyCacheDCEntries(gptiCurrent);
  while ( *((_QWORD *)v0 + 51) )
    ThreadUnlock1();
  if ( (int)IsCleanupW32ThreadLocksSupported() >= 0 )
    CleanupW32ThreadLocks(v0);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v7);
  v1 = 0;
  if ( *((_QWORD *)v0 + 133) )
  {
    if ( (int)Is_FreeTouchInputInfoSupported() >= 0 )
      _FreeTouchInputInfo(*((_QWORD *)v0 + 133), 1LL);
    *((_QWORD *)v0 + 133) = 0LL;
  }
  if ( *((_QWORD *)v0 + 134) )
  {
    if ( (int)Is_FreeGestureInfoSupported() >= 0 )
      _FreeGestureInfo(*((_QWORD *)v0 + 134), 1LL);
    *((_QWORD *)v0 + 134) = 0LL;
  }
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v6);
  do
  {
    v2 = (char *)qword_1C0210758 + 32 * v1;
    v3 = v2[24];
    v4 = (char *)gpKernelHandleTable + 24 * v1;
    if ( v3 )
    {
      if ( (*((_BYTE *)&unk_1C01D0EAC + 24 * v3) & 2) != 0 )
      {
        if ( v3 == 2 )
        {
          v5 = *(_QWORD *)(*v4 + 80LL);
          if ( v5 )
          {
            if ( *(struct tagTHREADINFO **)(v5 + 16) == v0 )
              HMAssignmentUnlockWorker();
          }
        }
      }
      else if ( (struct tagTHREADINFO *)v4[1] == v0 && (v2[25] & 1) == 0 )
      {
        HMDestroyUnlockedObjectWorker((struct _HANDLEENTRY *)((char *)qword_1C0210758 + 32 * v1));
      }
    }
    ++v1;
  }
  while ( v1 <= giheLast );
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v7);
}
