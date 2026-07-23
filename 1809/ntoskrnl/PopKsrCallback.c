/*
 * XREFs of PopKsrCallback @ 0x1402DE830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PopKsrCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  int v3; // edx
  int v4; // edx

  if ( (_DWORD)Argument1 )
  {
    v3 = (_DWORD)Argument1 - 1;
    if ( !v3 )
    {
LABEL_5:
      PopKsrPrepared = 0;
      return;
    }
    v4 = v3 - 2;
    if ( v4 )
    {
      if ( v4 != 1 )
        return;
      goto LABEL_5;
    }
  }
  PopKsrPrepared = 1;
}
