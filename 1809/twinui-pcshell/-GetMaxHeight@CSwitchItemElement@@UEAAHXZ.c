/*
 * XREFs of ?GetMaxHeight@CSwitchItemElement@@UEAAHXZ @ 0x1802F6FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwitchItemElement::GetMaxHeight(CSwitchItemElement *this)
{
  return (unsigned int)(*((_DWORD *)this + 8)
                      + (int)((double)*((int *)this + 14)
                            / fmin(
                                (double)*((int *)this + 16) / (double)*((int *)this + 17) * *((double *)this + 6),
                                (double)*((int *)this + 14) / (double)*((int *)this + 15))));
}
