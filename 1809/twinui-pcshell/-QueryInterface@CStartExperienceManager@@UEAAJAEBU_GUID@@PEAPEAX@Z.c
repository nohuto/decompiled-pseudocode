/*
 * XREFs of ?QueryInterface@CStartExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180016440
 * Callers:
 *     ?QueryInterface@CStartExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009EE90 (-QueryInterface@CStartExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009EEA0 (-QueryInterface@CStartExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009EEB0 (-QueryInterface@CStartExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009EEC0 (-QueryInterface@CStartExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009EED0 (-QueryInterface@CStartExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009EEE0 (-QueryInterface@CStartExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIWeakReferenceSource@@UIStartExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@Windows@@UIDWMStoryboardListener@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800164EC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$ImplementsMarker@VCW.c)
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStartExperienceManager::QueryInterface(
        CStartExperienceManager *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  _QWORD *v5; // r8
  __int64 v6; // r9
  __int64 v7; // r10
  int CanCastTo; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( (*(_QWORD *)&a2->Data1 != __PAIR64__(*(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2, 0)
     || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
     || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4])
    && (a2->Data1 != -1350114592
     || *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
     || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
     || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4]) )
  {
    if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *v5 = v7;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IWeakReferenceSource,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener>::CanCastTo(
                    v7 + 8,
                    v6);
      if ( CanCastTo < 0 )
        return (unsigned int)CanCastTo;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 8LL))(*v5);
    return (unsigned int)CanCastTo;
  }
  *a3 = this;
  (*(void (__fastcall **)(CStartExperienceManager *, const struct _GUID *, void **, const struct _GUID *))(*(_QWORD *)this + 8LL))(
    this,
    a2,
    a3,
    a2);
  return v3;
}
