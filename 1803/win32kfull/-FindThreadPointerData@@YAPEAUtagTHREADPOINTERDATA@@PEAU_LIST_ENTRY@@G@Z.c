/*
 * XREFs of ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C01B94B0
 * Callers:
 *     xxxRetrievePointerInputMessage @ 0x1C01B8C08 (xxxRetrievePointerInputMessage.c)
 *     ?DeferNotifyDelegateCapture@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GKPEAUtagWND@@@Z @ 0x1C01B92F0 (-DeferNotifyDelegateCapture@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GKPEAUtagWND@@@Z.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01B94E8 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z @ 0x1C01B9548 (-IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z.c)
 *     ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01B98A0 (-MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     EditionFindThreadPointerData @ 0x1C01BA510 (EditionFindThreadPointerData.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall FindThreadPointerData(struct _LIST_ENTRY *a1, __int16 a2)
{
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v5; // rdx

  Flink = a1->Flink;
  if ( a1->Flink == a1 )
    return 0LL;
  do
  {
    v5 = Flink;
    if ( LOWORD(Flink[1].Flink) == a2 )
      break;
    Flink = Flink->Flink;
  }
  while ( Flink != a1 );
  if ( Flink == a1 )
    return 0LL;
  return v5;
}
