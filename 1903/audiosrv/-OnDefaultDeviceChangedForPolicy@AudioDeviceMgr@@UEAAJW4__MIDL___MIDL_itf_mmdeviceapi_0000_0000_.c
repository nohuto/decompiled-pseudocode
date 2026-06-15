/*
 * XREFs of ?OnDefaultDeviceChangedForPolicy@AudioDeviceMgr@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x180146190
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x180051D68 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180053D70 (--2@YAPEAX_K@Z.c)
 *     ?AddWorkItemToQueue@AudioDeviceMgr@@AEAAJPEAVWorkItemBase@@@Z @ 0x180145C0C (-AddWorkItemToQueue@AudioDeviceMgr@@AEAAJPEAVWorkItemBase@@@Z.c)
 */

__int64 __fastcall AudioDeviceMgr::OnDefaultDeviceChangedForPolicy(__int64 a1, int a2, int a3, _WORD *a4)
{
  unsigned int v5; // ebx
  __int64 *v9; // rdi
  int v10; // eax

  v5 = 0;
  v9 = (__int64 *)operator new(0x18uLL);
  if ( v9 )
  {
    *v9 = (__int64)&WorkItemBase::`vftable';
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      v9 + 1,
      a4);
    *((_DWORD *)v9 + 4) = a3;
    *v9 = (__int64)&DefaultDeviceChangedWorkItem::`vftable';
    *((_DWORD *)v9 + 5) = a2;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    v10 = AudioDeviceMgr::AddWorkItemToQueue((AudioDeviceMgr *)(a1 - 8), (struct WorkItemBase *)v9);
    if ( v10 < 0 )
      return (unsigned int)v10;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
