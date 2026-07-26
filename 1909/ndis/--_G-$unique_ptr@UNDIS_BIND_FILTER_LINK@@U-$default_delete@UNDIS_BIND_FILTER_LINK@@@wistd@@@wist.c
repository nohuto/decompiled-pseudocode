/*
 * XREFs of ??_G?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1C00122E0
 * Callers:
 *     ?GarbageCollectDeadBindings@BindStack@Ndis@@QEAAXXZ @ 0x1C00F9838 (-GarbageCollectDeadBindings@BindStack@Ndis@@QEAAXXZ.c)
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C010550C (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK.c)
 *     ?moveElements@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAAXKKK@Z @ 0x1C012491C (-moveElements@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER.c)
 * Callees:
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C0116B30 (--_GKRefHolder@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C0127284 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 */

NDIS_BIND_LINK_BASE **__fastcall wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'(
        NDIS_BIND_LINK_BASE **a1)
{
  NDIS_BIND_LINK_BASE *v1; // rbx
  volatile signed __int32 *Miniport; // rcx

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    Miniport = (volatile signed __int32 *)v1[1].BindState.Miniport;
    if ( Miniport && _InterlockedExchangeAdd(Miniport + 16, 0xFFFFFFFF) == 1 )
      KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)Miniport);
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v1);
    ExFreePoolWithTag(v1, 0x4C6C4642u);
  }
  return a1;
}
