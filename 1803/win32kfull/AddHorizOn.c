/*
 * XREFs of AddHorizOn @ 0x1C02C3AE8
 * Callers:
 *     CheckHorizTopology @ 0x1C02C3C08 (CheckHorizTopology.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     fsc_BeginElement @ 0x1C02C31D4 (fsc_BeginElement.c)
 */

__int64 __fastcall AddHorizOn(char a1)
{
  __int64 result; // rax
  __int64 (__fastcall *v2)(_QWORD, _QWORD); // [rsp+58h] [rbp+10h] BYREF
  __int64 v3; // [rsp+60h] [rbp+18h] BYREF

  result = fsc_BeginElement(a1, 1, 2, 0, 0LL, 0LL, &v2, &v3);
  if ( !(_DWORD)result )
    return v2((unsigned int)((dword_1C032FE18 + 31) >> 6), (unsigned int)(dword_1C032FE1C >> 6));
  return result;
}
