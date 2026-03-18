/*
 * XREFs of xxxWindowFromPoint @ 0x1C010AB1C
 * Callers:
 *     NtUserWindowFromPoint @ 0x1C010AAD0 (NtUserWindowFromPoint.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     xxxDCEWindowHitTest @ 0x1C010AC5C (xxxDCEWindowHitTest.c)
 *     GetThreadDesktopWindow @ 0x1C010B1CC (GetThreadDesktopWindow.c)
 *     xxxWindowHitTest2 @ 0x1C011EC8C (xxxWindowHitTest2.c)
 */

__int64 __fastcall xxxWindowFromPoint(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  ULONG_PTR v6; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // [rsp+40h] [rbp-30h] BYREF
  ULONG_PTR v24; // [rsp+48h] [rbp-28h]
  __int64 v25; // [rsp+50h] [rbp-20h]
  __int64 v26; // [rsp+58h] [rbp-18h] BYREF
  __int64 v27; // [rsp+60h] [rbp-10h]
  __int64 v28; // [rsp+68h] [rbp-8h]

  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  result = GetThreadDesktopWindow(0LL);
  v6 = result;
  if ( result )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3, v4, v5);
    v23 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v23;
    v24 = v6;
    HMLockObject(v6);
    if ( (unsigned int)IsWindowDesktopComposed(v6) )
    {
      v11 = *(_QWORD *)(v6 + 112);
      v26 = 0LL;
      v27 = 0LL;
      v28 = 0LL;
      v12 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9, v10);
      v26 = *(_QWORD *)(v12 + 408);
      *(_QWORD *)(v12 + 408) = &v26;
      v27 = v11;
      if ( v11 )
        HMLockObject(v11);
      v13 = xxxDCEWindowHitTest(*(_QWORD *)(v6 + 112), 0, 0, 0, a1, 0LL, 5);
      ThreadUnlock1(v15, v14, v16);
    }
    else
    {
      v13 = xxxWindowHitTest2(v6);
    }
    ThreadUnlock1(v18, v17, v19);
    LOBYTE(v20) = 1;
    return HMValidateHandleNoSecure(v13, v20, v21, v22);
  }
  return result;
}
