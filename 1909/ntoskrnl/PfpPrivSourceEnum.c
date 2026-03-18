/*
 * XREFs of PfpPrivSourceEnum @ 0x140638B3C
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x1405CEA00 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     RtlStringCbCopyA @ 0x14008C158 (RtlStringCbCopyA.c)
 *     SmStoreExistsForProcess @ 0x14008C204 (SmStoreExistsForProcess.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x14008C92C (MmQueryProcessWorkingSetSwapPages.c)
 *     MmGetNextSession @ 0x14008CB70 (MmGetNextSession.c)
 *     MiFillSessionWorkingSetEntry @ 0x140137BD0 (MiFillSessionWorkingSetEntry.c)
 *     MmQuerySystemMemoryInformation @ 0x140139EC4 (MmQuerySystemMemoryInformation.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401C1310 (ZwQuerySystemInformation.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     ExGetNextProcess @ 0x1406391C8 (ExGetNextProcess.c)
 *     PfpPrivSourceAdd @ 0x14063930C (PfpPrivSourceAdd.c)
 *     PsGetProcessDeepFreezeStats @ 0x140639374 (PsGetProcessDeepFreezeStats.c)
 *     MmGetSessionGlobalVA @ 0x14066C930 (MmGetSessionGlobalVA.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x14067249C (SeIsAppContainerOrIdentifyLevelContext.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 *     PsQueryProcessAttributes @ 0x1406845F4 (PsQueryProcessAttributes.c)
 *     SmProcessQueryStoreStats @ 0x1408E7D8C (SmProcessQueryStoreStats.c)
 */

__int64 __fastcall PfpPrivSourceEnum(unsigned __int64 a1, KPROCESSOR_MODE a2, _DWORD *a3)
{
  __int64 *v5; // rsi
  __int64 v6; // rdi
  unsigned __int64 v7; // r14
  _DWORD *v8; // rbx
  int SystemMemoryInformation; // ebx
  _DWORD *v10; // r13
  char v11; // r13
  int IsAppContainerOrIdentifyLevelContext; // eax
  void *i; // rcx
  __int64 NextSession; // rax
  void *j; // rcx
  __int64 NextProcess; // rax
  unsigned __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 *k; // rcx
  int v21; // r13d
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  int v26; // ebx
  unsigned __int64 v27; // rax
  char v29; // [rsp+20h] [rbp-218h]
  char v30; // [rsp+21h] [rbp-217h]
  char v31[6]; // [rsp+22h] [rbp-216h] BYREF
  _DWORD *v32; // [rsp+28h] [rbp-210h]
  _DWORD *v33; // [rsp+30h] [rbp-208h] BYREF
  unsigned __int64 v34; // [rsp+38h] [rbp-200h]
  __int64 v35; // [rsp+40h] [rbp-1F8h]
  unsigned __int64 v36; // [rsp+50h] [rbp-1E8h] BYREF
  _QWORD v37[12]; // [rsp+60h] [rbp-1D8h] BYREF
  _DWORD *v38; // [rsp+C0h] [rbp-178h]
  __int64 v39; // [rsp+C8h] [rbp-170h]
  _DWORD *v40; // [rsp+D8h] [rbp-160h]
  _QWORD v41[5]; // [rsp+E0h] [rbp-158h] BYREF
  _OWORD v42[2]; // [rsp+108h] [rbp-130h] BYREF
  _QWORD v43[5]; // [rsp+128h] [rbp-110h] BYREF
  __int128 v44; // [rsp+150h] [rbp-E8h]
  _BYTE v45[96]; // [rsp+160h] [rbp-D8h] BYREF
  _QWORD SystemInformation[8]; // [rsp+1C0h] [rbp-78h] BYREF

  v32 = a3;
  v36 = a1;
  v40 = a3;
  memset(v45, 0, sizeof(v45));
  memset(SystemInformation, 0, sizeof(SystemInformation));
  memset(v42, 0, sizeof(v42));
  memset(v41, 0, sizeof(v41));
  memset(v43, 0, 0x20uLL);
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v5 = 0LL;
  v39 = 0LL;
  v6 = 0LL;
  LODWORD(v7) = 0;
  v8 = *(_DWORD **)(a1 + 16);
  v38 = v8;
  if ( *(_DWORD *)(a1 + 24) < 0x10u )
  {
    SystemMemoryInformation = -1073741789;
    goto LABEL_3;
  }
  if ( a2 )
    ProbeForWrite(v8, *(unsigned int *)(a1 + 24), 8u);
  v44 = *(_OWORD *)v8;
  v8[2] = 0;
  if ( (_DWORD)v44 != 8 || (v11 = BYTE4(v44), (DWORD1(v44) & 0xFFFFFFF8) != 0) || (BYTE4(v44) & 3) == 3 )
  {
    SystemMemoryInformation = -1073741811;
    goto LABEL_3;
  }
  if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a2) )
  {
    v29 = 0;
    v30 = 1;
  }
  else
  {
    IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL);
    SystemMemoryInformation = IsAppContainerOrIdentifyLevelContext;
    if ( IsAppContainerOrIdentifyLevelContext == -1073741659 )
    {
      v29 = 1;
    }
    else if ( IsAppContainerOrIdentifyLevelContext < 0 )
    {
      goto LABEL_3;
    }
    v30 = 0;
    v8 = v38;
  }
  if ( !v29 )
  {
    v34 = 1LL;
    for ( i = 0LL; ; i = (void *)NextSession )
    {
      NextSession = MmGetNextSession(i);
      v5 = (__int64 *)NextSession;
      if ( !NextSession )
        break;
      ++v34;
    }
  }
  for ( j = 0LL; ; j = (void *)NextProcess )
  {
    NextProcess = ExGetNextProcess(j);
    v6 = NextProcess;
    if ( !NextProcess )
      break;
    ++v34;
  }
  if ( v34 > 0xFFFFFFFF || (v17 = 96 * v34 + 16, v17 > 0xFFFFFFFF) )
  {
    SystemMemoryInformation = -1073741670;
    goto LABEL_3;
  }
  LODWORD(v7) = 96 * v34 + 16;
  v18 = *(_DWORD *)(v36 + 24);
  if ( (unsigned int)v17 > v18 )
  {
    SystemMemoryInformation = -1073741789;
    goto LABEL_3;
  }
  HIDWORD(v35) = (v18 - 16) / 0x60;
  v33 = v8;
  if ( !v29 )
  {
    memset(v37, 0, sizeof(v37));
    RtlStringCbCopyA((NTSTRSAFE_PSTR)&v37[6] + 4, 0x10uLL, "KernelSpace");
    SystemMemoryInformation = ZwQuerySystemInformation(SystemPagedPoolInformationEx, SystemInformation, 0x40u, 0LL);
    if ( SystemMemoryInformation < 0 )
      goto LABEL_3;
    SystemMemoryInformation = MmQuerySystemMemoryInformation(v42);
    if ( SystemMemoryInformation < 0 )
      goto LABEL_3;
    v37[4] = SystemInformation[0] >> 12;
    v19 = *(_QWORD *)&v42[0];
    if ( *(_QWORD *)&v42[0] <= SystemInformation[0] >> 12 )
      v19 = SystemInformation[0] >> 12;
    v37[5] = v19;
    SystemMemoryInformation = PfpPrivSourceAdd(&v33, v37);
    if ( SystemMemoryInformation < 0 )
      goto LABEL_3;
    for ( k = 0LL; ; k = v5 )
    {
      v5 = (__int64 *)MmGetNextSession(k);
      if ( !v5 )
        break;
      memset(v37, 0, sizeof(v37));
      LODWORD(v37[0]) = 1;
      HIDWORD(v37[0]) = MmGetSessionIdEx((__int64)v5);
      if ( v30 )
        v37[3] = MmGetSessionGlobalVA(v5);
      MiFillSessionWorkingSetEntry((__int64)v41, v5[128]);
      v37[4] = v41[4];
      v37[10] = v41[1];
      v37[5] = v41[2];
      v37[9] = v41[3];
      RtlStringCbCopyA((NTSTRSAFE_PSTR)&v37[6] + 4, 0x10uLL, "Session");
      SystemMemoryInformation = PfpPrivSourceAdd(&v33, v37);
      if ( SystemMemoryInformation < 0 )
        goto LABEL_3;
    }
  }
  v6 = ExGetNextProcess(0LL);
  if ( v6 )
  {
    v21 = v11 & 4;
    while ( 1 )
    {
      memset(v37, 0, sizeof(v37));
      if ( !v21 || (*(_DWORD *)(v6 + 1788) & 1) == 0 )
      {
        LODWORD(v37[0]) = 2;
        HIDWORD(v37[0]) = *(_DWORD *)(v6 + 744);
        LODWORD(v37[1]) = *(_DWORD *)(v6 + 1180);
        v37[2] = (*(_QWORD *)(v6 + 744) ^ *(_QWORD *)(v6 + 784)) & 0x1FFFFFFFFFFFFFFFLL;
        v22 = v37[3];
        if ( v30 )
          v22 = v6;
        v37[3] = v22;
        v23 = *(_QWORD *)(v6 + 1424);
        v37[4] = v23;
        v24 = *(_QWORD *)(v6 + 1416);
        if ( v23 > v24 )
          v24 = v23;
        v37[10] = v24;
        v25 = *(_QWORD *)(v6 + 928);
        v37[5] = v25;
        if ( v25 <= v37[4] )
          v25 = v37[4];
        v37[5] = v25;
        LODWORD(v37[6]) = MmGetSessionIdEx(v6);
        PsQueryProcessAttributes(v6, v31, 0LL);
        v26 = HIDWORD(v37[11]) & 0xFFFFFFF6 | v31[0] & 1 | (8 * SmStoreExistsForProcess());
        HIDWORD(v37[11]) = v26;
        PsGetProcessDeepFreezeStats(v6, v43);
        if ( v43[3] )
        {
          v26 |= 2u;
          HIDWORD(v37[11]) = v26;
          LODWORD(v37[11]) = v43[3] / 0x2710uLL;
        }
        if ( *(_BYTE *)(v6 + 1466) == 2 )
          HIDWORD(v37[11]) = v26 | 4;
        RtlStringCbCopyA((NTSTRSAFE_PSTR)&v37[6] + 4, 0x10uLL, (NTSTRSAFE_PCSTR)(v6 + 1104));
        if ( (BYTE4(v44) & 1) != 0 )
        {
          MmQueryProcessWorkingSetSwapPages(v6, &v37[9]);
        }
        else if ( (BYTE4(v44) & 2) != 0 && (int)SmProcessQueryStoreStats(v6, &v36, 0LL) >= 0 )
        {
          v37[9] = v36 >> 12;
        }
        SystemMemoryInformation = PfpPrivSourceAdd(&v33, v37);
        if ( SystemMemoryInformation < 0 )
          break;
      }
      v6 = ExGetNextProcess((PVOID)v6);
      if ( !v6 )
        goto LABEL_61;
    }
  }
  else
  {
LABEL_61:
    LODWORD(v7) = 96 * v35 + 16;
    SystemMemoryInformation = 0;
  }
LABEL_3:
  v10 = v32;
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( v6 )
    ObfDereferenceObjectWithTag((PVOID)v6, 0x6E457350u);
  if ( SystemMemoryInformation == -1073741789 )
  {
    v27 = v34;
    if ( (unsigned int)(v35 + 1) > v34 )
      v27 = (unsigned int)(v35 + 1);
    v7 = 96 * v27 + 16;
    if ( v7 > 0xFFFFFFFF )
    {
      LODWORD(v7) = 0;
      SystemMemoryInformation = -1073741670;
    }
  }
  *v10 = v7;
  return (unsigned int)SystemMemoryInformation;
}
