/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInputTarget@@UIInputSiteTarget@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800918A0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInputTarget@@UIInputSiteTarget@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180091950 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180091950.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IInputTarget,IInputSiteTarget>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( (*a2
     || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
     || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
     || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4])
    && (*a2 != -1786336208
     || a2[1] != *(_DWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data2
     || a2[2] != *(_DWORD *)GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data4
     || a2[3] != *(_DWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data4[4]) )
  {
    if ( *a2 != 1822514047
      || a2[1] != *(_DWORD *)&GUID_6ca15b7f_63da_4e23_abb3_68f3d29d27ea.Data2
      || a2[2] != *(_DWORD *)GUID_6ca15b7f_63da_4e23_abb3_68f3d29d27ea.Data4
      || a2[3] != *(_DWORD *)&GUID_6ca15b7f_63da_4e23_abb3_68f3d29d27ea.Data4[4] )
    {
      return (unsigned int)-2147467262;
    }
    a1 += 8LL;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
