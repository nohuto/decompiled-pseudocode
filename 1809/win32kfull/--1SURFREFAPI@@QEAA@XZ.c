/*
 * XREFs of ??1SURFREFAPI@@QEAA@XZ @ 0x1C0099760
 * Callers:
 *     GreMakeBitmapStock @ 0x1C00995F0 (GreMakeBitmapStock.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFREFAPI::~SURFREFAPI(SURFREFAPI *this)
{
  if ( *(_QWORD *)this )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
}
