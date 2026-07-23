/*
 * XREFs of MiComputeCommitChargeForZeroPteRange @ 0x1402A3FB4
 * Callers:
 *     MiCheckCommitReleaseFromVad @ 0x1402A3BBC (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     MiComputeImageVadCommitCharge @ 0x1402A4060 (MiComputeImageVadCommitCharge.c)
 */

__int64 __fastcall MiComputeCommitChargeForZeroPteRange(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  int v5; // edx
  __int64 v6; // rdi
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = *(_DWORD *)(a1 + 48);
  v6 = a3;
  if ( (v5 & 0x4000) != 0 )
  {
    if ( *(int *)(a1 + 52) >= 0 )
      return 0LL;
    return v6;
  }
  if ( (v5 & 7) != 2 )
  {
    if ( (v5 & 0x28) != 0x28 )
      return 0LL;
    return v6;
  }
  v8 = (unsigned __int64)(a2 << 25 >> 16) >> 12;
  if ( a3 )
  {
    do
    {
      v9 = MiComputeImageVadCommitCharge(a1, v8, v6, &v11);
      v8 += v11;
      v4 += v9;
      v6 -= v11;
    }
    while ( v6 );
  }
  return v4;
}
