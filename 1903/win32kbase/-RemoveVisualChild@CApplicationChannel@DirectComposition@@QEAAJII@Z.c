/*
 * XREFs of ?RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C0011504
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0012220 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C00141E8 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::RemoveVisualChild(
        DirectComposition::CApplicationChannel *this,
        int a2,
        int a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // r9
  struct DirectComposition::CResourceMarshaler *v7; // rsi
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  char v13; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  v13 = 0;
  v4 = (unsigned int)(a2 - 1);
  if ( a2 && v4 < *((_QWORD *)this + 10) )
  {
    _mm_lfence();
    v7 = *(struct DirectComposition::CResourceMarshaler **)(v4 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v7 + 120LL))(
            v7,
            189LL) )
      return (unsigned int)-1073741811;
    if ( !a3 )
      goto LABEL_11;
    v8 = (unsigned int)(a3 - 1);
    if ( v8 < *((_QWORD *)this + 10) )
    {
      _mm_lfence();
      v3 = *(_QWORD *)(v8 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
    }
    if ( v3 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 120LL))(v3, 189LL) )
    {
LABEL_11:
      v9 = *(_QWORD *)v7;
      if ( v3 )
        v10 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, __int64, char *))(v9 + 256))(
                v7,
                this,
                v3,
                &v13);
      else
        v10 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, char *))(v9 + 264))(
                v7,
                this,
                &v13);
      v11 = v10;
      if ( v10 >= 0 && v13 )
        DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v7);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v11;
}
