/*
 * XREFs of ?OnInputReport@TouchProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180103D70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidatePointerInput@InputInfoValidator@@AEAAJPEAULegacyInputInfo@@@Z @ 0x1801055B4 (-ValidatePointerInput@InputInfoValidator@@AEAAJPEAULegacyInputInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TouchProcessor::OnInputReport(InputInfoValidator **this, struct InputInfo *a2)
{
  int v2; // eax
  InputInfoValidator *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x3B) != 0 )
  {
    InputInfoValidator::ValidatePointerInput(this[8], a2);
    v2 = *(_DWORD *)a2;
  }
  if ( (v2 & 8) != 0 )
  {
    v6 = this[6];
    *((_DWORD *)this + 14) = *((_DWORD *)a2 + 124);
    (*(void (__fastcall **)(InputInfoValidator *, struct InputInfo *))(*(_QWORD *)v6 + 24LL))(v6, a2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x77,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\touch\\lib\\touchprocessor.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
