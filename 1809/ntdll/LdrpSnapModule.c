/*
 * XREFs of LdrpSnapModule @ 0x1800072B0
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x18002385C (LdrpMapAndSnapDependency.c)
 *     LdrpProcessWork @ 0x180070CEC (LdrpProcessWork.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180006E00 (RtlpxLookupFunctionTable.c)
 *     RtlImageNtHeaderEx @ 0x180007BB0 (RtlImageNtHeaderEx.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x180009BAC (RtlpImageDirectoryEntryToData32.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     LdrpLoadDependentModule @ 0x180023AC0 (LdrpLoadDependentModule.c)
 *     LdrpLogDllState @ 0x180026314 (LdrpLogDllState.c)
 *     LdrpHandlePendingModuleReplaced @ 0x180028CDC (LdrpHandlePendingModuleReplaced.c)
 *     LdrpDoPostSnapWork @ 0x1800361E8 (LdrpDoPostSnapWork.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x180071558 (LdrpLogLoadFailureEtwEvent.c)
 *     LdrpLogError @ 0x18007168C (LdrpLogError.c)
 *     LdrpReportError @ 0x180077180 (LdrpReportError.c)
 *     CompatCachepLookupCdb @ 0x1800778A0 (CompatCachepLookupCdb.c)
 *     RtlCharToInteger @ 0x180079FE0 (RtlCharToInteger.c)
 *     RtlAddressInSectionTable @ 0x18007AC40 (RtlAddressInSectionTable.c)
 *     LdrpFreeReplacedModule @ 0x180086508 (LdrpFreeReplacedModule.c)
 *     strrchr @ 0x180095010 (strrchr.c)
 *     NtUnmapViewOfSection @ 0x1800A0840 (NtUnmapViewOfSection.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 *     LdrpCheckRedirection @ 0x1800D75A4 (LdrpCheckRedirection.c)
 *     LdrpGenericExceptionFilter @ 0x1800D7988 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrpSnapModule(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 v4; // r10
  unsigned int v5; // eax
  __int64 v6; // rbx
  unsigned __int64 *v7; // rcx
  unsigned __int64 *v8; // r12
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 v15; // r13
  unsigned __int64 v16; // r12
  bool v17; // di
  char *v18; // rbx
  NTSTATUS v19; // eax
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rdx
  char *v22; // rdx
  char *v23; // r9
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  __int64 *v27; // r15
  unsigned __int64 *v28; // r13
  __int64 v29; // rax
  int v30; // esi
  unsigned __int64 v31; // r13
  unsigned __int64 v32; // rdi
  unsigned __int16 *v33; // rbx
  const char *v34; // r15
  int v35; // r9d
  int v36; // r8d
  int v37; // r11d
  unsigned __int8 *v38; // rax
  unsigned __int64 v39; // rdx
  unsigned __int8 v40; // cl
  int v41; // ecx
  int v42; // eax
  int v43; // eax
  __int64 v44; // rcx
  unsigned __int64 *v45; // r13
  unsigned __int64 v46; // rbx
  unsigned __int64 v47; // r12
  char *v48; // rax
  __int16 v49; // di
  const char *v50; // r15
  __int64 v51; // r13
  unsigned __int64 v52; // r14
  bool v53; // bl
  char *v54; // rdi
  char *v55; // rsi
  NTSTATUS v56; // eax
  unsigned __int16 v57; // ax
  __int64 v58; // rdx
  int v59; // r10d
  int v60; // r11d
  int v61; // r9d
  const char *v62; // rax
  signed __int64 v63; // rdx
  unsigned __int8 v64; // cl
  int v65; // ecx
  int v66; // eax
  ULONG v67; // eax
  unsigned __int64 v68; // rbx
  int v69; // eax
  __int64 v70; // r10
  void *v71; // rdx
  char v73; // al
  __int64 v74; // rax
  __int64 v75; // rdi
  __int64 v76; // rdi
  unsigned int v77; // eax
  unsigned __int16 *v78; // rdx
  int v79; // [rsp+20h] [rbp-168h]
  int v80; // [rsp+20h] [rbp-168h]
  __int64 v81; // [rsp+40h] [rbp-148h]
  unsigned __int64 *v82; // [rsp+48h] [rbp-140h]
  int v83; // [rsp+50h] [rbp-138h] BYREF
  unsigned int v84; // [rsp+54h] [rbp-134h]
  __int64 v85; // [rsp+58h] [rbp-130h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+60h] [rbp-128h] BYREF
  __int64 v87; // [rsp+68h] [rbp-120h] BYREF
  unsigned int v88; // [rsp+70h] [rbp-118h]
  __int64 v89; // [rsp+78h] [rbp-110h] BYREF
  unsigned __int64 v90; // [rsp+80h] [rbp-108h]
  PIMAGE_NT_HEADERS NtHeaders; // [rsp+88h] [rbp-100h] BYREF
  __int64 v92; // [rsp+90h] [rbp-F8h] BYREF
  PVOID BaseAddress; // [rsp+98h] [rbp-F0h] BYREF
  unsigned __int64 v94; // [rsp+A0h] [rbp-E8h]
  unsigned __int64 v95; // [rsp+A8h] [rbp-E0h]
  unsigned __int16 *v96; // [rsp+B0h] [rbp-D8h]
  __int64 *v97; // [rsp+B8h] [rbp-D0h]
  unsigned __int64 *v98; // [rsp+C0h] [rbp-C8h]
  unsigned __int64 v99; // [rsp+C8h] [rbp-C0h]
  char *v100; // [rsp+D0h] [rbp-B8h]
  __int64 v101; // [rsp+D8h] [rbp-B0h]
  unsigned __int64 v102; // [rsp+E0h] [rbp-A8h]
  unsigned __int64 v103; // [rsp+E8h] [rbp-A0h]
  ANSI_STRING SourceString; // [rsp+F0h] [rbp-98h] BYREF
  __int128 v105; // [rsp+100h] [rbp-88h] BYREF
  __int64 v106; // [rsp+110h] [rbp-78h]
  __int128 v107; // [rsp+118h] [rbp-70h] BYREF
  __int64 v108; // [rsp+128h] [rbp-60h]
  int v110; // [rsp+198h] [rbp+10h]
  int Size; // [rsp+1A0h] [rbp+18h] BYREF
  ULONG Value; // [rsp+1A8h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  v85 = v2;
  v3 = *(_QWORD *)(v2 + 48);
  v101 = v3;
  LdrpLogDllState(v3, v2 + 72, 5286LL);
  LdrpHandlePendingModuleReplaced(a1);
  v84 = 0;
  v4 = a1;
  while ( 1 )
  {
    v5 = *(_DWORD *)(v4 + 120);
    if ( v5 >= *(_DWORD *)(v4 + 96) )
    {
      v30 = LdrpDoPostSnapWork(v4);
      if ( v30 >= 0 )
      {
        LdrpLogDllState(*(_QWORD *)(v2 + 48), v2 + 72, 5287LL);
        *(_DWORD *)(*(_QWORD *)(v2 + 152) + 56LL) = 5;
      }
      goto LABEL_115;
    }
    v6 = v5;
    v7 = *(unsigned __int64 **)(*(_QWORD *)(v4 + 88) + 8LL * v5);
    v8 = v7;
    v82 = v7;
    v9 = *(_QWORD *)(v4 + 88);
    if ( v7 )
    {
      v10 = v7[22];
      if ( v10 )
      {
        if ( (*(_DWORD *)(v10 + 32) & 0x80000) == 0 && *(unsigned __int64 **)(v10 + 56) != v7 )
        {
          v8 = *(unsigned __int64 **)(v10 + 56);
          v82 = v8;
          *(_QWORD *)(v10 + 56) = v7;
          v9 = *(_QWORD *)(v4 + 88);
        }
      }
    }
    v11 = *(unsigned __int64 **)(v9 + 8LL * v5);
    if ( v11 != v8 )
    {
      LdrpFreeReplacedModule(v11);
      v4 = a1;
      *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v6) = v8;
    }
    v12 = *(_QWORD *)(v4 + 128);
    v13 = *(unsigned int *)(v12 + 20 * v6);
    v14 = v13 + v3;
    v15 = v101 + *(unsigned int *)(v12 + 20 * v6 + 16);
    if ( !(_DWORD)v13 || (unsigned int)v13 > *(_DWORD *)(v2 + 64) )
      v14 = v101 + *(unsigned int *)(v12 + 20 * v6 + 16);
    if ( v8 )
      break;
LABEL_52:
    ++*(_DWORD *)(v4 + 120);
    v3 = v101;
  }
  v16 = v8[6];
  v94 = v16;
  v17 = 1;
  v18 = (char *)v16;
  OutHeaders = 0LL;
  v81 = 0LL;
  v87 = 0LL;
  if ( (v16 & 3) != 0 )
  {
    v17 = (v16 & 1) == 0;
    v18 = (char *)(v16 & 0xFFFFFFFFFFFFFFFCuLL);
  }
  v19 = RtlImageNtHeaderEx(1u, v18, 0LL, &OutHeaders);
  if ( !OutHeaders )
  {
    v22 = 0LL;
LABEL_137:
    if ( v19 >= 0 )
      goto LABEL_20;
    goto LABEL_138;
  }
  Magic = OutHeaders->OptionalHeader.Magic;
  if ( Magic == 267 )
  {
    v19 = RtlpImageDirectoryEntryToData32((int)v18, v17, 0, (int)&Size, OutHeaders, (__int64)&v87);
    v22 = (char *)v87;
    v81 = v87;
    goto LABEL_137;
  }
  if ( Magic != 523
    || !OutHeaders->OptionalHeader.NumberOfRvaAndSizes
    || (VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress, !(_DWORD)VirtualAddress) )
  {
LABEL_138:
    v22 = 0LL;
    goto LABEL_19;
  }
  Size = OutHeaders->OptionalHeader.DataDirectory[0].Size;
  if ( !v17 && (unsigned int)VirtualAddress >= OutHeaders->OptionalHeader.SizeOfHeaders )
  {
    v22 = (char *)RtlAddressInSectionTable(OutHeaders, v18, VirtualAddress);
    v81 = (__int64)v22;
    if ( v22 )
    {
      v19 = 0;
      goto LABEL_137;
    }
    goto LABEL_138;
  }
  v22 = &v18[VirtualAddress];
LABEL_19:
  v81 = (__int64)v22;
LABEL_20:
  if ( !v22 )
  {
    v73 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        2627,
        (unsigned int)"LdrpSnapModule",
        0,
        "DLL \"%wZ\" does not contain an export table\n",
        v82 + 9);
      v73 = LdrpDebugFlags;
    }
    if ( (v73 & 0x10) != 0 )
      __debugbreak();
    v30 = -1073741701;
    goto LABEL_115;
  }
  if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    if ( v16 < *((_QWORD *)&xmmword_180178500 + 1)
      || v16 >= *((_QWORD *)&xmmword_180178500 + 1) + (unsigned __int64)(unsigned int)qword_180178510 )
    {
      RtlpxLookupFunctionTable((PVOID)v16, (__int64)&v105);
      v22 = (char *)v81;
    }
    else
    {
      v105 = xmmword_180178500;
      v106 = qword_180178510;
    }
    if ( *((_QWORD *)&v105 + 1) != v16 )
      goto LABEL_164;
  }
  v23 = &v22[Size];
  v100 = v23;
  v24 = v16 + *((unsigned int *)v22 + 7);
  v99 = v24;
  v88 = *((_DWORD *)v22 + 6);
  v25 = v16 + *((unsigned int *)v22 + 8);
  v90 = v25;
  v102 = v16 + *((unsigned int *)v22 + 9);
  v4 = a1;
  v26 = 8LL * *(unsigned int *)(a1 + 124);
  v27 = (__int64 *)(v26 + v14);
  v28 = (unsigned __int64 *)(v26 + v15);
  while ( 1 )
  {
    v98 = v28;
    v97 = v27;
    v29 = *v27;
    if ( !*v27 )
    {
      *(_DWORD *)(v4 + 124) = 0;
      v2 = v85;
      goto LABEL_52;
    }
    v30 = -1073741702;
    v31 = (unsigned __int64)v29 >> 63;
    v95 = (unsigned __int64)v29 >> 63;
    v32 = -4530927LL;
    v96 = 0LL;
    if ( v29 < 0 )
    {
      v84 = (unsigned __int16)v29;
      v43 = (unsigned __int16)v29 - *((_DWORD *)v22 + 4);
      goto LABEL_45;
    }
    v33 = (unsigned __int16 *)(*(_QWORD *)(v85 + 48) + (unsigned int)v29);
    v34 = (const char *)(v33 + 1);
    v96 = v33 + 1;
    if ( (*(_DWORD *)(v4 + 32) & 0x2000000) == 0 )
      goto LABEL_30;
    v74 = LdrpCheckRedirection(v82, v33 + 1);
    v32 = v74;
    if ( v74 == -4530927 )
      break;
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        2699,
        (unsigned int)"LdrpSnapModule",
        2,
        "Import '%s' of DLL '%wZ' is redirected to 0x%p",
        v33 + 1,
        v85 + 72,
        v74);
LABEL_49:
    v45 = v98;
    *v98 = v32;
    v27 = v97 + 1;
    v28 = v45 + 1;
    v4 = a1;
    ++*(_DWORD *)(a1 + 124);
    v25 = v90;
    v22 = (char *)v81;
    v24 = v99;
    v23 = v100;
  }
  v25 = v90;
LABEL_30:
  v35 = *v33;
  v36 = 0;
  v37 = v88 - 1;
  if ( v35 >= v88 )
    v35 = v37 / 2;
  if ( v37 < 0 )
  {
LABEL_149:
    if ( (LdrpDebugFlags & 3) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        1559,
        (unsigned int)"LdrpNameToOrdinal",
        1,
        "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
        v34,
        (const void *)v16);
    if ( (LdrpDebugFlags & 0x40) != 0 )
      __debugbreak();
    goto LABEL_48;
  }
  while ( 1 )
  {
    v38 = (unsigned __int8 *)(v33 + 1);
    v39 = v16 + *(unsigned int *)(v25 + 4LL * v35) - (_QWORD)v34;
    while ( 1 )
    {
      v40 = *v38;
      if ( *v38 != v38[v39] )
        break;
      ++v38;
      if ( !v40 )
      {
        v41 = 0;
        goto LABEL_37;
      }
    }
    v41 = v40 < v38[v39] ? -1 : 1;
LABEL_37:
    if ( !v41 )
      break;
    v42 = v35 - 1;
    if ( v41 >= 0 )
      v42 = v37;
    v37 = v42;
    if ( v41 >= 0 )
      v36 = v35 + 1;
    v35 = (v36 + v42) / 2;
    v25 = v90;
    if ( v42 < v36 )
      goto LABEL_149;
  }
  v43 = *(unsigned __int16 *)(v102 + 2LL * v35);
  v22 = (char *)v81;
  v24 = v99;
  v23 = v100;
LABEL_45:
  if ( (unsigned int)v43 >= *((_DWORD *)v22 + 5) )
    goto LABEL_48;
  _mm_lfence();
  v44 = *(unsigned int *)(v24 + 4LL * v43);
  if ( !(_DWORD)v44 )
  {
    v30 = -1073741702;
    goto LABEL_48;
  }
  v32 = v16 + v44;
  OutHeaders = (PIMAGE_NT_HEADERS)(v16 + v44);
  v30 = 0;
  if ( v16 + v44 <= (unsigned __int64)v22 || v32 >= (unsigned __int64)v23 )
  {
LABEL_48:
    if ( v30 >= 0 )
      goto LABEL_49;
    if ( v30 == -1073741702 || v30 == -1073741515 )
    {
      v75 = v85;
      if ( (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v85 + 80))
        || (unsigned int)CompatCachepLookupCdb((wchar_t *)v82[10]) )
      {
        v76 = v75 + 72;
        LOBYTE(v79) = 0;
        LdrpLogLoadFailureEtwEvent(v76, v82 + 9, 1LL, &LoadFailure, v79);
        LOBYTE(v80) = 1;
        LdrpLogLoadFailureEtwEvent(v76, v82 + 9, 1LL, &LoadFailureOperational, v80);
      }
      else
      {
        v76 = v75 + 72;
      }
      if ( (_BYTE)v31 )
      {
        v77 = -1073741512;
        v30 = -1073741512;
        v78 = (unsigned __int16 *)v84;
      }
      else
      {
        v30 = -1073741511;
        v77 = -1073741511;
        v78 = v96;
      }
      LdrpReportError(v76, v78, v77);
      v70 = a1;
LABEL_116:
      v71 = *(void **)(v70 + 184);
      if ( v71 )
      {
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v71);
        v70 = a1;
        *(_QWORD *)(a1 + 184) = 0LL;
      }
      if ( v30 < 0 )
        LdrpLogError((unsigned int)v30, 25LL, 0LL, v70);
      return (unsigned int)v30;
    }
LABEL_115:
    v70 = a1;
    goto LABEL_116;
  }
  v46 = v16 + v44;
  v110 = 0;
  v89 = 0LL;
  v87 = *(_QWORD *)(v85 + 176);
  BaseAddress = 0LL;
  v47 = v103;
  while ( 1 )
  {
    v48 = strrchr((const char *)v46, 46);
    if ( !v48 || (v49 = (_WORD)v48 - v46, (unsigned __int64)&v48[-v46] > 0xFFFF) )
    {
LABEL_130:
      v30 = -1073741701;
      goto LABEL_96;
    }
    SourceString.Buffer = (char *)v46;
    SourceString.Length = (_WORD)v48 - v46;
    SourceString.MaximumLength = (_WORD)v48 - v46;
    v50 = v48 + 1;
    if ( v48[1] == 35 )
    {
      if ( RtlCharToInteger(v48 + 2, 0, &Value) < 0 )
        goto LABEL_130;
      v50 = 0LL;
    }
    if ( v49 == 5 && (*(_DWORD *)v46 | 0x20202020) == 0x6C64746E && (*(_BYTE *)(v46 + 4) | 0x20) == 0x6C )
    {
      v51 = LdrpNtDllDataTableEntry;
      v89 = LdrpNtDllDataTableEntry;
    }
    else
    {
      v69 = LdrpLoadDependentModule(&SourceString, (__int64)&v89, (__int64)&BaseAddress);
      v30 = v69;
      if ( v69 < 0 || v69 == 259 )
        goto LABEL_96;
      v51 = v89;
    }
    v52 = *(_QWORD *)(v51 + 48);
    v53 = 1;
    v54 = (char *)v52;
    NtHeaders = 0LL;
    v55 = 0LL;
    v92 = 0LL;
    if ( (v52 & 3) != 0 )
    {
      v54 = (char *)(v52 & 0xFFFFFFFFFFFFFFFCuLL);
      v53 = (v52 & 1) == 0;
    }
    v56 = RtlImageNtHeaderEx(1u, v54, 0LL, &NtHeaders);
    if ( !NtHeaders )
      goto LABEL_157;
    v57 = NtHeaders->OptionalHeader.Magic;
    if ( v57 == 267 )
    {
      v56 = RtlpImageDirectoryEntryToData32((int)v54, v53, 0, (int)&v83, NtHeaders, (__int64)&v92);
      v55 = (char *)v92;
      goto LABEL_157;
    }
    if ( v57 == 523 )
    {
      if ( NtHeaders->OptionalHeader.NumberOfRvaAndSizes )
      {
        v58 = NtHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
        if ( (_DWORD)v58 )
        {
          v83 = NtHeaders->OptionalHeader.DataDirectory[0].Size;
          if ( v53 || (unsigned int)v58 < NtHeaders->OptionalHeader.SizeOfHeaders )
          {
            v55 = &v54[v58];
            goto LABEL_71;
          }
          v55 = (char *)RtlAddressInSectionTable(NtHeaders, v54, v58);
          if ( v55 )
          {
            v56 = 0;
LABEL_157:
            if ( v56 >= 0 )
              goto LABEL_71;
          }
        }
      }
    }
    v55 = 0LL;
LABEL_71:
    if ( !v55 )
      goto LABEL_163;
    if ( v50 )
      break;
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        830,
        (unsigned int)"LdrpGetProcedureAddress",
        2,
        "Loading procedure 0x%lx by ordinal\n",
        Value);
    if ( !Value )
    {
      v30 = -1073741811;
      goto LABEL_96;
    }
    v67 = Value - *((_DWORD *)v55 + 4);
LABEL_88:
    if ( v67 >= *((_DWORD *)v55 + 5) )
    {
      v30 = (v50 != 0LL) - 1073741512;
      goto LABEL_96;
    }
    v46 = v52 + *(unsigned int *)(v52 + *((unsigned int *)v55 + 7) + 4LL * (int)v67);
    v47 = v46;
    v103 = v46;
    if ( v46 < (unsigned __int64)v55 || v46 >= (unsigned __int64)&v55[v83] )
    {
      v30 = 0;
      v68 = *(_QWORD *)(v51 + 48);
      if ( !LdrSystemDllInitBlock.CfgBitMap || (LdrSystemDllInitBlock.Flags & 1) != 0 )
        goto LABEL_96;
      if ( v68 < *((_QWORD *)&xmmword_180178500 + 1)
        || v68 >= *((_QWORD *)&xmmword_180178500 + 1) + (unsigned __int64)(unsigned int)qword_180178510 )
      {
        RtlpxLookupFunctionTable(*(PVOID *)(v51 + 48), (__int64)&v107);
      }
      else
      {
        v107 = xmmword_180178500;
        v108 = qword_180178510;
      }
      if ( *((_QWORD *)&v107 + 1) == v68 )
        goto LABEL_96;
LABEL_164:
      __fastfail(0x18u);
    }
    if ( ++v110 == 32 )
      goto LABEL_130;
  }
  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
      812,
      (unsigned int)"LdrpGetProcedureAddress",
      2,
      "Locating procedure \"%s\" by name\n",
      v50);
  v59 = 0;
  v60 = *((_DWORD *)v55 + 6) - 1;
  v61 = v60 / 2;
  if ( v60 >= 0 )
  {
    while ( 1 )
    {
      v62 = v50;
      v63 = v52 + *(unsigned int *)(v52 + *((unsigned int *)v55 + 8) + 4LL * v61) - (_QWORD)v50;
      while ( 1 )
      {
        v64 = *v62;
        if ( *v62 != v62[v63] )
          break;
        ++v62;
        if ( !v64 )
        {
          v65 = 0;
          goto LABEL_80;
        }
      }
      v65 = v64 < (unsigned int)v62[v63] ? -1 : 1;
LABEL_80:
      if ( !v65 )
        break;
      v66 = v61 - 1;
      if ( v65 >= 0 )
        v66 = v60;
      v60 = v66;
      if ( v65 >= 0 )
        v59 = v61 + 1;
      v61 = (v59 + v66) / 2;
      if ( v66 < v59 )
        goto LABEL_159;
    }
    v67 = *(unsigned __int16 *)(v52 + *((unsigned int *)v55 + 9) + 2LL * v61);
    goto LABEL_88;
  }
LABEL_159:
  if ( (LdrpDebugFlags & 3) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
      1559,
      (unsigned int)"LdrpNameToOrdinal",
      1,
      "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
      v50,
      (const void *)v52);
  if ( (LdrpDebugFlags & 0x40) != 0 )
    __debugbreak();
LABEL_163:
  v30 = -1073741702;
LABEL_96:
  if ( BaseAddress )
    RtlFreeHeap(LdrpHeap, 0, BaseAddress);
  if ( v30 != 259 )
  {
    LOBYTE(v31) = v95;
    if ( v30 < 0 )
      v32 = (unsigned __int64)OutHeaders;
    else
      v32 = v47;
    v16 = v94;
    goto LABEL_48;
  }
  return 0LL;
}
