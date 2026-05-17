/*
 * XREFs of TpSetPoolStackInformation @ 0x18007E7A0
 * Callers:
 *     sub_18002FBA8 @ 0x18002FBA8 (sub_18002FBA8.c)
 *     TpSetDefaultPoolStackInformation @ 0x18007E680 (TpSetDefaultPoolStackInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TpSetPoolStackInformation(__int64 a1, __int64 a2)
{
  if ( a1 && a2 )
    return ZwSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 10LL, a2);
  else
    return 3221225485LL;
}
