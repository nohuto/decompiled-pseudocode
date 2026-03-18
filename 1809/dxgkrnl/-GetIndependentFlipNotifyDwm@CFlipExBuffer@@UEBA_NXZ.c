/*
 * XREFs of ?GetIndependentFlipNotifyDwm@CFlipExBuffer@@UEBA_NXZ @ 0x1C001D0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CFlipExBuffer::GetIndependentFlipNotifyDwm(CFlipExBuffer *this)
{
  char result; // al

  result = 1;
  if ( *((int *)this + 88) >= 3 )
    return *((_BYTE *)this + 569);
  return result;
}
