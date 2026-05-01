/*
 * XREFs of ?Cloak@MonitorFrame@@QEAAJ_N@Z @ 0x18026E24C
 * Callers:
 *     _lambda_5e3471c756f87189046196c55c94088a_::operator() @ 0x18026B9F4 (_lambda_5e3471c756f87189046196c55c94088a_--operator().c)
 *     _lambda_bb5ee7a853464f85d103d6a4a4db2877_::operator() @ 0x18026BFE4 (_lambda_bb5ee7a853464f85d103d6a4a4db2877_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MonitorFrame::Cloak(MonitorFrame *this, char a2)
{
  __int64 v2; // rcx
  HWND v3; // rax
  HRESULT v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int pvAttribute; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(pvAttribute) = a2;
  v2 = *((_QWORD *)this + 6);
  pvAttribute = 0;
  v3 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 40LL))(v2);
  v4 = DwmSetWindowAttribute(v3, 0xDu, &pvAttribute, 4u);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D,
    (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\monitorframe.h",
    (const char *)(unsigned int)v4);
  return v5;
}
