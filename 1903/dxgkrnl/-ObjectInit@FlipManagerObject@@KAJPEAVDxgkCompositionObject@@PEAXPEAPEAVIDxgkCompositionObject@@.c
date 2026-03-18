/*
 * XREFs of ?ObjectInit@FlipManagerObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C0060590
 * Callers:
 *     <none>
 * Callees:
 *     ??0FlipManagerObject@@IEAA@XZ @ 0x1C00604F0 (--0FlipManagerObject@@IEAA@XZ.c)
 *     ?Initialize@CFlipManager@@IEAAJXZ @ 0x1C00613C4 (-Initialize@CFlipManager@@IEAAJXZ.c)
 */

__int64 __fastcall FlipManagerObject::ObjectInit(
        struct DxgkCompositionObject *a1,
        void *a2,
        struct IDxgkCompositionObject **a3)
{
  struct IDxgkCompositionObject *v3; // rcx

  if ( a1 )
    FlipManagerObject::FlipManagerObject(a1);
  v3 = (struct DxgkCompositionObject *)((char *)a1 + 32);
  *a3 = v3;
  return CFlipManager::Initialize(v3);
}
