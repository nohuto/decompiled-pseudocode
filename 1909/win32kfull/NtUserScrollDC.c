/*
 * XREFs of NtUserScrollDC @ 0x1C0069820
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     _ScrollDC @ 0x1C0069628 (_ScrollDC.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

_BOOL8 __fastcall NtUserScrollDC(HDC a1, int a2, int a3, struct tagRECT *a4, struct tagRECT *a5, HRGN a6, ULONG64 a7)
{
  struct tagRECT *v11; // rdi
  _OWORD *v12; // rsi
  ULONG64 v13; // rcx
  BOOL v14; // ebx
  struct tagRECT v16; // [rsp+78h] [rbp-80h] BYREF
  struct tagRECT v17; // [rsp+88h] [rbp-70h] BYREF
  __int128 v18; // [rsp+A0h] [rbp-58h] BYREF

  v11 = a5;
  v12 = (_OWORD *)a7;
  v16 = (struct tagRECT)0LL;
  v17 = (struct tagRECT)0LL;
  v18 = 0uLL;
  EnterSharedCrit(0LL, 1LL);
  if ( a4 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (struct tagRECT *)MmUserProbeAddress;
    v16 = *a4;
    a4 = &v16;
  }
  if ( a5 )
  {
    if ( (unsigned __int64)a5 >= MmUserProbeAddress )
      v11 = (struct tagRECT *)MmUserProbeAddress;
    v17 = *v11;
    v11 = &v17;
  }
  v14 = ScrollDC(a1, a2, a3, a4, v11, a6, (struct tagRECT *)((unsigned __int64)&v18 & -(__int64)(a7 != 0)));
  if ( a7 )
  {
    v13 = MmUserProbeAddress;
    if ( a7 >= MmUserProbeAddress )
      v12 = (_OWORD *)MmUserProbeAddress;
    *v12 = v18;
  }
  UserSessionSwitchLeaveCrit(v13);
  return v14;
}
