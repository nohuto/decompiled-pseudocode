/*
 * XREFs of MiComputeImageVadCommitCharge @ 0x1402A4060
 * Callers:
 *     MiCheckCommitReleaseFromVad @ 0x1402A3BBC (MiCheckCommitReleaseFromVad.c)
 *     MiComputeCommitChargeForZeroPteRange @ 0x1402A3FB4 (MiComputeCommitChargeForZeroPteRange.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x140042770 (MiGetProtoPteAddress.c)
 */

__int64 __fastcall MiComputeImageVadCommitCharge(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  __int64 result; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // r10
  unsigned __int64 v9; // r8
  unsigned int v10; // ecx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  result = MiGetProtoPteAddress(a1, a2, 6, v11);
  v7 = 0LL;
  if ( result )
  {
    v8 = (result - *(_QWORD *)(v11[0] + 8LL)) >> 3;
    v9 = (unsigned int)(*(_DWORD *)(v11[0] + 44LL) - v8);
    if ( v9 > a3 )
      v9 = a3;
    if ( (*(_BYTE *)(v11[0] + 32LL) & 0xA) == 0xA )
    {
      v10 = *(_DWORD *)(v11[0] + 44LL) - (*(_DWORD *)(v11[0] + 52LL) & 0x3FFFFFFF);
      if ( (unsigned int)v8 < v10 )
      {
        v7 = v10 - (unsigned int)v8;
        if ( v7 > v9 )
          v7 = v9;
      }
    }
    *a4 = v9;
    return v7;
  }
  else
  {
    *a4 = 1LL;
  }
  return result;
}
