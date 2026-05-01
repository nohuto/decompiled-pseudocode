/*
 * XREFs of _CWRLObjectWithGITSite::SiteUnk_::_1_::dtor$1 @ 0x18012844F
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18011E570 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CWRLObjectWithGITSite::SiteUnk_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    Microsoft::WRL::WeakRef::~WeakRef(*(__int64 **)(a2 + 72));
  }
}
