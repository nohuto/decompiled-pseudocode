/*
 * XREFs of ??_GCAdapter@@IEAAPEAXI@Z @ 0x1C0013AA0
 * Callers:
 *     ?Release@CAdapter@@UEAAJXZ @ 0x1C0013A70 (-Release@CAdapter@@UEAAJXZ.c)
 *     ?Create@CAdapter@@SAJAEBUCSM_TOKEN_ADAPTER_INFO@@IPEAPEAV1@@Z @ 0x1C0013C1C (-Create@CAdapter@@SAJAEBUCSM_TOKEN_ADAPTER_INFO@@IPEAPEAV1@@Z.c)
 * Callees:
 *     DxgkDestroyDeviceInternal @ 0x1C0133484 (DxgkDestroyDeviceInternal.c)
 *     DxgkDestroyContextInternal @ 0x1C013349C (DxgkDestroyContextInternal.c)
 *     ?DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z @ 0x1C01334C0 (-DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z.c)
 *     DxgkCloseAdapterInternal @ 0x1C0133CE4 (DxgkCloseAdapterInternal.c)
 */

PVOID __fastcall CAdapter::`scalar deleting destructor'(PVOID P, D3DKMT_HANDLE a2)
{
  void *v3; // rcx
  void *v4; // rcx
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v6; // [rsp+38h] [rbp+10h] BYREF

  v6.hSyncObject = a2;
  *(_QWORD *)P = &CAdapter::`vftable';
  v3 = (void *)*((_QWORD *)P + 5);
  if ( v3 != (void *)-1LL )
    ObCloseHandle(v3, 1);
  v4 = (void *)*((_QWORD *)P + 7);
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( *((_DWORD *)P + 12) )
  {
    v6.hSyncObject = *((_DWORD *)P + 12);
    DxgkCddDestroySynchronizationObject(&v6);
  }
  if ( *((_DWORD *)P + 16) )
  {
    v6.hSyncObject = *((_DWORD *)P + 16);
    DxgkDestroyContextInternal(&v6);
  }
  if ( *((_DWORD *)P + 9) )
  {
    v6.hSyncObject = *((_DWORD *)P + 9);
    DxgkDestroyDeviceInternal(&v6);
  }
  if ( *((_DWORD *)P + 8) )
  {
    v6.hSyncObject = *((_DWORD *)P + 8);
    DxgkCloseAdapterInternal(&v6);
  }
  ExFreePoolWithTag(P, 0);
  return P;
}
