/*
 * XREFs of ?OnDeviceUpdate@HeatProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x180126790
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HeatProcessor::OnDeviceUpdate(HeatProcessor *this, struct DeviceInfo *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-38h] BYREF
  __int16 v7; // [rsp+24h] [rbp-34h]
  __int16 v8; // [rsp+26h] [rbp-32h]
  __int16 v9; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+2Ch] [rbp-2Ch]
  __int64 v11; // [rsp+30h] [rbp-28h]
  int v12; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *((_DWORD *)a2 + 1) != 2048 )
    return 0LL;
  v2 = *((_QWORD *)this + 11);
  if ( !v2 )
    return 0LL;
  if ( *((_BYTE *)a2 + 50) != 1 )
    return 0LL;
  v6 = *(_DWORD *)a2;
  v7 = *((_WORD *)a2 + 22);
  v8 = *((_WORD *)a2 + 23);
  v9 = *((_WORD *)a2 + 24);
  v11 = *((_QWORD *)a2 + 4);
  v12 = *((_DWORD *)a2 + 10);
  v10 = 1;
  v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 40LL))(v2, &v6);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x10C,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
