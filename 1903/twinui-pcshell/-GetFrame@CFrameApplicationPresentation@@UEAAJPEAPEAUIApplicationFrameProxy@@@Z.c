/*
 * XREFs of ?GetFrame@CFrameApplicationPresentation@@UEAAJPEAPEAUIApplicationFrameProxy@@@Z @ 0x18005C950
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::GetFrame(
        CFrameApplicationPresentation *this,
        struct IApplicationFrameProxy **a2)
{
  struct IApplicationFrameProxy *v4; // rcx

  if ( *((_DWORD *)this + 14) == 2 )
    return 2147947423LL;
  v4 = (struct IApplicationFrameProxy *)*((_QWORD *)this + 15);
  if ( v4 )
  {
    (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v4 + 8LL))(v4);
    v4 = (struct IApplicationFrameProxy *)*((_QWORD *)this + 15);
  }
  *a2 = v4;
  return 0LL;
}
