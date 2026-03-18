/*
 * XREFs of ?Initialize@CContentResource@@IEAAJXZ @ 0x1C005C87C
 * Callers:
 *     ?Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@@Z @ 0x1C005C744 (-Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@@Z.c)
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0015D90 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ??$FindProperty@UFlipContentHCompSurf@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipContentHCompSurf@@@Z @ 0x1C005C65C (--$FindProperty@UFlipContentHCompSurf@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipContentHCompSurf@@.c)
 */

__int64 __fastcall CContentResource::Initialize(CContentResource *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // r8
  void **v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    CFlipPropertySetBase::FindProperty<FlipContentHCompSurf>(v3, &v6);
    if ( v6 )
    {
      if ( *v6 )
        return (unsigned int)CompositionSurfaceObject::ResolveHandle(
                               *v6,
                               2u,
                               v4,
                               (struct CompositionSurfaceObject **)this + 6);
    }
  }
  return v2;
}
