/*
 * XREFs of ?SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z @ 0x1C00798CC
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C00136C0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C0013D90 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?EnsureInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_NPEBGPEAPEAVCInteractionMarshaler@2@@Z @ 0x1C00799B4 (-EnsureInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_NPEBGPEAP.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetVisualInputSink(
        DirectComposition::CApplicationChannel *this,
        int a2,
        void *a3)
{
  unsigned __int64 v4; // r9
  DirectComposition::CVisualMarshaler *v6; // rsi
  int v7; // ebx
  struct DirectComposition::CResourceMarshaler *v8; // rsi
  struct DirectComposition::CResourceMarshaler *v10; // [rsp+50h] [rbp+8h] BYREF
  char v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = 0;
  v4 = (unsigned int)(a2 - 1);
  if ( a2 && v4 < *((_QWORD *)this + 10) )
  {
    _mm_lfence();
    v6 = *(DirectComposition::CVisualMarshaler **)(v4 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v7 = 0;
    if ( !(*(unsigned __int8 (__fastcall **)(DirectComposition::CVisualMarshaler *, __int64))(*(_QWORD *)v6 + 120LL))(
            v6,
            189LL) )
      v7 = -1073741811;
    v10 = 0LL;
    if ( v7 >= 0 )
    {
      v7 = DirectComposition::CVisualMarshaler::EnsureInteraction(v6, this, 1, L"SetInputSink", &v10);
      if ( v7 >= 0 )
      {
        v8 = v10;
        v7 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, void *, char *))(*(_QWORD *)v10 + 152LL))(
               v10,
               0LL,
               a3,
               &v11);
        if ( v7 >= 0 )
        {
          if ( v11 )
            DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v8);
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v7;
}
