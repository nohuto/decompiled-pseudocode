/*
 * XREFs of EditionHandleHungWindow @ 0x1C010A490
 * Callers:
 *     <none>
 * Callees:
 *     IsHungWindow @ 0x1C001E340 (IsHungWindow.c)
 *     ProcessHungWindow @ 0x1C00BC598 (ProcessHungWindow.c)
 */

__int64 __fastcall EditionHandleHungWindow(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 72);
  result = *(_QWORD *)(v1 + 24);
  if ( *(_QWORD *)(result + 40) )
  {
    result = IsHungWindow(*(_QWORD *)(a1 + 72));
    if ( (_DWORD)result )
      return ProcessHungWindow(v1);
  }
  return result;
}
