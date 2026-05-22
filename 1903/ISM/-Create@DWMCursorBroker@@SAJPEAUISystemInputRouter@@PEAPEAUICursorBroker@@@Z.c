/*
 * XREFs of ?Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z @ 0x18001EF54
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180019EC8 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014F60 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0DWMCursorBroker@@IEAA@PEAUISystemInputRouter@@@Z @ 0x180015994 (--0DWMCursorBroker@@IEAA@PEAUISystemInputRouter@@@Z.c)
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x18001EA3C (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMCursorBroker::Create(struct ISystemInputRouter *a1, struct ICursorBroker **a2)
{
  DWMCursorBroker *v4; // rbx
  DWMCursorBroker *v5; // rax
  __int64 v6; // rdx
  DWMCursorBroker *v7; // rsi
  int v8; // eax
  unsigned int v9; // edi
  __int64 v11; // r9
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0LL;
  if ( a2 )
  {
    *a2 = 0LL;
    v5 = (DWMCursorBroker *)RefCountedObject::operator new(0x200uLL);
    if ( v5 )
      v7 = DWMCursorBroker::DWMCursorBroker(v5, a1);
    else
      v7 = 0LL;
    v4 = v7;
    if ( v7 )
    {
      v8 = DWMCursorBroker::Initialize(v7, v6);
      v9 = v8;
      if ( v8 >= 0 )
      {
        v4 = 0LL;
        *a2 = v7;
        v9 = 0;
        goto LABEL_7;
      }
      v11 = (unsigned int)v8;
      v12 = 115LL;
    }
    else
    {
      v9 = -2147024882;
      v11 = 2147942414LL;
      v12 = 112LL;
    }
  }
  else
  {
    v9 = -2147024809;
    v11 = 2147942487LL;
    v12 = 103LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
    (const char *)v11);
LABEL_7:
  if ( v4 )
    (*(void (__fastcall **)(DWMCursorBroker *))(*(_QWORD *)v4 + 16LL))(v4);
  return v9;
}
