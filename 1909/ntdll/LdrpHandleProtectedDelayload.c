/*
 * XREFs of LdrpHandleProtectedDelayload @ 0x18001BB70
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x1800187C0 (LdrResolveDelayLoadedAPI.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x18001B678 (LdrpDereferenceModule.c)
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     RtlSectionTableFromVirtualAddress @ 0x18001EFD0 (RtlSectionTableFromVirtualAddress.c)
 *     LdrpGetDelayloadExportDll @ 0x18002113C (LdrpGetDelayloadExportDll.c)
 *     LdrpLoadForwardedDll @ 0x180021EC0 (LdrpLoadForwardedDll.c)
 *     RtlReleasePath @ 0x180032330 (RtlReleasePath.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x18005551C (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpParseForwarderDescription @ 0x18006F390 (LdrpParseForwarderDescription.c)
 *     RtlGuardCheckImageBase @ 0x18007358C (RtlGuardCheckImageBase.c)
 *     RtlAddressInSectionTable @ 0x180075F00 (RtlAddressInSectionTable.c)
 *     LdrpRedirectDelayloadFailure @ 0x18007FAFC (LdrpRedirectDelayloadFailure.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800CE3D8 (LdrpLogDbgPrint.c)
 *     AVrfCallAPILookupCallback @ 0x1800D8A90 (AVrfCallAPILookupCallback.c)
 */

__int64 __fastcall LdrpHandleProtectedDelayload(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v7; // r12d
  __int64 v8; // r15
  __int64 v9; // rdi
  NTSTATUS DelayloadExportDll; // eax
  NTSTATUS v11; // ebx
  _QWORD *v12; // r13
  _QWORD *v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // r12
  _BYTE *Heap; // r14
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  const char *v21; // r15
  NTSTATUS v22; // esi
  _QWORD *v23; // rdi
  WCHAR *v24; // rbx
  unsigned __int64 v25; // r14
  bool v26; // bl
  char *v27; // rdi
  char *v28; // r13
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
  __int64 v46; // r15
  unsigned int v48; // eax
  __int64 SizeOfHeapCommit_low; // r8
  PIMAGE_SECTION_HEADER v50; // rax
  __int64 v51; // r8
  unsigned int v52; // [rsp+40h] [rbp-578h]
  unsigned int v53; // [rsp+44h] [rbp-574h]
  NTSTATUS v54; // [rsp+48h] [rbp-570h] BYREF
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
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+98h] [rbp-520h] BYREF
  const char *v66; // [rsp+A0h] [rbp-518h] BYREF
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
  v60 = 0LL;
  DelayloadExportDll = LdrpGetDelayloadExportDll(a1, a2, (unsigned int)&v56, a6, a5);
  v11 = DelayloadExportDll;
  Status = DelayloadExportDll;
  if ( DelayloadExportDll >= 0 )
  {
    v12 = v56;
    RtlGuardCheckImageBase(*((PVOID *)v56 + 6));
    v13 = (_QWORD *)(*(_QWORD *)(v9 + 48) + *(unsigned int *)(v8 + 12));
    v64 = (__int64)v13;
    v14 = (a5 - (__int64)v13) >> 3;
    v69 = v14;
    LODWORD(v15) = 0;
    if ( *v13 )
    {
      do
        v15 = (unsigned int)(v15 + 1);
      while ( v13[v15] );
    }
    if ( (unsigned int)v15 > 0x80 )
    {
      Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, 8LL * (unsigned int)v15);
      v59 = Heap;
      if ( !Heap )
      {
        Heap = BaseAddress;
        v59 = BaseAddress;
        v13 = (_QWORD *)v72;
        v64 = v72;
        LODWORD(v15) = v15 - v14;
        if ( (unsigned int)v15 > 0x80 )
          LODWORD(v15) = 128;
        LODWORD(v14) = 0;
        v69 = 0LL;
      }
    }
    else
    {
      Heap = BaseAddress;
      v59 = BaseAddress;
    }
    if ( g_ShimsEnabled )
      v67 = (void (__fastcall *)(char **, PVOID, char *, _QWORD, _QWORD))(__ROR8__(
                                                                            g_pfnSE_GetProcAddressForCaller,
                                                                            64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]);
    else
      v67 = 0LL;
    v17 = 0LL;
    v53 = 0;
    if ( !(_DWORD)v15 )
      goto LABEL_57;
    v18 = 0LL;
    v71 = 0LL;
    v52 = v54;
    while ( 1 )
    {
      v73 = (char **)&Heap[8 * v18];
      *v73 = 0LL;
      if ( (_DWORD)v17 != (_DWORD)v14 )
      {
        if ( v13[v18] - *(_QWORD *)(v9 + 48) >= (unsigned __int64)*(unsigned int *)(v9 + 64) )
        {
          v45 = v53;
          goto LABEL_56;
        }
        v17 = v53;
      }
      v58 = 0LL;
      v61 = 0LL;
      v19 = *(_QWORD *)(v9 + 48);
      v20 = *(_QWORD *)(v19
                      + *(unsigned int *)(v8 + 16)
                      + 8 * (((__int64)v13 + 8 * v17 - (v19 + *(unsigned int *)(v8 + 12))) >> 3));
      if ( v20 < 0 )
      {
        v21 = 0LL;
        v22 = (unsigned __int16)v20;
      }
      else
      {
        v21 = (const char *)(v20 + v19 + 2);
        v22 = 0;
      }
      v66 = v21;
      v54 = v22;
      v23 = v12;
      v63 = v12;
      v57 = 0;
      v24 = (WCHAR *)v12[10];
      memset(Path, 0, sizeof(Path));
      Path[4] = v24;
      while ( 1 )
      {
        v25 = v23[6];
        v26 = 1;
        v27 = (char *)v25;
        OutHeaders = 0LL;
        v28 = 0LL;
        if ( (v25 & 3) != 0 )
        {
          v27 = (char *)(v25 & 0xFFFFFFFFFFFFFFFCuLL);
          v26 = (v25 & 1) == 0;
        }
        v29 = RtlImageNtHeaderEx(1u, v27, 0LL, &OutHeaders);
        if ( !OutHeaders )
          goto LABEL_103;
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
              if ( v26 || (unsigned int)SizeOfHeapCommit_low < OutHeaders->OptionalHeader.SizeOfHeaders )
              {
                v28 = &v27[SizeOfHeapCommit_low];
                goto LABEL_25;
              }
              v50 = RtlSectionTableFromVirtualAddress(OutHeaders, (PVOID)0x10B, SizeOfHeapCommit_low);
              if ( v50 )
                v28 = &v27[v50->PointerToRawData - (unsigned __int64)v50->VirtualAddress + v51];
              if ( v28 )
              {
                v29 = 0;
                goto LABEL_104;
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
              if ( v26 || (unsigned int)VirtualAddress < OutHeaders->OptionalHeader.SizeOfHeaders )
              {
                v28 = &v27[VirtualAddress];
                goto LABEL_25;
              }
              v28 = (char *)RtlAddressInSectionTable(OutHeaders, v27, VirtualAddress);
              if ( v28 )
              {
                v29 = 0;
LABEL_103:
                SizeOfHeapCommit_high = v52;
LABEL_104:
                if ( v29 >= 0 )
                  goto LABEL_25;
              }
            }
          }
        }
        v28 = 0LL;
        SizeOfHeapCommit_high = v52;
LABEL_25:
        if ( !v28 )
          goto LABEL_110;
        if ( v21 )
        {
          if ( (LdrpDebugFlags & 5) != 0 )
            LdrpLogDbgPrint(
              (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
              812,
              (unsigned int)"LdrpGetProcedureAddress",
              2,
              (__int64)"Locating procedure \"%s\" by name\n",
              v21);
          v33 = 0;
          v34 = *((_DWORD *)v28 + 6) - 1;
          v35 = v34 / 2;
          if ( v34 < 0 )
          {
LABEL_106:
            if ( (LdrpDebugFlags & 3) != 0 )
              LdrpLogDbgPrint(
                (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
                1559,
                (unsigned int)"LdrpNameToOrdinal",
                1,
                (__int64)"Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
                v21,
                (const void *)v25);
            if ( (LdrpDebugFlags & 0x40) != 0 )
              __debugbreak();
LABEL_110:
            ForwardedDll = -1073741702;
LABEL_111:
            v42 = v58;
            goto LABEL_45;
          }
          while ( 1 )
          {
            v36 = v21;
            v37 = v25 + *(unsigned int *)(v25 + *((unsigned int *)v28 + 8) + 4LL * v35) - (_QWORD)v21;
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
              goto LABEL_106;
          }
          v41 = *(unsigned __int16 *)(v25 + *((unsigned int *)v28 + 9) + 2LL * v35);
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
              (__int64)"Loading procedure 0x%lx by ordinal\n",
              v22);
            SizeOfHeapCommit_high = v52;
          }
          if ( !v22 )
          {
            ForwardedDll = -1073741811;
            goto LABEL_111;
          }
          v41 = v22 - *((_DWORD *)v28 + 4);
        }
        if ( v41 >= *((_DWORD *)v28 + 5) )
        {
          ForwardedDll = (v21 != 0LL) - 1073741512;
          goto LABEL_111;
        }
        v42 = (char *)(v25 + *(unsigned int *)(v25 + *((unsigned int *)v28 + 7) + 4LL * (int)v41));
        v58 = v42;
        v61 = v42;
        if ( v42 < v28 || v42 >= &v28[SizeOfHeapCommit_high] )
        {
          ForwardedDll = 0;
          goto LABEL_45;
        }
        v48 = v57++;
        if ( v48 >= 0x20 )
          break;
        ForwardedDll = LdrpParseForwarderDescription(v42, v76, &v66, &v54);
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
        v23 = v63;
        LdrpDereferenceModule((char *)v63);
        v21 = v66;
        v22 = v54;
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
      v54 = ForwardedDll;
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
      v45 = v53;
      LODWORD(v14) = v69;
      Heap = v59;
      v9 = v62;
      v12 = v56;
      v8 = v70;
      if ( v53 == (_DWORD)v69 )
      {
        Status = ForwardedDll;
        v60 = *(_QWORD *)&v59[8 * (unsigned int)v69];
      }
      v13 = (_QWORD *)v64;
LABEL_56:
      v17 = v45 + 1;
      v53 = v17;
      v18 = ++v71;
      if ( (unsigned int)v17 >= (unsigned int)v15 )
      {
LABEL_57:
        if ( Status < 0 )
        {
          v46 = LdrpRedirectDelayloadFailure(v9, (int)v12, v8, v75[0], v74, v72, Status);
          v60 = v46;
          if ( v46 && ((unsigned int)(Status + 1073741512) <= 1 || Status == -1073741702 || Status == -1073740671) )
            *(_QWORD *)&Heap[8 * (unsigned int)v14] = v46;
        }
        else
        {
          v46 = v60;
        }
        LdrpWriteBackProtectedDelayLoad(v9, (_DWORD)v13, (_DWORD)Heap, v15, v14);
        if ( BaseAddress != Heap )
          RtlFreeHeap(LdrpHeap, 0, Heap);
        LdrpDereferenceModule((char *)v12);
        return v46;
      }
    }
  }
  v46 = LdrpRedirectDelayloadFailure(v9, 0, v8, v7, a4, a5, DelayloadExportDll);
  v60 = v46;
  if ( v46 && v11 == -1073741515 )
    LdrpWriteBackProtectedDelayLoad(v9, a5, (unsigned int)&v60, 1, 0);
  return v46;
}
