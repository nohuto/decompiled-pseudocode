/*
 * XREFs of ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C0108418
 * Callers:
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C01080E0 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     Ndis::BindRegistry::UpdateFiltersInner @ 0x1C00F940C (Ndis--BindRegistry--UpdateFiltersInner.c)
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C010550C (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK.c)
 */

char __fastcall Ndis::BindRegistry::UpdateFilters(__int64 a1, unsigned int *a2, unsigned __int64 a3, int a4)
{
  char result; // al
  __int64 v9; // rax
  __int128 v10; // [rsp+30h] [rbp-19h] BYREF
  __int64 v11; // [rsp+40h] [rbp-9h]
  __int128 v12; // [rsp+50h] [rbp+7h]
  __int64 v13; // [rsp+60h] [rbp+17h]
  __int128 v14; // [rsp+70h] [rbp+27h] BYREF
  __int64 v15; // [rsp+80h] [rbp+37h]
  __int64 v16; // [rsp+C0h] [rbp+77h] BYREF

  result = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::reserve(
             a2,
             *(unsigned int *)(a3 + 4));
  if ( result )
  {
    v9 = a2[1];
    v10 = a3;
    v13 = v9;
    v11 = *(unsigned int *)(a3 + 4);
    v14 = a3;
    v15 = v11;
    v12 = (unsigned __int64)a2;
    v11 = v9;
    v10 = (unsigned __int64)a2;
    return Ndis::BindRegistry::UpdateFiltersInner(a1, &v10, &v14, &v16, 1, a4);
  }
  return result;
}
