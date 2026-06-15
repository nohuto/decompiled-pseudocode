/*
 * XREFs of ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x180026B00
 * Callers:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x180028320 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180025300 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180026DD0 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ATL::CComObject<CVADServer>::CreateInstance(_QWORD *a1)
{
  _QWORD *v1; // r14
  int v2; // esi
  HANDLE ProcessHeap; // rax
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  _DWORD *v8; // [rsp+70h] [rbp+18h]

  v1 = a1;
  if ( !a1 )
    return 2147500035LL;
  *a1 = 0LL;
  v2 = -2147024882;
  ProcessHeap = GetProcessHeap();
  v4 = HeapAlloc(ProcessHeap, 0, 0x228uLL);
  try
  {
    v5 = v4;
    if ( v4 )
    {
      v4[2] = 0;
      *((_QWORD *)v4 + 2) = 0LL;
      *((_QWORD *)v4 + 3) = 0LL;
      *((_QWORD *)v4 + 4) = 0LL;
      *((_QWORD *)v4 + 5) = 0LL;
      *((_QWORD *)v4 + 6) = 0LL;
      *((_BYTE *)v4 + 56) = 0;
      v4[16] = 0;
      *((_QWORD *)v4 + 9) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
      *((_QWORD *)v5 + 10) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
      *((_QWORD *)v5 + 11) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
      *((_QWORD *)v5 + 14) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
      *((GUID *)v5 + 6) = GUID_00000000_0000_0000_0000_000000000000;
      v5[30] = 0;
      v5[33] = -1;
      v5[32] = 0;
      v5[34] = 0;
      *((_QWORD *)v5 + 18) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
      *((_QWORD *)v5 + 19) = 0LL;
      *((_QWORD *)v5 + 20) = 0LL;
      *((_QWORD *)v5 + 21) = 0LL;
      *((_QWORD *)v5 + 22) = 0LL;
      v5[46] = 0;
      *((_BYTE *)v5 + 188) = 0;
      *((_QWORD *)v5 + 24) = 0LL;
      *((_BYTE *)v5 + 200) = 1;
      *((_QWORD *)v5 + 26) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
      *((_QWORD *)v5 + 27) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
      ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)(v5 + 56));
      v5[68] = 0;
      *(GUID *)(v5 + 110) = GUID_00000000_0000_0000_0000_000000000000;
      *((_QWORD *)v5 + 57) = 0LL;
      *((_QWORD *)v5 + 58) = 0LL;
      *((_QWORD *)v5 + 59) = 0LL;
      *((_QWORD *)v5 + 60) = 0LL;
      *((_BYTE *)v5 + 488) = 0;
      *((_QWORD *)v5 + 62) = 0LL;
      *((_QWORD *)v5 + 64) = 0LL;
      *((_QWORD *)v5 + 63) = 0LL;
      QueryPerformanceFrequency((LARGE_INTEGER *)v5 + 65);
      *((_QWORD *)v5 + 66) = 0LL;
      *((_QWORD *)v5 + 67) = 0LL;
      v5[136] = 0;
      memset_0(v5 + 70, 0, 0xA0uLL);
      *(_QWORD *)(v5 + 83) = 0LL;
      v5[82] = 0;
      v5[102] = 0;
      *(_QWORD *)v5 = &ATL::CComObject<CVADServer>::`vftable';
      (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    }
    else
    {
      v5 = 0LL;
    }
    v8 = v5;
  }
  catch ( ... )
  {
    v1 = a1;
    v2 = -2147024882;
    v5 = v8;
  }
  if ( v5 )
  {
    _InterlockedIncrement(v5 + 2);
    v2 = ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)(v5 + 4));
    if ( v2 >= 0 )
    {
      *((_BYTE *)v5 + 56) = 1;
      v2 = 0;
    }
    _InterlockedDecrement(v5 + 2);
    if ( v2 )
    {
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v5 + 224LL))(v5, 1LL);
      v5 = 0LL;
    }
  }
  *v1 = v5;
  return (unsigned int)v2;
}
