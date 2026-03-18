/*
 * XREFs of NtUserDrawCaption @ 0x1C022B190
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     xxxDrawCaptionTemp @ 0x1C0157378 (xxxDrawCaptionTemp.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserDrawCaption(__int64 a1, HDC a2, struct tagRECT *a3, unsigned int a4)
{
  __int64 v8; // rcx
  ULONG_PTR v9; // rsi
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // [rsp+50h] [rbp-68h] BYREF
  ULONG_PTR v16; // [rsp+58h] [rbp-60h]
  __int64 v17; // [rsp+60h] [rbp-58h]
  unsigned __int128 v18; // [rsp+70h] [rbp-48h] BYREF

  v18 = 0uLL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  v10 = 0;
  if ( v9 )
  {
    v15 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v15;
    v16 = v9;
    HMLockObject(v9);
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (struct tagRECT *)MmUserProbeAddress;
    v18 = (unsigned __int128)*a3;
    v10 = xxxDrawCaptionTemp(v9, a2, (struct tagRECT *)&v18, 0LL, 0LL, 0LL, a4);
    ThreadUnlock1(v12, v11, v13);
  }
  UserSessionSwitchLeaveCrit(v8);
  return v10;
}
