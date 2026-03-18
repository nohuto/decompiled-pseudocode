/*
 * XREFs of ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00524B8
 * Callers:
 *     GreSetBrushOwner @ 0x1C0019E60 (GreSetBrushOwner.c)
 *     SetSysColor @ 0x1C00521EC (SetSysColor.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C0052358 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     bDeleteBrush @ 0x1C0052910 (bDeleteBrush.c)
 *     GreGetBrushColor @ 0x1C0122EC0 (GreGetBrushColor.c)
 * Callees:
 *     ?bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ @ 0x1C0019D80 (-bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ.c)
 *     HmgShareLockCheck @ 0x1C001C500 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001D340 (HmgDecrementShareReferenceCountEx.c)
 */

BRUSHSELOBJ *__fastcall BRUSHSELOBJ::BRUSHSELOBJ(BRUSHSELOBJ *this, HBRUSH a2)
{
  __int64 v3; // rax

  *((_DWORD *)this + 2) = 0;
  v3 = HmgShareLockCheck((unsigned int)a2, 16);
  *(_QWORD *)this = v3;
  if ( v3 && !(unsigned int)XEBRUSHOBJ::bSaveAttributes(this) )
  {
    HmgDecrementShareReferenceCountEx(*(struct OBJECT **)this, 0LL);
    *(_QWORD *)this = 0LL;
  }
  return this;
}
