/*
 * XREFs of ?SetDirtyChildren@CThumbnailVisual@@UEAAXXZ @ 0x180004400
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180014440 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CThumbnailVisual::SetDirtyChildren(CThumbnailVisual *this)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  CVisual *v4; // rcx

  v1 = *((_QWORD *)this + 46);
  if ( v1 )
  {
    if ( *(_BYTE *)(v1 + 42) )
    {
      v3 = *(_QWORD *)(v1 + 16);
      if ( v3 )
      {
        v4 = *(CVisual **)(v3 + 400);
        if ( v4 )
          CVisual::SetDirtyFlags(v4, 0x8000000u);
      }
    }
  }
  *((_DWORD *)this + 20) |= 1u;
}
