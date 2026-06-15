/*
 * XREFs of ?IsEqualObject@?$CComPtrBase@UIMMEndpoint@@@ATL@@QEAA_NPEAUIUnknown@@@Z @ 0x180120054
 * Callers:
 *     ?SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18012013C (-SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall ATL::CComPtrBase<IMMEndpoint>::IsEqualObject(
        void (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  void (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v5; // rcx
  bool v6; // bl
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v2 = *a1;
  if ( !v2 )
    return !a2;
  if ( !a2 )
    return 0;
  v7 = 0LL;
  v8 = 0LL;
  (**v2)(v2, &GUID_00000000_0000_0000_c000_000000000046, &v7);
  (**a2)(a2, &GUID_00000000_0000_0000_c000_000000000046, &v8);
  v5 = v7;
  v6 = v7 == v8;
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    v5 = v7;
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}
