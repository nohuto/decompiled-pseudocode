/*
 * XREFs of ?OpenSharedHandle@CSharedCompositionAmbientLightMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C008E350
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C008E850 (-CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 */

int __fastcall DirectComposition::CSharedCompositionAmbientLightMarshaler::OpenSharedHandle(
        DirectComposition::CSharedCompositionAmbientLightMarshaler *this,
        void **a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 13);
  if ( v2 )
    return CompositionObject::CreateHandle((CompositionObject *)(v2 - 24), 1u, 0, 1, a2);
  else
    return -1073741790;
}
