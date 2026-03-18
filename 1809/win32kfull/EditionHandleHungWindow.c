/*
 * XREFs of EditionHandleHungWindow @ 0x1C012B1F0
 * Callers:
 *     <none>
 * Callees:
 *     ProcessHungWindow @ 0x1C0008600 (ProcessHungWindow.c)
 *     IsHungWindow @ 0x1C0017040 (IsHungWindow.c)
 */

__int64 __fastcall EditionHandleHungWindow(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 24LL);
  if ( *(_QWORD *)(result + 40) )
  {
    result = IsHungWindow(*(_QWORD *)(a1 + 72));
    if ( (_DWORD)result )
      return ProcessHungWindow();
  }
  return result;
}
