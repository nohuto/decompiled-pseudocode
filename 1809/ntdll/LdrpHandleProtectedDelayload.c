/*
 * XREFs of LdrpHandleProtectedDelayload @ 0x180007CB0
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x180041E90 (LdrResolveDelayLoadedAPI.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180007BB0 (RtlImageNtHeaderEx.c)
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     RtlSectionTableFromVirtualAddress @ 0x180009C40 (RtlSectionTableFromVirtualAddress.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     LdrpGetDelayloadExportDll @ 0x1800221EC (LdrpGetDelayloadExportDll.c)
 *     LdrpLoadForwardedDll @ 0x180022F00 (LdrpLoadForwardedDll.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180035C68 (LdrpWriteBackProtectedDelayLoad.c)
 *     RtlReleasePath @ 0x180071700 (RtlReleasePath.c)
 *     RtlGuardCheckImageBase @ 0x180078ED4 (RtlGuardCheckImageBase.c)
 *     LdrpParseForwarderDescription @ 0x180079F3C (LdrpParseForwarderDescription.c)
 *     RtlAddressInSectionTable @ 0x18007AC40 (RtlAddressInSectionTable.c)
 *     LdrpRedirectDelayloadFailure @ 0x1800847EC (LdrpRedirectDelayloadFailure.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 *     AVrfCallAPILookupCallback @ 0x1800DAB40 (AVrfCallAPILookupCallback.c)
 */

__int64 __fastcall LdrpHandleProtectedDelayload(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v7; // r15d
  __int64 v8; // r13
  __int64 v9; // rdi
  __int64 v10; // r12
  NTSTATUS DelayloadExportDll; // eax
  NTSTATUS v12; // ebx
  _QWORD *v13; // r14
  _QWORD *v14; // rbx
  __int64 v15; // rsi
  _BYTE *Heap; // r15
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  char *v21; // r13
  NTSTATUS v22; // esi
  const char *v23; // r15
  _QWORD *v24; // rdi
  WCHAR *v25; // rbx
  unsigned __int64 v26; // r14
  bool v27; // bl
  char *v28; // rdi
  NTSTATUS v29; // eax
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rax
  unsigned int SizeOfHeapCommit_high; // r11d
  int v33; // r10d
  int v34; // r11d
  int v35; // r9d
  const char *v36; // rax
  signed __int64 v37; // rdx
  unsigned __int8 v38; // cl
  int v39; // ecx
  int v40; // eax
  unsigned __int32 v41; // esi
  char *v42; // rdi
  NTSTATUS ForwardedDll; // ebx
  __int64 v44; // rsi
  unsigned int v45; // ecx
  __int64 v46; // r13
  unsigned int v48; // eax
  __int64 SizeOfHeapCommit_low; // r8
  PIMAGE_SECTION_HEADER v50; // rax
  __int64 v51; // r8
  unsigned int v52; // [rsp+40h] [rbp-578h]
  NTSTATUS v53; // [rsp+44h] [rbp-574h] BYREF
  unsigned int v54; // [rsp+48h] [rbp-570h]
  NTSTATUS Status; // [rsp+4Ch] [rbp-56Ch]
  PVOID v56; // [rsp+50h] [rbp-568h] BYREF
  unsigned int v57; // [rsp+58h] [rbp-560h]
  char *v58; // [rsp+60h] [rbp-558h]
  _BYTE *v59; // [rsp+68h] [rbp-550h]
  __int64 v60; // [rsp+70h] [rbp-548h] BYREF
  char *v61; // [rsp+78h] [rbp-540h] BYREF
  __int64 v62; // [rsp+80h] [rbp-538h]
  PVOID v63; // [rsp+88h] [rbp-530h] BYREF
  __int64 v64; // [rsp+90h] [rbp-528h]
  const char *v65; // [rsp+98h] [rbp-520h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+A0h] [rbp-518h] BYREF
  void (__fastcall *v67)(char **, PVOID, char *, _QWORD, _QWORD); // [rsp+A8h] [rbp-510h]
  char *v68; // [rsp+B0h] [rbp-508h] BYREF
  __int64 v69; // [rsp+B8h] [rbp-500h]
  __int64 v70; // [rsp+C0h] [rbp-4F8h]
  __int64 v71; // [rsp+C8h] [rbp-4F0h]
  __int64 v72; // [rsp+D0h] [rbp-4E8h]
  char **v73; // [rsp+D8h] [rbp-4E0h]
  __int64 v74; // [rsp+E0h] [rbp-4D8h]
  int v75[2]; // [rsp+E8h] [rbp-4D0h]
  _BYTE v76[16]; // [rsp+F0h] [rbp-4C8h] BYREF
  PWSTR Path[16]; // [rsp+100h] [rbp-4B8h] BYREF
  _BYTE BaseAddress[1024]; // [rsp+180h] [rbp-438h] BYREF

  v74 = a4;
  v7 = a3;
  *(_QWORD *)v75 = a3;
  v8 = a2;
  v70 = a2;
  v9 = a1;
  v62 = a1;
  v72 = a5;
  LODWORD(v10) = 0;
  v60 = 0LL;
  DelayloadExportDll = LdrpGetDelayloadExportDll(a1, a2, (unsigned int)&v56, a6, a5);
  v12 = DelayloadExportDll;
  Status = DelayloadExportDll;
  if ( DelayloadExportDll >= 0 )
  {
    v13 = v56;
    RtlGuardCheckImageBase(*((PVOID *)v56 + 6));
    v14 = (_QWORD *)(*(_QWORD *)(v9 + 48) + *(unsigned int *)(v8 + 12));
    v64 = (__int64)v14;
    v15 = (a5 - (__int64)v14) >> 3;
    v69 = v15;
    if ( *v14 )
    {
      do
        v10 = (unsigned int)(v10 + 1);
      while ( v14[v10] );
    }
    if ( (unsigned int)v10 > 0x80 )
    {
      Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, 8LL * (unsigned int)v10);
      v59 = Heap;
      if ( Heap )
        goto LABEL_6;
      v14 = (_QWORD *)v72;
      v64 = v72;
      LODWORD(v10) = v10 - v15;
      if ( (unsigned int)v10 > 0x80 )
        LODWORD(v10) = 128;
      LODWORD(v15) = 0;
      v69 = 0LL;
    }
    Heap = BaseAddress;
    v59 = BaseAddress;
LABEL_6:
    if ( g_ShimsEnabled )
      v67 = (void (__fastcall *)(char **, PVOID, char *, _QWORD, _QWORD))(__ROR8__(
                                                                            g_pfnSE_GetProcAddressForCaller,
                                                                            64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]);
    else
      v67 = 0LL;
    v17 = 0LL;
    v54 = 0;
    if ( !(_DWORD)v10 )
      goto LABEL_57;
    v18 = 0LL;
    v71 = 0LL;
    v52 = v53;
    while ( 1 )
    {
      v73 = (char **)&Heap[8 * v18];
      *v73 = 0LL;
      if ( (_DWORD)v17 != (_DWORD)v15 )
      {
        if ( v14[v18] - *(_QWORD *)(v9 + 48) >= (unsigned __int64)*(unsigned int *)(v9 + 64) )
        {
          v45 = v54;
          goto LABEL_56;
        }
        v17 = v54;
      }
      v58 = 0LL;
      v61 = 0LL;
      v19 = *(_QWORD *)(v9 + 48);
      v20 = *(_QWORD *)(v19
                      + *(unsigned int *)(v8 + 16)
                      + 8 * (((__int64)v14 + 8 * v17 - (v19 + *(unsigned int *)(v8 + 12))) >> 3));
      v21 = 0LL;
      if ( v20 < 0 )
      {
        v22 = (unsigned __int16)v20;
        v23 = 0LL;
      }
      else
      {
        v22 = 0;
        v23 = (const char *)(v20 + v19 + 2);
      }
      v65 = v23;
      v53 = v22;
      v24 = v13;
      v63 = v13;
      v57 = 0;
      v25 = (WCHAR *)v13[10];
      memset(Path, 0, sizeof(Path));
      LODWORD(Path[3]) = 0;
      Path[4] = v25;
      while ( 1 )
      {
        v26 = v24[6];
        v27 = 1;
        v28 = (char *)v26;
        OutHeaders = 0LL;
        if ( (v26 & 3) != 0 )
        {
          v28 = (char *)(v26 & 0xFFFFFFFFFFFFFFFCuLL);
          v27 = (v26 & 1) == 0;
        }
        v29 = RtlImageNtHeaderEx(1u, v28, 0LL, &OutHeaders);
        if ( !OutHeaders )
          goto LABEL_104;
        Magic = OutHeaders->OptionalHeader.Magic;
        if ( Magic == 267 )
        {
          if ( HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapReserve) )
          {
            SizeOfHeapCommit_low = LODWORD(OutHeaders->OptionalHeader.SizeOfHeapCommit);
            if ( (_DWORD)SizeOfHeapCommit_low )
            {
              SizeOfHeapCommit_high = HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapCommit);
              v52 = SizeOfHeapCommit_high;
              if ( v27 || (unsigned int)SizeOfHeapCommit_low < OutHeaders->OptionalHeader.SizeOfHeaders )
              {
                v21 = &v28[SizeOfHeapCommit_low];
                goto LABEL_25;
              }
              v50 = RtlSectionTableFromVirtualAddress(OutHeaders, (PVOID)0x10B, SizeOfHeapCommit_low);
              v21 = v50 ? &v28[v50->PointerToRawData - (unsigned __int64)v50->VirtualAddress + v51] : 0LL;
              if ( v21 )
              {
                v29 = 0;
                goto LABEL_105;
              }
            }
          }
        }
        else if ( Magic == 523 )
        {
          if ( OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
          {
            VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
            if ( (_DWORD)VirtualAddress )
            {
              SizeOfHeapCommit_high = OutHeaders->OptionalHeader.DataDirectory[0].Size;
              v52 = SizeOfHeapCommit_high;
              if ( v27 || (unsigned int)VirtualAddress < OutHeaders->OptionalHeader.SizeOfHeaders )
              {
                v21 = &v28[VirtualAddress];
                goto LABEL_25;
              }
              v21 = (char *)RtlAddressInSectionTable(OutHeaders, v28, VirtualAddress);
              if ( v21 )
              {
                v29 = 0;
LABEL_104:
                SizeOfHeapCommit_high = v52;
LABEL_105:
                if ( v29 >= 0 )
                  goto LABEL_25;
              }
            }
          }
        }
        v21 = 0LL;
        SizeOfHeapCommit_high = v52;
LABEL_25:
        if ( !v21 )
          goto LABEL_111;
        if ( v23 )
        {
          if ( (LdrpDebugFlags & 5) != 0 )
            LdrpLogDbgPrint(
              (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
              812,
              (unsigned int)"LdrpGetProcedureAddress",
              2,
              "Locating procedure \"%s\" by name\n",
              v23);
          v33 = 0;
          v34 = *((_DWORD *)v21 + 6) - 1;
          v35 = v34 / 2;
          if ( v34 < 0 )
          {
LABEL_107:
            if ( (LdrpDebugFlags & 3) != 0 )
              LdrpLogDbgPrint(
                (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
                1559,
                (unsigned int)"LdrpNameToOrdinal",
                1,
                "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
                v23,
                (const void *)v26);
            if ( (LdrpDebugFlags & 0x40) != 0 )
              __debugbreak();
LABEL_111:
            ForwardedDll = -1073741702;
LABEL_112:
            v42 = v58;
            goto LABEL_45;
          }
          while ( 1 )
          {
            v36 = v23;
            v37 = v26 + *(unsigned int *)(v26 + *((unsigned int *)v21 + 8) + 4LL * v35) - (_QWORD)v23;
            while ( 1 )
            {
              v38 = *v36;
              if ( *v36 != v36[v37] )
                break;
              ++v36;
              if ( !v38 )
              {
                v39 = 0;
                goto LABEL_34;
              }
            }
            v39 = v38 < (unsigned int)v36[v37] ? -1 : 1;
LABEL_34:
            if ( !v39 )
              break;
            v40 = v35 - 1;
            if ( v39 >= 0 )
              v40 = v34;
            v34 = v40;
            if ( v39 >= 0 )
              v33 = v35 + 1;
            v35 = (v33 + v40) / 2;
            if ( v40 < v33 )
              goto LABEL_107;
          }
          v41 = *(unsigned __int16 *)(v26 + *((unsigned int *)v21 + 9) + 2LL * v35);
          SizeOfHeapCommit_high = v52;
        }
        else
        {
          if ( (LdrpDebugFlags & 5) != 0 )
          {
            LdrpLogDbgPrint(
              (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
              830,
              (unsigned int)"LdrpGetProcedureAddress",
              2,
              "Loading procedure 0x%lx by ordinal\n",
              v22);
            SizeOfHeapCommit_high = v52;
          }
          if ( !v22 )
          {
            ForwardedDll = -1073741811;
            goto LABEL_112;
          }
          v41 = v22 - *((_DWORD *)v21 + 4);
        }
        if ( v41 >= *((_DWORD *)v21 + 5) )
        {
          ForwardedDll = (v23 != 0LL) - 1073741512;
          goto LABEL_112;
        }
        v42 = (char *)(v26 + *(unsigned int *)(v26 + *((unsigned int *)v21 + 7) + 4LL * (int)v41));
        v58 = v42;
        v61 = v42;
        if ( v42 < v21 || v42 >= &v21[SizeOfHeapCommit_high] )
        {
          ForwardedDll = 0;
          goto LABEL_45;
        }
        v48 = v57++;
        if ( v48 >= 0x20 )
          break;
        ForwardedDll = LdrpParseForwarderDescription(v42, v76, &v65, &v53);
        if ( ForwardedDll < 0 )
          goto LABEL_45;
        LODWORD(Path[3]) = *((_DWORD *)v63 + 68);
        ForwardedDll = LdrpLoadForwardedDll(
                         (unsigned int)v76,
                         (unsigned int)Path,
                         (_DWORD)v56,
                         (_DWORD)v63,
                         2,
                         (__int64)&v63);
        if ( ForwardedDll < 0 )
          goto LABEL_45;
        v24 = v63;
        LdrpDereferenceModule(v63);
        v23 = v65;
        v22 = v53;
        v21 = 0LL;
      }
      ForwardedDll = -1073741701;
LABEL_45:
      if ( BYTE4(Path[15]) )
        RtlReleasePath(Path[0]);
      if ( ForwardedDll < 0 )
      {
        v42 = 0LL;
        v61 = 0LL;
      }
      v53 = ForwardedDll;
      if ( ForwardedDll >= 0 )
      {
        v44 = v62;
        if ( AvrfpAPILookupCallbacksEnabled )
        {
          AVrfCallAPILookupCallback(*(_QWORD *)(v62 + 48), *((_QWORD *)v56 + 6), (_DWORD)v42, 1, (__int64)&v61);
          v42 = v61;
        }
        if ( v67 )
        {
          v68 = 0LL;
          v67(&v68, v56, v42, *(_QWORD *)(v44 + 48), 0LL);
          if ( v68 )
            v42 = v68;
        }
      }
      *v73 = v42;
      v45 = v54;
      LODWORD(v15) = v69;
      Heap = v59;
      v9 = v62;
      v13 = v56;
      v8 = v70;
      if ( v54 == (_DWORD)v69 )
      {
        Status = ForwardedDll;
        v60 = *(_QWORD *)&v59[8 * (unsigned int)v69];
      }
      v14 = (_QWORD *)v64;
LABEL_56:
      v17 = v45 + 1;
      v54 = v17;
      v18 = ++v71;
      if ( (unsigned int)v17 >= (unsigned int)v10 )
      {
LABEL_57:
        if ( Status < 0 )
        {
          v46 = LdrpRedirectDelayloadFailure(v9, (int)v13, v8, v75[0], v74, v72, Status);
          v60 = v46;
          if ( v46 && ((unsigned int)(Status + 1073741512) <= 1 || Status == -1073741702 || Status == -1073740671) )
            *(_QWORD *)&Heap[8 * (unsigned int)v15] = v46;
        }
        else
        {
          v46 = v60;
        }
        LdrpWriteBackProtectedDelayLoad(v9, (_DWORD)v14, (_DWORD)Heap, v10, v15);
        if ( BaseAddress != Heap )
          RtlFreeHeap(LdrpHeap, 0, Heap);
        LdrpDereferenceModule(v13);
        return v46;
      }
    }
  }
  v46 = LdrpRedirectDelayloadFailure(v9, 0, v8, v7, a4, a5, DelayloadExportDll);
  v60 = v46;
  if ( v46 && v12 == -1073741515 )
    LdrpWriteBackProtectedDelayLoad(v9, a5, (unsigned int)&v60, 1, 0);
  return v46;
}
