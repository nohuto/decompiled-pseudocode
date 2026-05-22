/*
 * XREFs of ??0AsyncHRESULTPrincipal@@QEAA@PEAVMPCManagerClientConnection@@V?$function@$$A6AXJ@Z@std@@@Z @ 0x1800E9CE4
 * Callers:
 *     ?CreateHRPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@VCNoResult@Internal@Windows@@@Internal@Windows@@@Z @ 0x1800E0DC0 (-CreateHRPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exc.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18001B270 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AsyncHRESULTPrincipal::AsyncHRESULTPrincipal(
        __int64 a1,
        struct Microsoft::Bamo::BaseBamoConnection *a2,
        __int64 a3)
{
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 (__fastcall ***v7)(_QWORD, __int64); // rcx
  __int64 v8; // rcx

  *(_QWORD *)a1 = &BamoAsyncHRESULTPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *(_QWORD *)(a1 + 8) = &BamoAsyncHRESULTPrincipal::`vftable'{for `IAsyncHRESULTPrincipal'};
  v5 = (_QWORD *)(a1 + 16);
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(a1 + 16), a2);
  *v5 = &BamoImpl::BamoAsyncHRESULTPrincipalImpl::`vftable';
  *(_QWORD *)a1 = &AsyncHRESULTPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *(_QWORD *)(a1 + 8) = &BamoAsyncHRESULTPrincipal::`vftable'{for `IAsyncHRESULTPrincipal'};
  *(_QWORD *)(a1 + 112) = 0LL;
  v7 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a3 + 56);
  if ( v7 )
    *(_QWORD *)(a1 + 112) = (**v7)(v7, a1 + 56);
  *(_BYTE *)(a1 + 120) = 1;
  v8 = *(_QWORD *)(a3 + 56);
  if ( v8 )
  {
    LOBYTE(v6) = v8 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 32LL))(v8, v6);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
  return a1;
}
