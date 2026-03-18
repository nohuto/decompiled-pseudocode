/*
 * XREFs of _lambda_735079264b3842ed665395672707c8d3_::_lambda_invoker_cdecl_ @ 0x1801FAF60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

void __fastcall lambda_735079264b3842ed665395672707c8d3_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        _QWORD *Context,
        PTP_WORK Work)
{
  __int64 v3; // rcx
  const void *retaddr; // [rsp+28h] [rbp+0h]
  char *v6; // [rsp+38h] [rbp+10h] BYREF

  v3 = Context[8];
  v6 = (char *)(Context + 9);
  if ( !v3 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  *((_DWORD *)Context + 22) = (*(__int64 (__fastcall **)(__int64, char **, PTP_WORK))(*(_QWORD *)v3 + 16LL))(
                                v3,
                                &v6,
                                Work);
  *((_BYTE *)Context + 92) = 1;
}
