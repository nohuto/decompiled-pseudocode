/*
 * XREFs of NtDCompositionSetMaterialProperty @ 0x1C008B4D0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C00339B0 (UserIsCurrentProcessDwm.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C006E8E0 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     ?Store@MaterialProperty@@QEAAJPEBUResourceObject@DirectComposition@@@Z @ 0x1C008B5C4 (-Store@MaterialProperty@@QEAAJPEBUResourceObject@DirectComposition@@@Z.c)
 *     FindOrCreateMaterialProperty @ 0x1C008B638 (FindOrCreateMaterialProperty.c)
 *     CheckShellExperienceComposerAccess @ 0x1C0166FAC (CheckShellExperienceComposerAccess.c)
 */

__int64 __fastcall NtDCompositionSetMaterialProperty(__int64 a1, __int64 a2, void *a3)
{
  struct _ERESOURCE *v3; // rbx
  struct DirectComposition::ResourceObject *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // r8
  int v12; // eax
  MaterialProperty *v14; // [rsp+20h] [rbp-28h] BYREF
  struct DirectComposition::ResourceObject *v15; // [rsp+68h] [rbp+20h] BYREF

  v3 = Resource;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v3, 1u);
  v14 = 0LL;
  v7 = 0LL;
  v15 = 0LL;
  if ( UserIsCurrentProcessDwm(v8) || (v10 = CheckShellExperienceComposerAccess(v9), v10 >= 0) )
  {
    v10 = FindOrCreateMaterialProperty(a1, a2, &v14);
    if ( v10 >= 0 )
    {
      if ( a3 )
      {
        LOBYTE(v11) = 1;
        v12 = DirectComposition::ResourceObject::ResolveHandle(a3, 1LL, v11, &v15);
        v7 = v15;
        v10 = v12;
      }
      if ( v10 >= 0 )
        v10 = MaterialProperty::Store(v14, v7);
      if ( v7 )
        ObfDereferenceObject(v7);
    }
  }
  ExReleaseResourceLite(Resource);
  KeLeaveCriticalRegion();
  return (unsigned int)v10;
}
