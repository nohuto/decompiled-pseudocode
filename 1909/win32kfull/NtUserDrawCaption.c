/*
 * XREFs of NtUserDrawCaption @ 0x1C022AB70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     xxxDrawCaptionTemp @ 0x1C0158138 (xxxDrawCaptionTemp.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserDrawCaption(__int64 a1, HDC a2, struct tagRECT *a3, unsigned int a4)
{
  __int64 v8; // rcx
  __int64 *v9; // rsi
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // [rsp+50h] [rbp-68h] BYREF
  __int64 *v16; // [rsp+58h] [rbp-60h]
  __int64 v17; // [rsp+60h] [rbp-58h]
  struct tagRECT v18; // [rsp+70h] [rbp-48h] BYREF

  *(_QWORD *)&v18.left = 0LL;
  *(_QWORD *)&v18.right = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  v9 = (__int64 *)ValidateHwnd(a1);
  v10 = 0;
  if ( v9 )
  {
    v15 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v15;
    v16 = v9;
    HMLockObject(v9);
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (struct tagRECT *)MmUserProbeAddress;
    v18 = *a3;
    v10 = xxxDrawCaptionTemp(v9, a2, &v18, 0LL, 0LL, 0LL, a4);
    ThreadUnlock1(v12, v11, v13);
  }
  UserSessionSwitchLeaveCrit(v8);
  return v10;
}
