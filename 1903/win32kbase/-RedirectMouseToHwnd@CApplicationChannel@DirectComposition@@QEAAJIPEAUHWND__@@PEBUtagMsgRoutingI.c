/*
 * XREFs of ?RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C0001320
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0012220 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C00013EC (-RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::RedirectMouseToHwnd(
        DirectComposition::CApplicationChannel *this,
        int a2,
        HWND a3,
        const struct tagMsgRoutingInfo *a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v6; // ebx
  unsigned __int64 v8; // rcx
  DirectComposition::CVisualMarshaler *v11; // rdi

  v6 = 0;
  v8 = (unsigned int)(a2 - 1);
  if ( a2 && v8 < *((_QWORD *)this + 10) )
  {
    _mm_lfence();
    v11 = *(DirectComposition::CVisualMarshaler **)(v8 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CVisualMarshaler *, __int64))(*(_QWORD *)v11 + 120LL))(
         v11,
         189LL)
    && ((a6 | a5) & 0xFFFF7EC0) == 0 )
  {
    if ( a5 )
      return (unsigned int)DirectComposition::CVisualMarshaler::RedirectMouseToHwnd(v11, this, a3, a4, a5, a6);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
