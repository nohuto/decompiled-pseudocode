/*
 * XREFs of sub_1800DA8F4 @ 0x1800DA8F4
 * Callers:
 *     sub_1800D8B78 @ 0x1800D8B78 (sub_1800D8B78.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1800150A0 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     sub_18001AE58 @ 0x18001AE58 (sub_18001AE58.c)
 *     RtlImageNtHeader @ 0x18001B960 (RtlImageNtHeader.c)
 *     sub_18001C2B0 @ 0x18001C2B0 (sub_18001C2B0.c)
 *     sub_18001C4DC @ 0x18001C4DC (sub_18001C4DC.c)
 *     sub_180020514 @ 0x180020514 (sub_180020514.c)
 *     sub_18002088C @ 0x18002088C (sub_18002088C.c)
 *     sub_180020C18 @ 0x180020C18 (sub_180020C18.c)
 *     sub_180020D8C @ 0x180020D8C (sub_180020D8C.c)
 *     sub_180020F00 @ 0x180020F00 (sub_180020F00.c)
 *     sub_180024FBC @ 0x180024FBC (sub_180024FBC.c)
 *     sub_1800255A8 @ 0x1800255A8 (sub_1800255A8.c)
 *     RtlAppendUnicodeStringToString @ 0x180026140 (RtlAppendUnicodeStringToString.c)
 *     DbgPrintEx @ 0x180052780 (DbgPrintEx.c)
 *     sub_1800555A8 @ 0x1800555A8 (sub_1800555A8.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x18009CBE0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009CC20 (ZwUnmapViewOfSection.c)
 *     ZwOpenFile @ 0x18009CD40 (ZwOpenFile.c)
 *     ZwQueryAttributesFile @ 0x18009CE80 (ZwQueryAttributesFile.c)
 *     ZwCreateSection @ 0x18009D020 (ZwCreateSection.c)
 *     ZwProtectVirtualMemory @ 0x18009D0E0 (ZwProtectVirtualMemory.c)
 *     ZwQuerySection @ 0x18009D100 (ZwQuerySection.c)
 *     ZwOpenDirectoryObject @ 0x18009D1E0 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x18009EBD0 (ZwOpenSymbolicLinkObject.c)
 *     ZwQuerySymbolicLinkObject @ 0x18009F1D0 (ZwQuerySymbolicLinkObject.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_1800DA8F4(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int appended; // esi
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  struct _TEB *v8; // rdi
  PVOID ArbitraryUserPointer; // rbx
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
  _UNICODE_STRING LinkTarget; // [rsp+50h] [rbp-B0h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE SectionHandle; // [rsp+68h] [rbp-98h] BYREF
  DWORD v53; // [rsp+70h] [rbp-90h] BYREF
  int *v54; // [rsp+78h] [rbp-88h]
  HANDLE FileHandle; // [rsp+80h] [rbp-80h] BYREF
  HANDLE DirectoryHandle; // [rsp+88h] [rbp-78h] BYREF
  HANDLE LinkHandle; // [rsp+90h] [rbp-70h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  int v59[2]; // [rsp+C8h] [rbp-38h]
  __int64 v60; // [rsp+D0h] [rbp-30h] BYREF
  DWORD v61; // [rsp+D8h] [rbp-28h] BYREF
  ULONG OldProtect; // [rsp+DCh] [rbp-24h] BYREF
  ULONG_PTR ViewSize; // [rsp+E0h] [rbp-20h] BYREF
  __int64 SectionInformation; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v65; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v66; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v67; // [rsp+100h] [rbp+0h]
  __int64 v68; // [rsp+108h] [rbp+8h]
  int v69; // [rsp+110h] [rbp+10h] BYREF
  __int64 (__fastcall *v70)(); // [rsp+118h] [rbp+18h]
  int (__fastcall *v71)(__int64, __int64); // [rsp+120h] [rbp+20h]
  __int64 (__fastcall *v72)(); // [rsp+128h] [rbp+28h]
  __int64 v73; // [rsp+130h] [rbp+30h]
  PVOID (__cdecl *v74)(PRTL_DEBUG_INFORMATION, SIZE_T); // [rsp+138h] [rbp+38h]
  NTSTATUS (__cdecl *v75)(HANDLE, ULONG, PRTL_DEBUG_INFORMATION); // [rsp+140h] [rbp+40h]
  NTSTATUS (__cdecl *v76)(PUNICODE_STRING, PCWSTR, ULONG, PVOID, ULONG, PULONG, BOOLEAN); // [rsp+148h] [rbp+48h]
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
  _UNICODE_STRING DestinationString; // [rsp+1B0h] [rbp+B0h] BYREF
  _UNICODE_STRING v88; // [rsp+1C0h] [rbp+C0h] BYREF
  _UNICODE_STRING Source; // [rsp+1D0h] [rbp+D0h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+1E0h] [rbp+E0h] BYREF
  _QWORD v91[24]; // [rsp+1F0h] [rbp+F0h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+2B0h] [rbp+1B0h] BYREF
  _DWORD v93[2]; // [rsp+2E0h] [rbp+1E0h] BYREF
  _BYTE v94[520]; // [rsp+2E8h] [rbp+1E8h] BYREF

  v67 = a2;
  DirectoryHandle = 0LL;
  LinkHandle = 0LL;
  SectionHandle = 0LL;
  FileHandle = 0LL;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  v54 = 0LL;
  *(_QWORD *)v59 = a4;
  v68 = a3;
  RtlInitUnicodeString(&DestinationString, L"\\KnownDlls");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  appended = ZwOpenDirectoryObject(&DirectoryHandle, 3u, &ObjectAttributes);
  if ( appended >= 0 )
  {
    RtlInitUnicodeString(&v88, L"KnownDllPath");
    ObjectAttributes.RootDirectory = DirectoryHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v88;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    appended = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
    if ( appended >= 0 )
    {
      LinkTarget.Buffer = (PWCH)v94;
      v93[0] = 4128860;
      v93[1] = 6029375;
      *(_DWORD *)&LinkTarget.Length = 0x2000000;
      appended = ZwQuerySymbolicLinkObject(LinkHandle, &LinkTarget, 0LL);
      if ( appended >= 0 )
      {
        LinkTarget.Buffer = (PWCH)v93;
        LinkTarget.Length += 8;
        LinkTarget.MaximumLength += 8;
        RtlInitUnicodeString(&Source, "\\");
        appended = RtlAppendUnicodeStringToString(&LinkTarget, &Source);
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(&LinkTarget, &stru_180119468);
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
            v7 = ZwOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
            appended = v7;
            if ( v7 >= 0 )
            {
              appended = ZwCreateSection(&SectionHandle, 0xDu, 0LL, 0LL, 0x10u, 0x1000000u, FileHandle);
              if ( appended >= 0 )
              {
                *(_WORD *)(a5 + 370) = 520;
                *(_WORD *)(a5 + 368) = 0;
                *(_QWORD *)(a5 + 376) = a5 + 384;
                LinkTarget.Buffer = (PWCH)v94;
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
                        2u);
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
                  v23 = ZwQuerySection(SectionHandle, SectionRelocationInformation, &SectionInformation, 8uLL, 0LL);
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
                  v24 = sub_18001C4DC(*(_QWORD *)(a5 + 48), 1, 9u, &v53, &v65);
                  v25 = v65;
                  if ( v24 < 0 )
                    v25 = 0LL;
                  if ( v25 && v53 )
                  {
                    DbgPrintEx(0x5Du, 0, "AVRF: Verifier .dlls must not have thread locals\n");
                    __debugbreak();
                  }
                  v26 = sub_18001C4DC(*(_QWORD *)(a5 + 48), 1, 1u, &v61, &v66);
                  v27 = (unsigned int *)v66;
                  if ( v26 < 0 )
                    v27 = 0LL;
                  if ( !v27 )
                  {
LABEL_16:
                    appended = -1073741701;
                    goto LABEL_47;
                  }
                  v28 = *v27;
                  v29 = v27[4];
                  v30 = (_QWORD *)(v28 + *(_QWORD *)(a5 + 48));
                  if ( *v30 )
                  {
                    memset(v91, 0, sizeof(v91));
                    v91[7] = a5;
                    appended = sub_180020F00((__int64)v91);
                    if ( appended >= 0 )
                    {
                      if ( v91[13] )
                      {
                        v32 = v29 - v28;
                        v33 = *(_QWORD *)v59;
                        while ( 1 )
                        {
                          appended = sub_18001C2B0(
                                       v33,
                                       (const char *)(*(_QWORD *)(a5 + 48) + *(unsigned int *)v30 + 2LL),
                                       0,
                                       (char **)((char *)v30 + v32));
                          if ( appended < 0 )
                            break;
                          if ( !*++v30 )
                          {
                            ZwProtectVirtualMemory(
                              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                              (PVOID *)&v91[13],
                              &v91[14],
                              v91[17],
                              &OldProtect);
                            if ( sub_18001AE58() )
                              appended = sub_1800555A8(*(char **)(v91[7] + 48LL), 0, 0);
                            if ( appended < 0 )
                              break;
                            goto LABEL_66;
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
                    v33 = *(_QWORD *)v59;
LABEL_66:
                    v34 = *(_DWORD *)(a5 + 104);
                    if ( (v34 & 0x2004) == 4 )
                    {
                      v60 = 0LL;
                      v35 = sub_180020C18();
                      sub_180020514(
                        *(char **)(a5 + 48),
                        *(_DWORD *)(a5 + 64),
                        0LL,
                        v35 ^ LdrSystemDllInitBlock.RngData,
                        &v60);
                      appended = sub_18002088C(a5, (unsigned __int16 *)v12, v60);
                      if ( appended < 0 )
                        goto LABEL_47;
                      *(_DWORD *)(a5 + 104) |= 0x2000u;
                      v34 = *(_DWORD *)(a5 + 104);
                    }
                    if ( (v34 & 0x200) == 0 )
                    {
                      sub_180020D8C((unsigned __int64)BaseAddress, *(_DWORD *)(a5 + 64));
                      *(_DWORD *)(a5 + 104) |= 0x200u;
                    }
                    v36 = *(_QWORD *)(a5 + 48);
                    v37 = *(_QWORD *)(a5 + 56);
                    v70 = sub_1800FAF40;
                    v69 = 152;
                    v81 = sub_180032D40;
                    v80 = v33;
                    v71 = sub_1800D95E0;
                    v72 = sub_1800FAB00;
                    v82 = sub_1800FAB20;
                    v83 = sub_1800FAB90;
                    v84 = sub_1800FAB50;
                    v85 = sub_1800FADC0;
                    v86 = sub_1800FAE20;
                    v73 = v67;
                    v79 = v68;
                    v74 = RtlCommitDebugInfo;
                    v75 = RtlSetProcessDebugInformation;
                    v76 = LdrQueryImageFileExecutionOptionsEx;
                    v54 = &v69;
                    v77 = 0LL;
                    v78 = 0LL;
                    if ( sub_180024FBC(v37, v36, 5)
                      && v54 == &v69
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
                      Value = (PULONG)v77;
                      v38[10] = dword_180164EE8;
                      v38[11] = dword_1801665D4;
                      v49 = *(_QWORD *)(a5 + 48);
                      BaseAddress = 0LL;
                      sub_1800255A8(v49, a5 + 72, 0x14AEu);
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
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    *(_QWORD *)(a5 + 48) = 0LL;
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  if ( LinkHandle )
    ZwClose(LinkHandle);
  return (unsigned int)appended;
}
