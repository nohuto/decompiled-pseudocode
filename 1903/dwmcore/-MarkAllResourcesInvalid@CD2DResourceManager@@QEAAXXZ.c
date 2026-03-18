/*
 * XREFs of ?MarkAllResourcesInvalid@CD2DResourceManager@@QEAAXXZ @ 0x180024C08
 * Callers:
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x180024C5C (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 * Callees:
 *     ?MarkInvalid@CD2DResource@@IEAAXXZ @ 0x180023EC0 (-MarkInvalid@CD2DResource@@IEAAXXZ.c)
 */

void __fastcall CD2DResourceManager::MarkAllResourcesInvalid(CD2DResourceManager *this)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx
  bool v4; // zf

  while ( *(CD2DResourceManager **)this != this )
  {
    v2 = *((_QWORD *)this + 1);
    if ( *(CD2DResourceManager **)v2 != this || (v3 = *(_QWORD **)(v2 + 8), *v3 != v2) )
      __fastfail(3u);
    *((_QWORD *)this + 1) = v3;
    *v3 = this;
    v4 = *(_BYTE *)(v2 - 40 + 33) == 0;
    *(_BYTE *)(v2 - 40 + 32) = 0;
    if ( !v4 )
      --*((_DWORD *)this + 4);
    CD2DResource::MarkInvalid((CD2DResource *)(v2 - 40));
  }
}
