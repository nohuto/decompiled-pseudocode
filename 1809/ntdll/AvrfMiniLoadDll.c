/*
 * XREFs of AvrfMiniLoadDll @ 0x1800DCAA8
 * Callers:
 *     AVrfInitializeVerifier @ 0x1800DACE8 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180007188 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpGetProcedureAddress @ 0x180009090 (LdrpGetProcedureAddress.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180009B04 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpCallInitRoutine @ 0x180025CC8 (LdrpCallInitRoutine.c)
 *     LdrpLogDllState @ 0x180026314 (LdrpLogDllState.c)
 *     LdrInitSecurityCookie @ 0x1800271C4 (LdrInitSecurityCookie.c)
 *     LdrpGenRandom @ 0x180027464 (LdrpGenRandom.c)
 *     RtlInsertInvertedFunctionTable @ 0x180027528 (RtlInsertInvertedFunctionTable.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x18002769C (LdrpPrepareImportAddressTableForSnap.c)
 *     RtlImageNtHeader @ 0x180028AB0 (RtlImageNtHeader.c)
 *     RtlAppendUnicodeStringToString @ 0x180029B40 (RtlAppendUnicodeStringToString.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x180035D94 (LdrpUnsuppressAddressTakenIat.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x1800411E0 (RtlCopyUnicodeString.c)
 *     LdrpCfgProcessLoadConfig @ 0x180041A48 (LdrpCfgProcessLoadConfig.c)
 *     DbgPrintEx @ 0x18004D290 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A0800 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0840 (NtUnmapViewOfSection.c)
 *     NtOpenFile @ 0x1800A0960 (NtOpenFile.c)
 *     ZwQueryAttributesFile @ 0x1800A0AA0 (ZwQueryAttributesFile.c)
 *     NtCreateSection @ 0x1800A0C40 (NtCreateSection.c)
 *     ZwProtectVirtualMemory @ 0x1800A0D00 (ZwProtectVirtualMemory.c)
 *     NtQuerySection @ 0x1800A0D20 (NtQuerySection.c)
 *     ZwOpenDirectoryObject @ 0x1800A0E00 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1800A27D0 (ZwOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x1800A2DD0 (NtQuerySymbolicLinkObject.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall AvrfMiniLoadDll(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int appended; // esi
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  struct _TEB *v8; // rdi
  void *ArbitraryUserPointer; // rbx
  NTSTATUS v10; // eax
  PIMAGE_NT_HEADERS v11; // rax
  PIMAGE_NT_HEADERS v12; // r13
  char *v13; // r10
  __int128 v14; // xmm0
  unsigned __int16 v15; // r9
  unsigned __int64 v16; // r8
  _WORD *i; // rdx
  __int16 v18; // ax
  _WORD *v19; // rdx
  __int16 v20; // cx
  char *v21; // rax
  __int64 v22; // rax
  NTSTATUS v23; // eax
  NTSTATUS v24; // eax
  __int64 v25; // rcx
  NTSTATUS v26; // eax
  unsigned int *v27; // rdx
  _DWORD *v28; // rbx
  __int64 v29; // rdi
  __int64 v31; // rax
  __int64 v32; // rdi
  int v33; // ecx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  _DWORD *v37; // rdx
  _OWORD *v38; // rcx
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int64 v48; // rcx
  _UNICODE_STRING LinkTarget; // [rsp+50h] [rbp-B0h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE SectionHandle; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v52; // [rsp+70h] [rbp-90h] BYREF
  int *v53; // [rsp+78h] [rbp-88h]
  HANDLE FileHandle; // [rsp+80h] [rbp-80h] BYREF
  HANDLE DirectoryHandle; // [rsp+88h] [rbp-78h] BYREF
  HANDLE LinkHandle; // [rsp+90h] [rbp-70h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  __int64 v58; // [rsp+C8h] [rbp-38h] BYREF
  int v59[2]; // [rsp+D0h] [rbp-30h]
  unsigned int v60; // [rsp+D8h] [rbp-28h] BYREF
  ULONG OldProtect; // [rsp+DCh] [rbp-24h] BYREF
  ULONG_PTR ViewSize; // [rsp+E0h] [rbp-20h] BYREF
  __int64 SectionInformation; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v64; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v65; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v66; // [rsp+100h] [rbp+0h]
  __int64 v67; // [rsp+108h] [rbp+8h]
  int v68; // [rsp+110h] [rbp+10h] BYREF
  __int64 (__fastcall *v69)(); // [rsp+118h] [rbp+18h]
  int (__fastcall *v70)(__int64, __int64); // [rsp+120h] [rbp+20h]
  __int64 (__fastcall *v71)(); // [rsp+128h] [rbp+28h]
  __int64 v72; // [rsp+130h] [rbp+30h]
  PVOID (__cdecl *v73)(PRTL_DEBUG_INFORMATION, SIZE_T); // [rsp+138h] [rbp+38h]
  NTSTATUS (__cdecl *v74)(HANDLE, ULONG, PRTL_DEBUG_INFORMATION); // [rsp+140h] [rbp+40h]
  __int64 (__fastcall *v75)(unsigned __int16 *, __int64, __int64, __int64, int, __int64); // [rsp+148h] [rbp+48h]
  __int128 v76; // [rsp+150h] [rbp+50h]
  _DWORD *v77; // [rsp+160h] [rbp+60h]
  __int64 v78; // [rsp+168h] [rbp+68h]
  signed __int64 v79; // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v80)(unsigned __int16, unsigned __int16); // [rsp+178h] [rbp+78h]
  __int64 (__fastcall *v81)(); // [rsp+180h] [rbp+80h]
  __int64 (__fastcall *v82)(); // [rsp+188h] [rbp+88h]
  __int64 (__fastcall *v83)(); // [rsp+190h] [rbp+90h]
  __int64 (__fastcall *v84)(_QWORD, _QWORD); // [rsp+198h] [rbp+98h]
  __int64 (__fastcall *v85)(_QWORD, _QWORD); // [rsp+1A0h] [rbp+A0h]
  _UNICODE_STRING DestinationString; // [rsp+1B0h] [rbp+B0h] BYREF
  _UNICODE_STRING v87; // [rsp+1C0h] [rbp+C0h] BYREF
  _UNICODE_STRING Source; // [rsp+1D0h] [rbp+D0h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+1E0h] [rbp+E0h] BYREF
  _QWORD v90[24]; // [rsp+1F0h] [rbp+F0h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+2B0h] [rbp+1B0h] BYREF
  _DWORD v92[2]; // [rsp+2E0h] [rbp+1E0h] BYREF
  _BYTE v93[520]; // [rsp+2E8h] [rbp+1E8h] BYREF

  v66 = a2;
  DirectoryHandle = 0LL;
  LinkHandle = 0LL;
  SectionHandle = 0LL;
  FileHandle = 0LL;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  v53 = 0LL;
  *(_QWORD *)v59 = a4;
  v67 = a3;
  RtlInitUnicodeString(&DestinationString, L"\\KnownDlls");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  appended = ZwOpenDirectoryObject(&DirectoryHandle, 3u, &ObjectAttributes);
  if ( appended >= 0 )
  {
    RtlInitUnicodeString(&v87, L"KnownDllPath");
    ObjectAttributes.RootDirectory = DirectoryHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v87;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    appended = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
    if ( appended >= 0 )
    {
      LinkTarget.Buffer = (wchar_t *)v93;
      v92[0] = 4128860;
      v92[1] = 6029375;
      *(_DWORD *)&LinkTarget.Length = 0x2000000;
      appended = NtQuerySymbolicLinkObject(LinkHandle, &LinkTarget, 0LL);
      if ( appended >= 0 )
      {
        LinkTarget.Buffer = (wchar_t *)v92;
        LinkTarget.Length += 8;
        LinkTarget.MaximumLength += 8;
        RtlInitUnicodeString(&Source, L"\\");
        appended = RtlAppendUnicodeStringToString(&LinkTarget, &Source);
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(&LinkTarget, &VerifierDllString);
          if ( appended >= 0 )
          {
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &LinkTarget;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v6 = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
            if ( v6 < 0 && v6 != -1073741757 && v6 != -1073741790 )
              goto LABEL_9;
            v7 = NtOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
            appended = v7;
            if ( v7 >= 0 )
            {
              appended = NtCreateSection(&SectionHandle, 0xFu, 0LL, 0LL, 0x10u, 0x1000000u, FileHandle);
              if ( appended >= 0 )
              {
                *(_WORD *)(a5 + 370) = 520;
                *(_WORD *)(a5 + 368) = 0;
                *(_QWORD *)(a5 + 376) = a5 + 384;
                LinkTarget.Buffer = (wchar_t *)v93;
                LinkTarget.Length -= 8;
                LinkTarget.MaximumLength -= 8;
                RtlCopyUnicodeString((PUNICODE_STRING)(a5 + 368), &LinkTarget);
                v8 = NtCurrentTeb();
                ArbitraryUserPointer = v8->NtTib.ArbitraryUserPointer;
                v8->NtTib.ArbitraryUserPointer = LinkTarget.Buffer;
                v10 = ZwMapViewOfSection(
                        SectionHandle,
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        &BaseAddress,
                        0LL,
                        0LL,
                        0LL,
                        &ViewSize,
                        ViewShare,
                        0x800000u,
                        4u);
                v8->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
                appended = v10;
                if ( v10 >= 0 )
                {
                  v11 = RtlImageNtHeader(BaseAddress);
                  v12 = v11;
                  if ( !v11 )
                    goto LABEL_16;
                  v13 = (char *)BaseAddress;
                  *(_QWORD *)(a5 + 48) = BaseAddress;
                  *(_DWORD *)(a5 + 64) = v11->OptionalHeader.SizeOfImage;
                  *(_DWORD *)(a5 + 128) = v11->FileHeader.TimeDateStamp;
                  *(_QWORD *)(a5 + 144) = 0LL;
                  v14 = *(_OWORD *)(a5 + 368);
                  *(_DWORD *)(a5 + 104) = 0;
                  *(_OWORD *)(a5 + 72) = v14;
                  v15 = *(_WORD *)(a5 + 72);
                  v16 = *(_QWORD *)(a5 + 80);
                  for ( i = (_WORD *)(v16 + 2 * (((unsigned __int64)v15 >> 1) - 1)); (unsigned __int64)i > v16; --i )
                  {
                    if ( *i == 92 )
                      goto LABEL_22;
                  }
                  if ( *i == 92 )
                  {
LABEL_22:
                    v18 = *(_WORD *)(a5 + 74);
                    v19 = i + 1;
                    *(_QWORD *)(a5 + 96) = v19;
                    v20 = 2 * ((__int64)((__int64)v19 - v16) >> 1);
                    *(_WORD *)(a5 + 88) = v15 - v20;
                    *(_WORD *)(a5 + 90) = v18 - v20;
                    goto LABEL_24;
                  }
                  *(_OWORD *)(a5 + 88) = v14;
LABEL_24:
                  if ( v12->OptionalHeader.AddressOfEntryPoint )
                    v21 = &v13[v12->OptionalHeader.AddressOfEntryPoint];
                  else
                    v21 = 0LL;
                  *(_QWORD *)(a5 + 56) = v21;
                  *(_QWORD *)(a5 + 248) = v12->OptionalHeader.ImageBase;
                  *(_QWORD *)(a5 + 152) = a5 + 288;
                  memset((void *)(a5 + 288), 0, 0x50uLL);
                  *(_QWORD *)(a5 + 160) = a5 + 288;
                  *(_QWORD *)(a5 + 168) = a5 + 288;
                  *(_QWORD *)(a5 + 288) = a5 + 160;
                  *(_QWORD *)(a5 + 296) = a5 + 160;
                  *(_DWORD *)(a5 + 276) = 2;
                  v22 = *(_QWORD *)(a5 + 288);
                  *(_DWORD *)(a5 + 312) = -1;
                  *(_WORD *)(v22 - 52) = -1;
                  v23 = NtQuerySection(SectionHandle, SectionRelocationInformation, &SectionInformation, 8uLL, 0LL);
                  if ( v23 < 0 )
                  {
                    appended = v23;
                    goto LABEL_47;
                  }
                  if ( SectionInformation )
                    *(_QWORD *)(a5 + 248) -= SectionInformation;
                  if ( (v12->FileHeader.Characteristics & 0x2000) != 0 )
                    *(_DWORD *)(a5 + 104) |= 4u;
                  if ( (*(_DWORD *)(a5 + 104) & 4) == 0 )
                    *(_QWORD *)(a5 + 56) = 0LL;
                  v24 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(a5 + 48), 1, 9u, &v52, &v64);
                  v25 = v64;
                  if ( v24 < 0 )
                    v25 = 0LL;
                  if ( v25 && v52 )
                  {
                    DbgPrintEx(0x5Du, 0, "AVRF: Verifier .dlls must not have thread locals\n");
                    __debugbreak();
                  }
                  v26 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(a5 + 48), 1, 1u, &v60, &v65);
                  v27 = (unsigned int *)v65;
                  if ( v26 < 0 )
                    v27 = 0LL;
                  if ( !v27 )
                  {
LABEL_16:
                    appended = -1073741701;
                    goto LABEL_47;
                  }
                  v28 = (_DWORD *)(*(_QWORD *)(a5 + 48) + *v27);
                  v29 = *(_QWORD *)(a5 + 48) + v27[4];
                  if ( *(_QWORD *)v28 )
                  {
                    memset(v90, 0, sizeof(v90));
                    v90[7] = a5;
                    appended = LdrpPrepareImportAddressTableForSnap((__int64)v90);
                    if ( appended >= 0 )
                    {
                      if ( v90[13] )
                      {
                        LODWORD(v31) = *v28;
                        v32 = v29 - (_QWORD)v28;
                        while ( 1 )
                        {
                          appended = LdrpGetProcedureAddress(
                                       *(signed __int64 *)v59,
                                       (const char *)(*(_QWORD *)(a5 + 48) + (unsigned int)v31 + 2LL),
                                       0,
                                       (unsigned __int64 *)((char *)v28 + v32));
                          if ( appended < 0 )
                            break;
                          v28 += 2;
                          v31 = *(_QWORD *)v28;
                          if ( !*(_QWORD *)v28 )
                          {
                            ZwProtectVirtualMemory(
                              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                              (PVOID *)&v90[13],
                              &v90[14],
                              v90[17],
                              &OldProtect);
                            if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression() )
                              appended = LdrpUnsuppressAddressTakenIat(*(char **)(v90[7] + 48LL), 0, 0);
                            if ( appended < 0 )
                              break;
                            goto LABEL_64;
                          }
                        }
                      }
                      else
                      {
                        appended = -1073741701;
                      }
                    }
                  }
                  else
                  {
LABEL_64:
                    v33 = *(_DWORD *)(a5 + 104);
                    if ( (v33 & 0x2004) == 4 )
                    {
                      v58 = 0LL;
                      v34 = LdrpGenRandom();
                      LdrInitSecurityCookie(
                        *(_QWORD *)(a5 + 48),
                        *(unsigned int *)(a5 + 64),
                        0LL,
                        v34 ^ LdrSystemDllInitBlock.RngData,
                        &v58);
                      appended = LdrpCfgProcessLoadConfig(a5, (unsigned __int16 *)v12, v58);
                      if ( appended < 0 )
                        goto LABEL_47;
                      *(_DWORD *)(a5 + 104) |= 0x2000u;
                      v33 = *(_DWORD *)(a5 + 104);
                    }
                    if ( (v33 & 0x200) == 0 )
                    {
                      RtlInsertInvertedFunctionTable((unsigned __int64)BaseAddress, *(_DWORD *)(a5 + 64));
                      *(_DWORD *)(a5 + 104) |= 0x200u;
                    }
                    v35 = *(_QWORD *)(a5 + 48);
                    v36 = *(_QWORD *)(a5 + 56);
                    v69 = RtlpGetStackTraceAddress;
                    v68 = 152;
                    v80 = RtlpGetStackTraceAddressEx;
                    v76 = 0LL;
                    v70 = AVrfInternalHeapFreeNotification;
                    v71 = RtlLogStackTrace;
                    v81 = RtlReleaseStackTrace;
                    v82 = RtlStdInitializeStackDatabase;
                    v83 = RtlStdDeleteStackDatabase;
                    v84 = RtlStdLogStackTrace;
                    v85 = RtlStdReleaseStackTrace;
                    v72 = v66;
                    v78 = v67;
                    v73 = RtlCommitDebugInfo;
                    v74 = RtlSetProcessDebugInformation;
                    v75 = RtlQueryImageFileExecutionOptions;
                    v79 = *(_QWORD *)v59;
                    v53 = &v68;
                    v77 = 0LL;
                    if ( LdrpCallInitRoutine(v36, v35, 5)
                      && v53 == &v68
                      && (v37 = v77) != 0LL
                      && *v77 == 80
                      && (v38 = (_OWORD *)*((_QWORD *)&v76 + 1)) != 0LL
                      && **((_DWORD **)&v76 + 1) == 176 )
                    {
                      v39 = *(_OWORD *)(*((_QWORD *)&v76 + 1) + 16LL);
                      unk_18015F3F8 = **((_OWORD **)&v76 + 1);
                      v40 = *(_OWORD *)(*((_QWORD *)&v76 + 1) + 32LL);
                      *((_OWORD *)&unk_18015F3F8 + 1) = v39;
                      v41 = v38[3];
                      *((_OWORD *)&unk_18015F3F8 + 2) = v40;
                      v42 = v38[4];
                      *((_OWORD *)&unk_18015F3F8 + 3) = v41;
                      v43 = v38[5];
                      *((_OWORD *)&unk_18015F3F8 + 4) = v42;
                      v44 = v38[6];
                      *((_OWORD *)&unk_18015F3F8 + 5) = v43;
                      v45 = v38[8];
                      *((_OWORD *)&unk_18015F3F8 + 6) = v44;
                      *((_OWORD *)&unk_18015F3F8 + 7) = v38[7];
                      v46 = v38[9];
                      *((_OWORD *)&unk_18015F3F8 + 8) = v45;
                      v47 = v38[10];
                      *((_OWORD *)&unk_18015F3F8 + 9) = v46;
                      *((_OWORD *)&unk_18015F3F8 + 10) = v47;
                      RtlpDebugPageHeapTable = (PULONG)v76;
                      v37[10] = AVrfpVerifierFlags;
                      v37[11] = AVrfpDebug;
                      v48 = *(_QWORD *)(a5 + 48);
                      BaseAddress = 0LL;
                      LdrpLogDllState(v48, a5 + 72, 0x14AEu);
                      *(_DWORD *)(a5 + 344) = 9;
                    }
                    else
                    {
                      appended = -1073741502;
                    }
                  }
                }
              }
            }
            else if ( v7 == -1073741772 )
            {
LABEL_9:
              appended = -1073741515;
            }
          }
        }
      }
    }
  }
LABEL_47:
  if ( BaseAddress )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    *(_QWORD *)(a5 + 48) = 0LL;
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( SectionHandle )
    NtClose(SectionHandle);
  if ( DirectoryHandle )
    NtClose(DirectoryHandle);
  if ( LinkHandle )
    NtClose(LinkHandle);
  return (unsigned int)appended;
}
