/*
 * XREFs of ?IncreaseAdapterUniquenessCallback@@YAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C01F5680
 * Callers:
 *     <none>
 * Callees:
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C013DBC0 (DxgkIncreaseSessionAdapterUniqueness.c)
 */

char __fastcall IncreaseAdapterUniquenessCallback(__int64 a1, __int64 a2)
{
  if ( (_DWORD)a2 == 1 )
    DxgkIncreaseSessionAdapterUniqueness(a1, a2);
  return 1;
}
