/*
 * XREFs of ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@MEBA_NXZ @ 0x1800C48C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal(CVisual *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 32);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 248LL))(v1);
  else
    return 0;
}
