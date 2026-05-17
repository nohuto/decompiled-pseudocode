/*
 * XREFs of AvrfMiniLoadDll @ 0x1800DA9B4
 * Callers:
 *     AVrfInitializeVerifier @ 0x1800D8C38 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1800150A0 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x18001AE58 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     RtlImageNtHeader @ 0x18001B960 (RtlImageNtHeader.c)
 *     LdrpGetProcedureAddress @ 0x18001C2B0 (LdrpGetProcedureAddress.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x18001C4DC (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrInitSecurityCookie @ 0x180020514 (LdrInitSecurityCookie.c)
 *     LdrpCfgProcessLoadConfig @ 0x18002088C (LdrpCfgProcessLoadConfig.c)
 *     LdrpGenRandom @ 0x180020C18 (LdrpGenRandom.c)
 *     RtlInsertInvertedFunctionTable @ 0x180020D8C (RtlInsertInvertedFunctionTable.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180020F00 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpCallInitRoutine @ 0x180024FBC (LdrpCallInitRoutine.c)
 *     LdrpLogDllState @ 0x1800255A8 (LdrpLogDllState.c)
 *     RtlAppendUnicodeStringToString @ 0x180026140 (RtlAppendUnicodeStringToString.c)
 *     DbgPrintEx @ 0x180052820 (DbgPrintEx.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x180055648 (LdrpUnsuppressAddressTakenIat.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18009D390 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009D3D0 (NtUnmapViewOfSection.c)
 *     NtOpenFile @ 0x18009D4F0 (NtOpenFile.c)
 *     ZwQueryAttributesFile @ 0x18009D630 (ZwQueryAttributesFile.c)
 *     NtCreateSection @ 0x18009D7D0 (NtCreateSection.c)
 *     ZwProtectVirtualMemory @ 0x18009D890 (ZwProtectVirtualMemory.c)
 *     NtQuerySection @ 0x18009D8B0 (NtQuerySection.c)
 *     ZwOpenDirectoryObject @ 0x18009D990 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x18009F380 (ZwOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x18009F980 (NtQuerySymbolicLinkObject.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

__int64 __fastcall AvrfMiniLoadDll(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  int SymbolicLinkObject; // esi
  int AttributesFile; // eax
  NTSTATUS v7; // eax
  struct _TEB *v8; // rdi
  void *ArbitraryUserPointer; // rbx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // r13
  unsigned __int64 v13; // r10
  __int128 v14; // xmm0
  unsigned __int16 v15; // r9
  unsigned __int64 v16; // r8
  _WORD *i; // rdx
  __int16 v18; // ax
  _WORD *v19; // rdx
  __int16 v20; // cx
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  int Section; // eax
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  unsigned int *v27; // rcx
  __int64 v28; // r15
  __int64 v29; // rdi
  _QWORD *v30; // rbx
  __int64 v32; // rdi
  unsigned __int64 v33; // r15
  int v34; // ecx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  _DWORD *v38; // rdx
  _OWORD *v39; // rcx
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int64 v49; // rcx
  int v50; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE *v51; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v52; // [rsp+60h] [rbp-A0h]
  HANDLE Handle; // [rsp+68h] [rbp-98h]
  int v54; // [rsp+70h] [rbp-90h] BYREF
  int *v55; // [rsp+78h] [rbp-88h]
  HANDLE FileHandle; // [rsp+80h] [rbp-80h] BYREF
  HANDLE v57; // [rsp+88h] [rbp-78h]
  HANDLE v58; // [rsp+90h] [rbp-70h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v60; // [rsp+C8h] [rbp-38h]
  __int64 v61; // [rsp+D0h] [rbp-30h] BYREF
  int v62; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v63; // [rsp+E0h] [rbp-20h]
  __int64 v64; // [rsp+E8h] [rbp-18h]
  __int64 v65; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int *v66; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v67; // [rsp+100h] [rbp+0h]
  __int64 v68; // [rsp+108h] [rbp+8h]
  int v69; // [rsp+110h] [rbp+10h] BYREF
  __int64 (__fastcall *v70)(); // [rsp+118h] [rbp+18h]
  struct _PEB *(__fastcall *v71)(__int64, __int64); // [rsp+120h] [rbp+20h]
  __int64 (__fastcall *v72)(); // [rsp+128h] [rbp+28h]
  __int64 v73; // [rsp+130h] [rbp+30h]
  char *(__fastcall *v74)(_QWORD *, unsigned int); // [rsp+138h] [rbp+38h]
  __int64 (__fastcall *v75)(void *, int, __int64); // [rsp+140h] [rbp+40h]
  __int64 (__fastcall *v76)(unsigned __int16 *, __int64, unsigned int, __int64, int, __int64); // [rsp+148h] [rbp+48h]
  __int128 v77; // [rsp+150h] [rbp+50h]
  _DWORD *v78; // [rsp+160h] [rbp+60h]
  __int64 v79; // [rsp+168h] [rbp+68h]
  unsigned __int64 v80; // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v81)(unsigned __int16, unsigned __int16); // [rsp+178h] [rbp+78h]
  __int64 (__fastcall *v82)(); // [rsp+180h] [rbp+80h]
  __int64 (__fastcall *v83)(); // [rsp+188h] [rbp+88h]
  __int64 (__fastcall *v84)(); // [rsp+190h] [rbp+90h]
  __int64 (__fastcall *v85)(_QWORD, _QWORD); // [rsp+198h] [rbp+98h]
  __int64 (__fastcall *v86)(_QWORD, _QWORD); // [rsp+1A0h] [rbp+A0h]
  UNICODE_STRING DestinationString; // [rsp+1B0h] [rbp+B0h] BYREF
  UNICODE_STRING v88; // [rsp+1C0h] [rbp+C0h] BYREF
  UNICODE_STRING v89; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+1E0h] [rbp+E0h] BYREF
  _QWORD v91[24]; // [rsp+1F0h] [rbp+F0h] BYREF
  _DWORD v92[2]; // [rsp+2E0h] [rbp+1E0h] BYREF
  _BYTE v93[520]; // [rsp+2E8h] [rbp+1E8h] BYREF

  v67 = a2;
  v57 = 0LL;
  v58 = 0LL;
  Handle = 0LL;
  FileHandle = 0LL;
  v52 = 0LL;
  v63 = 0LL;
  v55 = 0LL;
  v60 = a4;
  v68 = a3;
  RtlInitUnicodeString(&DestinationString, L"\\KnownDlls");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  SymbolicLinkObject = ZwOpenDirectoryObject();
  if ( SymbolicLinkObject >= 0 )
  {
    RtlInitUnicodeString(&v88, L"KnownDllPath");
    ObjectAttributes.RootDirectory = v57;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v88;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    SymbolicLinkObject = ZwOpenSymbolicLinkObject();
    if ( SymbolicLinkObject >= 0 )
    {
      v51 = v93;
      v92[0] = 4128860;
      v92[1] = 6029375;
      v50 = 0x2000000;
      SymbolicLinkObject = NtQuerySymbolicLinkObject();
      if ( SymbolicLinkObject >= 0 )
      {
        v51 = v92;
        LOWORD(v50) = v50 + 8;
        HIWORD(v50) += 8;
        RtlInitUnicodeString(&v89, L"\\");
        SymbolicLinkObject = RtlAppendUnicodeStringToString((unsigned __int16 *)&v50, (__int16 *)&v89);
        if ( SymbolicLinkObject >= 0 )
        {
          SymbolicLinkObject = RtlAppendUnicodeStringToString((unsigned __int16 *)&v50, VerifierDllString);
          if ( SymbolicLinkObject >= 0 )
          {
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v50;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            AttributesFile = ZwQueryAttributesFile();
            if ( AttributesFile < 0 && AttributesFile != -1073741757 && AttributesFile != -1073741790 )
              goto LABEL_9;
            v7 = NtOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
            SymbolicLinkObject = v7;
            if ( v7 >= 0 )
            {
              SymbolicLinkObject = NtCreateSection();
              if ( SymbolicLinkObject >= 0 )
              {
                *(_WORD *)(a5 + 370) = 520;
                *(_WORD *)(a5 + 368) = 0;
                *(_QWORD *)(a5 + 376) = a5 + 384;
                v51 = v93;
                LOWORD(v50) = v50 - 8;
                HIWORD(v50) -= 8;
                RtlCopyUnicodeString((unsigned __int16 *)(a5 + 368), (unsigned __int16 *)&v50);
                v8 = NtCurrentTeb();
                ArbitraryUserPointer = v8->NtTib.ArbitraryUserPointer;
                v8->NtTib.ArbitraryUserPointer = v51;
                v10 = ZwMapViewOfSection();
                v8->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
                SymbolicLinkObject = v10;
                if ( v10 >= 0 )
                {
                  v11 = RtlImageNtHeader(v52);
                  v12 = v11;
                  if ( !v11 )
                    goto LABEL_16;
                  v13 = v52;
                  *(_QWORD *)(a5 + 48) = v52;
                  *(_DWORD *)(a5 + 64) = *(_DWORD *)(v11 + 80);
                  *(_DWORD *)(a5 + 128) = *(_DWORD *)(v11 + 8);
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
                  if ( *(_DWORD *)(v12 + 40) )
                    v21 = v13 + *(unsigned int *)(v12 + 40);
                  else
                    v21 = 0LL;
                  *(_QWORD *)(a5 + 56) = v21;
                  *(_QWORD *)(a5 + 248) = *(_QWORD *)(v12 + 48);
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
                  Section = NtQuerySection();
                  if ( Section < 0 )
                  {
                    SymbolicLinkObject = Section;
                    goto LABEL_47;
                  }
                  if ( v64 )
                    *(_QWORD *)(a5 + 248) -= v64;
                  if ( (*(_WORD *)(v12 + 22) & 0x2000) != 0 )
                    *(_DWORD *)(a5 + 104) |= 4u;
                  if ( (*(_DWORD *)(a5 + 104) & 4) == 0 )
                    *(_QWORD *)(a5 + 56) = 0LL;
                  v24 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(a5 + 48), 1, 9u, &v54, &v65);
                  v25 = v65;
                  if ( v24 < 0 )
                    v25 = 0LL;
                  if ( v25 && v54 )
                  {
                    DbgPrintEx(93, 0, "AVRF: Verifier .dlls must not have thread locals\n");
                    __debugbreak();
                  }
                  v26 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(a5 + 48), 1, 1u, &v62, (__int64 *)&v66);
                  v27 = v66;
                  if ( v26 < 0 )
                    v27 = 0LL;
                  if ( !v27 )
                  {
LABEL_16:
                    SymbolicLinkObject = -1073741701;
                    goto LABEL_47;
                  }
                  v28 = *v27;
                  v29 = v27[4];
                  v30 = (_QWORD *)(v28 + *(_QWORD *)(a5 + 48));
                  if ( *v30 )
                  {
                    memset(v91, 0, sizeof(v91));
                    v91[7] = a5;
                    SymbolicLinkObject = LdrpPrepareImportAddressTableForSnap((__int64)v91);
                    if ( SymbolicLinkObject >= 0 )
                    {
                      if ( v91[13] )
                      {
                        v32 = v29 - v28;
                        v33 = v60;
                        while ( 1 )
                        {
                          SymbolicLinkObject = LdrpGetProcedureAddress(
                                                 v33,
                                                 (const char *)(*(_QWORD *)(a5 + 48) + *(unsigned int *)v30 + 2LL),
                                                 0,
                                                 (char **)((char *)v30 + v32));
                          if ( SymbolicLinkObject < 0 )
                            break;
                          if ( !*++v30 )
                          {
                            ZwProtectVirtualMemory();
                            if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
                              SymbolicLinkObject = LdrpUnsuppressAddressTakenIat(*(_QWORD *)(v91[7] + 48LL), 0, 0);
                            if ( SymbolicLinkObject < 0 )
                              break;
                            goto LABEL_66;
                          }
                        }
                      }
                      else
                      {
                        SymbolicLinkObject = -1073741701;
                      }
                    }
                  }
                  else
                  {
                    v33 = v60;
LABEL_66:
                    v34 = *(_DWORD *)(a5 + 104);
                    if ( (v34 & 0x2004) == 4 )
                    {
                      v61 = 0LL;
                      v35 = LdrpGenRandom();
                      LdrInitSecurityCookie(
                        *(_QWORD *)(a5 + 48),
                        *(_DWORD *)(a5 + 64),
                        0LL,
                        v35 ^ (unsigned int)dword_18017A388,
                        &v61);
                      SymbolicLinkObject = LdrpCfgProcessLoadConfig(a5, (unsigned __int16 *)v12, v61);
                      if ( SymbolicLinkObject < 0 )
                        goto LABEL_47;
                      *(_DWORD *)(a5 + 104) |= 0x2000u;
                      v34 = *(_DWORD *)(a5 + 104);
                    }
                    if ( (v34 & 0x200) == 0 )
                    {
                      RtlInsertInvertedFunctionTable(v52, *(_DWORD *)(a5 + 64));
                      *(_DWORD *)(a5 + 104) |= 0x200u;
                    }
                    v36 = *(_QWORD *)(a5 + 48);
                    v37 = *(_QWORD *)(a5 + 56);
                    v70 = RtlpGetStackTraceAddress;
                    v69 = 152;
                    v81 = RtlpGetStackTraceAddressEx;
                    v80 = v33;
                    v71 = AVrfInternalHeapFreeNotification;
                    v72 = RtlLogStackTrace;
                    v82 = RtlReleaseStackTrace;
                    v83 = RtlStdInitializeStackDatabase;
                    v84 = RtlStdDeleteStackDatabase;
                    v85 = RtlStdLogStackTrace;
                    v86 = RtlStdReleaseStackTrace;
                    v73 = v67;
                    v79 = v68;
                    v74 = RtlCommitDebugInfo;
                    v75 = RtlSetProcessDebugInformation;
                    v76 = RtlQueryImageFileExecutionOptions;
                    v55 = &v69;
                    v77 = 0LL;
                    v78 = 0LL;
                    if ( LdrpCallInitRoutine(v37, v36, 5)
                      && v55 == &v69
                      && (v38 = v78) != 0LL
                      && *v78 == 80
                      && (v39 = (_OWORD *)*((_QWORD *)&v77 + 1)) != 0LL
                      && **((_DWORD **)&v77 + 1) == 176 )
                    {
                      v40 = *(_OWORD *)(*((_QWORD *)&v77 + 1) + 16LL);
                      unk_18015F9C8 = **((_OWORD **)&v77 + 1);
                      v41 = *(_OWORD *)(*((_QWORD *)&v77 + 1) + 32LL);
                      *((_OWORD *)&unk_18015F9C8 + 1) = v40;
                      v42 = v39[3];
                      *((_OWORD *)&unk_18015F9C8 + 2) = v41;
                      v43 = v39[4];
                      *((_OWORD *)&unk_18015F9C8 + 3) = v42;
                      v44 = v39[5];
                      *((_OWORD *)&unk_18015F9C8 + 4) = v43;
                      v45 = v39[6];
                      *((_OWORD *)&unk_18015F9C8 + 5) = v44;
                      v46 = v39[8];
                      *((_OWORD *)&unk_18015F9C8 + 6) = v45;
                      *((_OWORD *)&unk_18015F9C8 + 7) = v39[7];
                      v47 = v39[9];
                      *((_OWORD *)&unk_18015F9C8 + 8) = v46;
                      v48 = v39[10];
                      *((_OWORD *)&unk_18015F9C8 + 9) = v47;
                      *((_OWORD *)&unk_18015F9C8 + 10) = v48;
                      RtlpDebugPageHeapTable = (void *)v77;
                      v38[10] = AVrfpVerifierFlags;
                      v38[11] = AVrfpDebug;
                      v49 = *(_QWORD *)(a5 + 48);
                      v52 = 0LL;
                      LdrpLogDllState(v49, a5 + 72, 0x14AEu);
                      *(_DWORD *)(a5 + 344) = 9;
                    }
                    else
                    {
                      SymbolicLinkObject = -1073741502;
                    }
                  }
                }
              }
            }
            else if ( v7 == -1073741772 )
            {
LABEL_9:
              SymbolicLinkObject = -1073741515;
            }
          }
        }
      }
    }
  }
LABEL_47:
  if ( v52 )
  {
    NtUnmapViewOfSection();
    *(_QWORD *)(a5 + 48) = 0LL;
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( Handle )
    NtClose(Handle);
  if ( v57 )
    NtClose(v57);
  if ( v58 )
    NtClose(v58);
  return (unsigned int)SymbolicLinkObject;
}
