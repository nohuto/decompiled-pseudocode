/*
 * XREFs of xxxWindowFromPoint @ 0x1C00D6160
 * Callers:
 *     NtUserWindowFromPoint @ 0x1C00D6120 (NtUserWindowFromPoint.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     xxxDCEWindowHitTest @ 0x1C00D62E0 (xxxDCEWindowHitTest.c)
 *     xxxWindowHitTest2 @ 0x1C00DAAF0 (xxxWindowHitTest2.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall xxxWindowFromPoint(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  struct _KTHREAD *v10; // rbp
  __int64 v11; // rsi
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rbp
  struct _KTHREAD *v17; // r14
  __int64 *v18; // rax
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  _QWORD v28[3]; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v29[3]; // [rsp+58h] [rbp-20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v8 = *ThreadWin32Thread;
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 456);
        if ( v9 )
          v4 = *(_QWORD *)(v9 + 24);
      }
    }
  }
  v10 = KeGetCurrentThread();
  v11 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v6, v5) )
  {
    v12 = (__int64 *)PsGetThreadWin32Thread(v10);
    if ( v12 )
      v11 = *v12;
  }
  v28[0] = *(_QWORD *)(v11 + 408);
  *(_QWORD *)(v11 + 408) = v28;
  v28[1] = v4;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  if ( (unsigned int)IsWindowDesktopComposed(v4) )
  {
    v15 = *(_QWORD *)(v4 + 88);
    v16 = 0LL;
    v17 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v14, v13) )
    {
      v18 = (__int64 *)PsGetThreadWin32Thread(v17);
      if ( v18 )
        v16 = *v18;
    }
    v29[0] = *(_QWORD *)(v16 + 408);
    *(_QWORD *)(v16 + 408) = v29;
    v29[1] = v15;
    if ( v15 )
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
    v19 = xxxDCEWindowHitTest(*(struct tagWND **)(v4 + 88), a1, 0LL, 5);
    ThreadUnlock1(v21, v20, v22);
  }
  else
  {
    v19 = xxxWindowHitTest2(v4);
  }
  ThreadUnlock1(v24, v23, v25);
  LOBYTE(v26) = 1;
  return HMValidateHandleNoSecure(v19, v26);
}
