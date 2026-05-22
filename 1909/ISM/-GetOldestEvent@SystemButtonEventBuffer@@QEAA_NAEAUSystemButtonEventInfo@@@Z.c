/*
 * XREFs of ?GetOldestEvent@SystemButtonEventBuffer@@QEAA_NAEAUSystemButtonEventInfo@@@Z @ 0x18003024C
 * Callers:
 *     ?OnContinueProcessing@SystemButtonEventController@@MEAAJAEBUSystemButtonEventInfo@@@Z @ 0x18002FA90 (-OnContinueProcessing@SystemButtonEventController@@MEAAJAEBUSystemButtonEventInfo@@@Z.c)
 *     ?OnDisconnected@SystemButtonEventController@@MEAAJXZ @ 0x18002FB90 (-OnDisconnected@SystemButtonEventController@@MEAAJXZ.c)
 * Callees:
 *     ??$_Ptr_copy_cat@$$CBUPointData3D@@U1@@std@@YA?AU_Really_trivial_ptr_iterator_tag@0@AEBQEBUPointData3D@@AEBQEAU2@@Z @ 0x18000A2B4 (--$_Ptr_copy_cat@$$CBUPointData3D@@U1@@std@@YA-AU_Really_trivial_ptr_iterator_tag@0@AEBQEBUPoint.c)
 *     memmove_0 @ 0x18003788B (memmove_0.c)
 */

char __fastcall SystemButtonEventBuffer::GetOldestEvent(
        SystemButtonEventBuffer *this,
        struct SystemButtonEventInfo *a2)
{
  char v3; // si
  _OWORD *v4; // rcx
  __int64 v5; // rbx
  char v7; // [rsp+40h] [rbp+8h] BYREF
  void *Src; // [rsp+50h] [rbp+18h]
  void *v9; // [rsp+58h] [rbp+20h]

  v3 = 0;
  v4 = *(_OWORD **)this;
  if ( (__int64)(*((_QWORD *)this + 1) - (_QWORD)v4) >> 4 )
  {
    v3 = 1;
    *(_OWORD *)a2 = *v4;
    v5 = *((_QWORD *)this + 1);
    v9 = *(void **)this;
    Src = (char *)v9 + 16;
    std::_Ptr_copy_cat<PointData3D const,PointData3D>(&v7);
    memmove_0(v9, Src, v5 - (_QWORD)Src);
    *((_QWORD *)this + 1) -= 16LL;
  }
  return v3;
}
