/*
 * XREFs of ?Release@CChannel@@UEAAKXZ @ 0x1800780C0
 * Callers:
 *     ??$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z @ 0x180078094 (--$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z.c)
 *     ?Destroy@CChannel@@UEAAJXZ @ 0x180146130 (-Destroy@CChannel@@UEAAJXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CChannel@@AEAA@XZ @ 0x1801458D0 (--1CChannel@@AEAA@XZ.c)
 */

__int64 __fastcall CChannel::Release(CChannel *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
  {
    CChannel::~CChannel(this);
    WPF::ProcessHeapImpl::Free(this);
  }
  return v2;
}
