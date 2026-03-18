/*
 * XREFs of NtUserDrawCaption @ 0x1C01ECFD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxDrawCaptionTemp @ 0x1C0132880 (xxxDrawCaptionTemp.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserDrawCaption(__int64 a1, HDC a2, _OWORD *a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD v18[3]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v19[2]; // [rsp+70h] [rbp-48h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v13 = 0;
  if ( v8 )
  {
    v18[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v18;
    v18[1] = v8;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v19 = *a3;
    v13 = xxxDrawCaptionTemp((__int64 *)v8, a2, (RECT *)v19, 0LL, 0LL, 0LL, a4);
    ThreadUnlock1(v15, v14, v16);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v13;
}
