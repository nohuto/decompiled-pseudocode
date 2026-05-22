/*
 * XREFs of ?OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAUSystemContextMessage@@@Z @ 0x180027980
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Move_unchecked@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18000A240 (--$_Move_unchecked@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 *     ?CheckAndUpdateDpiScale@DWMCursor@@AEAAJ_N@Z @ 0x1800108B8 (-CheckAndUpdateDpiScale@DWMCursor@@AEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::vector_INPUT_SPACE_REGION_std::allocator_INPUT_SPACE_REGION___::_Resize__lambda_b1c6025c05e84eb9990eaa1e3a85a290___ @ 0x1800279FC (std--vector_INPUT_SPACE_REGION_std--allocator_INPUT_SPACE_REGION___--_Resize__lambda_b1c6025c05e.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800563B0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall DWMCursorBroker::OnSystemContextNotification(DWMCursorBroker *this, struct SystemContextMessage *a2)
{
  void **v3; // rdi
  __int64 v4; // rbx
  __int64 ***v5; // rsi
  __int64 **i; // rbx
  int v8; // eax
  int v9; // edi
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)a2 == 1 )
  {
    v3 = (void **)((char *)this + 464);
    if ( *((_DWORD *)a2 + 2) )
    {
      v4 = *((_QWORD *)a2 + 2);
      std::vector_INPUT_SPACE_REGION_std::allocator_INPUT_SPACE_REGION___::_Resize__lambda_b1c6025c05e84eb9990eaa1e3a85a290___(
        (char *)this + 464,
        *(unsigned int *)(v4 + 12));
      std::_Move_unchecked<enum _Button *,enum _Button *>(
        *(void **)(v4 + 16),
        *(_QWORD *)(v4 + 16) + 84LL * *(unsigned int *)(v4 + 12),
        *v3);
    }
    else
    {
      *((_QWORD *)this + 59) = *((_QWORD *)this + 58);
    }
    v5 = (__int64 ***)*((_QWORD *)this + 5);
    for ( i = *v5; i != (__int64 **)v5; i = (__int64 **)*i )
    {
      v8 = DWMCursor::CheckAndUpdateDpiScale((DWMCursor *)i[4], 1);
      v9 = v8;
      if ( v8 >= 0 )
        v9 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1B9,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
          (const char *)(unsigned int)v8);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2CD,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
          (const char *)(unsigned int)v9,
          v10);
    }
  }
  return 0LL;
}
