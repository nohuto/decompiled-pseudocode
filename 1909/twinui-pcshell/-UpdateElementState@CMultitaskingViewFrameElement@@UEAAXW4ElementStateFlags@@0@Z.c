/*
 * XREFs of ?UpdateElementState@CMultitaskingViewFrameElement@@UEAAXW4ElementStateFlags@@0@Z @ 0x180088560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMultitaskingViewFrameElement::UpdateElementState(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  result = a3 & a2 | *(_DWORD *)(a1 + 264) & (unsigned int)~a3;
  *(_DWORD *)(a1 + 264) = result;
  return result;
}
