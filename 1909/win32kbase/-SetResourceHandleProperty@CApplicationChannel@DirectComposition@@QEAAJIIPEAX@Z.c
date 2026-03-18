/*
 * XREFs of ?SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1C008D8C8
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C00136C0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C0013D90 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceHandleProperty(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned int a3,
        void *a4)
{
  unsigned __int64 v5; // rcx
  struct DirectComposition::CResourceMarshaler *v6; // rbx
  int v7; // esi
  char v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0;
  v5 = (unsigned int)(a2 - 1);
  if ( a2 && v5 < *((_QWORD *)this + 10) )
  {
    _mm_lfence();
    v6 = *(struct DirectComposition::CResourceMarshaler **)(v5 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, void *, char *))(*(_QWORD *)v6 + 152LL))(
           v6,
           a3,
           a4,
           &v9);
    if ( v7 >= 0 && v9 )
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v6);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v7;
}
