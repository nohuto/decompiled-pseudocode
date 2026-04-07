/*
 * XREFs of wil::details::lambda_call__lambda_9a17c67055a4e4ee557498e76edb141d___::_lambda_call__lambda_9a17c67055a4e4ee557498e76edb141d___ @ 0x18004DEF8
 * Callers:
 *     ?ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ @ 0x1800AF53C (-ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180073BB0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_9a17c67055a4e4ee557498e76edb141d___::_lambda_call__lambda_9a17c67055a4e4ee557498e76edb141d___(
        __int64 a1)
{
  _QWORD *v1; // rax
  int v2; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 8) )
  {
    v1 = *(_QWORD **)a1;
    *(_BYTE *)(a1 + 8) = 0;
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v1 + 72LL))(*v1, 0LL);
    if ( v2 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x214,
        (unsigned int)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
        (const char *)(unsigned int)v2,
        v3);
      JUMPOUT(0x18004DF3DLL);
    }
  }
}
