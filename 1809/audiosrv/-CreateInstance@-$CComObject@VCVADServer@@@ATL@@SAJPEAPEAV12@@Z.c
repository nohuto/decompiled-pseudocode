/*
 * XREFs of ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x18002D580
 * Callers:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x180030000 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18002D550 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x18002D888 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180064110 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?InternalFinalConstructRelease@CVADServer@@QEAAXXZ @ 0x1800D9E1C (-InternalFinalConstructRelease@CVADServer@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ATL::CComObject<CVADServer>::CreateInstance(_QWORD *a1)
{
  _QWORD *v1; // r14
  unsigned int v3; // esi
  HANDLE ProcessHeap; // rax
  _DWORD *v5; // rax
  volatile int *v6; // rdx
  _DWORD *v7; // rbx
  int v8; // eax
  _QWORD v9[11]; // [rsp+0h] [rbp-58h] BYREF
  _DWORD *v11; // [rsp+70h] [rbp+18h]

  v9[4] = -2LL;
  v1 = a1;
  if ( !a1 )
    return 2147500035LL;
  *a1 = 0LL;
  v3 = -2147024882;
  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0x200uLL);
  try
  {
    v7 = v5;
    if ( v5 )
    {
      v5[2] = 0;
      *((_QWORD *)v5 + 2) = 0LL;
      *((_QWORD *)v5 + 3) = 0LL;
      *((_QWORD *)v5 + 4) = 0LL;
      *((_QWORD *)v5 + 5) = 0LL;
      *((_QWORD *)v5 + 6) = 0LL;
      *((_BYTE *)v5 + 56) = 0;
      v5[16] = 0;
      *((_QWORD *)v5 + 9) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
      *((_QWORD *)v7 + 10) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
      *((_QWORD *)v7 + 11) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
      *((_QWORD *)v7 + 14) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
      *((GUID *)v7 + 6) = GUID_00000000_0000_0000_0000_000000000000;
      v7[30] = 0;
      v7[33] = -1;
      v7[32] = 0;
      v7[34] = 0;
      *((_QWORD *)v7 + 18) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
      *((_QWORD *)v7 + 19) = 0LL;
      *((_QWORD *)v7 + 20) = 0LL;
      *((_QWORD *)v7 + 21) = 0LL;
      *((_QWORD *)v7 + 22) = 0LL;
      v7[46] = 0;
      *((_BYTE *)v7 + 188) = 0;
      *((_QWORD *)v7 + 24) = 0LL;
      *((_BYTE *)v7 + 200) = 1;
      *((_QWORD *)v7 + 26) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
      *((_QWORD *)v7 + 27) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
      ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)(v7 + 56));
      v7[68] = 0;
      *(GUID *)(v7 + 102) = GUID_00000000_0000_0000_0000_000000000000;
      *((_QWORD *)v7 + 53) = 0LL;
      *((_QWORD *)v7 + 54) = 0LL;
      *((_QWORD *)v7 + 55) = 0LL;
      *((_QWORD *)v7 + 56) = 0LL;
      *((_BYTE *)v7 + 456) = 0;
      *((_QWORD *)v7 + 58) = 0LL;
      *((_QWORD *)v7 + 60) = 0LL;
      *((_QWORD *)v7 + 59) = 0LL;
      QueryPerformanceFrequency((LARGE_INTEGER *)v7 + 61);
      *((_QWORD *)v7 + 62) = 0LL;
      *((_QWORD *)v7 + 63) = 0LL;
      memset_0(v7 + 70, 0, 0x80uLL);
      *(_QWORD *)(v7 + 75) = 0LL;
      v7[74] = 0;
      v7[94] = 0;
      *(_QWORD *)v7 = &ATL::CComObject<CVADServer>::`vftable';
      (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    }
    else
    {
      v7 = 0LL;
    }
    v11 = v7;
  }
  catch ( ... )
  {
    v6 = (volatile int *)v9;
    v1 = a1;
    v3 = -2147024882;
    v7 = v11;
  }
  if ( v7 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v7 + 2), v6);
    v8 = ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)(v7 + 4));
    if ( v8 >= 0 )
    {
      *((_BYTE *)v7 + 56) = 1;
      v8 = 0;
    }
    v3 = 0;
    if ( v8 < 0 )
      v3 = v8;
    CVADServer::InternalFinalConstructRelease((CVADServer *)v7);
    if ( v3 )
    {
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v7 + 224LL))(v7, 1LL);
      v7 = 0LL;
    }
  }
  *v1 = v7;
  return v3;
}
