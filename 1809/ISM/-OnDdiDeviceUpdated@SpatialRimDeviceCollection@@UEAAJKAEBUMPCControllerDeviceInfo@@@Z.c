/*
 * XREFs of ?OnDdiDeviceUpdated@SpatialRimDeviceCollection@@UEAAJKAEBUMPCControllerDeviceInfo@@@Z @ 0x180063210
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180025804 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::OnDdiDeviceUpdated(
        SpatialRimDeviceCollection *this,
        int a2,
        const struct MPCControllerDeviceInfo *a3)
{
  __int64 result; // rax
  _OWORD *v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  const char *v9; // r9
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 *v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
    (_QWORD *)this + 12,
    &v12,
    &v13);
  if ( v12 == *((__int64 **)this + 13) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x242,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  else
  {
    v6 = (_OWORD *)(v12[3] + 52);
    v7 = 7LL;
    do
    {
      *v6 = *(_OWORD *)a3;
      v6[1] = *((_OWORD *)a3 + 1);
      v6[2] = *((_OWORD *)a3 + 2);
      v6[3] = *((_OWORD *)a3 + 3);
      v6[4] = *((_OWORD *)a3 + 4);
      v6[5] = *((_OWORD *)a3 + 5);
      v6[6] = *((_OWORD *)a3 + 6);
      v6 += 8;
      *(v6 - 1) = *((_OWORD *)a3 + 7);
      a3 = (const struct MPCControllerDeviceInfo *)((char *)a3 + 128);
      --v7;
    }
    while ( v7 );
    *v6 = *(_OWORD *)a3;
    v6[1] = *((_OWORD *)a3 + 1);
    *((_DWORD *)v6 + 8) = *((_DWORD *)a3 + 8);
    try
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this - 343) + 48LL))(*((_QWORD *)this - 343));
      v10 = v8;
      if ( v8 >= 0 )
      {
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x246,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
          (const char *)(unsigned int)v8);
        result = v10;
      }
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x249,
                             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatia"
                                           "lrimdevicecollection.cpp",
                             v9);
    }
  }
  return result;
}
