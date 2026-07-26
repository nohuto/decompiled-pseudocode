/*
 * XREFs of ?ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0016E30
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00C0AFC (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     ndisUpdateOperationalStatus @ 0x1C0017108 (ndisUpdateOperationalStatus.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __fastcall ndisPostProcessRestartParametersAfterProtocols(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_RESTART_INFORMATION *a2)
{
  unsigned int *SupportedOidList; // rcx
  _NDIS_RESTART_ATTRIBUTES *Next; // rcx
  KIRQL v6; // al
  unsigned int PnPFlags; // edx
  _NDIS_RESTART_ATTRIBUTES *v8; // rbx

  if ( a2->Attributes.Oid )
  {
    ndisUpdateOperationalStatus(a1);
    SupportedOidList = a2->General.SupportedOidList;
    if ( SupportedOidList )
    {
      ExFreePoolWithTag(SupportedOidList, 0);
      a2->General.SupportedOidList = 0LL;
    }
    Next = a2->Attributes.Next;
    if ( a2->Attributes.Next )
    {
      do
      {
        v8 = Next->Next;
        ExFreePoolWithTag(Next, 0);
        Next = v8;
      }
      while ( v8 );
    }
    v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    PnPFlags = a1->PnPFlags;
    a1->LockDbg = 3933348;
    if ( (PnPFlags & 0x10) != 0 || (a1->Flags & 0x100) != 0 )
    {
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      KeReleaseSpinLock(&a1->Lock, v6);
    }
    else
    {
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      KeReleaseSpinLock(&a1->Lock, v6);
      if ( IoWMIRegistrationControl(a1->DeviceObject, 4u) )
      {
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
          WPP_SF_q(37LL, &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids, a1);
      }
    }
  }
}
