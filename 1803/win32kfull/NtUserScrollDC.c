/*
 * XREFs of NtUserScrollDC @ 0x1C002D4E0
 * Callers:
 *     <none>
 * Callees:
 *     _ScrollDC @ 0x1C002D2F8 (_ScrollDC.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

_BOOL8 __fastcall NtUserScrollDC(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        __m128i *a4,
        struct tagRECT *a5,
        HRGN a6,
        ULONG64 a7)
{
  struct tagRECT *v11; // rdi
  _OWORD *v12; // rsi
  ULONG64 v13; // rdx
  ULONG64 v14; // rcx
  BOOL v15; // ebx
  __int64 v16; // r8
  __int64 v17; // r9
  __int128 v19; // [rsp+80h] [rbp-78h] BYREF
  __m128i v20; // [rsp+90h] [rbp-68h] BYREF
  struct tagRECT v21; // [rsp+A0h] [rbp-58h] BYREF

  v11 = a5;
  v12 = (_OWORD *)a7;
  v19 = 0uLL;
  EnterSharedCrit(0LL, 1LL);
  if ( a4 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (__m128i *)MmUserProbeAddress;
    v20 = *a4;
    a4 = &v20;
  }
  if ( a5 )
  {
    if ( (unsigned __int64)a5 >= MmUserProbeAddress )
      v11 = (struct tagRECT *)MmUserProbeAddress;
    v21 = *v11;
    v11 = &v21;
  }
  v15 = ScrollDC(a1, a2, a3, a4, v11, a6, (struct tagRECT *)((unsigned __int64)&v19 & -(__int64)(a7 != 0)));
  if ( a7 )
  {
    v14 = MmUserProbeAddress;
    v13 = MmUserProbeAddress;
    if ( a7 >= MmUserProbeAddress )
      v12 = (_OWORD *)MmUserProbeAddress;
    *v12 = v19;
  }
  UserSessionSwitchLeaveCrit(v14, v13, v16, v17);
  return v15;
}
