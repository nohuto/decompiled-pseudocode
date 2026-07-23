/*
 * XREFs of PsTransferProcessQuotaToSharedQuota @ 0x140159A70
 * Callers:
 *     AlpcpTransferQuotaMessage @ 0x140616E7C (AlpcpTransferQuotaMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsTransferProcessQuotaToSharedQuota(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (PEPROCESS)a1 == PsInitialSystemProcess )
    return 1LL;
  result = *(_QWORD *)(a1 + 1040);
  if ( a2 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 792), -a2);
  _InterlockedIncrement((volatile signed __int32 *)(result + 512));
  return result;
}
