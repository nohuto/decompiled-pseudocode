/*
 * XREFs of DCompositionThreadCallout @ 0x1C00662C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ @ 0x1C01451BC (-OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ.c)
 */

__int64 __fastcall DCompositionThreadCallout(struct _ETHREAD *a1, int a2)
{
  if ( a1 == DirectComposition::CConnection::s_pDwmRenderThread && a2 == 1 )
    DirectComposition::CConnection::OnDwmRenderThreadExit();
  return 0LL;
}
