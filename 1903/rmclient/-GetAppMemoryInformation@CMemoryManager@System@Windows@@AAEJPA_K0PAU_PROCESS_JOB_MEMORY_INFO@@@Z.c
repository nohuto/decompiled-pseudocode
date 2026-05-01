/*
 * XREFs of ?GetAppMemoryInformation@CMemoryManager@System@Windows@@AAEJPA_K0PAU_PROCESS_JOB_MEMORY_INFO@@@Z @ 0x10008D40
 * Callers:
 *     ?get_AppMemoryUsageLimit@CMemoryManager@System@Windows@@UAGJPA_K@Z @ 0x10007BF0 (-get_AppMemoryUsageLimit@CMemoryManager@System@Windows@@UAGJPA_K@Z.c)
 *     ?GetAppMemoryReport@CMemoryManager@System@Windows@@UAGJPAPAUIAppMemoryReport@23@@Z @ 0x100083E0 (-GetAppMemoryReport@CMemoryManager@System@Windows@@UAGJPAPAUIAppMemoryReport@23@@Z.c)
 *     ?get_ExpectedAppMemoryUsageLimit@CMemoryManager@System@Windows@@UAGJPA_K@Z @ 0x100111B0 (-get_ExpectedAppMemoryUsageLimit@CMemoryManager@System@Windows@@UAGJPA_K@Z.c)
 * Callees:
 *     ?RegisterWithServer@ModernResourceManagerProxy@@IAEJXZ @ 0x10008F50 (-RegisterWithServer@ModernResourceManagerProxy@@IAEJXZ.c)
 *     ?Init@CMemoryManager@System@Windows@@CGJXZ @ 0x10009DC0 (-Init@CMemoryManager@System@Windows@@CGJXZ.c)
 *     @__security_check_cookie@4 @ 0x1000C990 (@__security_check_cookie@4.c)
 */

int __thiscall Windows::System::CMemoryManager::GetAppMemoryInformation(
        Windows::System::CMemoryManager *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        struct _PROCESS_JOB_MEMORY_INFO *a4)
{
  unsigned __int64 *v4; // edi
  int InformationProcess; // eax
  ModernResourceManagerProxy *v6; // esi
  char *v7; // edi
  NTSTATUS v8; // eax
  int v9; // ebx
  int v10; // esi
  unsigned __int64 v11; // kr08_8
  int result; // eax
  char *v13; // edi
  DWORD CurrentThreadId; // eax
  ModernResourceManagerProxy *v15; // ecx
  signed int v16; // edi
  NTSTATUS v17; // eax
  unsigned __int64 v18; // kr00_8
  unsigned __int64 *v19; // eax
  signed int v20; // eax
  unsigned __int64 v21; // kr10_8
  char *v22; // [esp-4h] [ebp-94h]
  signed int v23; // [esp+10h] [ebp-80h]
  unsigned __int64 ReturnLength; // [esp+18h] [ebp-78h] BYREF
  ModernResourceManagerProxy *v25; // [esp+20h] [ebp-70h] BYREF
  int v26; // [esp+24h] [ebp-6Ch] BYREF
  unsigned __int64 *v27; // [esp+28h] [ebp-68h]
  unsigned __int64 *v28; // [esp+2Ch] [ebp-64h]
  void *v29; // [esp+30h] [ebp-60h]
  _BYTE v30[4]; // [esp+34h] [ebp-5Ch] BYREF
  _BYTE v31[8]; // [esp+38h] [ebp-58h] BYREF
  unsigned __int64 v32; // [esp+40h] [ebp-50h]
  unsigned __int64 v33; // [esp+48h] [ebp-48h]
  _BYTE SystemInformation[8]; // [esp+50h] [ebp-40h] BYREF
  unsigned int v35; // [esp+58h] [ebp-38h]
  _QWORD ProcessInformation[5]; // [esp+60h] [ebp-30h] BYREF

  v4 = a2;
  v28 = a3;
  v29 = a4;
  v27 = a2;
  InformationProcess = NtQueryInformationProcess(
                         (HANDLE)0xFFFFFFFF,
                         ProcessBasePriority|0x40,
                         ProcessInformation,
                         0x28u,
                         0);
  if ( InformationProcess < 0 )
  {
LABEL_27:
    result = RtlNtStatusToDosError(InformationProcess);
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
    return result;
  }
  if ( Windows::System::CMemoryManager::Init() < 0 )
  {
    v21 = ProcessInformation[4];
    v10 = HIDWORD(v21);
    v9 = v21;
    v18 = ProcessInformation[4];
LABEL_14:
    if ( v10 | v9 && (v10 & v9) != 0xFFFFFFFF )
      goto LABEL_18;
    InformationProcess = NtQuerySystemInformation(
                           MaxSystemInfoClass|SystemFullMemoryInformation,
                           SystemInformation,
                           0x10u,
                           (PULONG)&ReturnLength);
    if ( InformationProcess >= 0 )
    {
      v10 = (RmpPageSize * (unsigned __int64)v35) >> 32;
      v9 = v35 * RmpPageSize;
LABEL_18:
      if ( v4 )
      {
        *(_DWORD *)v4 = v9;
        *((_DWORD *)v4 + 1) = v10;
      }
      v19 = v28;
      if ( v28 )
      {
        *(_DWORD *)v28 = v18;
        *((_DWORD *)v19 + 1) = HIDWORD(v18);
      }
      if ( v29 )
        qmemcpy(v29, ProcessInformation, 0x28u);
      return 0;
    }
    goto LABEL_27;
  }
  v6 = Windows::System::CMemoryManager::s_pProxy;
  v7 = (char *)Windows::System::CMemoryManager::s_pProxy + 72;
  RtlAcquireSRWLockExclusive((char *)Windows::System::CMemoryManager::s_pProxy + 72);
  *((_DWORD *)v7 + 1) = GetCurrentThreadId();
  v23 = ModernResourceManagerProxy::RegisterWithServer(v6);
  if ( v23 < 0 )
  {
    v10 = HIDWORD(ReturnLength);
    v9 = ReturnLength;
  }
  else
  {
    v25 = (ModernResourceManagerProxy *)24;
    v8 = NtQueryWnfStateData((char *)v6 + 28, 0, 0, &v26, v31, &v25);
    if ( v8 < 0 )
    {
      v20 = RtlNtStatusToDosError(v8);
      v10 = HIDWORD(ReturnLength);
      v9 = ReturnLength;
      v23 = v20;
      if ( v20 > 0 )
        v23 = (unsigned __int16)v20 | 0x80070000;
    }
    else
    {
      v11 = v32;
      v10 = HIDWORD(v11);
      v9 = v11;
      v23 = 0;
    }
  }
  *((_DWORD *)v7 + 1) = 0;
  RtlReleaseSRWLockExclusive(v7);
  result = v23;
  if ( v23 >= 0 )
  {
    v25 = Windows::System::CMemoryManager::s_pProxy;
    v13 = (char *)Windows::System::CMemoryManager::s_pProxy + 72;
    RtlAcquireSRWLockExclusive((char *)Windows::System::CMemoryManager::s_pProxy + 72);
    CurrentThreadId = GetCurrentThreadId();
    v15 = v25;
    *((_DWORD *)v13 + 1) = CurrentThreadId;
    v16 = ModernResourceManagerProxy::RegisterWithServer(v15);
    if ( v16 < 0 )
    {
      v18 = ReturnLength;
    }
    else
    {
      v26 = 24;
      v17 = NtQueryWnfStateData((char *)v25 + 28, 0, 0, v30, v31, &v26);
      if ( v17 < 0 )
      {
        v16 = RtlNtStatusToDosError(v17);
        v18 = ReturnLength;
        if ( v16 > 0 )
          v16 = (unsigned __int16)v16 | 0x80070000;
      }
      else
      {
        v18 = v33;
        if ( !v33 )
          v18 = v32;
        v16 = 0;
      }
    }
    v22 = (char *)v25 + 72;
    *((_DWORD *)v25 + 19) = 0;
    RtlReleaseSRWLockExclusive(v22);
    if ( v16 < 0 )
      return v16;
    v4 = v27;
    goto LABEL_14;
  }
  return result;
}
