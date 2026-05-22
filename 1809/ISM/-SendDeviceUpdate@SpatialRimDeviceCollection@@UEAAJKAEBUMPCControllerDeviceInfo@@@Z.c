/*
 * XREFs of ?SendDeviceUpdate@SpatialRimDeviceCollection@@UEAAJKAEBUMPCControllerDeviceInfo@@@Z @ 0x180062A60
 * Callers:
 *     <none>
 * Callees:
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180025804 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18005ED84 (-GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18005F358 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?ControllerDeviceUpdate_@RawInputProvidersTracing@@QEAAXJKPEAUDeviceInfo@@@Z @ 0x18005FF98 (-ControllerDeviceUpdate_@RawInputProvidersTracing@@QEAAXJKPEAUDeviceInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::SendDeviceUpdate(
        SpatialRimDeviceCollection *this,
        int a2,
        const struct MPCControllerDeviceInfo *a3)
{
  unsigned int *v6; // r9
  struct DeviceInfo *v7; // rbx
  int DeviceInfo; // eax
  __int64 v9; // rax
  _OWORD *v10; // rcx
  __int128 v11; // xmm1
  unsigned int v12; // edi
  _DWORD *v13; // rcx
  RawInputProvidersTracing *v14; // rcx
  struct DeviceInfo *v16; // [rsp+40h] [rbp+8h] BYREF
  int v17; // [rsp+48h] [rbp+10h] BYREF
  __int64 *v18; // [rsp+58h] [rbp+20h] BYREF

  v17 = a2;
  v16 = 0LL;
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
    (_QWORD *)this + 12,
    &v18,
    &v17);
  if ( v18 == *((__int64 **)this + 13) )
  {
    DeviceInfo = RIMDeviceCollection::GetDeviceInfo((SpatialRimDeviceCollection *)((char *)this - 2760), a2, &v16, v6);
    v7 = v16;
    if ( DeviceInfo < 0 )
    {
LABEL_8:
      v12 = -2147483638;
      goto LABEL_9;
    }
  }
  else
  {
    v7 = (struct DeviceInfo *)v18[3];
  }
  if ( !v7 )
    goto LABEL_8;
  v9 = 7LL;
  v10 = (_OWORD *)((char *)v7 + 52);
  do
  {
    *v10 = *(_OWORD *)a3;
    v10[1] = *((_OWORD *)a3 + 1);
    v10[2] = *((_OWORD *)a3 + 2);
    v10[3] = *((_OWORD *)a3 + 3);
    v10[4] = *((_OWORD *)a3 + 4);
    v10[5] = *((_OWORD *)a3 + 5);
    v10[6] = *((_OWORD *)a3 + 6);
    v10 += 8;
    v11 = *((_OWORD *)a3 + 7);
    a3 = (const struct MPCControllerDeviceInfo *)((char *)a3 + 128);
    *(v10 - 1) = v11;
    --v9;
  }
  while ( v9 );
  *v10 = *(_OWORD *)a3;
  v10[1] = *((_OWORD *)a3 + 1);
  *((_DWORD *)v10 + 8) = *((_DWORD *)a3 + 8);
  v12 = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *))(**((_QWORD **)this - 343) + 48LL))(
          *((_QWORD *)this - 343),
          v7);
LABEL_9:
  v13 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
  if ( v13 && *v13 )
  {
    RawInputProvidersTracing::Instance();
    RawInputProvidersTracing::ControllerDeviceUpdate_(v14, v12, a2, v7);
  }
  return v12;
}
