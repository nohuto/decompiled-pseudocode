/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180014CF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || *a2 == 1204800526
    && a2[1] == *(_DWORD *)&GUID_47cfcc0e_6012_43ca_81a9_ab7bc86ad5d4.Data2
    && a2[2] == *(_DWORD *)GUID_47cfcc0e_6012_43ca_81a9_ab7bc86ad5d4.Data4
    && a2[3] == *(_DWORD *)&GUID_47cfcc0e_6012_43ca_81a9_ab7bc86ad5d4.Data4[4] )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v3;
}
