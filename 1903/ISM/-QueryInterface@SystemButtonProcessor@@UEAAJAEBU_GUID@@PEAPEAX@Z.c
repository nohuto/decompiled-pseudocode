/*
 * XREFs of ?QueryInterface@SystemButtonProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180036130
 * Callers:
 *     ?QueryInterface@SystemButtonProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180039680 (-QueryInterface@SystemButtonProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SystemButtonProcessor::QueryInterface(
        SystemButtonProcessor *this,
        const struct _GUID *a2,
        SystemButtonProcessor **a3)
{
  SystemButtonProcessor *v4; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = this;
  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\systembutton\\system\\lib\\sy"
               "stembuttonprocessor.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  *a3 = 0LL;
  if ( *(_OWORD *)a2 == *(_OWORD *)&GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b )
  {
    (*(void (__fastcall **)(SystemButtonProcessor *))(*(_QWORD *)this + 8LL))(this);
LABEL_8:
    *a3 = v4;
    return 0LL;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    (*(void (__fastcall **)(SystemButtonProcessor *))(*(_QWORD *)this + 8LL))(this);
    v4 = (SystemButtonProcessor *)((char *)v4 + 8);
    goto LABEL_8;
  }
  return 2147500034LL;
}
