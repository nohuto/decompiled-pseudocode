/*
 * XREFs of ?OpenSharedHandle@CSharedWriteAnimationTriggerMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C0005120
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C008A3A0 (-CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 */

int __fastcall DirectComposition::CSharedWriteAnimationTriggerMarshaler::OpenSharedHandle(
        DirectComposition::CSharedWriteAnimationTriggerMarshaler *this,
        void **a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 6);
  if ( v2 )
    return CompositionObject::CreateHandle((CompositionObject *)(v2 - 24), 1u, 0, 1, a2);
  else
    return -1073741790;
}
