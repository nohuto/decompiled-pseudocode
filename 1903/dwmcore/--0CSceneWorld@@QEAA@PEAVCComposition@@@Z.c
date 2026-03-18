/*
 * XREFs of ??0CSceneWorld@@QEAA@PEAVCComposition@@@Z @ 0x1802056B8
 * Callers:
 *     ?OnRootChanged@CSceneVisual@@QEAAJXZ @ 0x1801C6F10 (-OnRootChanged@CSceneVisual@@QEAAJXZ.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     ?RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x18017C308 (-RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 *     ??2CSceneNode@@SAPEAX_K@Z @ 0x18019E87C (--2CSceneNode@@SAPEAX_K@Z.c)
 *     ??0CCompositionEnvironmentLight@@QEAA@PEAVCComposition@@@Z @ 0x18020F330 (--0CCompositionEnvironmentLight@@QEAA@PEAVCComposition@@@Z.c)
 */

CSceneWorld *__fastcall CSceneWorld::CSceneWorld(CSceneWorld *this, struct CComposition *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rcx
  __int64 v6; // rdi
  CCompositionEnvironmentLight *v7; // rax
  CCompositionEnvironmentLight *v8; // rax
  __int64 v9; // rdi
  const void *retaddr; // [rsp+28h] [rbp+0h]

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CSceneWorld::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CSceneWorld::`vftable'{for `ISceneNotificationListener'};
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  v4 = CSceneNode::operator new();
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 0;
    *((_QWORD *)v4 + 2) = a2;
    *((_QWORD *)v4 + 3) = 0LL;
    *((_QWORD *)v4 + 5) = 0LL;
    v4[8] = 0;
    *((_QWORD *)v4 + 8) = 0LL;
    *((_QWORD *)v4 + 9) = 0LL;
    *((_QWORD *)v4 + 10) = 0LL;
    *((_QWORD *)v4 + 11) = 0LL;
    *((_QWORD *)v4 + 12) = 0LL;
    *((_QWORD *)v4 + 13) = 0LL;
    *(_QWORD *)v4 = &CSceneNode::`vftable';
    *((_QWORD *)v4 + 16) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  v6 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = v5;
  if ( v5 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = (CCompositionEnvironmentLight *)DefaultHeap::AllocClear(0x168uLL);
  if ( !v7 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v8 = CCompositionEnvironmentLight::CCompositionEnvironmentLight(v7, a2);
  v9 = *((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = v8;
  if ( v8 )
    (*(void (__fastcall **)(CCompositionEnvironmentLight *))(*(_QWORD *)v8 + 8LL))(v8);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  CSceneResourceManager::RegisterSceneListener(
    *(CSceneResourceManager **)(*((_QWORD *)this + 2) + 128LL),
    (CSceneWorld *)((char *)this + 56));
  return this;
}
