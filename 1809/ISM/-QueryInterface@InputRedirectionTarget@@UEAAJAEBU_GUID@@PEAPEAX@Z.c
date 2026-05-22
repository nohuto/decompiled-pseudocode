/*
 * XREFs of ?QueryInterface@InputRedirectionTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D1DB0
 * Callers:
 *     ?QueryInterface@InputRedirectionTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D2080 (-QueryInterface@InputRedirectionTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@InputRedirectionTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D20A0 (-QueryInterface@InputRedirectionTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputRedirectionTarget::QueryInterface(
        InputRedirectionTarget *this,
        const struct _GUID *a2,
        InputRedirectionTarget **a3)
{
  InputRedirectionTarget *v4; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = this;
  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\lib"
               "\\inputredirectiontarget.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_71951a11_6ad9_47fc_ac52_d90bf1e97b13.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_71951a11_6ad9_47fc_ac52_d90bf1e97b13.Data4 )
  {
    (*(void (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)this + 8LL))(this);
LABEL_12:
    *a3 = v4;
    return 0LL;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data4 )
  {
    (*(void (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)this + 8LL))(this);
    v4 = (InputRedirectionTarget *)((char *)v4 + 8);
    goto LABEL_12;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    (*(void (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)this + 8LL))(this);
    v4 = (InputRedirectionTarget *)((char *)v4 + 16);
    goto LABEL_12;
  }
  return 2147500034LL;
}
