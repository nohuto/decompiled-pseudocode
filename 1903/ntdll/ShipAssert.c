/*
 * XREFs of ShipAssert @ 0x1800DCDB0
 * Callers:
 *     ShipAssertMsgW @ 0x1800DCF00 (ShipAssertMsgW.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_1800DCC38 @ 0x1800DCC38 (sub_1800DCC38.c)
 *     WerReportSQMEvent @ 0x1800DD3B0 (WerReportSQMEvent.c)
 */

__int64 __fastcall ShipAssert(int a1, int a2)
{
  struct _TEB *v4; // rbx
  ULONG LastErrorValue; // edi
  __int64 result; // rax
  _DWORD *v7; // rax
  unsigned int v8; // ecx
  _DWORD v9[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = NtCurrentTeb();
  LastErrorValue = v4->LastErrorValue;
  result = v4->SameTebFlags;
  if ( (result & 0x10) == 0 )
  {
    v4->SameTebFlags = result | 0x10;
    v7 = sub_1800DCC38();
    if ( v7 && v7 != (_DWORD *)255 && v7 != (_DWORD *)238 )
    {
      v8 = ((unsigned __int16)_InterlockedExchangeAdd(&dword_1801627B4, 1u) + 1) & 0x3FF;
      v7[2 * v8] = a1;
      v7[2 * v8 + 1] = a2;
    }
    v9[0] = a1;
    v9[1] = a2;
    v9[2] = 0;
    WerReportSQMEvent(1LL, v9, 3LL);
    result = 65519LL;
    v4->SameTebFlags &= ~0x10u;
    v4->LastErrorValue = LastErrorValue;
  }
  return result;
}
