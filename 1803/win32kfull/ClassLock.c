/*
 * XREFs of ClassLock @ 0x1C00ECB2C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     xxxSetClassData @ 0x1C010B0CC (xxxSetClassData.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01B25B4 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C01FF6A4 (xxxRecreateSmallIcons.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall ClassLock(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v6; // rdx
  int v7; // eax
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v9; // rbx
  __int64 *ThreadWin32Thread; // rax

  v3 = *(unsigned int *)(a1 + 72);
  if ( (int)v3 >= 131068 )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 72) = v3 + 1;
  if ( a1 != v6 )
  {
    v7 = *(_DWORD *)(v6 + 72);
    if ( v7 >= 131068 )
    {
      *(_DWORD *)(a1 + 72) = v3;
      return 0LL;
    }
    *(_DWORD *)(v6 + 72) = v7 + 1;
  }
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v3, v6) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v9 = *ThreadWin32Thread;
  }
  *a2 = *(_QWORD *)(v9 + 16);
  *(_QWORD *)(v9 + 16) = a2;
  a2[2] = ClassUnlockWorker;
  result = 1LL;
  a2[1] = a1;
  return result;
}
