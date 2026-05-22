/*
 * XREFs of ?Create@DWMInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x1800C2F38
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180010164 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014F60 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0DWMInputRouter@@IEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x180015CB8 (--0DWMInputRouter@@IEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180019EC8 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMInputRouter::Create(
        struct IDWMInputProxy *a1,
        struct IInputFocusListener *a2,
        struct ISystemInputRouter **a3)
{
  DWMInputRouter *v6; // rbx
  DWMInputRouter *v7; // rax
  DWMInputRouter *v8; // rsi
  unsigned int v9; // edi
  __int64 v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = 0LL;
  if ( !a1 || !a3 )
  {
    v9 = -2147024809;
    v10 = 574LL;
    goto LABEL_12;
  }
  v7 = (DWMInputRouter *)RefCountedObject::operator new(0x328uLL);
  if ( v7 )
    v8 = DWMInputRouter::DWMInputRouter(v7, a1, a2);
  else
    v8 = 0LL;
  v6 = v8;
  if ( !v8 )
  {
    v9 = -2147024882;
    v10 = 583LL;
LABEL_12:
    v12 = v9;
    goto LABEL_13;
  }
  v11 = DWMInputRouter::Initialize(v8);
  v9 = v11;
  if ( v11 >= 0 )
  {
    v6 = 0LL;
    *a3 = v8;
    v9 = 0;
    goto LABEL_14;
  }
  v12 = (unsigned int)v11;
  v10 = 586LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
    (const char *)v12);
LABEL_14:
  if ( v6 )
    (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)v6 + 16LL))(v6);
  return v9;
}
