/*
 * XREFs of ?bRotationOrMirroring@EXFORMOBJ@@QEBAHXZ @ 0x1C0147FC8
 * Callers:
 *     NtGdiTransparentBlt @ 0x1C0147950 (NtGdiTransparentBlt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EXFORMOBJ::bRotationOrMirroring(float **this)
{
  float *v1; // rdx
  __int64 result; // rax

  v1 = *this;
  if ( ((_DWORD)(*this)[8] & 1) == 0 )
    return 1LL;
  result = 0LL;
  if ( !*((_DWORD *)this + 3) && (*v1 < 0.0 || v1[3] < 0.0) )
    return 1LL;
  return result;
}
