/*
 * XREFs of ?CompleteRemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIVResourceHandle@@@Z @ 0x1C000224C
 * Callers:
 *     ?RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x1C0001AA4 (-RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 * Callees:
 *     ?GetCrossChannelVisualChildNoRef@CVisualMarshaler@DirectComposition@@QEAAPEAVCCrossChannelParentVisualMarshaler@2@VResourceHandle@@@Z @ 0x1C0002330 (-GetCrossChannelVisualChildNoRef@CVisualMarshaler@DirectComposition@@QEAAPEAVCCrossChannelParent.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C00141E8 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CompleteRemoveCrossChannelVisualChild(
        DirectComposition::CApplicationChannel *a1,
        int a2,
        int a3,
        int a4)
{
  unsigned __int64 v5; // rcx
  struct DirectComposition::CResourceMarshaler *v8; // rsi
  __int64 CrossChannelVisualChildNoRef; // rbx
  __int64 v10; // rax
  int v11; // ebx
  unsigned __int64 v13; // rdx
  char v14; // [rsp+48h] [rbp+10h] BYREF

  v5 = (unsigned int)(a2 - 1);
  if ( a2 && v5 < *((_QWORD *)a1 + 10) )
  {
    _mm_lfence();
    v8 = *(struct DirectComposition::CResourceMarshaler **)(v5 * *((_QWORD *)a1 + 11) + *((_QWORD *)a1 + 7));
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
    return (unsigned int)-1073741790;
  if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v8 + 120LL))(
          v8,
          189LL) )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    v13 = (unsigned int)(a3 - 1);
    if ( v13 >= *((_QWORD *)a1 + 10) )
    {
      CrossChannelVisualChildNoRef = 0LL;
    }
    else
    {
      _mm_lfence();
      CrossChannelVisualChildNoRef = *(_QWORD *)(v13 * *((_QWORD *)a1 + 11) + *((_QWORD *)a1 + 7));
    }
    if ( CrossChannelVisualChildNoRef )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)CrossChannelVisualChildNoRef + 120LL))(
             CrossChannelVisualChildNoRef,
             189LL) )
      {
        goto LABEL_9;
      }
      return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741790;
  }
  if ( !a4 )
    return (unsigned int)-1073741811;
  CrossChannelVisualChildNoRef = DirectComposition::CVisualMarshaler::GetCrossChannelVisualChildNoRef(v8);
  if ( !CrossChannelVisualChildNoRef )
    return (unsigned int)-1073741811;
LABEL_9:
  v10 = *(_QWORD *)v8;
  v14 = 0;
  v11 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, __int64, char *))(v10 + 256))(
          v8,
          a1,
          CrossChannelVisualChildNoRef,
          &v14);
  if ( v11 >= 0 && v14 )
    DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a1, v8);
  return (unsigned int)v11;
}
