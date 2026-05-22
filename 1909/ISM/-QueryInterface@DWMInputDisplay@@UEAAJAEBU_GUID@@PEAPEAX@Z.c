/*
 * XREFs of ?QueryInterface@DWMInputDisplay@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C6740
 * Callers:
 *     ?QueryInterface@DWMInputDisplay@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180038A20 (-QueryInterface@DWMInputDisplay@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputDisplay::QueryInterface(DWMInputDisplay *this, const struct _GUID *a2, void **a3)
{
  __int64 v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v6 )
    {
      return 2147500034LL;
    }
    else
    {
      (*(void (__fastcall **)(DWMInputDisplay *))(*(_QWORD *)this + 8LL))(this);
      *a3 = (char *)this + 8;
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputdisplay.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
