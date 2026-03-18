/*
 * XREFs of ?Release@CChannel@@UEAAKXZ @ 0x1800E4D00
 * Callers:
 *     ??$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z @ 0x1800E4CD4 (--$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z.c)
 *     ?Destroy@CChannel@@UEAAJXZ @ 0x180156740 (-Destroy@CChannel@@UEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??1CChannel@@AEAA@XZ @ 0x180155C84 (--1CChannel@@AEAA@XZ.c)
 */

__int64 __fastcall CChannel::Release(CChannel *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
  {
    CChannel::~CChannel(this);
    operator delete(this);
  }
  return v2;
}
