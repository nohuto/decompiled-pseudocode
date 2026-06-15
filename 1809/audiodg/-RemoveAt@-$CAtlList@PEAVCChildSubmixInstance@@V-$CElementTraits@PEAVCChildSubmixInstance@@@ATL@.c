/*
 * XREFs of ?RemoveAt@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1400128AC
 * Callers:
 *     ?OnLeftSubmixDisconnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140012A60 (-OnLeftSubmixDisconnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?DestroyStream@CSubmixImpl@@UEAAJ_K@Z @ 0x140012EC0 (-DestroyStream@CSubmixImpl@@UEAAJ_K@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x1400105D0 (-RemoveAll@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QE.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031A04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::RemoveAt(
        __int64 **a1,
        __int64 *a2)
{
  __int64 *v2; // r8
  __int64 *v3; // r8
  bool v4; // zf

  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v2 = (__int64 *)*a2;
  if ( a2 == *a1 )
    *a1 = v2;
  else
    *(_QWORD *)a2[1] = v2;
  v3 = (__int64 *)a2[1];
  if ( a2 == a1[1] )
    a1[1] = v3;
  else
    *(_QWORD *)(*a2 + 8) = v3;
  *a2 = (__int64)a1[4];
  v4 = a1[2] == (__int64 *)1;
  a1[2] = (__int64 *)((char *)a1[2] - 1);
  a1[4] = a2;
  if ( v4 )
    ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAll((__int64)a1);
}
