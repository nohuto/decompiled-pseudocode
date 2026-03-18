/*
 * XREFs of xxxWindowFromPoint @ 0x1C00E50BC
 * Callers:
 *     NtUserWindowFromPoint @ 0x1C00E5070 (NtUserWindowFromPoint.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxDCEWindowHitTest @ 0x1C00E51FC (xxxDCEWindowHitTest.c)
 *     GetThreadDesktopWindow @ 0x1C00E576C (GetThreadDesktopWindow.c)
 *     xxxWindowHitTest2 @ 0x1C00F9960 (xxxWindowHitTest2.c)
 */

__int64 __fastcall xxxWindowFromPoint(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  ULONG_PTR v5; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // [rsp+40h] [rbp-30h] BYREF
  ULONG_PTR v21; // [rsp+48h] [rbp-28h]
  __int64 v22; // [rsp+50h] [rbp-20h]
  __int64 v23; // [rsp+58h] [rbp-18h] BYREF
  __int64 v24; // [rsp+60h] [rbp-10h]
  __int64 v25; // [rsp+68h] [rbp-8h]

  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  result = GetThreadDesktopWindow(0LL);
  v5 = result;
  if ( result )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3, v4);
    v20 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v20;
    v21 = v5;
    HMLockObject(v5);
    if ( (unsigned int)IsWindowDesktopComposed(v5) )
    {
      v9 = *(_QWORD *)(v5 + 112);
      v23 = 0LL;
      v24 = 0LL;
      v25 = 0LL;
      v10 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v8);
      v23 = *(_QWORD *)(v10 + 408);
      *(_QWORD *)(v10 + 408) = &v23;
      v24 = v9;
      if ( v9 )
        HMLockObject(v9);
      v11 = xxxDCEWindowHitTest(*(_QWORD *)(v5 + 112), 0, 0, 0, a1, 0LL, 5);
      ThreadUnlock1(v13, v12, v14);
    }
    else
    {
      v11 = xxxWindowHitTest2(v5);
    }
    ThreadUnlock1(v16, v15, v17);
    LOBYTE(v18) = 1;
    return HMValidateHandleNoSecure(v11, v18, v19);
  }
  return result;
}
