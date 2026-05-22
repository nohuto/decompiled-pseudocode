/*
 * XREFs of ??0InputObserverClientProxy@@QEAA@PEAVCInputObserverManager@@@Z @ 0x180067158
 * Callers:
 *     ?CreateInputObserverClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputObserverClientProxy@@@Z @ 0x180067214 (-CreateInputObserverClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputObserverCli.c)
 * Callees:
 *     <none>
 */

InputObserverClientProxy *__fastcall InputObserverClientProxy::InputObserverClientProxy(
        InputObserverClientProxy *this,
        struct CInputObserverManager *a2)
{
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 2) = &BamoImpl::BamoMPCConstantManagerClientCallbacksProxyImpl::`vftable';
  *((_DWORD *)this + 10) = 0;
  *((_WORD *)this + 22) = 0;
  *(_QWORD *)this = &InputObserverClientProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)this + 1) = &InputObserverClientProxy::`vftable'{for `IInputObserverClientProxy'};
  *((_QWORD *)this + 6) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 6);
  *((_DWORD *)this + 14) = 1;
  return this;
}
