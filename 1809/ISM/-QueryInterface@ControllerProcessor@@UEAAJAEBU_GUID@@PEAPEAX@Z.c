/*
 * XREFs of ?QueryInterface@ControllerProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180033EA0
 * Callers:
 *     ?QueryInterface@ControllerProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800383B0 (-QueryInterface@ControllerProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ControllerProcessor@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800383C0 (-QueryInterface@ControllerProcessor@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::QueryInterface(ControllerProcessor *this, const struct _GUID *a2, void **a3)
{
  __int64 v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    (*(void (__fastcall **)(ControllerProcessor *))(*(_QWORD *)this + 8LL))(this);
    v6 = 8LL;
LABEL_9:
    *a3 = (char *)this + v6;
    return 0LL;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data4 )
  {
    (*(void (__fastcall **)(ControllerProcessor *))(*(_QWORD *)this + 8LL))(this);
    v6 = 40LL;
    goto LABEL_9;
  }
  return 2147500034LL;
}
