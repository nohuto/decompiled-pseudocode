/*
 * XREFs of ?QueryInterface@NonPointerProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800522C0
 * Callers:
 *     ?QueryInterface@NonPointerProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180052470 (-QueryInterface@NonPointerProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NonPointerProcessor::QueryInterface(NonPointerProcessor *this, const struct _GUID *a2, void **a3)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      (*(void (__fastcall **)(NonPointerProcessor *))(*(_QWORD *)this + 8LL))(this);
      *a3 = (char *)this + 8;
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
      (void *)0x37,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\generic\\nonpointer\\lib\\nonpointerprocessor.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
