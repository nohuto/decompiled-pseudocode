/*
 * XREFs of Interrupter_DetermineSegmentSizeAndCount @ 0x1C0065F18
 * Callers:
 *     Interrupter_PrepareInterrupter @ 0x1C0066D14 (Interrupter_PrepareInterrupter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Interrupter_DetermineSegmentSizeAndCount(__int64 a1)
{
  _QWORD *v1; // r8
  __int64 result; // rax
  unsigned int v3; // edx

  v1 = *(_QWORD **)(a1 + 8);
  if ( *(_DWORD *)(a1 + 32) == *(_DWORD *)(v1[16] + 64LL) )
    result = 1LL;
  else
    result = (v1[42] & 0x10000000LL) != 0 ? 8 : 4;
  v3 = *(_DWORD *)(v1[11] + 88LL);
  if ( v3 >= (unsigned int)result )
    v3 = result;
  if ( v3 > 2 )
  {
    result = v1[42];
    if ( (result & 0x1000000000000LL) != 0 )
      v3 = 2;
  }
  *(_DWORD *)(a1 + 108) = v3;
  *(_DWORD *)(a1 + 112) = v3;
  *(_DWORD *)(a1 + 104) = 4096;
  *(_DWORD *)(a1 + 116) = 256;
  return result;
}
