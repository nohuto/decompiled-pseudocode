/*
 * XREFs of ?QueryInterface@RawButtonProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D2F70
 * Callers:
 *     ?QueryInterface@RawButtonProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D3260 (-QueryInterface@RawButtonProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RawButtonProcessor::QueryInterface(
        RawButtonProcessor *this,
        const struct _GUID *a2,
        RawButtonProcessor **a3)
{
  RawButtonProcessor *v4; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = this;
  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\rawshellbutton\\system\\lib\\"
               "rawbuttonprocessor.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b.Data4 )
  {
    (*(void (__fastcall **)(RawButtonProcessor *))(*(_QWORD *)this + 8LL))(this);
LABEL_9:
    *a3 = v4;
    return 0LL;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    (*(void (__fastcall **)(RawButtonProcessor *))(*(_QWORD *)this + 8LL))(this);
    v4 = (RawButtonProcessor *)((char *)v4 + 8);
    goto LABEL_9;
  }
  return 2147500034LL;
}
