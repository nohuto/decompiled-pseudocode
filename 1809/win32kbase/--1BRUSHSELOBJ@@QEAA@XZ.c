/*
 * XREFs of ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C0043320
 * Callers:
 *     SetSysColor @ 0x1C0042D4C (SetSysColor.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C0042EB8 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreSetBrushOwner @ 0x1C0042FF0 (GreSetBrushOwner.c)
 *     bDeleteBrush @ 0x1C007DE80 (bDeleteBrush.c)
 *     GreGetBrushColor @ 0x1C00F5FE0 (GreGetBrushColor.c)
 * Callees:
 *     DEC_SHARE_REF_CNT @ 0x1C0022720 (DEC_SHARE_REF_CNT.c)
 *     PopThreadGuardedObject @ 0x1C00251C0 (PopThreadGuardedObject.c)
 *     ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x1C006A83C (-RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ.c)
 */

void __fastcall BRUSHSELOBJ::~BRUSHSELOBJ(BRUSHSELOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    XEBRUSHOBJ::RestoreAttributes(this);
    DEC_SHARE_REF_CNT(*(struct OBJECT **)this);
  }
  PopThreadGuardedObject((_QWORD *)this + 2);
}
