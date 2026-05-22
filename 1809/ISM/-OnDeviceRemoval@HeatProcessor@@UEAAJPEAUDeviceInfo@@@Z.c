/*
 * XREFs of ?OnDeviceRemoval@HeatProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800ECEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18005EF6C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HeatProcessor::OnDeviceRemoval(
        HeatProcessor *this,
        struct DeviceInfo *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rcx
  int v5; // eax
  int v7; // [rsp+20h] [rbp-38h] BYREF
  __int16 v8; // [rsp+24h] [rbp-34h]
  __int16 v9; // [rsp+26h] [rbp-32h]
  __int16 v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+2Ch] [rbp-2Ch]
  __int64 v12; // [rsp+30h] [rbp-28h]
  int v13; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xBC,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
      a4);
    JUMPOUT(0x1800ECF7ELL);
  }
  if ( *((_DWORD *)a2 + 1) == 2048 )
  {
    v4 = *((_QWORD *)this + 7);
    if ( v4 )
    {
      v7 = *(_DWORD *)a2;
      v8 = *((_WORD *)a2 + 18);
      v9 = *((_WORD *)a2 + 19);
      v10 = *((_WORD *)a2 + 20);
      v12 = *((_QWORD *)a2 + 3);
      v13 = *((_DWORD *)a2 + 8);
      v11 = 1;
      v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 32LL))(v4, &v7);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xCC,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
          (const char *)(unsigned int)v5);
    }
  }
  else
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0xC0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
      (const char *)0x80070057LL);
  }
  return 0LL;
}
