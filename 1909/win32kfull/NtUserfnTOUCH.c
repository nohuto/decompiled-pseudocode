/*
 * XREFs of NtUserfnTOUCH @ 0x1C02390D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ForwardTouchMessage @ 0x1C01DF03C (ForwardTouchMessage.c)
 */

__int64 __fastcall NtUserfnTOUCH(
        struct tagWND *a1,
        __int64 a2,
        unsigned __int64 a3,
        volatile void *Address,
        __int64 a5,
        unsigned int a6)
{
  __int64 v6; // rbx
  __int64 v8[3]; // [rsp+50h] [rbp-18h] BYREF

  v6 = 0LL;
  v8[0] = 0LL;
  if ( (_DWORD)a2 == 576
    && a6 >= 0x29E
    && (a6 <= 0x29F || a6 > 0x2AA && (a6 <= 0x2AC || a6 > 0x2B0 && (a6 <= 0x2B4 || a6 - 695 <= 1))) )
  {
    if ( (unsigned __int64)a1 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    {
      UserSetLastError(1400LL, a2, a3, (__int64)Address);
    }
    else if ( (unsigned int)ForwardTouchMessage(gptiCurrent, a1, 576LL, a3, Address, 0, a5, a6, v8) )
    {
      return v8[0];
    }
  }
  return v6;
}
