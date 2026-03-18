/*
 * XREFs of ?Release@CAnimationTimeList@DirectComposition@@QEAAKXZ @ 0x1C008FD40
 * Callers:
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C0007088 (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C000E7B4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0013C00 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ??1CAnimationMarshaler@DirectComposition@@UEAA@XZ @ 0x1C008FC24 (--1CAnimationMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ?UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z @ 0x1C00931B0 (-UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C01A6DF4 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 */

__int64 __fastcall DirectComposition::CAnimationTimeList::Release(DirectComposition::CAnimationTimeList *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 12);
  if ( !v1 )
    Win32FreePool((__int64)this);
  return v1;
}
