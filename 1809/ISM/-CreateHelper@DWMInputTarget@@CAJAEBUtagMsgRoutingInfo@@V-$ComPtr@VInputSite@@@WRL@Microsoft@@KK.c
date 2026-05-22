/*
 * XREFs of ?CreateHelper@DWMInputTarget@@CAJAEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@KKPEAPEAUIInputTarget@@@Z @ 0x18008F8F8
 * Callers:
 *     _lambda_522021c458d8d311203f9373ddc44e50_::operator() @ 0x180084018 (_lambda_522021c458d8d311203f9373ddc44e50_--operator().c)
 *     ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x180089100 (-RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 *     ?Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x18008F878 (-Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0DWMInputTarget@@IEAA@AEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@KK@Z @ 0x18008F690 (--0DWMInputTarget@@IEAA@AEBUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Microsoft@@KK@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputTarget::CreateHelper(__int64 a1, __int64 *a2, int a3, int a4, _QWORD *a5)
{
  _QWORD *v5; // rdi
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  void *v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = a5;
  if ( !a5 )
  {
    v10 = -2147467261;
    v11 = 96LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      (const char *)v10);
    v12 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    return v10;
  }
  *a5 = 0LL;
  v14 = malloc(0x88uLL);
  v15 = (__int64)v14;
  if ( v14 )
  {
    memset_0(v14, 0, 0x88uLL);
    v16 = *a2;
    a5 = (_QWORD *)v16;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    v14 = (void *)DWMInputTarget::DWMInputTarget(v15, a1, (__int64 *)&a5, a3, a4);
  }
  if ( !v14 )
  {
    v10 = -2147024882;
    v11 = 105LL;
    goto LABEL_3;
  }
  *v5 = v14;
  v17 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return 0LL;
}
