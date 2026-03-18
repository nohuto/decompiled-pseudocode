/*
 * XREFs of ??4?$unique_ptr@VCRemoteSuperWetSource@@U?$default_delete@VCRemoteSuperWetSource@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801C6570
 * Callers:
 *     ?EnableRemoteSuperWet@CCompositionSurfaceBitmap@@QEAAJ_N@Z @ 0x1801C6918 (-EnableRemoteSuperWet@CCompositionSurfaceBitmap@@QEAAJ_N@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800207E8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ?RemoveSource@CWetInkManager@@QEAAXPEAVISuperWetSource@@@Z @ 0x180250514 (-RemoveSource@CWetInkManager@@QEAAXPEAVISuperWetSource@@@Z.c)
 */

__int64 *__fastcall std::unique_ptr<CRemoteSuperWetSource>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
    {
      *(_QWORD *)v4 = &CRemoteSuperWetSource::`vftable';
      CWetInkManager::RemoveSource(
        *(CWetInkManager **)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 16LL) + 104LL),
        (struct ISuperWetSource *)v4);
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)(v4 + 8));
      operator delete((void *)v4);
    }
  }
  return a1;
}
