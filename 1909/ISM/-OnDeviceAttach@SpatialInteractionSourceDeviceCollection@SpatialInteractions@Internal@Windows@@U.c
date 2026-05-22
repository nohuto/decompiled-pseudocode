/*
 * XREFs of ?OnDeviceAttach@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKKPEAUIHidDevice@234@PEAUMPCSourceDeviceInfo@@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800E2FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AEA0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C41C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     std::_Ref_count_obj_Windows::Internal::SpatialInteractions::SpatialInteractionSourceController_::_Ref_count_obj_Windows::Internal::SpatialInteractions::SpatialInteractionSourceController__Windows::Internal::SpatialInteractions::IHidDevice___&_unsigned_long_&_unsigned_long_&__lambda_be19193f882ced76eba7e08926344df0___ @ 0x1800DF66C (std--_Ref_count_obj_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController_-.c)
 *     ?AcquireInterestInHeadEvent@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAAXPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800E111C (-AcquireInterestInHeadEvent@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@.c)
 *     ?AddDeviceToCache@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJKKAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800E1148 (-AddDeviceToCache@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 *     ?QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@6@_N@Z @ 0x1800E4260 (-QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnDeviceAttach(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        unsigned int a2,
        int a3,
        struct Windows::Internal::SpatialInteractions::IHidDevice *a4,
        struct MPCSourceDeviceInfo *a5,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *a6)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  void *v7; // rax
  __int64 v8; // rdi
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // r9
  __int128 v14; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v15[8]; // [rsp+40h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  unsigned int v17; // [rsp+A8h] [rbp+28h] BYREF
  int v18; // [rsp+B0h] [rbp+30h] BYREF
  struct Windows::Internal::SpatialInteractions::IHidDevice *v19; // [rsp+B8h] [rbp+38h] BYREF

  v19 = a4;
  v18 = a3;
  v17 = a2;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 8);
  DWORD2(v14) = a2;
  *(_QWORD *)&v14 = (char *)this - 8;
  v7 = operator new(0x4B8uLL);
  *((_QWORD *)&v14 + 1) = std::_Ref_count_obj_Windows::Internal::SpatialInteractions::SpatialInteractionSourceController_::_Ref_count_obj_Windows::Internal::SpatialInteractions::SpatialInteractionSourceController__Windows::Internal::SpatialInteractions::IHidDevice_____unsigned_long___unsigned_long____lambda_be19193f882ced76eba7e08926344df0___(
                            (__int64)v7,
                            (__int64)&v19,
                            (__int64)&v17,
                            (__int64)&v18,
                            &v14);
  v8 = *((_QWORD *)&v14 + 1) + 16LL;
  *(_QWORD *)&v14 = *((_QWORD *)&v14 + 1) + 16LL;
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::AcquireInterestInHeadEvent(
    (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *)(*((_QWORD *)&v14 + 1) + 16LL),
    a6);
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 128LL))(v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 170LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_11;
  }
  v9 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AddDeviceToCache(
         v6,
         v17,
         0,
         &v14);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 172LL;
    goto LABEL_9;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, struct MPCSourceDeviceInfo *))(*(_QWORD *)v14 + 144LL))(v14, a5);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 174LL;
    goto LABEL_9;
  }
  v15[1] = v6;
  v15[0] = off_1801761D8;
  LOBYTE(v12) = 1;
  v15[7] = v15;
  v9 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
         v6,
         &v14,
         v15,
         v12);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 182LL;
    goto LABEL_9;
  }
  v10 = 0;
LABEL_11:
  if ( *((_QWORD *)&v14 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v14 + 1));
  return v10;
}
