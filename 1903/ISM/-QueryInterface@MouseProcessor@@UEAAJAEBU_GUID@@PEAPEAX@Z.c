/*
 * XREFs of ?QueryInterface@MouseProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180017B40
 * Callers:
 *     ?QueryInterface@MouseProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003A260 (-QueryInterface@MouseProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MouseProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003A270 (-QueryInterface@MouseProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MouseProcessor@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003A280 (-QueryInterface@MouseProcessor@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MouseProcessor@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003A290 (-QueryInterface@MouseProcessor@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MouseProcessor::QueryInterface(MouseProcessor *this, const struct _GUID *a2, MouseProcessor **a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  MouseProcessor *v8; // rdx
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
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v4 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data4;
    if ( !v5 )
    {
      v8 = this;
      goto LABEL_14;
    }
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_9cc90918_33c0_4e97_85b4_faf84befe1a8.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9cc90918_33c0_4e97_85b4_faf84befe1a8.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_9cc90918_33c0_4e97_85b4_faf84befe1a8.Data4;
    if ( v6 )
      return 2147500034LL;
    v7 = (unsigned __int64)this + 8;
  }
  else
  {
    v7 = (unsigned __int64)this + 32;
  }
  v8 = (MouseProcessor *)(v7 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
LABEL_14:
  *a3 = v8;
  if ( v8 )
    (*(void (__fastcall **)(MouseProcessor *))(*(_QWORD *)this + 8LL))(this);
  return 0LL;
}
