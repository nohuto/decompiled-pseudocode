/*
 * XREFs of ??_GClipPlaneInfoRef@@UEAAPEAXI@Z @ 0x18017A680
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

ClipPlaneInfoRef *__fastcall ClipPlaneInfoRef::`scalar deleting destructor'(ClipPlaneInfoRef *this, char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
