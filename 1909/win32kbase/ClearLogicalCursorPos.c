/*
 * XREFs of ClearLogicalCursorPos @ 0x1C00A8BE0
 * Callers:
 *     InitLoadResources @ 0x1C004F0B0 (InitLoadResources.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0030238 (_anonymous_namespace_--GetMouseProcessor.c)
 */

__int64 ClearLogicalCursorPos()
{
  __int64 result; // rax

  result = anonymous_namespace_::GetMouseProcessor();
  if ( result )
  {
    *(_QWORD *)(result + 76) = *((_QWORD *)gpsi + 620);
    *(_DWORD *)(result + 84) = 18;
  }
  return result;
}
