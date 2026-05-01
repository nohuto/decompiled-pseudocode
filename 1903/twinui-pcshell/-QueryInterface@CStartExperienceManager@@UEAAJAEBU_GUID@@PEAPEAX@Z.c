/*
 * XREFs of ?QueryInterface@CStartExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044980
 * Callers:
 *     ?QueryInterface@CStartExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B5050 (-QueryInterface@CStartExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B5060 (-QueryInterface@CStartExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B5070 (-QueryInterface@CStartExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B5080 (-QueryInterface@CStartExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B5090 (-QueryInterface@CStartExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B50A0 (-QueryInterface@CStartExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveWindowMessageNotification@@UIClosable@Foundation@Windows@@UIDWMStoryboardListener@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180044A80 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveWindowMessag.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStartExperienceManager::QueryInterface(CStartExperienceManager *this, struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  _QWORD *v5; // r8
  _DWORD *v6; // r9
  __int64 v7; // r10
  __int64 v8; // r10
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
    if ( !InlineIsEqualGUID(a2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      v8 = v7 + 8;
      if ( *v6 == -62389853
        && v6[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
        && v6[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
        && v6[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
      {
        *v5 = v8;
        goto LABEL_16;
      }
      v7 = v8 + 24;
      if ( *v6 != 56
        || v6[1] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
        || v6[2] != *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
        || v6[3] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
      {
        if ( *v6 != -1026420319
          || v6[1] != *(_DWORD *)&GUID_c2d211a1_a6d4_49b5_9704_d74cb4dff1ee.Data2
          || v6[2] != *(_DWORD *)GUID_c2d211a1_a6d4_49b5_9704_d74cb4dff1ee.Data4
          || v6[3] != *(_DWORD *)&GUID_c2d211a1_a6d4_49b5_9704_d74cb4dff1ee.Data4[4] )
        {
          CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener>::CanCastTo(
                        v7 + 16,
                        v6);
LABEL_17:
          if ( CanCastTo < 0 )
            return (unsigned int)CanCastTo;
LABEL_18:
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 8LL))(*v5);
          return (unsigned int)CanCastTo;
        }
        *v5 = v7 + 8;
LABEL_16:
        CanCastTo = 0;
        goto LABEL_17;
      }
    }
    *v5 = v7;
    CanCastTo = 0;
    goto LABEL_18;
  }
  *a3 = this;
  (*(void (__fastcall **)(CStartExperienceManager *, struct _GUID *, void **, struct _GUID *))(*(_QWORD *)this + 8LL))(
    this,
    a2,
    a3,
    a2);
  return v3;
}
