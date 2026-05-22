/*
 * XREFs of ?QueryInterface@InputRedirectionProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D0F70
 * Callers:
 *     ?QueryInterface@InputRedirectionProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D19B0 (-QueryInterface@InputRedirectionProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@InputRedirectionProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D19C0 (-QueryInterface@InputRedirectionProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@InputRedirectionProcessor@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D19D0 (-QueryInterface@InputRedirectionProcessor@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputRedirectionProcessor::QueryInterface(
        InputRedirectionProcessor *this,
        const struct _GUID *a2,
        InputRedirectionProcessor **a3)
{
  InputRedirectionProcessor *v4; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = this;
  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\lib"
               "\\inputredirectionprocessor.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b.Data4 )
  {
    (*(void (__fastcall **)(InputRedirectionProcessor *))(*(_QWORD *)this + 8LL))(this);
LABEL_15:
    *a3 = v4;
    return 0LL;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_548c27d0_a710_4ec7_92d1_67a7dee54efb.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_548c27d0_a710_4ec7_92d1_67a7dee54efb.Data4 )
  {
    (*(void (__fastcall **)(InputRedirectionProcessor *))(*(_QWORD *)this + 8LL))(this);
    v4 = (InputRedirectionProcessor *)((char *)v4 + 8);
    goto LABEL_15;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5b7fc71f_fd86_45ae_9cd7_c6f402bcd2e6.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_5b7fc71f_fd86_45ae_9cd7_c6f402bcd2e6.Data4 )
  {
    (*(void (__fastcall **)(InputRedirectionProcessor *))(*(_QWORD *)this + 8LL))(this);
    v4 = (InputRedirectionProcessor *)((char *)v4 + 16);
    goto LABEL_15;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    (*(void (__fastcall **)(InputRedirectionProcessor *))(*(_QWORD *)this + 8LL))(this);
    v4 = (InputRedirectionProcessor *)((char *)v4 + 24);
    goto LABEL_15;
  }
  return 2147500034LL;
}
