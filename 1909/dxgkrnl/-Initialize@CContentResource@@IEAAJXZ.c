/*
 * XREFs of ?Initialize@CContentResource@@IEAAJXZ @ 0x1C0063A5C
 * Callers:
 *     ?Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@@Z @ 0x1C0063924 (-Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@@Z.c)
 * Callees:
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C0011300 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C00114F8 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z @ 0x1C0011724 (-QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C00172E0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ??$FindProperty@UFlipContentHCompSurf@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipContentHCompSurf@@@Z @ 0x1C0063814 (--$FindProperty@UFlipContentHCompSurf@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipContentHCompSurf@@.c)
 */

__int64 __fastcall CContentResource::Initialize(CContentResource *this)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // r8
  void *v5; // rcx
  int v6; // eax
  PVOID v7; // rdi
  PVOID Object; // [rsp+28h] [rbp-E0h] BYREF
  CCompositionSurface *v10; // [rsp+30h] [rbp-D8h] BYREF
  _DWORD v11[260]; // [rsp+38h] [rbp-D0h] BYREF

  v2 = 0;
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    CFlipPropertySetBase::FindProperty<FlipContentHCompSurf>(v3, &Object);
    if ( Object )
    {
      v5 = *(void **)Object;
      if ( *(_QWORD *)Object )
      {
        Object = 0LL;
        v10 = 0LL;
        v6 = CompositionSurfaceObject::ResolveHandle(v5, 2u, v4, (struct CompositionSurfaceObject **)&Object);
        v7 = Object;
        v2 = v6;
        if ( v6 >= 0 )
        {
          v2 = CompositionSurfaceObject::LockForRead((char *)Object, &v10);
          if ( v2 >= 0 )
          {
            memset(v11, 0, sizeof(v11));
            if ( (int)CCompositionSurface::QueryBinding(v10, 0LL, (struct CSM_BUFFER_INFO *)v11) >= 0 || v11[0] )
              v2 = -1073741811;
            if ( v2 >= 0 )
            {
              *((_QWORD *)this + 6) = v7;
              v7 = 0LL;
            }
          }
          if ( v10 )
            CCompositionSurface::UnlockAndRelease(v10);
        }
        if ( v7 )
          ObfDereferenceObject(v7);
      }
    }
  }
  return (unsigned int)v2;
}
