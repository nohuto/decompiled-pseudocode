/*
 * XREFs of ?CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C006E5AC
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 * Callees:
 *     CalcForegroundInsertAfter @ 0x1C006E5D8 (CalcForegroundInsertAfter.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C006E820 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

struct tagWND *__fastcall CalcForegroundInsertAfterComponentUIAware(struct tagWND *a1)
{
  struct tagWND *result; // rax

  result = (struct tagWND *)CalcForegroundInsertAfter();
  if ( !*((_QWORD *)a1 + 12) )
    return CoreWindowProp::GetCompositeAppFrameWindowOrSelf(result);
  return result;
}
