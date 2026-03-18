/*
 * XREFs of DestroyThreadsObjects @ 0x1C002E4A0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0099D40 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ThreadUnlock1 @ 0x1C00250E0 (ThreadUnlock1.c)
 *     DestroyCacheDCEntries @ 0x1C002D480 (DestroyCacheDCEntries.c)
 *     HMDestroyUnlockedObject @ 0x1C002D920 (HMDestroyUnlockedObject.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C002E66C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C002E6B8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMAssignmentUnlock @ 0x1C002FD40 (HMAssignmentUnlock.c)
 */

void __fastcall DestroyThreadsObjects(__int64 a1, int a2, __int64 a3)
{
  struct tagTHREADINFO *v3; // rdi
  unsigned int v4; // ebx
  char *v5; // rdx
  unsigned __int8 v6; // r8
  _QWORD *v7; // r9
  __int64 v8; // rcx
  char v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = gptiCurrent;
  DestroyCacheDCEntries((__int64)gptiCurrent, a2, a3);
  while ( *((_QWORD *)v3 + 52) )
    ThreadUnlock1();
  if ( (int)IsCleanupW32ThreadLocksSupported() >= 0 )
    CleanupW32ThreadLocks(v3);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v9);
  v4 = 0;
  if ( *((_QWORD *)v3 + 133) )
  {
    if ( (int)Is_FreeTouchInputInfoSupported() >= 0 )
      _FreeTouchInputInfo(*((_QWORD *)v3 + 133), 1LL);
    *((_QWORD *)v3 + 133) = 0LL;
  }
  if ( *((_QWORD *)v3 + 134) )
  {
    if ( (int)Is_FreeGestureInfoSupported() >= 0 )
      _FreeGestureInfo(*((_QWORD *)v3 + 134), 1LL);
    *((_QWORD *)v3 + 134) = 0LL;
  }
  do
  {
    v5 = (char *)qword_1C01CBA58 + 32 * v4;
    v6 = v5[24];
    v7 = (char *)gpKernelHandleTable + 24 * v4;
    if ( v6 )
    {
      if ( (*((_BYTE *)&unk_1C018DB4C + 24 * v6) & 2) != 0 )
      {
        if ( v6 == 2 )
        {
          v8 = *v7 + 80LL;
          if ( *(_QWORD *)v8 )
          {
            if ( *(struct tagTHREADINFO **)(*(_QWORD *)v8 + 16LL) == v3 )
              HMAssignmentUnlock(v8);
          }
        }
      }
      else if ( (struct tagTHREADINFO *)v7[1] == v3 && (v5[25] & 1) == 0 )
      {
        HMDestroyUnlockedObject((_BYTE *)qword_1C01CBA58 + 32 * v4);
      }
    }
    ++v4;
  }
  while ( v4 <= giheLast );
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v9);
}
