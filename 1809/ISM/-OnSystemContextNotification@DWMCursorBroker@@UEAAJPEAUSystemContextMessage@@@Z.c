/*
 * XREFs of ?OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAUSystemContextMessage@@@Z @ 0x1801073A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::vector_INPUT_SPACE_REGION_std::allocator_INPUT_SPACE_REGION___::_Resize__lambda_b1c6025c05e84eb9990eaa1e3a85a290___ @ 0x18010764C (std--vector_INPUT_SPACE_REGION_std--allocator_INPUT_SPACE_REGION___--_Resize__lambda_b1c6025c05e.c)
 *     ?CheckAndUpdateDpiScale@DWMCursor@@AEAAJ_N@Z @ 0x180108810 (-CheckAndUpdateDpiScale@DWMCursor@@AEAAJ_N@Z.c)
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 */

__int64 __fastcall DWMCursorBroker::OnSystemContextNotification(DWMCursorBroker *this, struct SystemContextMessage *a2)
{
  void **v3; // rdi
  __int64 v4; // rbx
  __int64 ***v5; // rdi
  __int64 **i; // rbx
  int v7; // eax
  int v8; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)a2 == 1 )
  {
    v3 = (void **)((char *)this + 376);
    if ( *((_DWORD *)a2 + 2) )
    {
      v4 = *((_QWORD *)a2 + 2);
      std::vector_INPUT_SPACE_REGION_std::allocator_INPUT_SPACE_REGION___::_Resize__lambda_b1c6025c05e84eb9990eaa1e3a85a290___(
        (char *)this + 376,
        *(unsigned int *)(v4 + 12));
      memmove_0(*v3, *(const void **)(v4 + 16), 84LL * *(unsigned int *)(v4 + 12));
    }
    else
    {
      *((_QWORD *)this + 48) = *((_QWORD *)this + 47);
    }
    v5 = (__int64 ***)*((_QWORD *)this + 5);
    for ( i = *v5; i != (__int64 **)v5; i = (__int64 **)*i )
    {
      v7 = DWMCursor::CheckAndUpdateDpiScale((DWMCursor *)i[4], 1);
      v8 = v7;
      if ( v7 >= 0 )
        v8 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x164,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
          (const char *)(unsigned int)v7);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x27C,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
          (const char *)(unsigned int)v8);
    }
  }
  return 0LL;
}
