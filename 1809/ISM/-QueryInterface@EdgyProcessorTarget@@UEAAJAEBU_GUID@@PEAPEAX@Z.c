/*
 * XREFs of ?QueryInterface@EdgyProcessorTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CCF50
 * Callers:
 *     ?QueryInterface@EdgyProcessorTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CE200 (-QueryInterface@EdgyProcessorTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@EdgyProcessorTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CE220 (-QueryInterface@EdgyProcessorTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgyProcessorTarget::QueryInterface(EdgyProcessorTarget *this, const struct _GUID *a2, void **a3)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      (*(void (__fastcall **)(EdgyProcessorTarget *))(*(_QWORD *)this + 8LL))(this);
      *a3 = (char *)this + 16;
      return 0LL;
    }
    else
    {
      return 2147500034LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
