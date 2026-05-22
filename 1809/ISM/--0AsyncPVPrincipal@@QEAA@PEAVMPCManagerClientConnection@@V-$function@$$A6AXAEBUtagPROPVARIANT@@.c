/*
 * XREFs of ??0AsyncPVPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V?$function@$$A6AXAEBUtagPROPVARIANT@@@Z@std@@V?$function@$$A6AXJ@Z@3@@Z @ 0x1800E9424
 * Callers:
 *     ?CreatePVPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@@Z @ 0x1800E0C54 (-CreatePVPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncPVPrincipal@@Uerr_exceptio.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18001B270 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall AsyncPVPrincipal::AsyncPVPrincipal(
        __int64 a1,
        struct Microsoft::Bamo::BaseBamoConnection *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 (__fastcall ***v9)(_QWORD, __int64); // rcx
  __int64 (__fastcall ***v10)(_QWORD, __int64); // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx

  *(_QWORD *)a1 = &BamoAsyncResult_PROPVARIANT_Principal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *(_QWORD *)(a1 + 8) = &BamoAsyncResult_PROPVARIANT_Principal::`vftable'{for `IAsyncResult_PROPVARIANT_Principal'};
  v7 = (_QWORD *)(a1 + 16);
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(a1 + 16), a2);
  *v7 = &BamoImpl::BamoAsyncResult_PROPVARIANT_PrincipalImpl::`vftable';
  *(_QWORD *)a1 = &AsyncPVPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *(_QWORD *)(a1 + 8) = &BamoAsyncResult_PROPVARIANT_Principal::`vftable'{for `IAsyncResult_PROPVARIANT_Principal'};
  *(_QWORD *)(a1 + 112) = 0LL;
  v9 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a3 + 56);
  if ( v9 )
    *(_QWORD *)(a1 + 112) = (**v9)(v9, a1 + 56);
  *(_QWORD *)(a1 + 176) = 0LL;
  v10 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a4 + 56);
  if ( v10 )
    *(_QWORD *)(a1 + 176) = (**v10)(v10, a1 + 120);
  *(_BYTE *)(a1 + 184) = 1;
  v11 = *(_QWORD *)(a3 + 56);
  if ( v11 )
  {
    LOBYTE(v8) = v11 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 32LL))(v11, v8);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
  v12 = *(_QWORD *)(a4 + 56);
  if ( v12 )
  {
    LOBYTE(v8) = v12 != a4;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 32LL))(v12, v8);
    *(_QWORD *)(a4 + 56) = 0LL;
  }
  return a1;
}
