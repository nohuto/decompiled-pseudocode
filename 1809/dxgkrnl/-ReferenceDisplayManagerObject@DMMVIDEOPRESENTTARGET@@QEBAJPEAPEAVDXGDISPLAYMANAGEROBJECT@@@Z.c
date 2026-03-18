/*
 * XREFs of ?ReferenceDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEBAJPEAPEAVDXGDISPLAYMANAGEROBJECT@@@Z @ 0x1C0139144
 * Callers:
 *     DmmDoForSpecifiedTarget__lambda_babeb6617360c1278b0dac3884c10b63___ @ 0x1C011F588 (DmmDoForSpecifiedTarget__lambda_babeb6617360c1278b0dac3884c10b63___.c)
 *     ?DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z @ 0x1C013908C (-DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDEOPRESENTTARGET::ReferenceDisplayManagerObject(
        DMMVIDEOPRESENTTARGET *this,
        struct DXGDISPLAYMANAGEROBJECT **a2)
{
  __int64 v2; // rax

  *a2 = 0LL;
  v2 = *((_QWORD *)this + 66);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    *a2 = (struct DXGDISPLAYMANAGEROBJECT *)*((_QWORD *)this + 66);
  }
  return 0LL;
}
