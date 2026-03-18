/*
 * XREFs of EditionGetTopLevelWindowWithComponentUI @ 0x1C01BF550
 * Callers:
 *     <none>
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0030730 (_GetTopLevelWindow.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C006E820 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

const struct tagWND *__fastcall EditionGetTopLevelWindowWithComponentUI(__int64 a1)
{
  const struct tagWND *result; // rax

  result = (const struct tagWND *)GetTopLevelWindow(a1);
  if ( result )
    return CoreWindowProp::GetCompositeAppFrameWindowOrSelf(result);
  return result;
}
