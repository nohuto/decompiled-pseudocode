/*
 * XREFs of ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C0060C7C
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C009C000 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     _lambda_49808adf2e8287706ad80fa46f25ee96_::operator() @ 0x1C00A9E58 (_lambda_49808adf2e8287706ad80fa46f25ee96_--operator().c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00F7354 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     EngFreeMem @ 0x1C0060D80 (EngFreeMem.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C01091C4 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

void __fastcall PDEV::Free(struct PDEV *a1, int a2)
{
  if ( a2 )
  {
    EngFreeMem(a1);
  }
  else
  {
    if ( *((_QWORD *)a1 + 444) )
      ReleaseReferenceCountedObjectHandle(1LL);
    Win32FreePool((__int64)a1);
  }
}
