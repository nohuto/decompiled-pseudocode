/*
 * XREFs of ?OnDelete@?$SharedUnknownBase@UISIPCServer@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@MEAAXXZ @ 0x18009FC90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::OnDelete(
        __int64 (__fastcall ***a1)(_QWORD, __int64))
{
  __int64 result; // rax

  if ( a1 )
    return (**a1)(a1, 1LL);
  return result;
}
