/*
 * XREFs of ??$SAFE_DELETE_ARRAY@UD2D1_COMPOSITOR_DRAWING_STATE@@@@YAXAEAPEAUD2D1_COMPOSITOR_DRAWING_STATE@@@Z @ 0x1800EFC88
 * Callers:
 *     ?Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800C2970 (-Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 * Callees:
 *     MIDL_user_free @ 0x1800BAE70 (MIDL_user_free.c)
 */

void __fastcall SAFE_DELETE_ARRAY<D2D1_COMPOSITOR_DRAWING_STATE>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    MIDL_user_free(v2);
    *a1 = 0LL;
  }
}
