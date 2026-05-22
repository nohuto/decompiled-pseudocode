/*
 * XREFs of ?QueryInterface@MouseProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EDC00
 * Callers:
 *     ?QueryInterface@MouseProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EE780 (-QueryInterface@MouseProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MouseProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EE790 (-QueryInterface@MouseProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MouseProcessor@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EE7B0 (-QueryInterface@MouseProcessor@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MouseProcessor::QueryInterface(MouseProcessor *this, const struct _GUID *a2, MouseProcessor **a3)
{
  unsigned __int64 v5; // rcx
  MouseProcessor *v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  *a3 = 0LL;
  if ( *(_OWORD *)a2 == *(_OWORD *)&GUID_00000000_0000_0000_c000_000000000046 )
  {
    v5 = (unsigned __int64)this + 24;
LABEL_11:
    v6 = (MouseProcessor *)(v5 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    goto LABEL_12;
  }
  if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data1
    || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data4 )
  {
    if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_9cc90918_33c0_4e97_85b4_faf84befe1a8.Data1
      || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_9cc90918_33c0_4e97_85b4_faf84befe1a8.Data4 )
    {
      return 2147500034LL;
    }
    v5 = (unsigned __int64)this + 8;
    goto LABEL_11;
  }
  v6 = this;
LABEL_12:
  *a3 = v6;
  if ( v6 )
    (*(void (__fastcall **)(MouseProcessor *))(*(_QWORD *)this + 8LL))(this);
  return 0LL;
}
