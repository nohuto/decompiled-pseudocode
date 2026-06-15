/*
 * XREFs of ?GetSaDevices@CDeviceGraphObjectsStore@@IEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800E81A4
 * Callers:
 *     ?GetAllSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800E7940 (-GetAllSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Mic.c)
 *     ?GetOffloadSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800E8190 (-GetOffloadSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL.c)
 *     ?GetSharedSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800E82B0 (-GetSharedSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@.c)
 * Callees:
 *     _lambda_0e41d75607236968788bdd59460e85d3_::operator() @ 0x1800E7084 (_lambda_0e41d75607236968788bdd59460e85d3_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphObjectsStore::GetSaDevices(__int64 a1, char **a2, int a3)
{
  __int64 v3; // rdi
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  const char *v7; // r9
  __int64 j; // rdi
  _QWORD *v9; // r15
  _QWORD *k; // rsi
  int *i; // rax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char **v14; // [rsp+60h] [rbp+8h] BYREF
  int v15; // [rsp+70h] [rbp+18h] BYREF
  char v16; // [rsp+74h] [rbp+1Ch] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+78h] [rbp+20h]

  v3 = a3;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  try
  {
    v17 = v6;
    v15 = 0;
    if ( (int)v3 >= 4 )
    {
      for ( i = &v15; i != (int *)&v16; i = (int *)((char *)i + 1) )
        *(_BYTE *)i = 1;
    }
    else
    {
      *((_BYTE *)&v15 + v3) = 1;
    }
    for ( j = 0LL; (unsigned int)j < 4; j = (unsigned int)(j + 1) )
    {
      if ( *((_BYTE *)&v15 + j) )
      {
        v14 = a2;
        v9 = *(_QWORD **)(a1 + 24 * j + 96);
        for ( k = *(_QWORD **)(a1 + 24 * j + 88); k != v9; ++k )
          lambda_0e41d75607236968788bdd59460e85d3_::operator()(&v14, k);
      }
    }
    if ( v6 )
      LeaveCriticalSection(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1EA,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                           v7);
  }
  return result;
}
