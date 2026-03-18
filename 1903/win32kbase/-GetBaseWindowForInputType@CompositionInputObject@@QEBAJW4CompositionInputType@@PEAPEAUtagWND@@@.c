/*
 * XREFs of ?GetBaseWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C01C7BD0
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUCONTAINER_ID@@PEAUtagINPUTDEST@@@Z @ 0x1C0001728 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUCONTAINER_ID@@PEAUtagINPUTDEST@@@.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0037C84 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0037D50 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?GetBaseWindowForInputType@CInputSink@@IEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C01C7C44 (-GetBaseWindowForInputType@CInputSink@@IEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z.c)
 */

__int64 __fastcall CompositionInputObject::GetBaseWindowForInputType(__int64 a1, unsigned int a2, _QWORD *a3)
{
  int BaseWindowForInputType; // ebx

  *a3 = 0LL;
  BaseWindowForInputType = CPushLock::AcquireLockShared((CPushLock *)(a1 + 32));
  if ( BaseWindowForInputType >= 0 )
  {
    BaseWindowForInputType = CInputSink::GetBaseWindowForInputType(a1 + 24, a2, a3);
    CPushLock::ReleaseLock((CPushLock *)(a1 + 32));
  }
  return (unsigned int)BaseWindowForInputType;
}
