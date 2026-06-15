/*
 * XREFs of ?OnDeviceStateChanged@AudioDeviceMgr@@UEAAJPEBGK@Z @ 0x180142290
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000CFC0 (--2@YAPEAX_K@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18005D85C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?AddWorkItemToQueue@AudioDeviceMgr@@AEAAJPEAVWorkItemBase@@@Z @ 0x180141BAC (-AddWorkItemToQueue@AudioDeviceMgr@@AEAAJPEAVWorkItemBase@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioDeviceMgr::OnDeviceStateChanged(AudioDeviceMgr *this, unsigned __int16 *a2, int a3)
{
  unsigned int v6; // ebx
  void **v7; // rdi
  int v8; // eax

  v6 = 0;
  v7 = (void **)operator new(0x18uLL);
  if ( v7 )
  {
    *v7 = &WorkItemBase::`vftable';
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      v7 + 1,
      a2);
    *v7 = &DeviceStateChangedWorkItem::`vftable';
    *((_DWORD *)v7 + 4) = a3;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v8 = AudioDeviceMgr::AddWorkItemToQueue((AudioDeviceMgr *)((char *)this - 8), (struct WorkItemBase *)v7);
    if ( v8 < 0 )
      return (unsigned int)v8;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v6;
}
