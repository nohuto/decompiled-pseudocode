/*
 * XREFs of wil::details::lambda_call__lambda_0efa840e8179dde10a4fd154e3e5d6e3___::_lambda_call__lambda_0efa840e8179dde10a4fd154e3e5d6e3___ @ 0x140036FC4
 * Callers:
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$3 @ 0x14001AE72 (_CAudioDeviceGraph--Initialize_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::lambda_call__lambda_0efa840e8179dde10a4fd154e3e5d6e3___::_lambda_call__lambda_0efa840e8179dde10a4fd154e3e5d6e3___(
        __int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx

  if ( *((_BYTE *)a1 + 8) )
  {
    v1 = *a1;
    *((_BYTE *)a1 + 8) = 0;
    v2 = *(_QWORD *)(v1 + 152);
    if ( v2 )
    {
      *(_QWORD *)(v1 + 152) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
}
