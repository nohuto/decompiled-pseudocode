/*
 * XREFs of sub_18007A238 @ 0x18007A238
 * Callers:
 *     RtlTimeToElapsedTimeFields @ 0x18007A1A0 (RtlTimeToElapsedTimeFields.c)
 *     sub_1800E42B8 @ 0x1800E42B8 (sub_1800E42B8.c)
 * Callees:
 *     sub_18007A2D0 @ 0x18007A2D0 (sub_18007A2D0.c)
 */

__int64 __fastcall sub_18007A238(_QWORD *a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 result; // rax
  _DWORD *v7; // r11
  int v8; // r10d

  v3 = a3;
  LOBYTE(a3) = 13;
  v4 = sub_18007A2D0(*a1, 0xD1B71758E219652CuLL, a3);
  LOBYTE(v5) = 26;
  result = sub_18007A2D0(v4, 0xC6D750EBFA67B90EuLL, v5);
  *v7 = result;
  *v3 = v8 - 86400000 * result;
  return result;
}
