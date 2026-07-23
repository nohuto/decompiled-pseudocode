/*
 * XREFs of PfpPrivSourceEnum @ 0x1405B2B60
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x14062AAF0 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     MmQuerySystemMemoryInformation @ 0x14000FE54 (MmQuerySystemMemoryInformation.c)
 *     RtlStringCbCopyA @ 0x140011EF8 (RtlStringCbCopyA.c)
 *     SmStoreExistsForProcess @ 0x140011FA4 (SmStoreExistsForProcess.c)
 *     MmGetNextSession @ 0x140012740 (MmGetNextSession.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x14001284C (MmQueryProcessWorkingSetSwapPages.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     MiFillSessionWorkingSetEntry @ 0x1401346F4 (MiFillSessionWorkingSetEntry.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401B89B0 (ZwQuerySystemInformation.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140589B1C (SeIsAppContainerOrIdentifyLevelContext.c)
 *     MmGetSessionGlobalVA @ 0x1405B22A8 (MmGetSessionGlobalVA.c)
 *     ExGetNextProcess @ 0x1405B3188 (ExGetNextProcess.c)
 *     PfpPrivSourceAdd @ 0x1405B32CC (PfpPrivSourceAdd.c)
 *     PsGetProcessDeepFreezeStats @ 0x1405B3334 (PsGetProcessDeepFreezeStats.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     PsQueryProcessAttributes @ 0x14062691C (PsQueryProcessAttributes.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     SmProcessQueryStoreStats @ 0x1408AC494 (SmProcessQueryStoreStats.c)
 */

__int64 __fastcall PfpPrivSourceEnum(unsigned __int64 a1, KPROCESSOR_MODE a2, _DWORD *a3)
{
  __int64 *v4; // r14
  __int64 v5; // rsi
  unsigned __int64 v6; // r15
  _DWORD *v7; // rdi
  SIZE_T v8; // rax
  int v9; // edi
  int IsAppContainerOrIdentifyLevelContext; // eax
  void *i; // rcx
  __int64 NextSession; // rax
  void *j; // rcx
  __int64 NextProcess; // rax
  unsigned __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned __int64 v17; // rax
  __int64 *k; // rcx
  int v19; // edi
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  int v24; // edi
  unsigned __int64 v25; // rax
  char v27; // [rsp+20h] [rbp-1F8h] BYREF
  char v28; // [rsp+21h] [rbp-1F7h]
  char v29[2]; // [rsp+22h] [rbp-1F6h] BYREF
  int v30; // [rsp+24h] [rbp-1F4h]
  _DWORD *v31; // [rsp+28h] [rbp-1F0h] BYREF
  unsigned __int64 v32; // [rsp+30h] [rbp-1E8h]
  __int64 v33; // [rsp+38h] [rbp-1E0h]
  unsigned __int64 v34; // [rsp+40h] [rbp-1D8h] BYREF
  _QWORD v35[12]; // [rsp+50h] [rbp-1C8h] BYREF
  _DWORD *v36; // [rsp+B0h] [rbp-168h]
  _DWORD *v37; // [rsp+B8h] [rbp-160h]
  __int64 v38; // [rsp+C0h] [rbp-158h]
  _DWORD *v39; // [rsp+D0h] [rbp-148h]
  char v40[8]; // [rsp+D8h] [rbp-140h] BYREF
  __int64 v41; // [rsp+E0h] [rbp-138h]
  __int64 v42; // [rsp+E8h] [rbp-130h]
  __int64 v43; // [rsp+F0h] [rbp-128h]
  __int64 v44; // [rsp+F8h] [rbp-120h]
  char v45[24]; // [rsp+100h] [rbp-118h] BYREF
  unsigned __int64 v46; // [rsp+118h] [rbp-100h]
  __int128 v47; // [rsp+120h] [rbp-F8h] BYREF
  __int128 v48; // [rsp+140h] [rbp-D8h]
  unsigned __int64 SystemInformation[8]; // [rsp+1B0h] [rbp-68h] BYREF

  v36 = a3;
  v34 = a1;
  v39 = a3;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v4 = 0LL;
  v38 = 0LL;
  v5 = 0LL;
  LODWORD(v6) = 0;
  v7 = *(_DWORD **)(a1 + 16);
  v37 = v7;
  v8 = *(unsigned int *)(a1 + 24);
  if ( (unsigned int)v8 < 0x10 )
  {
    v9 = -1073741789;
    goto LABEL_63;
  }
  if ( a2 )
    ProbeForWrite(v7, v8, 8u);
  v48 = *(_OWORD *)v7;
  v7[2] = 0;
  if ( (_DWORD)v48 != 8 || (v30 = DWORD1(v48), (DWORD1(v48) & 0xFFFFFFF8) != 0) || (BYTE4(v48) & 3) == 3 )
  {
    v9 = -1073741811;
    goto LABEL_63;
  }
  if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a2) )
  {
    v27 = 0;
    v28 = 1;
  }
  else
  {
    IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL, &v27);
    v9 = IsAppContainerOrIdentifyLevelContext;
    if ( IsAppContainerOrIdentifyLevelContext == -1073741659 )
    {
      v27 = 1;
    }
    else if ( IsAppContainerOrIdentifyLevelContext < 0 )
    {
      goto LABEL_63;
    }
    v28 = 0;
    v7 = v37;
  }
  if ( !v27 )
  {
    v32 = 1LL;
    for ( i = 0LL; ; i = (void *)NextSession )
    {
      NextSession = MmGetNextSession(i);
      v4 = (__int64 *)NextSession;
      if ( !NextSession )
        break;
      ++v32;
    }
  }
  for ( j = 0LL; ; j = (void *)NextProcess )
  {
    NextProcess = ExGetNextProcess(j);
    v5 = NextProcess;
    if ( !NextProcess )
      break;
    ++v32;
  }
  if ( v32 > 0xFFFFFFFF || (v15 = 96 * v32 + 16, v15 > 0xFFFFFFFF) )
  {
    v9 = -1073741670;
    goto LABEL_63;
  }
  LODWORD(v6) = 96 * v32 + 16;
  v16 = *(_DWORD *)(v34 + 24);
  if ( (unsigned int)v15 > v16 )
  {
    v9 = -1073741789;
    goto LABEL_63;
  }
  HIDWORD(v33) = (v16 - 16) / 0x60;
  v31 = v7;
  if ( !v27 )
  {
    memset(v35, 0, sizeof(v35));
    LODWORD(v35[0]) = 0;
    RtlStringCbCopyA((NTSTRSAFE_PSTR)&v35[6] + 4, 0x10uLL, "KernelSpace");
    v9 = ZwQuerySystemInformation(SystemPagedPoolInformationEx, SystemInformation, 0x40u, 0LL);
    if ( v9 < 0 )
      goto LABEL_63;
    v9 = MmQuerySystemMemoryInformation(&v47);
    if ( v9 < 0 )
      goto LABEL_63;
    v35[4] = SystemInformation[0] >> 12;
    v17 = v47;
    if ( (unsigned __int64)v47 <= SystemInformation[0] >> 12 )
      v17 = SystemInformation[0] >> 12;
    v35[5] = v17;
    v9 = PfpPrivSourceAdd(&v31, v35);
    if ( v9 < 0 )
      goto LABEL_63;
    for ( k = 0LL; ; k = v4 )
    {
      v4 = (__int64 *)MmGetNextSession(k);
      if ( !v4 )
        break;
      memset(v35, 0, sizeof(v35));
      LODWORD(v35[0]) = 1;
      HIDWORD(v35[0]) = MmGetSessionIdEx((__int64)v4);
      if ( v28 )
        v35[3] = MmGetSessionGlobalVA((__int64)v4);
      MiFillSessionWorkingSetEntry((__int64)v40, v4[128]);
      v35[4] = v44;
      v35[10] = v41;
      v35[5] = v42;
      v35[9] = v43;
      RtlStringCbCopyA((NTSTRSAFE_PSTR)&v35[6] + 4, 0x10uLL, "Session");
      v9 = PfpPrivSourceAdd(&v31, v35);
      if ( v9 < 0 )
        goto LABEL_63;
    }
  }
  v5 = ExGetNextProcess(0LL);
  if ( v5 )
  {
    v19 = v30 & 4;
    v30 = v19;
    do
    {
      memset(v35, 0, sizeof(v35));
      if ( !v19 || (*(_DWORD *)(v5 + 1740) & 1) == 0 )
      {
        LODWORD(v35[0]) = 2;
        HIDWORD(v35[0]) = *(_DWORD *)(v5 + 736);
        LODWORD(v35[1]) = *(_DWORD *)(v5 + 1180);
        v35[2] = (*(_QWORD *)(v5 + 736) ^ *(_QWORD *)(v5 + 776)) & 0x1FFFFFFFFFFFFFFFLL;
        v20 = v35[3];
        if ( v28 )
          v20 = v5;
        v35[3] = v20;
        v21 = *(_QWORD *)(v5 + 1424);
        v35[4] = v21;
        v22 = *(_QWORD *)(v5 + 1416);
        if ( v21 > v22 )
          v22 = v21;
        v35[10] = v22;
        v23 = *(_QWORD *)(v5 + 920);
        v35[5] = v23;
        if ( v23 <= v35[4] )
          v23 = v35[4];
        v35[5] = v23;
        LODWORD(v35[6]) = MmGetSessionIdEx(v5);
        PsQueryProcessAttributes(v5, v29, 0LL);
        v24 = HIDWORD(v35[11]) & 0xFFFFFFF6 | v29[0] & 1 | (8 * SmStoreExistsForProcess());
        HIDWORD(v35[11]) = v24;
        PsGetProcessDeepFreezeStats(v5, v45);
        if ( v46 )
        {
          v24 |= 2u;
          HIDWORD(v35[11]) = v24;
          LODWORD(v35[11]) = v46 / 0x2710;
        }
        if ( *(_BYTE *)(v5 + 1466) == 2 )
          HIDWORD(v35[11]) = v24 | 4;
        RtlStringCbCopyA((NTSTRSAFE_PSTR)&v35[6] + 4, 0x10uLL, (NTSTRSAFE_PCSTR)(v5 + 1104));
        if ( (BYTE4(v48) & 1) != 0 )
        {
          MmQueryProcessWorkingSetSwapPages(v5, &v35[9]);
        }
        else if ( (BYTE4(v48) & 2) != 0 && (int)SmProcessQueryStoreStats(v5, &v34, 0LL) >= 0 )
        {
          v35[9] = v34 >> 12;
        }
        v9 = PfpPrivSourceAdd(&v31, v35);
        if ( v9 < 0 )
          goto LABEL_63;
        v19 = v30;
      }
      v5 = ExGetNextProcess((PVOID)v5);
    }
    while ( v5 );
  }
  LODWORD(v6) = 96 * v33 + 16;
  v9 = 0;
LABEL_63:
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( v5 )
    ObfDereferenceObjectWithTag((PVOID)v5, 0x6E457350u);
  if ( v9 == -1073741789 )
  {
    v25 = v32;
    if ( (unsigned int)(v33 + 1) > v32 )
      v25 = (unsigned int)(v33 + 1);
    v6 = 96 * v25 + 16;
    if ( v6 > 0xFFFFFFFF )
    {
      LODWORD(v6) = 0;
      v9 = -1073741670;
    }
  }
  *v36 = v6;
  return (unsigned int)v9;
}
