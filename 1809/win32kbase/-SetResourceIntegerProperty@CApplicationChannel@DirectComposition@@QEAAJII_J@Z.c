/*
 * XREFs of ?SetResourceIntegerProperty@CApplicationChannel@DirectComposition@@QEAAJII_J@Z @ 0x1C001980C
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0062480 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C00199AC (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z @ 0x1C0071E54 (-UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceIntegerProperty(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned int a3)
{
  unsigned __int64 v4; // rcx
  struct DirectComposition::CResourceMarshaler *v6; // rdi
  signed int v7; // ebx
  bool v9; // [rsp+48h] [rbp+10h]

  v9 = 0;
  v4 = (unsigned int)(a2 - 1);
  if ( a2 && v4 < *((_QWORD *)this + 10) )
  {
    _mm_lfence();
    v6 = *(struct DirectComposition::CResourceMarshaler **)(v4 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
  }
  else
  {
    v6 = 0LL;
  }
  v7 = v6 == 0LL ? 0xC0000022 : 0;
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *))(*(_QWORD *)v6 + 136LL))(
           v6,
           this);
    if ( v7 < 0 )
      return (unsigned int)v7;
    if ( *((_QWORD *)v6 + 4) )
      v9 = DirectComposition::CApplicationChannel::UnbindAnimation(this, v6, a3);
  }
  if ( v7 >= 0 && v9 )
    DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v6);
  return (unsigned int)v7;
}
