/*
 * XREFs of ?GetSubmixesForPID@CDeviceGraphStore@@UEAAJKW4ProcessSubmixCapture@@AEAV?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800F3C00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?GetSubmixHelper@CDeviceGraphStore@@IEAAJAEAV?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@$$QEAV?$function@$$A6A_NAEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Z@3@@Z @ 0x1800F33EC (-GetSubmixHelper@CDeviceGraphStore@@IEAAJAEAV-$vector@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_re.c)
 *     ?clear@?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1800F4130 (-clear@-$vector@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V-$allocato.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphStore::GetSubmixesForPID(__int64 a1, int a2, int a3, char **a4)
{
  unsigned int SubmixHelper; // eax
  __int64 v7; // rdx
  const char *v8; // r9
  unsigned int v9; // ebx
  __int64 result; // rax
  __int128 v11; // [rsp+28h] [rbp-80h]
  __int64 (__fastcall **v12)(); // [rsp+40h] [rbp-68h] BYREF
  __int128 v13; // [rsp+48h] [rbp-60h]
  __int64 (__fastcall ***v14)(); // [rsp+78h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  int v16; // [rsp+B8h] [rbp+10h] BYREF
  int v17; // [rsp+C0h] [rbp+18h] BYREF

  v17 = a3;
  v16 = a2;
  std::vector<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>::clear(a4);
  *(_QWORD *)&v11 = &v16;
  *((_QWORD *)&v11 + 1) = &v17;
  v12 = off_18015DD48;
  v13 = v11;
  v14 = &v12;
  SubmixHelper = CDeviceGraphStore::GetSubmixHelper(a1, a4, (__int64)&v12);
  try
  {
    v9 = SubmixHelper;
    if ( v14 )
    {
      LOBYTE(v7) = v14 != &v12;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64, __int64 (__fastcall **)()))(*v14)[4])(v14, v7, *v14);
    }
    result = v9;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2A0,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                           v8);
  }
  return result;
}
