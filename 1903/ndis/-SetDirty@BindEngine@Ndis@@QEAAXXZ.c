/*
 * XREFs of ?SetDirty@BindEngine@Ndis@@QEAAXXZ @ 0x1C01270B8
 * Callers:
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0037D9C (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Ndis::BindEngine::SetDirty(Ndis::BindEngine *this)
{
  this->m_isDirty = 1;
}
