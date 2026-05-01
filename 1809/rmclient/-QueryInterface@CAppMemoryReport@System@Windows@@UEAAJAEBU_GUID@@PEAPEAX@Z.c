/*
 * XREFs of ?QueryInterface@CAppMemoryReport@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180005880
 * Callers:
 *     ?QueryInterface@CAppMemoryReport@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000A130 (-QueryInterface@CAppMemoryReport@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAppMemoryReport@System@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000A140 (-QueryInterface@CAppMemoryReport@System@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAppMemoryReport@System@Windows@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000A150 (-QueryInterface@CAppMemoryReport@System@Windows@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180003760 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180009BE0 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIInspectable@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18000D310 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIInspectable@@@Details.c)
 */

__int64 __fastcall Windows::System::CAppMemoryReport::QueryInterface(
        Windows::System::CAppMemoryReport *this,
        const struct _GUID *a2,
        Windows::System::CAppMemoryReport **a3)
{
  unsigned int v3; // ebx
  Windows::System::CAppMemoryReport *v5; // r10
  unsigned int Data1; // edx
  void (*v7)(void); // rax
  const struct _GUID *v9; // rcx
  __int64 v10; // r9
  Windows::System::CAppMemoryReport *v11; // r10
  int CanCastTo; // eax

  v3 = 0;
  *a3 = 0LL;
  v5 = this;
  Data1 = a2->Data1;
  if ( __PAIR64__(*(_DWORD *)&a2->Data2, Data1) == __PAIR64__(
                                                     *(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2,
                                                     0)
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || Data1 == -1350114592
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
  {
    *a3 = this;
    v7 = *(void (**)(void))(*(_QWORD *)this + 8LL);
    goto LABEL_9;
  }
  if ( Data1 == 1835348891
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_6d65339b_4d6f_45bc_9c5e_e49b3ff2758d.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_6d65339b_4d6f_45bc_9c5e_e49b3ff2758d.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_6d65339b_4d6f_45bc_9c5e_e49b3ff2758d.Data4[4]
    || InlineIsEqualGUID(a2, &GUID_00000038_0000_0000_c000_000000000046) )
  {
    *a3 = v5;
LABEL_8:
    v7 = *(void (**)(void))(*(_QWORD *)*a3 + 8LL);
LABEL_9:
    v7();
    return v3;
  }
  if ( InlineIsEqualGUID(v9, &GUID_5f7f3738_51b7_42dc_b7ed_79ba46d28857) )
  {
    *a3 = v11;
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IInspectable>::CanCastTo(
                  (char *)v11 + 8,
                  v10);
  }
  v3 = CanCastTo;
  if ( CanCastTo >= 0 )
    goto LABEL_8;
  return v3;
}
