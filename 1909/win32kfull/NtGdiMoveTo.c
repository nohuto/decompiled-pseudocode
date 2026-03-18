/*
 * XREFs of NtGdiMoveTo @ 0x1C02A86D0
 * Callers:
 *     <none>
 * Callees:
 *     GreMoveTo @ 0x1C0269B6C (GreMoveTo.c)
 */

__int64 __fastcall NtGdiMoveTo(HDC a1, int a2, int a3, _QWORD *a4)
{
  __int64 result; // rax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v6[0] = 0LL;
  result = GreMoveTo(a1, a2, a3, v6);
  if ( (_DWORD)result && a4 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (_QWORD *)MmUserProbeAddress;
    *a4 = v6[0];
  }
  return result;
}
