/*
 * XREFs of ??0?$CComAggObject@VCAudioDeviceGraph@@@ATL@@QEAA@PEAX@Z @ 0x140026070
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140026B0C (-CreateInstance@-$CComCreator@V-$CComAggObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@.c)
 * Callees:
 *     ??0CAudioDeviceGraph@@QEAA@XZ @ 0x14000E9DC (--0CAudioDeviceGraph@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComAggObject<CAudioDeviceGraph>::CComAggObject<CAudioDeviceGraph>(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CAudioDeviceGraph>::`vftable';
  v4 = (_QWORD *)(a1 + 24);
  CAudioDeviceGraph::CAudioDeviceGraph((CAudioDeviceGraph *)(a1 + 24));
  *v4 = &ATL::CComContainedObject<CAudioDeviceGraph>::`vftable'{for `IAudioDeviceGraph'};
  v4[1] = &ATL::CComContainedObject<CAudioDeviceGraph>::`vftable'{for `IAudioProtectedOutput'};
  v4[2] = &ATL::CComContainedObject<CAudioDeviceGraph>::`vftable'{for `IAudioDeviceGraphInternal'};
  v4[3] = a2;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
