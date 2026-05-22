/*
 * XREFs of ?CreateHelper@DWMInputTarget@@CAJAEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@KKPEAPEAUIInputTarget@@@Z @ 0x18001631C
 * Callers:
 *     ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x180018790 (-RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 *     ?InitializeTargetInfoWithPointerInfo@@YAXPEBUtagMANIPULATION_POINTER_INFO@@PEAPEAUIInputTarget@@@Z @ 0x1800BCE00 (-InitializeTargetInfoWithPointerInfo@@YAXPEBUtagMANIPULATION_POINTER_INFO@@PEAPEAUIInputTarget@@.c)
 *     ?Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x1800C6CF4 (-Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0DWMInputTarget@@IEAA@AEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@KK@Z @ 0x1800163D8 (--0DWMInputTarget@@IEAA@AEBUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Microsoft@@KK@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputTarget::CreateHelper(int a1, _QWORD *a2, int a3, int a4, _QWORD *a5)
{
  _QWORD *v5; // rdi
  void *v10; // rax
  int v11; // esi
  _QWORD *v12; // rcx
  _QWORD *v13; // rcx
  unsigned int v15; // edi
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = a5;
  if ( a5 )
  {
    *a5 = 0LL;
    v10 = malloc(0x88uLL);
    v11 = (int)v10;
    if ( v10 )
    {
      memset_0(v10, 0, 0x88uLL);
      v12 = (_QWORD *)*a2;
      a5 = v12;
      if ( v12 )
        (*(void (__fastcall **)(_QWORD *))(*v12 + 8LL))(v12);
      v10 = (void *)DWMInputTarget::DWMInputTarget(v11, a1, (unsigned int)&a5, a3, a4);
    }
    if ( v10 )
    {
      *v5 = v10;
      v13 = (_QWORD *)*a2;
      if ( *a2 )
      {
        *a2 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
      }
      return 0LL;
    }
    v15 = -2147024882;
    v16 = 104LL;
  }
  else
  {
    v15 = -2147467261;
    v16 = 95LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
    (const char *)v15);
  v17 = (_QWORD *)*a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
  }
  return v15;
}
