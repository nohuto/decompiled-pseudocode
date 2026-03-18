/*
 * XREFs of ?SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z @ 0x1C0071B9C
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0062480 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C0071CBC (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAn.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceAnimationProperty(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned int a3,
        int a4)
{
  struct DirectComposition::CResourceMarshaler *v4; // r14
  unsigned __int64 v5; // r10
  struct DirectComposition::CBaseAnimation *v6; // r15
  __int64 v10; // rcx
  signed int v11; // edi
  unsigned __int64 v12; // rdx
  __int64 v13; // rbx
  unsigned int v14; // eax

  v4 = 0LL;
  v5 = (unsigned int)(a4 - 1);
  v6 = 0LL;
  if ( a4 && v5 < *((_QWORD *)this + 10) )
  {
    _mm_lfence();
    v10 = *(_QWORD *)(v5 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
    v6 = (struct DirectComposition::CBaseAnimation *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 128LL))(v10);
  v11 = v6 == 0LL ? 0xC000000D : 0;
  if ( v6 )
  {
    v12 = (unsigned int)(a2 - 1);
    if ( a2 && v12 < *((_QWORD *)this + 10) )
    {
      _mm_lfence();
      v4 = *(struct DirectComposition::CResourceMarshaler **)(v12 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
    }
    if ( !v4 )
      v11 = -1073741790;
  }
  if ( v11 >= 0 )
  {
    v13 = *(_QWORD *)v4;
    v14 = (*(__int64 (__fastcall **)(struct DirectComposition::CBaseAnimation *))(*(_QWORD *)v6 + 8LL))(v6);
    if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, _QWORD))(v13 + 200))(
            v4,
            a3,
            v14) )
      v11 = -1073741811;
    if ( v11 >= 0 )
      return (unsigned int)DirectComposition::CApplicationChannel::BindAnimation(this, v4, a3, v6);
  }
  return (unsigned int)v11;
}
