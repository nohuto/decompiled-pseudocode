/*
 * XREFs of ?GetCurrentRealization@CFlipExBuffer@@UEBAJPEAPEAVCBufferRealization@@@Z @ 0x1C000A020
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRealizationAt@CCompositionBuffer@@IEBAPEAVCBufferRealization@@I@Z @ 0x1C000A058 (-GetRealizationAt@CCompositionBuffer@@IEBAPEAVCBufferRealization@@I@Z.c)
 */

__int64 __fastcall CFlipExBuffer::GetCurrentRealization(CFlipExBuffer *this, struct CBufferRealization **a2)
{
  struct CBufferRealization *RealizationAt; // rax
  struct CBufferRealization **v3; // r11
  unsigned int v4; // edx
  unsigned int v5; // r10d

  RealizationAt = 0LL;
  v3 = a2;
  v4 = *((_DWORD *)this + 87);
  if ( v4 >= *((_DWORD *)this + 60) )
    v5 = -1073741275;
  else
    RealizationAt = CCompositionBuffer::GetRealizationAt(this, v4);
  *v3 = RealizationAt;
  return v5;
}
