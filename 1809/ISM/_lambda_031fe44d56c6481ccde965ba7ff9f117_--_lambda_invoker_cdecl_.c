/*
 * XREFs of _lambda_031fe44d56c6481ccde965ba7ff9f117_::_lambda_invoker_cdecl_ @ 0x180038CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogGamepadTaskSwitcherInvoked@ControllerProcessorTelemetry@@SAXI@Z @ 0x18003852C (-LogGamepadTaskSwitcherInvoked@ControllerProcessorTelemetry@@SAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_031fe44d56c6481ccde965ba7ff9f117_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v4)(__int64, __int64, __int64); // rax
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(__int64, __int64, __int64); // rax
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 16) != 4 )
  {
    if ( *(_DWORD *)(a1 + 16) == 5 )
    {
      *(_BYTE *)(a1 + 72) = 1;
      *(_BYTE *)(a1 + 74) = 0;
      *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 48);
      v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 32);
      *(_BYTE *)(a1 + 72) = 0;
      *(_DWORD *)(a1 + 16) = 6;
      if ( v9 )
      {
        v10 = *(_QWORD *)(a1 + 40);
        if ( v10 )
        {
          LOBYTE(a3) = *(_BYTE *)(a1 + 74);
          v6 = v9(v10, a1 + 80, a3);
          v7 = v6;
          if ( v6 < 0 )
          {
            v8 = 220LL;
            goto LABEL_6;
          }
        }
      }
    }
LABEL_12:
    ControllerProcessorTelemetry::LogGamepadTaskSwitcherInvoked(*(_DWORD *)(a1 + 16));
    v7 = 0;
    *(_BYTE *)(a1 + 74) = 0;
    *(_BYTE *)(a1 + 72) = 0;
    return v7;
  }
  v4 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 32);
  *(_BYTE *)(a1 + 74) = 1;
  *(_DWORD *)(a1 + 16) = 6;
  if ( !v4 )
    goto LABEL_12;
  v5 = *(_QWORD *)(a1 + 40);
  if ( !v5 )
    goto LABEL_12;
  LOBYTE(a3) = 1;
  v6 = v4(v5, a1 + 80, a3);
  v7 = v6;
  if ( v6 >= 0 )
    goto LABEL_12;
  v8 = 199LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
