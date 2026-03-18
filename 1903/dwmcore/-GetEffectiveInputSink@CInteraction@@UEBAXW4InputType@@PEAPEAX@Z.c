/*
 * XREFs of ?GetEffectiveInputSink@CInteraction@@UEBAXW4InputType@@PEAPEAX@Z @ 0x1801D6EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::GetEffectiveInputSink(_QWORD *a1, int a2, _QWORD *a3)
{
  __int64 result; // rax

  if ( a2 < 2 )
    goto LABEL_8;
  if ( a2 <= 3 )
  {
    result = a1[10];
    goto LABEL_9;
  }
  if ( a2 == 4 )
  {
    result = a1[11];
    goto LABEL_9;
  }
  if ( (unsigned int)(a2 - 5) > 1 )
  {
LABEL_8:
    result = 0LL;
    goto LABEL_9;
  }
  result = a1[8];
LABEL_9:
  *a3 = result;
  return result;
}
