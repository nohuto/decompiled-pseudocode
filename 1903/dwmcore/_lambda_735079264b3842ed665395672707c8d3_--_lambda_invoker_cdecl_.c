/*
 * XREFs of _lambda_735079264b3842ed665395672707c8d3_::_lambda_invoker_cdecl_ @ 0x18015B910
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?ProcessDataOnChannelSameProcess@CComposition@@MEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x18015B1D0 (-ProcessDataOnChannelSameProcess@CComposition@@MEAAJPEBUUCE_RDP_HEADER@@PEAI@Z.c)
 */

void __fastcall lambda_735079264b3842ed665395672707c8d3_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        _QWORD *Context,
        unsigned int *Work)
{
  __int64 v3; // rcx
  char *v5; // [rsp+38h] [rbp+10h] BYREF

  v3 = Context[8];
  v5 = (char *)(Context + 9);
  if ( !v3 )
    CComposition::ProcessDataOnChannelSameProcess(0LL, (const struct UCE_RDP_HEADER *)Context, Work);
  *((_DWORD *)Context + 22) = (*(__int64 (__fastcall **)(__int64, char **, unsigned int *))(*(_QWORD *)v3 + 16LL))(
                                v3,
                                &v5,
                                Work);
  *((_BYTE *)Context + 92) = 1;
}
