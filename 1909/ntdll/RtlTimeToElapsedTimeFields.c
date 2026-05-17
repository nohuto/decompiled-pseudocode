/*
 * XREFs of RtlTimeToElapsedTimeFields @ 0x18007A840
 * Callers:
 *     <none>
 * Callees:
 *     TimeToDaysAndFraction @ 0x18007A8D8 (TimeToDaysAndFraction.c)
 */

__int64 __fastcall RtlTimeToElapsedTimeFields(__int64 a1, __int64 a2)
{
  unsigned int v3; // r10d
  unsigned int v4; // r8d
  __int64 result; // rax
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF
  __int16 v7; // [rsp+40h] [rbp+18h] BYREF

  TimeToDaysAndFraction(a1, &v7, &v6);
  v3 = v6;
  *(_DWORD *)a2 = 0;
  *(_WORD *)(a2 + 4) = v7;
  *(_WORD *)(a2 + 12) = v3 % 0x3E8;
  v4 = v3 / 0x3E8 / 0x3C;
  *(_WORD *)(a2 + 6) = v4 / 0x3C;
  *(_WORD *)(a2 + 8) = v4 % 0x3C;
  result = (unsigned int)(__int16)v4;
  *(_WORD *)(a2 + 10) = v3 / 0x3E8 % 0x3C;
  return result;
}
