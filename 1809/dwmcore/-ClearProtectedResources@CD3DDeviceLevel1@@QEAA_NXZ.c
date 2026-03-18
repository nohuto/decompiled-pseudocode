/*
 * XREFs of ?ClearProtectedResources@CD3DDeviceLevel1@@QEAA_NXZ @ 0x1801FB59C
 * Callers:
 *     ?ClearD2DCaches@CD3DDeviceManager@@QEAA_NK@Z @ 0x1800CE320 (-ClearD2DCaches@CD3DDeviceManager@@QEAA_NK@Z.c)
 * Callees:
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x180090EAC (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?MarkHardwareProtectedResourcesInvalid@CD2DResourceManager@@QEAA_NXZ @ 0x180205EA0 (-MarkHardwareProtectedResourcesInvalid@CD2DResourceManager@@QEAA_NXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::ClearProtectedResources(CD3DDeviceLevel1 *this)
{
  bool v2; // di
  CD2DResourceManager *v3; // rcx
  __int64 v4; // rcx
  CD3DResourceManager *v5; // rbp
  char v6; // r15
  char *v7; // rsi
  char *v8; // rbx
  struct CD3DResource ***v9; // r14
  __int64 result; // rax

  v2 = 0;
  v3 = (CD2DResourceManager *)*((_QWORD *)this + 25);
  if ( v3 )
    v2 = CD2DResourceManager::MarkHardwareProtectedResourcesInvalid(v3);
  v4 = *((_QWORD *)this + 28);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
    v2 = 1;
  }
  v5 = (CD3DDeviceLevel1 *)((char *)this + 864);
  v6 = 0;
  v7 = (char *)this + 896;
  v8 = (char *)*((_QWORD *)this + 112);
  while ( v8 != v7 )
  {
    v9 = (struct CD3DResource ***)(v8 - 32);
    v8 = *(char **)v8;
    if ( *((_DWORD *)v9 + 2) && ((unsigned __int8 (__fastcall *)(struct CD3DResource ***))(*v9)[3])(v9) )
    {
      CD3DResourceManager::DestroyResource(v5, v9);
      v6 = 1;
    }
  }
  result = v2;
  if ( v6 )
    return 1LL;
  return result;
}
