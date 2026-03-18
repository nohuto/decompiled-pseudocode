/*
 * XREFs of ?ReadTexture@CDxHandleBitmapRealization@@UEAAXXZ @ 0x180255C00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDxHandleBitmapRealization::ReadTexture(CDxHandleBitmapRealization *this)
{
  if ( (*(int (__fastcall **)(char *))(*((_QWORD *)this - 18) + 80LL))((char *)this - 144) >= 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 34) + 104LL) + 120LL))(*((_QWORD *)this + 34) + 104LL);
}
