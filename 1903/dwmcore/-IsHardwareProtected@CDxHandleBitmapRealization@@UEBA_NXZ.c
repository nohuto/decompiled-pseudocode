/*
 * XREFs of ?IsHardwareProtected@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x1802572D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDxHandleBitmapRealization::IsHardwareProtected(CDxHandleBitmapRealization *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this + 34);
  v2 = 0;
  if ( v1 )
    return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 104) + 64LL))(v1 + 104) != 0;
  return v2;
}
