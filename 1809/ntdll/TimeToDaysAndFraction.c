/*
 * XREFs of TimeToDaysAndFraction @ 0x18007F268
 * Callers:
 *     RtlTimeToElapsedTimeFields @ 0x18007F1D0 (RtlTimeToElapsedTimeFields.c)
 * Callees:
 *     RtlExtendedMagicDivide @ 0x18007F300 (RtlExtendedMagicDivide.c)
 */

__int64 __fastcall TimeToDaysAndFraction(_QWORD *a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 result; // rax
  _DWORD *v7; // r11
  int v8; // r10d

  v3 = a3;
  LOBYTE(a3) = 13;
  v4 = RtlExtendedMagicDivide(*a1, Magic10000, a3);
  LOBYTE(v5) = 26;
  result = RtlExtendedMagicDivide(v4, Magic86400000, v5);
  *v7 = result;
  *v3 = v8 - 86400000 * result;
  return result;
}
