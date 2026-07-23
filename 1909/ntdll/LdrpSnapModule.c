/*
 * XREFs of LdrpSnapModule @ 0x18001C610
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x180022F1C (LdrpMapAndSnapDependency.c)
 *     LdrpProcessWork @ 0x18002E26C (LdrpProcessWork.c)
 * Callees:
 *     LdrpResolveForwarder @ 0x18001B990 (LdrpResolveForwarder.c)
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     RtlpxLookupFunctionTable @ 0x18001E620 (RtlpxLookupFunctionTable.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x18001EF44 (RtlpImageDirectoryEntryToData32.c)
 *     LdrpLogDllState @ 0x1800255A8 (LdrpLogDllState.c)
 *     CompatCachepLookupCdb @ 0x18002946C (CompatCachepLookupCdb.c)
 *     LdrpDoPostSnapWork @ 0x1800558D0 (LdrpDoPostSnapWork.c)
 *     LdrpFreeReplacedModule @ 0x180064F8C (LdrpFreeReplacedModule.c)
 *     LdrpHandlePendingModuleReplaced @ 0x1800650F8 (LdrpHandlePendingModuleReplaced.c)
 *     LdrpReportError @ 0x18006F5D8 (LdrpReportError.c)
 *     RtlAddressInSectionTable @ 0x180075F00 (RtlAddressInSectionTable.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x18007D848 (LdrpLogLoadFailureEtwEvent.c)
 *     LdrpLogError @ 0x18007EA24 (LdrpLogError.c)
 *     NtUnmapViewOfSection @ 0x18009D3D0 (NtUnmapViewOfSection.c)
 *     LdrpLogDbgPrint @ 0x1800CE3D8 (LdrpLogDbgPrint.c)
 *     LdrpCheckRedirection @ 0x1800D5510 (LdrpCheckRedirection.c)
 *     LdrpGenericExceptionFilter @ 0x1800D5908 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrpSnapModule(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 v4; // r10
  unsigned int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 v15; // r13
  unsigned __int64 v16; // r12
  bool v17; // bl
  char *v18; // rdi
  NTSTATUS v19; // eax
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rdx
  char *v22; // rdx
  char *v23; // r11
  unsigned __int64 v24; // r9
  unsigned int v25; // r8d
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 *v28; // r14
  unsigned __int64 *v29; // r13
  __int64 v30; // rbx
  __int64 v31; // rax
  int v32; // r15d
  unsigned __int64 v33; // r13
  unsigned __int64 v34; // rdi
  unsigned __int16 *v35; // r14
  unsigned __int16 *v36; // rbx
  int v37; // r9d
  int v38; // r10d
  int v39; // r11d
  unsigned __int8 *v40; // rax
  unsigned __int64 v41; // rdx
  unsigned __int8 v42; // cl
  int v43; // ecx
  int v44; // eax
  int v45; // eax
  __int64 v46; // rcx
  unsigned __int64 *v47; // r13
  int v48; // eax
  __int64 v49; // r10
  void *v50; // rdx
  char v52; // al
  __int64 v53; // rax
  __int64 v54; // rdi
  unsigned __int16 *v55; // rdx
  int NtHeaders; // [rsp+20h] [rbp-D8h]
  int NtHeadersa; // [rsp+20h] [rbp-D8h]
  __int64 v58; // [rsp+40h] [rbp-B8h]
  __int64 v59; // [rsp+48h] [rbp-B0h]
  __int64 v60; // [rsp+50h] [rbp-A8h]
  __int64 v61; // [rsp+58h] [rbp-A0h] BYREF
  unsigned int v62; // [rsp+60h] [rbp-98h]
  __int64 *v63; // [rsp+68h] [rbp-90h]
  unsigned __int64 *v64; // [rsp+70h] [rbp-88h]
  unsigned __int64 v65; // [rsp+78h] [rbp-80h]
  char *v66; // [rsp+80h] [rbp-78h]
  __int64 v67; // [rsp+88h] [rbp-70h]
  unsigned __int64 v68; // [rsp+90h] [rbp-68h]
  char *v69; // [rsp+98h] [rbp-60h] BYREF
  __int128 v70; // [rsp+A0h] [rbp-58h]
  __int64 v71; // [rsp+B0h] [rbp-48h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+108h] [rbp+10h] BYREF
  int Size; // [rsp+110h] [rbp+18h] BYREF
  unsigned int v75; // [rsp+118h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 56);
  v58 = v2;
  v3 = *(_QWORD *)(v2 + 48);
  v67 = v3;
  LdrpLogDllState(v3, v2 + 72, 5286LL);
  LdrpHandlePendingModuleReplaced(a1);
  v75 = 0;
  v4 = a1;
  while ( 1 )
  {
    v5 = *(_DWORD *)(v4 + 120);
    if ( v5 >= *(_DWORD *)(v4 + 96) )
    {
      v32 = LdrpDoPostSnapWork(v4);
      if ( v32 >= 0 )
      {
        LdrpLogDllState(*(_QWORD *)(v2 + 48), v2 + 72, 5287LL);
        *(_DWORD *)(*(_QWORD *)(v2 + 152) + 56LL) = 5;
      }
      goto LABEL_65;
    }
    v6 = v5;
    v7 = *(_QWORD *)(*(_QWORD *)(v4 + 88) + 8LL * v5);
    v8 = (unsigned __int64 *)v7;
    v60 = v7;
    v9 = *(_QWORD *)(v4 + 88);
    if ( v7 )
    {
      v10 = *(_QWORD *)(v7 + 176);
      if ( v10 )
      {
        if ( (*(_DWORD *)(v10 + 32) & 0x80000) == 0 && *(_QWORD *)(v10 + 56) != v7 )
        {
          v8 = *(unsigned __int64 **)(v10 + 56);
          v60 = (__int64)v8;
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
    v15 = v67 + *(unsigned int *)(v12 + 20 * v6 + 16);
    if ( !(_DWORD)v13 || (unsigned int)v13 > *(_DWORD *)(v2 + 64) )
      v14 = v67 + *(unsigned int *)(v12 + 20 * v6 + 16);
    if ( v8 )
      break;
LABEL_52:
    ++*(_DWORD *)(v4 + 120);
    v3 = v67;
  }
  v16 = v8[6];
  v17 = 1;
  v18 = (char *)v16;
  OutHeaders = 0LL;
  v59 = 0LL;
  v61 = 0LL;
  if ( (v16 & 3) != 0 )
  {
    v18 = (char *)(v16 & 0xFFFFFFFFFFFFFFFCuLL);
    v17 = (v16 & 1) == 0;
  }
  v19 = RtlImageNtHeaderEx(1u, v18, 0LL, &OutHeaders);
  if ( OutHeaders )
  {
    Magic = OutHeaders->OptionalHeader.Magic;
    if ( Magic == 267 )
    {
      v19 = RtlpImageDirectoryEntryToData32((int)v18, v17, 0, (int)&Size, OutHeaders, (__int64)&v61);
      v22 = (char *)v61;
      v59 = v61;
      goto LABEL_78;
    }
    if ( Magic != 523 )
      goto LABEL_79;
    if ( !OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
      goto LABEL_79;
    VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
    if ( !(_DWORD)VirtualAddress )
      goto LABEL_79;
    Size = OutHeaders->OptionalHeader.DataDirectory[0].Size;
    if ( !v17 && (unsigned int)VirtualAddress >= OutHeaders->OptionalHeader.SizeOfHeaders )
    {
      v22 = (char *)RtlAddressInSectionTable(OutHeaders, v18, VirtualAddress);
      v59 = (__int64)v22;
      if ( v22 )
      {
        v19 = 0;
        goto LABEL_78;
      }
      goto LABEL_79;
    }
    v22 = &v18[VirtualAddress];
LABEL_19:
    v59 = (__int64)v22;
  }
  else
  {
    v22 = 0LL;
LABEL_78:
    if ( v19 < 0 )
    {
LABEL_79:
      v22 = 0LL;
      goto LABEL_19;
    }
  }
  if ( !v22 )
  {
    v52 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        2627,
        (unsigned int)"LdrpSnapModule",
        0,
        (__int64)"DLL \"%wZ\" does not contain an export table\n",
        v60 + 72);
      v52 = LdrpDebugFlags;
    }
    if ( (v52 & 0x10) != 0 )
      __debugbreak();
    v32 = -1073741701;
    goto LABEL_65;
  }
  if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    if ( v16 < *((_QWORD *)&xmmword_18017A500 + 1)
      || v16 >= *((_QWORD *)&xmmword_18017A500 + 1) + (unsigned __int64)(unsigned int)qword_18017A510 )
    {
      RtlpxLookupFunctionTable((PVOID)v16);
      v22 = (char *)v59;
    }
    else
    {
      v70 = xmmword_18017A500;
      v71 = qword_18017A510;
    }
    OutHeaders = (PIMAGE_NT_HEADERS)*((_QWORD *)&v70 + 1);
    if ( *((_QWORD *)&v70 + 1) != v16 )
      __fastfail(0x18u);
  }
  v23 = &v22[Size];
  v66 = v23;
  v24 = v16 + *((unsigned int *)v22 + 7);
  v65 = v24;
  v25 = *((_DWORD *)v22 + 6);
  v62 = v25;
  v26 = v16 + *((unsigned int *)v22 + 8);
  v61 = v26;
  v68 = v16 + *((unsigned int *)v22 + 9);
  v4 = a1;
  v27 = 8LL * *(unsigned int *)(a1 + 124);
  v28 = (__int64 *)(v27 + v14);
  v29 = (unsigned __int64 *)(v27 + v15);
  v30 = v58;
  while ( 2 )
  {
    v64 = v29;
    v63 = v28;
    v31 = *v28;
    if ( !*v28 )
    {
      *(_DWORD *)(v4 + 124) = 0;
      v2 = v58;
      goto LABEL_52;
    }
    v32 = -1073741702;
    LODWORD(OutHeaders) = -1073741702;
    v33 = (unsigned __int64)v31 >> 63;
    v34 = -4530927LL;
    v35 = 0LL;
    if ( v31 < 0 )
    {
      v75 = (unsigned __int16)v31;
      v45 = (unsigned __int16)v31 - *((_DWORD *)v22 + 4);
LABEL_45:
      if ( (unsigned int)v45 < *((_DWORD *)v22 + 5) )
      {
        v46 = *(unsigned int *)(v24 + 4LL * v45);
        if ( (_DWORD)v46 )
        {
          v34 = v16 + v46;
          v32 = 0;
          LODWORD(OutHeaders) = 0;
          if ( v16 + v46 > (unsigned __int64)v22 && v34 < (unsigned __int64)v23 )
          {
            v48 = LdrpResolveForwarder((char *)(v16 + v46), v60, v30, &v69);
            v32 = v48;
            LODWORD(OutHeaders) = v48;
            if ( v48 == 259 )
              return 0LL;
            if ( v48 >= 0 )
              v34 = (unsigned __int64)v69;
          }
        }
      }
    }
    else
    {
      v36 = (unsigned __int16 *)(*(_QWORD *)(v58 + 48) + (unsigned int)v31);
      v35 = v36 + 1;
      if ( (*(_DWORD *)(v4 + 32) & 0x2000000) == 0 )
        goto LABEL_30;
      v53 = LdrpCheckRedirection(v58, v60, v36 + 1);
      v34 = v53;
      if ( v53 != -4530927 )
      {
        v30 = v58;
        if ( (LdrpDebugFlags & 5) != 0 )
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            2700,
            (unsigned int)"LdrpSnapModule",
            2,
            (__int64)"Import '%s' of DLL '%wZ' is redirected to 0x%p",
            v35,
            v58 + 72,
            v53);
        goto LABEL_49;
      }
      v26 = v61;
      v25 = v62;
LABEL_30:
      v37 = *v36;
      v38 = 0;
      v39 = v25 - 1;
      if ( v37 >= v25 )
        v37 = v39 / 2;
      if ( v39 >= 0 )
      {
        while ( 1 )
        {
          v40 = (unsigned __int8 *)(v36 + 1);
          v41 = v16 + *(unsigned int *)(v26 + 4LL * v37) - (_QWORD)v35;
          while ( 1 )
          {
            v42 = *v40;
            if ( *v40 != v40[v41] )
              break;
            ++v40;
            if ( !v42 )
            {
              v43 = 0;
              goto LABEL_37;
            }
          }
          v43 = v42 < v40[v41] ? -1 : 1;
LABEL_37:
          if ( !v43 )
            break;
          v44 = v37 - 1;
          if ( v43 >= 0 )
            v44 = v39;
          v39 = v44;
          if ( v43 >= 0 )
            v38 = v37 + 1;
          v37 = (v38 + v44) / 2;
          v26 = v61;
          if ( v44 < v38 )
            goto LABEL_91;
        }
        v45 = *(unsigned __int16 *)(v68 + 2LL * v37);
        v22 = (char *)v59;
        v24 = v65;
        v30 = v58;
        v23 = v66;
        goto LABEL_45;
      }
LABEL_91:
      if ( (LdrpDebugFlags & 3) != 0 )
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          1559,
          (unsigned int)"LdrpNameToOrdinal",
          1,
          (__int64)"Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
          (const char *)v36 + 2,
          (const void *)v16);
      if ( (LdrpDebugFlags & 0x40) != 0 )
        __debugbreak();
      v30 = v58;
    }
    if ( v32 >= 0 )
    {
LABEL_49:
      v47 = v64;
      *v64 = v34;
      v28 = v63 + 1;
      v29 = v47 + 1;
      v4 = a1;
      ++*(_DWORD *)(a1 + 124);
      v26 = v61;
      v22 = (char *)v59;
      v25 = v62;
      v24 = v65;
      v23 = v66;
      continue;
    }
    break;
  }
  if ( v32 != -1073741702 && v32 != -1073741515 )
  {
LABEL_65:
    v49 = a1;
    goto LABEL_66;
  }
  if ( (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v58 + 80))
    || (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v60 + 80)) )
  {
    v54 = v58 + 72;
    LOBYTE(NtHeaders) = 0;
    LdrpLogLoadFailureEtwEvent(v58 + 72, v60 + 72, 1LL, &LoadFailure, NtHeaders);
    LOBYTE(NtHeadersa) = 1;
    LdrpLogLoadFailureEtwEvent(v58 + 72, v60 + 72, 1LL, &LoadFailureOperational, NtHeadersa);
  }
  else
  {
    v54 = v58 + 72;
  }
  if ( (_BYTE)v33 )
  {
    v32 = -1073741512;
    v55 = (unsigned __int16 *)v75;
  }
  else
  {
    v32 = -1073741511;
    v55 = v35;
  }
  LODWORD(OutHeaders) = v32;
  LdrpReportError(v54, v55, (unsigned int)v32);
  v49 = a1;
LABEL_66:
  v50 = *(void **)(v49 + 184);
  if ( v50 )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v50);
    v49 = a1;
    *(_QWORD *)(a1 + 184) = 0LL;
  }
  if ( v32 < 0 )
    LdrpLogError((unsigned int)v32, 25LL, 0LL, v49);
  return (unsigned int)v32;
}
