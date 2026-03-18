/*
 * XREFs of ??_GCInputQueue@@UEAAPEAXI@Z @ 0x1C009B850
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?MarkInvalid@CInputQueue@@UEAAXXZ @ 0x1C0095F40 (-MarkInvalid@CInputQueue@@UEAAXXZ.c)
 */

CInputQueue *__fastcall CInputQueue::`scalar deleting destructor'(CInputQueue *this, char a2)
{
  *(_QWORD *)this = &CInputQueue::`vftable';
  CInputQueue::MarkInvalid(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
