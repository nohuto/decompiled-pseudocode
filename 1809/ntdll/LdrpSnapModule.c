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
 *     LdrpReportError @ 0x180077170 (LdrpReportError.c)
 *     CompatCachepLookupCdb @ 0x180077890 (CompatCachepLookupCdb.c)
 *     RtlCharToInteger @ 0x180079FD0 (RtlCharToInteger.c)
 *     RtlAddressInSectionTable @ 0x18007AC30 (RtlAddressInSectionTable.c)
 *     LdrpFreeReplacedModule @ 0x1800864F8 (LdrpFreeReplacedModule.c)
 *     strrchr @ 0x180095000 (strrchr.c)
 *     NtUnmapViewOfSection @ 0x1800A0820 (NtUnmapViewOfSection.c)
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
  __int64 v7; // rcx
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // r13
  unsigned __int64 v15; // r12
  bool v16; // di
  unsigned __int64 v17; // rbx
  int v18; // eax
  __int16 v19; // ax
  __int64 v20; // rdx
  _DWORD *v21; // rdx
  char *v22; // r9
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  __int64 *v26; // r15
  unsigned __int64 *v27; // r13
  __int64 v28; // rax
  int v29; // esi
  unsigned __int64 v30; // r13
  unsigned __int64 v31; // rdi
  unsigned __int16 *v32; // rbx
  const char *v33; // r15
  int v34; // r9d
  int v35; // r8d
  int v36; // r11d
  unsigned __int8 *v37; // rax
  unsigned __int64 v38; // rdx
  unsigned __int8 v39; // cl
  int v40; // ecx
  int v41; // eax
  int v42; // eax
  __int64 v43; // rcx
  unsigned __int64 *v44; // r13
  unsigned __int64 v45; // rbx
  unsigned __int64 v46; // r12
  char *v47; // rax
  __int16 v48; // di
  const char *v49; // r15
  __int64 v50; // r13
  unsigned __int64 v51; // r14
  bool v52; // bl
  unsigned __int64 v53; // rdi
  _DWORD *v54; // rsi
  int v55; // eax
  __int16 v56; // ax
  __int64 v57; // rdx
  int v58; // r10d
  int v59; // r11d
  int v60; // r9d
  const char *v61; // rax
  signed __int64 v62; // rdx
  unsigned __int8 v63; // cl
  int v64; // ecx
  int v65; // eax
  ULONG v66; // eax
  unsigned __int64 v67; // rbx
  int v68; // eax
  __int64 v69; // r10
  char v71; // al
  __int64 v72; // rax
  __int64 v73; // rdi
  __int64 v74; // rdi
  unsigned int v75; // eax
  unsigned __int16 *v76; // rdx
  _DWORD *v77; // [rsp+40h] [rbp-148h]
  __int64 v78; // [rsp+48h] [rbp-140h]
  unsigned int v79; // [rsp+50h] [rbp-138h] BYREF
  unsigned int v80; // [rsp+54h] [rbp-134h]
  __int64 v81; // [rsp+58h] [rbp-130h]
  unsigned __int64 v82; // [rsp+60h] [rbp-128h] BYREF
  _DWORD *v83; // [rsp+68h] [rbp-120h] BYREF
  unsigned int v84; // [rsp+70h] [rbp-118h]
  __int64 v85; // [rsp+78h] [rbp-110h] BYREF
  unsigned __int64 v86; // [rsp+80h] [rbp-108h]
  __int64 v87; // [rsp+88h] [rbp-100h] BYREF
  _DWORD *v88; // [rsp+90h] [rbp-F8h] BYREF
  __int64 v89; // [rsp+98h] [rbp-F0h] BYREF
  unsigned __int64 v90; // [rsp+A0h] [rbp-E8h]
  unsigned __int64 v91; // [rsp+A8h] [rbp-E0h]
  unsigned __int16 *v92; // [rsp+B0h] [rbp-D8h]
  __int64 *v93; // [rsp+B8h] [rbp-D0h]
  unsigned __int64 *v94; // [rsp+C0h] [rbp-C8h]
  unsigned __int64 v95; // [rsp+C8h] [rbp-C0h]
  char *v96; // [rsp+D0h] [rbp-B8h]
  __int64 v97; // [rsp+D8h] [rbp-B0h]
  unsigned __int64 v98; // [rsp+E0h] [rbp-A8h]
  unsigned __int64 v99; // [rsp+E8h] [rbp-A0h]
  STRING SourceString; // [rsp+F0h] [rbp-98h] BYREF
  __int128 v101; // [rsp+100h] [rbp-88h] BYREF
  __int64 v102; // [rsp+110h] [rbp-78h]
  __int128 v103; // [rsp+118h] [rbp-70h] BYREF
  __int64 v104; // [rsp+128h] [rbp-60h]
  int v106; // [rsp+198h] [rbp+10h]
  unsigned int v107; // [rsp+1A0h] [rbp+18h] BYREF
  ULONG Value; // [rsp+1A8h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  v81 = v2;
  v3 = *(_QWORD *)(v2 + 48);
  v97 = v3;
  LdrpLogDllState(v3, v2 + 72, 5286LL);
  LdrpHandlePendingModuleReplaced(a1);
  v80 = 0;
  v4 = a1;
  while ( 1 )
  {
    v5 = *(_DWORD *)(v4 + 120);
    if ( v5 >= *(_DWORD *)(v4 + 96) )
    {
      v29 = LdrpDoPostSnapWork(v4);
      if ( v29 >= 0 )
      {
        LdrpLogDllState(*(_QWORD *)(v2 + 48), v2 + 72, 5287LL);
        *(_DWORD *)(*(_QWORD *)(v2 + 152) + 56LL) = 5;
      }
      goto LABEL_115;
    }
    v6 = v5;
    v7 = *(_QWORD *)(*(_QWORD *)(v4 + 88) + 8LL * v5);
    v8 = v7;
    v78 = v7;
    v9 = *(_QWORD *)(v4 + 88);
    if ( v7 )
    {
      v10 = *(_QWORD *)(v7 + 176);
      if ( v10 )
      {
        if ( (*(_DWORD *)(v10 + 32) & 0x80000) == 0 && *(_QWORD *)(v10 + 56) != v7 )
        {
          v8 = *(_QWORD *)(v10 + 56);
          v78 = v8;
          *(_QWORD *)(v10 + 56) = v7;
          v9 = *(_QWORD *)(v4 + 88);
        }
      }
    }
    if ( *(_QWORD *)(v9 + 8LL * v5) != v8 )
    {
      LdrpFreeReplacedModule();
      v4 = a1;
      *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v6) = v8;
    }
    v11 = *(_QWORD *)(v4 + 128);
    v12 = *(unsigned int *)(v11 + 20 * v6);
    v13 = v12 + v3;
    v14 = v97 + *(unsigned int *)(v11 + 20 * v6 + 16);
    if ( !(_DWORD)v12 || (unsigned int)v12 > *(_DWORD *)(v2 + 64) )
      v13 = v97 + *(unsigned int *)(v11 + 20 * v6 + 16);
    if ( v8 )
      break;
LABEL_52:
    ++*(_DWORD *)(v4 + 120);
    v3 = v97;
  }
  v15 = *(_QWORD *)(v8 + 48);
  v90 = v15;
  v16 = 1;
  v17 = v15;
  v82 = 0LL;
  v77 = 0LL;
  v83 = 0LL;
  if ( (v15 & 3) != 0 )
  {
    v16 = (v15 & 1) == 0;
    v17 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  v18 = RtlImageNtHeaderEx(1LL, v17, 0LL, &v82);
  if ( !v82 )
  {
    v21 = 0LL;
LABEL_137:
    if ( v18 >= 0 )
      goto LABEL_20;
    goto LABEL_138;
  }
  v19 = *(_WORD *)(v82 + 24);
  if ( v19 == 267 )
  {
    v18 = RtlpImageDirectoryEntryToData32(v17, v16, 0, (unsigned int)&v107, v82, (__int64)&v83);
    v21 = v83;
    v77 = v83;
    goto LABEL_137;
  }
  if ( v19 != 523 || !*(_DWORD *)(v82 + 132) || (v20 = *(unsigned int *)(v82 + 136), !(_DWORD)v20) )
  {
LABEL_138:
    v21 = 0LL;
    goto LABEL_19;
  }
  v107 = *(_DWORD *)(v82 + 140);
  if ( !v16 && (unsigned int)v20 >= *(_DWORD *)(v82 + 84) )
  {
    v21 = (_DWORD *)RtlAddressInSectionTable(v82, v17, (unsigned int)v20);
    v77 = v21;
    if ( v21 )
    {
      v18 = 0;
      goto LABEL_137;
    }
    goto LABEL_138;
  }
  v21 = (_DWORD *)(v17 + v20);
LABEL_19:
  v77 = v21;
LABEL_20:
  if ( !v21 )
  {
    v71 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        2627,
        (unsigned int)"LdrpSnapModule",
        0,
        "DLL \"%wZ\" does not contain an export table\n",
        v78 + 72);
      v71 = LdrpDebugFlags;
    }
    if ( (v71 & 0x10) != 0 )
      __debugbreak();
    v29 = -1073741701;
    goto LABEL_115;
  }
  if ( qword_1801783A0 && (byte_18017838C & 1) == 0 )
  {
    if ( v15 < *((_QWORD *)&xmmword_180178500 + 1)
      || v15 >= *((_QWORD *)&xmmword_180178500 + 1) + (unsigned __int64)(unsigned int)qword_180178510 )
    {
      RtlpxLookupFunctionTable(v15, (__int64 *)&v101);
      v21 = v77;
    }
    else
    {
      v101 = xmmword_180178500;
      v102 = qword_180178510;
    }
    if ( *((_QWORD *)&v101 + 1) != v15 )
      goto LABEL_164;
  }
  v22 = (char *)v21 + v107;
  v96 = v22;
  v23 = v15 + (unsigned int)v21[7];
  v95 = v23;
  v84 = v21[6];
  v24 = v15 + (unsigned int)v21[8];
  v86 = v24;
  v98 = v15 + (unsigned int)v21[9];
  v4 = a1;
  v25 = 8LL * *(unsigned int *)(a1 + 124);
  v26 = (__int64 *)(v25 + v13);
  v27 = (unsigned __int64 *)(v25 + v14);
  while ( 1 )
  {
    v94 = v27;
    v93 = v26;
    v28 = *v26;
    if ( !*v26 )
    {
      *(_DWORD *)(v4 + 124) = 0;
      v2 = v81;
      goto LABEL_52;
    }
    v29 = -1073741702;
    v30 = (unsigned __int64)v28 >> 63;
    v91 = (unsigned __int64)v28 >> 63;
    v31 = -4530927LL;
    v92 = 0LL;
    if ( v28 < 0 )
    {
      v80 = (unsigned __int16)v28;
      v42 = (unsigned __int16)v28 - v21[4];
      goto LABEL_45;
    }
    v32 = (unsigned __int16 *)(*(_QWORD *)(v81 + 48) + (unsigned int)v28);
    v33 = (const char *)(v32 + 1);
    v92 = v32 + 1;
    if ( (*(_DWORD *)(v4 + 32) & 0x2000000) == 0 )
      goto LABEL_30;
    v72 = LdrpCheckRedirection(v78, v32 + 1);
    v31 = v72;
    if ( v72 == -4530927 )
      break;
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        2699,
        (unsigned int)"LdrpSnapModule",
        2,
        "Import '%s' of DLL '%wZ' is redirected to 0x%p",
        v32 + 1,
        v81 + 72,
        v72);
LABEL_49:
    v44 = v94;
    *v94 = v31;
    v26 = v93 + 1;
    v27 = v44 + 1;
    v4 = a1;
    ++*(_DWORD *)(a1 + 124);
    v24 = v86;
    v21 = v77;
    v23 = v95;
    v22 = v96;
  }
  v24 = v86;
LABEL_30:
  v34 = *v32;
  v35 = 0;
  v36 = v84 - 1;
  if ( v34 >= v84 )
    v34 = v36 / 2;
  if ( v36 < 0 )
  {
LABEL_149:
    if ( (LdrpDebugFlags & 3) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        1559,
        (unsigned int)"LdrpNameToOrdinal",
        1,
        "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
        v33,
        (const void *)v15);
    if ( (LdrpDebugFlags & 0x40) != 0 )
      __debugbreak();
    goto LABEL_48;
  }
  while ( 1 )
  {
    v37 = (unsigned __int8 *)(v32 + 1);
    v38 = v15 + *(unsigned int *)(v24 + 4LL * v34) - (_QWORD)v33;
    while ( 1 )
    {
      v39 = *v37;
      if ( *v37 != v37[v38] )
        break;
      ++v37;
      if ( !v39 )
      {
        v40 = 0;
        goto LABEL_37;
      }
    }
    v40 = v39 < v37[v38] ? -1 : 1;
LABEL_37:
    if ( !v40 )
      break;
    v41 = v34 - 1;
    if ( v40 >= 0 )
      v41 = v36;
    v36 = v41;
    if ( v40 >= 0 )
      v35 = v34 + 1;
    v34 = (v35 + v41) / 2;
    v24 = v86;
    if ( v41 < v35 )
      goto LABEL_149;
  }
  v42 = *(unsigned __int16 *)(v98 + 2LL * v34);
  v21 = v77;
  v23 = v95;
  v22 = v96;
LABEL_45:
  if ( (unsigned int)v42 >= v21[5] )
    goto LABEL_48;
  _mm_lfence();
  v43 = *(unsigned int *)(v23 + 4LL * v42);
  if ( !(_DWORD)v43 )
  {
    v29 = -1073741702;
    goto LABEL_48;
  }
  v31 = v15 + v43;
  v82 = v15 + v43;
  v29 = 0;
  if ( v15 + v43 <= (unsigned __int64)v21 || v31 >= (unsigned __int64)v22 )
  {
LABEL_48:
    if ( v29 >= 0 )
      goto LABEL_49;
    if ( v29 == -1073741702 || v29 == -1073741515 )
    {
      v73 = v81;
      if ( (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v81 + 80))
        || (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v78 + 80)) )
      {
        v74 = v73 + 72;
        LdrpLogLoadFailureEtwEvent(v74, v78 + 72, 1, (unsigned int)&LoadFailure, 0);
        LdrpLogLoadFailureEtwEvent(v74, v78 + 72, 1, (unsigned int)&LoadFailureOperational, 1);
      }
      else
      {
        v74 = v73 + 72;
      }
      if ( (_BYTE)v30 )
      {
        v75 = -1073741512;
        v29 = -1073741512;
        v76 = (unsigned __int16 *)v80;
      }
      else
      {
        v29 = -1073741511;
        v75 = -1073741511;
        v76 = v92;
      }
      LdrpReportError(v74, v76, v75);
      v69 = a1;
LABEL_116:
      if ( *(_QWORD *)(v69 + 184) )
      {
        NtUnmapViewOfSection(-1LL);
        v69 = a1;
        *(_QWORD *)(a1 + 184) = 0LL;
      }
      if ( v29 < 0 )
        LdrpLogError((unsigned int)v29, 25LL, 0LL, v69);
      return (unsigned int)v29;
    }
LABEL_115:
    v69 = a1;
    goto LABEL_116;
  }
  v45 = v15 + v43;
  v106 = 0;
  v85 = 0LL;
  v83 = *(_DWORD **)(v81 + 176);
  v89 = 0LL;
  v46 = v99;
  while ( 1 )
  {
    v47 = strrchr((const char *)v45, 46);
    if ( !v47 || (v48 = (_WORD)v47 - v45, (unsigned __int64)&v47[-v45] > 0xFFFF) )
    {
LABEL_130:
      v29 = -1073741701;
      goto LABEL_96;
    }
    SourceString.Buffer = (char *)v45;
    SourceString.Length = (_WORD)v47 - v45;
    SourceString.MaximumLength = (_WORD)v47 - v45;
    v49 = v47 + 1;
    if ( v47[1] == 35 )
    {
      if ( RtlCharToInteger(v47 + 2, 0, &Value) < 0 )
        goto LABEL_130;
      v49 = 0LL;
    }
    if ( v48 == 5 && (*(_DWORD *)v45 | 0x20202020) == 0x6C64746E && (*(_BYTE *)(v45 + 4) | 0x20) == 0x6C )
    {
      v50 = LdrpNtDllDataTableEntry;
      v85 = LdrpNtDllDataTableEntry;
    }
    else
    {
      v68 = LdrpLoadDependentModule(&SourceString, (__int64)&v85, (__int64)&v89);
      v29 = v68;
      if ( v68 < 0 || v68 == 259 )
        goto LABEL_96;
      v50 = v85;
    }
    v51 = *(_QWORD *)(v50 + 48);
    v52 = 1;
    v53 = v51;
    v87 = 0LL;
    v54 = 0LL;
    v88 = 0LL;
    if ( (v51 & 3) != 0 )
    {
      v53 = v51 & 0xFFFFFFFFFFFFFFFCuLL;
      v52 = (v51 & 1) == 0;
    }
    v55 = RtlImageNtHeaderEx(1LL, v53, 0LL, &v87);
    if ( !v87 )
      goto LABEL_157;
    v56 = *(_WORD *)(v87 + 24);
    if ( v56 == 267 )
    {
      v55 = RtlpImageDirectoryEntryToData32(v53, v52, 0, (unsigned int)&v79, v87, (__int64)&v88);
      v54 = v88;
      goto LABEL_157;
    }
    if ( v56 == 523 )
    {
      if ( *(_DWORD *)(v87 + 132) )
      {
        v57 = *(unsigned int *)(v87 + 136);
        if ( (_DWORD)v57 )
        {
          v79 = *(_DWORD *)(v87 + 140);
          if ( v52 || (unsigned int)v57 < *(_DWORD *)(v87 + 84) )
          {
            v54 = (_DWORD *)(v53 + v57);
            goto LABEL_71;
          }
          v54 = (_DWORD *)RtlAddressInSectionTable(v87, v53, (unsigned int)v57);
          if ( v54 )
          {
            v55 = 0;
LABEL_157:
            if ( v55 >= 0 )
              goto LABEL_71;
          }
        }
      }
    }
    v54 = 0LL;
LABEL_71:
    if ( !v54 )
      goto LABEL_163;
    if ( v49 )
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
      v29 = -1073741811;
      goto LABEL_96;
    }
    v66 = Value - v54[4];
LABEL_88:
    if ( v66 >= v54[5] )
    {
      v29 = (v49 != 0LL) - 1073741512;
      goto LABEL_96;
    }
    v45 = v51 + *(unsigned int *)(v51 + (unsigned int)v54[7] + 4LL * (int)v66);
    v46 = v45;
    v99 = v45;
    if ( v45 < (unsigned __int64)v54 || v45 >= (unsigned __int64)v54 + v79 )
    {
      v29 = 0;
      v67 = *(_QWORD *)(v50 + 48);
      if ( !qword_1801783A0 || (byte_18017838C & 1) != 0 )
        goto LABEL_96;
      if ( v67 < *((_QWORD *)&xmmword_180178500 + 1)
        || v67 >= *((_QWORD *)&xmmword_180178500 + 1) + (unsigned __int64)(unsigned int)qword_180178510 )
      {
        RtlpxLookupFunctionTable(*(_QWORD *)(v50 + 48), (__int64 *)&v103);
      }
      else
      {
        v103 = xmmword_180178500;
        v104 = qword_180178510;
      }
      if ( *((_QWORD *)&v103 + 1) == v67 )
        goto LABEL_96;
LABEL_164:
      __fastfail(0x18u);
    }
    if ( ++v106 == 32 )
      goto LABEL_130;
  }
  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
      812,
      (unsigned int)"LdrpGetProcedureAddress",
      2,
      "Locating procedure \"%s\" by name\n",
      v49);
  v58 = 0;
  v59 = v54[6] - 1;
  v60 = v59 / 2;
  if ( v59 >= 0 )
  {
    while ( 1 )
    {
      v61 = v49;
      v62 = v51 + *(unsigned int *)(v51 + (unsigned int)v54[8] + 4LL * v60) - (_QWORD)v49;
      while ( 1 )
      {
        v63 = *v61;
        if ( *v61 != v61[v62] )
          break;
        ++v61;
        if ( !v63 )
        {
          v64 = 0;
          goto LABEL_80;
        }
      }
      v64 = v63 < (unsigned int)v61[v62] ? -1 : 1;
LABEL_80:
      if ( !v64 )
        break;
      v65 = v60 - 1;
      if ( v64 >= 0 )
        v65 = v59;
      v59 = v65;
      if ( v64 >= 0 )
        v58 = v60 + 1;
      v60 = (v58 + v65) / 2;
      if ( v65 < v58 )
        goto LABEL_159;
    }
    v66 = *(unsigned __int16 *)(v51 + (unsigned int)v54[9] + 2LL * v60);
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
      v49,
      (const void *)v51);
  if ( (LdrpDebugFlags & 0x40) != 0 )
    __debugbreak();
LABEL_163:
  v29 = -1073741702;
LABEL_96:
  if ( v89 )
    RtlFreeHeap(LdrpHeap, 0LL, v89);
  if ( v29 != 259 )
  {
    LOBYTE(v30) = v91;
    if ( v29 < 0 )
      v31 = v82;
    else
      v31 = v46;
    v15 = v90;
    goto LABEL_48;
  }
  return 0LL;
}
