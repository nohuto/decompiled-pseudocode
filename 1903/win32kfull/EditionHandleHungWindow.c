/*
 * XREFs of EditionHandleHungWindow @ 0x1C0137510
 * Callers:
 *     <none>
 * Callees:
 *     IsHungWindow @ 0x1C00AE860 (IsHungWindow.c)
 *     ProcessHungWindow @ 0x1C0150714 (ProcessHungWindow.c)
 */

__int64 __fastcall EditionHandleHungWindow(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 80);
  result = *(_QWORD *)(v1 + 24);
  if ( *(_QWORD *)(result + 40) )
  {
    result = IsHungWindow(*(_QWORD *)(a1 + 80));
    if ( (_DWORD)result )
      return ProcessHungWindow(v1);
  }
  return result;
}
