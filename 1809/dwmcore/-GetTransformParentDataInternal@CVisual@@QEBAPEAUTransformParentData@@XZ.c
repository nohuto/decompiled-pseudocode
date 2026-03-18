/*
 * XREFs of ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x180065958
 * Callers:
 *     ?GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ @ 0x180004250 (-GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x18003A040 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x18006578C (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPAREN.c)
 *     ?ResolveTransformParentCycle@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAVCVisual@@@Z @ 0x180225BD8 (-ResolveTransformParentCycle@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAVCVisual@@@Z.c)
 *     ?ResolveTransformParentOrphan@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAPEAVCVisual@@@Z @ 0x180225CBC (-ResolveTransformParentOrphan@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

struct TransformParentData *__fastcall CVisual::GetTransformParentDataInternal(CVisual *this)
{
  _DWORD *v1; // r8
  __int64 v3; // rdx
  _BYTE *v4; // r9
  char *v5; // rcx
  unsigned int i; // eax

  v1 = (_DWORD *)*((_QWORD *)this + 28);
  if ( (*v1 & 0x800000) == 0 )
    return 0LL;
  v3 = (unsigned int)v1[1];
  v4 = v1 + 2;
  v5 = 0LL;
  for ( i = 0; i < (unsigned int)v3; ++v4 )
  {
    if ( *v4 == 9 )
      break;
    ++i;
  }
  if ( i < (unsigned int)v3 )
    v5 = (char *)v1 + v3 + 8LL * i - (((_BYTE)v3 + 15) & 7) + 15;
  return *(struct TransformParentData **)v5;
}
