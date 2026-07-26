/*
 * XREFs of ?IsAlive@BindState@Ndis@@QEBA_NXZ @ 0x1C00FD7AC
 * Callers:
 *     ?GarbageCollectDeadBindings@BindStack@Ndis@@QEAAXXZ @ 0x1C00F9838 (-GarbageCollectDeadBindings@BindStack@Ndis@@QEAAXXZ.c)
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FD50C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C01279F8 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 * Callees:
 *     <none>
 */

bool __fastcall Ndis::BindState::IsAlive(Ndis::BindState *this)
{
  return this->m_bindContext.m_numElements || this->m_bindSources;
}
