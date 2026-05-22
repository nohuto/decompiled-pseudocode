/*
 * XREFs of ?QueryInterface@CursorManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D9A70
 * Callers:
 *     ?QueryInterface@CursorManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DA0E0 (-QueryInterface@CursorManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CursorManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DA0F0 (-QueryInterface@CursorManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CursorManager::QueryInterface(CursorManager *this, const struct _GUID *a2, void **a3)
{
  __int64 v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x82,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f40c54d9_03bb_449c_83a5_6796bd8f9dc5.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_f40c54d9_03bb_449c_83a5_6796bd8f9dc5.Data4 )
  {
    (*(void (__fastcall **)(CursorManager *))(*(_QWORD *)this + 8LL))(this);
    v6 = 8LL;
LABEL_9:
    *a3 = (char *)this + v6;
    return 0LL;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    (*(void (__fastcall **)(CursorManager *))(*(_QWORD *)this + 8LL))(this);
    v6 = 16LL;
    goto LABEL_9;
  }
  return 2147500034LL;
}
