/*
 * XREFs of ?GetSaDevices@CDeviceGraphObjectsStore@@IEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800042B4
 * Callers:
 *     ?GetAllSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800042A0 (-GetAllSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Mic.c)
 *     ?GetOffloadSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800F32B0 (-GetOffloadSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL.c)
 *     ?GetSharedSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800F32D0 (-GetSharedSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@.c)
 * Callees:
 *     _lambda_0e41d75607236968788bdd59460e85d3_::operator() @ 0x1800F21C4 (_lambda_0e41d75607236968788bdd59460e85d3_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphObjectsStore::GetSaDevices(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  const char *v7; // r9
  int *i; // rax
  __int64 j; // rdi
  __int64 v10; // r15
  __int64 k; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  int v15; // [rsp+70h] [rbp+18h] BYREF
  char v16; // [rsp+74h] [rbp+1Ch] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+78h] [rbp+20h]

  v3 = a3;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v17 = v6;
  v15 = 0;
  if ( (int)v3 < 4 )
  {
    try
    {
      *((_BYTE *)&v15 + v3) = 1;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x1EA,
                             (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                             v7);
    }
  }
  else
  {
    for ( i = &v15; i != (int *)&v16; i = (int *)((char *)i + 1) )
      *(_BYTE *)i = 1;
  }
  for ( j = 0LL; (unsigned int)j < 4; j = (unsigned int)(j + 1) )
  {
    if ( *((_BYTE *)&v15 + j) )
    {
      v14 = a2;
      v10 = *(_QWORD *)(a1 + 24 * j + 96);
      for ( k = *(_QWORD *)(a1 + 24 * j + 88); k != v10; k += 8LL )
        lambda_0e41d75607236968788bdd59460e85d3_::operator()(&v14, k);
    }
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
