/*
 * XREFs of ?QueryInterface@EdgyInputTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CE8F0
 * Callers:
 *     ?QueryInterface@EdgyInputTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CEA40 (-QueryInterface@EdgyInputTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@EdgyInputTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CEA60 (-QueryInterface@EdgyInputTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgyInputTarget::QueryInterface(EdgyInputTarget *this, const struct _GUID *a2, void **a3)
{
  __int64 v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyimpl.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data4 )
  {
    (*(void (__fastcall **)(EdgyInputTarget *))(*(_QWORD *)this + 8LL))(this);
    v6 = 8LL;
LABEL_9:
    *a3 = (char *)this + v6;
    return 0LL;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    (*(void (__fastcall **)(EdgyInputTarget *))(*(_QWORD *)this + 8LL))(this);
    v6 = 16LL;
    goto LABEL_9;
  }
  return 2147500034LL;
}
