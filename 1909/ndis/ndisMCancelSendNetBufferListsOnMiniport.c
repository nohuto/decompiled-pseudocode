/*
 * XREFs of ndisMCancelSendNetBufferListsOnMiniport @ 0x1C008A2C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ndisClearBusy @ 0x1C00B82B0 (ndisClearBusy.c)
 *     ndisSetBusyAsync @ 0x1C00B9AB0 (ndisSetBusyAsync.c)
 */

__int64 __fastcall ndisMCancelSendNetBufferListsOnMiniport(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  if ( !a1[556] || (result = ndisSetBusyAsync((_DWORD)a1, 1, 53, a2, 0), (_BYTE)result) )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a1[470] + 200LL))(a1[3], a2);
    if ( a1[556] )
      return ndisClearBusy(a1, 1LL, 53LL);
  }
  return result;
}
