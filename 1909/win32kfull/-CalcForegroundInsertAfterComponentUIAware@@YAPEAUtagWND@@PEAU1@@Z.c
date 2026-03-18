/*
 * XREFs of ?CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C001AD30
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 * Callees:
 *     CalcForegroundInsertAfter @ 0x1C001AD5C (CalcForegroundInsertAfter.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0027734 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

struct tagWND *__fastcall CalcForegroundInsertAfterComponentUIAware(struct tagWND *a1)
{
  struct tagWND *result; // rax

  result = (struct tagWND *)CalcForegroundInsertAfter(a1);
  if ( !*((_QWORD *)a1 + 15) )
    return CoreWindowProp::GetCompositeAppFrameWindowOrSelf(result);
  return result;
}
