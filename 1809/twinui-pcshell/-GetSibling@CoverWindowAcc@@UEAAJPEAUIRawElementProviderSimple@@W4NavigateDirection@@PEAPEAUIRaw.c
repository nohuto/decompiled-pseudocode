/*
 * XREFs of ?GetSibling@CoverWindowAcc@@UEAAJPEAUIRawElementProviderSimple@@W4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z @ 0x180368520
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CoverWindowAcc::GetSibling(
        CoverWindowAcc *this,
        struct IUnknown *a2,
        enum NavigateDirection a3,
        struct IRawElementProviderFragment **a4)
{
  int v8; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, struct IRawElementProviderFragment **); // rcx
  int v12; // eax
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a4 = 0LL;
  if ( (unsigned int)SHIsSameObject(a2, *((struct IUnknown **)this + 3)) )
  {
    if ( a3 == NavigateDirection_NextSibling )
      v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IRawElementProviderFragment **))this + 4))(
             *((_QWORD *)this + 4),
             &GUID_f7063da8_8359_439c_9297_bbc5299a7d87,
             a4);
    else
      v8 = 0;
    if ( v8 < 0 )
    {
      v9 = (unsigned int)v8;
      v10 = 280LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\coverwindowacc.cpp",
        (const char *)v9);
    }
  }
  else if ( (unsigned int)SHIsSameObject(a2, *((struct IUnknown **)this + 4)) )
  {
    if ( a3 == NavigateDirection_NextSibling )
      v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IRawElementProviderFragment **))*((_QWORD *)this + 5);
    else
      v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IRawElementProviderFragment **))*((_QWORD *)this + 3);
    v12 = (**v11)(v11, &GUID_f7063da8_8359_439c_9297_bbc5299a7d87, a4);
    v8 = v12;
    if ( v12 < 0 )
    {
      v9 = (unsigned int)v12;
      v10 = 284LL;
      goto LABEL_17;
    }
  }
  else if ( a3 == NavigateDirection_NextSibling )
  {
    return 0;
  }
  else
  {
    v13 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IRawElementProviderFragment **))this + 4))(
            *((_QWORD *)this + 4),
            &GUID_f7063da8_8359_439c_9297_bbc5299a7d87,
            a4);
    v8 = v13;
    if ( v13 < 0 )
    {
      v9 = (unsigned int)v13;
      v10 = 289LL;
      goto LABEL_17;
    }
  }
  return (unsigned int)v8;
}
