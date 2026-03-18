/*
 * XREFs of ??0CCompositionBuffer@@IEAA@XZ @ 0x1C0009664
 * Callers:
 *     ??0CFlipExBuffer@@IEAA@XZ @ 0x1C0009584 (--0CFlipExBuffer@@IEAA@XZ.c)
 *     ?Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1C0055B4C (-Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@.c)
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 */

CCompositionBuffer *__fastcall CCompositionBuffer::CCompositionBuffer(CCompositionBuffer *this)
{
  CCompositionBuffer *result; // rax

  *((_QWORD *)this + 2) = 0LL;
  *((_WORD *)this + 20) = 0;
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 61) = 0;
  *((_QWORD *)this + 31) = 0LL;
  *(_QWORD *)this = &CCompositionBuffer::`vftable';
  *((_BYTE *)this + 42) = 0;
  memset((char *)this + 48, 0, 0xB0uLL);
  *((_QWORD *)this + 29) = (char *)this + 224;
  *((_QWORD *)this + 28) = (char *)this + 224;
  result = this;
  *((_DWORD *)this + 64) = 0;
  return result;
}
