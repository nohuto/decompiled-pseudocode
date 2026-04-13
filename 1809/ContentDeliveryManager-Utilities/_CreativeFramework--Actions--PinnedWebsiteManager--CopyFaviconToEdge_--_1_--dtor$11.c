/*
 * XREFs of _CreativeFramework::Actions::PinnedWebsiteManager::CopyFaviconToEdge_::_1_::dtor$11 @ 0x1800CF576
 * Callers:
 *     <none>
 * Callees:
 *     ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180004B84 (--1HString@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::Actions::PinnedWebsiteManager::CopyFaviconToEdge_::_1_::dtor_11(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 80) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 80) &= ~1u;
    Microsoft::WRL::Wrappers::HString::~HString(*(HSTRING **)(a2 + 112));
  }
}
