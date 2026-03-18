/*
 * XREFs of ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CSpriteVisual@@MEBA_NXZ @ 0x1800B6870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CSpriteVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal(CSpriteVisual *this)
{
  BOOL v2; // ebx
  __int64 v3; // rcx
  int v4; // eax

  v2 = 0;
  v3 = *((_QWORD *)this + 32);
  if ( v3 )
    v2 = (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 48LL))(v3, 14LL) != 0;
  v4 = v2 + 1;
  if ( (**((_DWORD **)this + 28) & 0x8000) == 0 )
    v4 = v2;
  return v4 == 1;
}
