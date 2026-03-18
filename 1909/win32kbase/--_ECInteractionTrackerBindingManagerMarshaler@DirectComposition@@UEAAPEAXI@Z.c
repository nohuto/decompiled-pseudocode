/*
 * XREFs of ??_ECInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01ABB90
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 */

DirectComposition::CInteractionTrackerBindingManagerMarshaler *__fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::`vector deleting destructor'(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 7);
  if ( v4 )
    Win32FreePool(v4);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
