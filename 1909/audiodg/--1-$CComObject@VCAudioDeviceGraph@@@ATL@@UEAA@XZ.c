/*
 * XREFs of ??1?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x14002617C
 * Callers:
 *     ??_G?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z @ 0x1400263B0 (--_G-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?FinalRelease@CAudioDeviceGraph@@QEAAXXZ @ 0x14003780C (-FinalRelease@CAudioDeviceGraph@@QEAAXXZ.c)
 */

void __fastcall ATL::CComObject<CAudioDeviceGraph>::~CComObject<CAudioDeviceGraph>(CAudioDeviceGraph *this)
{
  *(_QWORD *)this = &ATL::CComObject<CAudioDeviceGraph>::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CAudioDeviceGraph>::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 2) = &ATL::CComObject<CAudioDeviceGraph>::`vftable'{for `IAudioDeviceGraphInternal'};
  *((_DWORD *)this + 6) = -1073741823;
  CAudioDeviceGraph::FinalRelease(this);
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CAudioDeviceGraph::~CAudioDeviceGraph(this);
}
