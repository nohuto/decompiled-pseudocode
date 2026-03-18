/*
 * XREFs of ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x1C000DBE0
 * Callers:
 *     ?ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z @ 0x1C000C828 (-ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0062480 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C000DCC0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z @ 0x1C006D16C (-ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ReleaseResource(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2)
{
  unsigned __int64 v2; // r8
  struct DirectComposition::CResourceMarshaler *v5; // rbx
  struct DirectComposition::CResourceMarshaler *v7; // r14

  v2 = a2 - 1;
  if ( a2 && v2 < *((_QWORD *)this + 10) )
  {
    _mm_lfence();
    v5 = *(struct DirectComposition::CResourceMarshaler **)(v2 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v5 + 120LL))(
           v5,
           157LL) )
    {
      v7 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)v5 + 22);
      if ( v7 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 224LL))(*((_QWORD *)v5 + 22)) )
          DirectComposition::CApplicationChannel::ReleaseResource(this, v7);
      }
    }
    DirectComposition::CLinearObjectTableBase::ReleaseHandle(
      (DirectComposition::CApplicationChannel *)((char *)this + 56),
      a2);
    DirectComposition::CApplicationChannel::ReleaseResource(this, v5);
  }
  return v5 == 0LL ? 0xC0000022 : 0;
}
