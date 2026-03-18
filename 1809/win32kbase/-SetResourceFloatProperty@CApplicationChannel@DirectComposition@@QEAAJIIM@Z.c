/*
 * XREFs of ?SetResourceFloatProperty@CApplicationChannel@DirectComposition@@QEAAJIIM@Z @ 0x1C00198EC
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0062480 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C00199AC (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z @ 0x1C0071E54 (-UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceFloatProperty(
        DirectComposition::CApplicationChannel *this,
        int a2,
        __int64 a3,
        float a4)
{
  unsigned __int64 v5; // rcx
  unsigned int v6; // ebp
  struct DirectComposition::CResourceMarshaler *v7; // rdi
  signed int v8; // ebx
  bool v10; // al
  char v11; // cl
  char v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0;
  v5 = (unsigned int)(a2 - 1);
  v6 = a3;
  if ( a2 && v5 < *((_QWORD *)this + 10) )
  {
    _mm_lfence();
    v7 = *(struct DirectComposition::CResourceMarshaler **)(v5 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
  }
  else
  {
    v7 = 0LL;
  }
  v8 = v7 == 0LL ? 0xC0000022 : 0;
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, __int64, char *))(*(_QWORD *)v7 + 144LL))(
           v7,
           (unsigned int)a3,
           a3,
           &v12);
    if ( v8 < 0 )
      return (unsigned int)v8;
    if ( *((_QWORD *)v7 + 4) )
    {
      v10 = DirectComposition::CApplicationChannel::UnbindAnimation(this, v7, v6);
      v11 = v12;
      if ( v10 )
        v11 = 1;
      v12 = v11;
    }
  }
  if ( v8 >= 0 && v12 )
    DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v7);
  return (unsigned int)v8;
}
