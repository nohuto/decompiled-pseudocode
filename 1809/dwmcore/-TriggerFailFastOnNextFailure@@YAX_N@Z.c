/*
 * XREFs of ?TriggerFailFastOnNextFailure@@YAX_N@Z @ 0x1801E8C0C
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800CD560 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall TriggerFailFastOnNextFailure(char a1)
{
  DWORD CurrentThreadId; // eax

  CurrentThreadId = 0;
  if ( a1 )
    CurrentThreadId = GetCurrentThreadId();
  g_dwFailFastForThreadId = CurrentThreadId;
}
