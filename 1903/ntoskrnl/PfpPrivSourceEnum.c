/*
 * XREFs of PfpPrivSourceEnum @ 0x1406358EC
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x1405CE500 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     RtlStringCbCopyA @ 0x14008AE58 (RtlStringCbCopyA.c)
 *     SmStoreExistsForProcess @ 0x14008AF04 (SmStoreExistsForProcess.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x14008B62C (MmQueryProcessWorkingSetSwapPages.c)
 *     MmGetNextSession @ 0x14008B870 (MmGetNextSession.c)
 *     MiFillSessionWorkingSetEntry @ 0x140137250 (MiFillSessionWorkingSetEntry.c)
 *     MmQuerySystemMemoryInformation @ 0x140139824 (MmQuerySystemMemoryInformation.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401C0790 (ZwQuerySystemInformation.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     ExGetNextProcess @ 0x140635F68 (ExGetNextProcess.c)
 *     PfpPrivSourceAdd @ 0x1406360AC (PfpPrivSourceAdd.c)
 *     PsGetProcessDeepFreezeStats @ 0x140636114 (PsGetProcessDeepFreezeStats.c)
 *     MmGetSessionGlobalVA @ 0x140659910 (MmGetSessionGlobalVA.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     PsQueryProcessAttributes @ 0x140691084 (PsQueryProcessAttributes.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x14069FB50 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     SmProcessQueryStoreStats @ 0x1408E8484 (SmProcessQueryStoreStats.c)
 */

__int64 __fastcall PfpPrivSourceEnum(__int64 a1, KPROCESSOR_MODE a2, _DWORD *a3)
{
  __int64 *v5; // r15
  __int64 v6; // rsi
  unsigned __int64 v7; // r14
  _DWORD *v8; // rbx
  unsigned int v9; // eax
  void *i; // rcx
  __int64 NextSession; // rax
  void *j; // rcx
  __int64 NextProcess; // rax
  unsigned __int64 v14; // rcx
  unsigned int v15; // eax
  int SystemMemoryInformation; // ebx
  __int64 v17; // rax
  __int64 *k; // rcx
  int v19; // ebx
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  int v24; // ebx
  unsigned __int64 v25; // rax
  int IsAppContainerOrIdentifyLevelContext; // eax
  char v28; // [rsp+20h] [rbp-208h]
  char v29[3]; // [rsp+21h] [rbp-207h] BYREF
  int v30; // [rsp+24h] [rbp-204h]
  unsigned __int64 v31; // [rsp+28h] [rbp-200h] BYREF
  unsigned __int64 v32; // [rsp+30h] [rbp-1F8h]
  __int64 v33; // [rsp+38h] [rbp-1F0h]
  unsigned __int64 v34; // [rsp+40h] [rbp-1E8h] BYREF
  _QWORD v35[12]; // [rsp+50h] [rbp-1D8h] BYREF
  _DWORD *v36; // [rsp+B0h] [rbp-178h]
  __int64 v37; // [rsp+B8h] [rbp-170h]
  PVOID Object; // [rsp+C0h] [rbp-168h]
  _DWORD *v39; // [rsp+D0h] [rbp-158h]
  _QWORD v40[5]; // [rsp+D8h] [rbp-150h] BYREF
  _QWORD v41[4]; // [rsp+100h] [rbp-128h] BYREF
  _OWORD v42[2]; // [rsp+120h] [rbp-108h] BYREF
  __int128 v43; // [rsp+140h] [rbp-E8h]
  _BYTE v44[96]; // [rsp+150h] [rbp-D8h] BYREF
  _QWORD SystemInformation[8]; // [rsp+1B0h] [rbp-78h] BYREF

  v36 = a3;
  v37 = a1;
  v39 = a3;
  memset(v44, 0, sizeof(v44));
  memset(SystemInformation, 0, sizeof(SystemInformation));
  memset(v42, 0, sizeof(v42));
  memset(v40, 0, sizeof(v40));
  memset(v41, 0, sizeof(v41));
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v5 = 0LL;
  Object = 0LL;
  v6 = 0LL;
  LODWORD(v7) = 0;
  v8 = *(_DWORD **)(a1 + 16);
  v34 = (unsigned __int64)v8;
  v9 = *(_DWORD *)(a1 + 24);
  if ( v9 < 0x10 )
  {
    SystemMemoryInformation = -1073741789;
    goto LABEL_48;
  }
  if ( a2 )
    ProbeForWrite(v8, v9, 8u);
  v43 = *(_OWORD *)v8;
  v8[2] = 0;
  if ( (_DWORD)v43 != 8 || (v30 = DWORD1(v43), (DWORD1(v43) & 0xFFFFFFF8) != 0) || (BYTE4(v43) & 3) == 3 )
  {
    SystemMemoryInformation = -1073741811;
    goto LABEL_48;
  }
  if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a2) )
  {
    v28 = 0;
  }
  else
  {
    IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL);
    SystemMemoryInformation = IsAppContainerOrIdentifyLevelContext;
    if ( IsAppContainerOrIdentifyLevelContext == -1073741659 )
    {
      v28 = 1;
      goto LABEL_13;
    }
    if ( IsAppContainerOrIdentifyLevelContext < 0 )
      goto LABEL_48;
  }
  if ( !v28 )
  {
    v32 = 1LL;
    for ( i = 0LL; ; i = (void *)NextSession )
    {
      NextSession = MmGetNextSession(i);
      v5 = (__int64 *)NextSession;
      if ( !NextSession )
        break;
      ++v32;
    }
  }
LABEL_13:
  for ( j = 0LL; ; j = (void *)NextProcess )
  {
    NextProcess = ExGetNextProcess(j);
    v6 = NextProcess;
    if ( !NextProcess )
      break;
    ++v32;
  }
  if ( v32 > 0xFFFFFFFF || (v14 = 96 * v32 + 16, v14 > 0xFFFFFFFF) )
  {
    SystemMemoryInformation = -1073741670;
    goto LABEL_48;
  }
  LODWORD(v7) = 96 * v32 + 16;
  v15 = *(_DWORD *)(v37 + 24);
  if ( (unsigned int)v14 > v15 )
  {
    SystemMemoryInformation = -1073741789;
    goto LABEL_48;
  }
  HIDWORD(v33) = (v15 - 16) / 0x60;
  v31 = v34;
  if ( !v28 )
  {
    memset(v35, 0, sizeof(v35));
    RtlStringCbCopyA((NTSTRSAFE_PSTR)&v35[6] + 4, 0x10uLL, "KernelSpace");
    SystemMemoryInformation = ZwQuerySystemInformation(SystemPagedPoolInformationEx, SystemInformation, 0x40u, 0LL);
    if ( SystemMemoryInformation < 0 )
      goto LABEL_48;
    SystemMemoryInformation = MmQuerySystemMemoryInformation(v42);
    if ( SystemMemoryInformation < 0 )
      goto LABEL_48;
    v35[4] = SystemInformation[0] >> 12;
    v17 = *(_QWORD *)&v42[0];
    if ( *(_QWORD *)&v42[0] <= SystemInformation[0] >> 12 )
      v17 = SystemInformation[0] >> 12;
    v35[5] = v17;
    SystemMemoryInformation = PfpPrivSourceAdd(&v31, v35);
    if ( SystemMemoryInformation < 0 )
      goto LABEL_48;
    for ( k = 0LL; ; k = v5 )
    {
      v5 = (__int64 *)MmGetNextSession(k);
      if ( !v5 )
        break;
      memset(v35, 0, sizeof(v35));
      LODWORD(v35[0]) = 1;
      HIDWORD(v35[0]) = MmGetSessionIdEx((__int64)v5);
      v35[3] = MmGetSessionGlobalVA(v5);
      MiFillSessionWorkingSetEntry((__int64)v40, v5[128]);
      v35[4] = v40[4];
      v35[10] = v40[1];
      v35[5] = v40[2];
      v35[9] = v40[3];
      RtlStringCbCopyA((NTSTRSAFE_PSTR)&v35[6] + 4, 0x10uLL, "Session");
      SystemMemoryInformation = PfpPrivSourceAdd(&v31, v35);
      if ( SystemMemoryInformation < 0 )
        goto LABEL_48;
    }
  }
  v6 = ExGetNextProcess(0LL);
  if ( v6 )
  {
    v19 = v30 & 4;
    v30 = v19;
    do
    {
      memset(v35, 0, sizeof(v35));
      if ( !v19 || (*(_DWORD *)(v6 + 1788) & 1) == 0 )
      {
        LODWORD(v35[0]) = 2;
        HIDWORD(v35[0]) = *(_DWORD *)(v6 + 744);
        LODWORD(v35[1]) = *(_DWORD *)(v6 + 1180);
        v35[2] = (v6 ^ *(_QWORD *)(v6 + 784)) & 0x1FFFFFFFFFFFFFFFLL;
        v20 = v35[3];
        if ( !v28 )
          v20 = v6;
        v35[3] = v20;
        v21 = *(_QWORD *)(v6 + 1424);
        v35[4] = v21;
        v22 = *(_QWORD *)(v6 + 1416);
        if ( v21 > v22 )
          v22 = v21;
        v35[10] = v22;
        v23 = *(_QWORD *)(v6 + 928);
        v35[5] = v23;
        if ( v23 <= v35[4] )
          v23 = v35[4];
        v35[5] = v23;
        LODWORD(v35[6]) = MmGetSessionIdEx(v6);
        PsQueryProcessAttributes(v6, v29, 0LL);
        v24 = HIDWORD(v35[11]) & 0xFFFFFFF6 | v29[0] & 1 | (8 * SmStoreExistsForProcess());
        HIDWORD(v35[11]) = v24;
        PsGetProcessDeepFreezeStats(v6, v41);
        if ( v41[3] )
        {
          v24 |= 2u;
          HIDWORD(v35[11]) = v24;
          LODWORD(v35[11]) = v41[3] / 0x2710uLL;
        }
        if ( *(_BYTE *)(v6 + 1466) == 2 )
          HIDWORD(v35[11]) = v24 | 4;
        RtlStringCbCopyA((NTSTRSAFE_PSTR)&v35[6] + 4, 0x10uLL, (NTSTRSAFE_PCSTR)(v6 + 1104));
        if ( (BYTE4(v43) & 1) != 0 )
        {
          MmQueryProcessWorkingSetSwapPages(v6, &v35[9]);
        }
        else if ( (BYTE4(v43) & 2) != 0 && (int)SmProcessQueryStoreStats(v6, &v34, 0LL) >= 0 )
        {
          v35[9] = v34 >> 12;
        }
        SystemMemoryInformation = PfpPrivSourceAdd(&v31, v35);
        if ( SystemMemoryInformation < 0 )
          goto LABEL_48;
        v19 = v30;
      }
      v6 = ExGetNextProcess((PVOID)v6);
    }
    while ( v6 );
  }
  LODWORD(v7) = 96 * v33 + 16;
  SystemMemoryInformation = 0;
LABEL_48:
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( v6 )
    ObfDereferenceObjectWithTag((PVOID)v6, 0x6E457350u);
  if ( SystemMemoryInformation == -1073741789 )
  {
    v25 = v32;
    if ( (unsigned int)(v33 + 1) > v32 )
      v25 = (unsigned int)(v33 + 1);
    v7 = 96 * v25 + 16;
    if ( v7 > 0xFFFFFFFF )
    {
      LODWORD(v7) = 0;
      SystemMemoryInformation = -1073741670;
    }
  }
  *v36 = v7;
  return (unsigned int)SystemMemoryInformation;
}
