/*
 * XREFs of ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x18001F1EC
 * Callers:
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z @ 0x18001F010 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z.c)
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z @ 0x1800B1C78 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z.c)
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@@Z @ 0x1800B1FC0 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@W4__MIDL___MIDL_itf_mmdevi.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001FB10 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall COnDeviceWorkItem::COnDeviceWorkItem(_QWORD *a1, __int64 a2, int a3)
{
  int v3; // esi
  _QWORD *v5; // rbx
  unsigned int v6; // eax
  __int64 v7; // rdx
  ATL::CAtlException *v9; // [rsp+28h] [rbp-20h] BYREF

  v3 = a3;
  v5 = a1;
  *a1 = &COnDeviceWorkItem::`vftable';
  a1[1] = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  v6 = 0;
  if ( a2 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)(a2 + 2 * v7) );
    v6 = v7;
  }
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(v5 + 1, a2, v6);
  }
  catch ( ATL::CAtlException *v9 )
  {
    if ( *(_DWORD *)v9 == -1073741571 )
      _o__resetstkoflw();
    v5 = a1;
    v3 = a3;
  }
  *((_DWORD *)v5 + 4) = v3;
  return v5;
}
