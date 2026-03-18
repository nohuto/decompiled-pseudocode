/*
 * XREFs of ?ExchangeDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEAAJPEAVDXGDISPLAYMANAGEROBJECT@@0@Z @ 0x1C0283A04
 * Callers:
 *     ?DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z @ 0x1C013908C (-DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z.c)
 *     DmmDoForSpecifiedTarget__lambda_282b3ae622458216dccf572a010eafad___ @ 0x1C02783F0 (DmmDoForSpecifiedTarget__lambda_282b3ae622458216dccf572a010eafad___.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDEOPRESENTTARGET::ExchangeDisplayManagerObject(
        DMMVIDEOPRESENTTARGET *this,
        struct DXGDISPLAYMANAGEROBJECT *a2,
        struct DXGDISPLAYMANAGEROBJECT *a3)
{
  struct DXGDISPLAYMANAGEROBJECT *v3; // rax
  __int64 v4; // rax

  v3 = (struct DXGDISPLAYMANAGEROBJECT *)*((_QWORD *)this + 66);
  if ( v3 != a2 )
  {
    if ( v3 != a3 )
    {
      v4 = WdLogNewEntry5_WdError(this);
      WdLogEvent5_WdError(v4);
      return 3221225506LL;
    }
    *((_QWORD *)this + 66) = a2;
  }
  return 0LL;
}
