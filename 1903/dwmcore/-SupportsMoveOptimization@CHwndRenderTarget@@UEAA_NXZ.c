/*
 * XREFs of ?SupportsMoveOptimization@CHwndRenderTarget@@UEAA_NXZ @ 0x1800C6980
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CHwndRenderTarget::SupportsMoveOptimization(CHwndRenderTarget *this, __int64 a2)
{
  LOBYTE(a2) = 0;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 1096LL) == 1 )
    LOBYTE(a2) = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 22) + 488LL))(
                   *((_QWORD *)this + 22),
                   a2);
  return a2;
}
