/*
 * XREFs of ?ReleaseAnimationHandle@CAnimationResource@@QEAAXXZ @ 0x180039794
 * Callers:
 *     ?End@CAnimationResource@@UEAAJNM@Z @ 0x180039420 (-End@CAnimationResource@@UEAAJNM@Z.c)
 *     ?AddCubic@CAnimationResource@@UEAAJNMMMM@Z @ 0x1800394A0 (-AddCubic@CAnimationResource@@UEAAJNMMMM@Z.c)
 *     ?AddRepeat@CAnimationResource@@UEAAJNN@Z @ 0x1800B2570 (-AddRepeat@CAnimationResource@@UEAAJNN@Z.c)
 *     ?AddSinusoidal@CAnimationResource@@UEAAJNMMMM@Z @ 0x1800B2620 (-AddSinusoidal@CAnimationResource@@UEAAJNMMMM@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CAnimationResource::ReleaseAnimationHandle(CAnimationResource *this)
{
  CBaseObject *v2; // rcx

  v2 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
}
