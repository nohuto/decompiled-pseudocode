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

__int64 __fastcall sub_1800DA8F4(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  int SymbolicLinkObject; // esi
  int AttributesFile; // eax
  int v7; // eax
  struct _TEB *v8; // rdi
  PVOID ArbitraryUserPointer; // rbx
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
  __int64 v53; // [rsp+68h] [rbp-98h]
  int v54; // [rsp+70h] [rbp-90h] BYREF
  int *v55; // [rsp+78h] [rbp-88h]
  __int64 v56; // [rsp+80h] [rbp-80h]
  __int64 v57; // [rsp+88h] [rbp-78h]
  __int64 v58; // [rsp+90h] [rbp-70h]
  int v59; // [rsp+98h] [rbp-68h]
  __int64 v60; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING *p_DestinationString; // [rsp+A8h] [rbp-58h]
  int v62; // [rsp+B0h] [rbp-50h]
  __int128 v63; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v64; // [rsp+C8h] [rbp-38h]
  __int64 v65; // [rsp+D0h] [rbp-30h] BYREF
  int v66; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v67; // [rsp+E0h] [rbp-20h]
  __int64 v68; // [rsp+E8h] [rbp-18h]
  __int64 v69; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int *v70; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v71; // [rsp+100h] [rbp+0h]
  __int64 v72; // [rsp+108h] [rbp+8h]
  int v73; // [rsp+110h] [rbp+10h] BYREF
  __int64 (__fastcall *v74)(); // [rsp+118h] [rbp+18h]
  struct _PEB *(__fastcall *v75)(__int64, __int64); // [rsp+120h] [rbp+20h]
  __int64 (__fastcall *v76)(); // [rsp+128h] [rbp+28h]
  __int64 v77; // [rsp+130h] [rbp+30h]
  char *(__fastcall *v78)(_QWORD *, unsigned int); // [rsp+138h] [rbp+38h]
  __int64 (__fastcall *v79)(HANDLE, int, __int64); // [rsp+140h] [rbp+40h]
  __int64 (__fastcall *v80)(unsigned __int16 *, __int64, unsigned int, __int64, int, __int64); // [rsp+148h] [rbp+48h]
  __int128 v81; // [rsp+150h] [rbp+50h]
  _DWORD *v82; // [rsp+160h] [rbp+60h]
  __int64 v83; // [rsp+168h] [rbp+68h]
  unsigned __int64 v84; // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v85)(unsigned __int16, unsigned __int16); // [rsp+178h] [rbp+78h]
  __int64 (__fastcall *v86)(); // [rsp+180h] [rbp+80h]
  __int64 (__fastcall *v87)(); // [rsp+188h] [rbp+88h]
  __int64 (__fastcall *v88)(); // [rsp+190h] [rbp+90h]
  __int64 (__fastcall *v89)(_QWORD, _QWORD); // [rsp+198h] [rbp+98h]
  __int64 (__fastcall *v90)(_QWORD, _QWORD); // [rsp+1A0h] [rbp+A0h]
  UNICODE_STRING DestinationString; // [rsp+1B0h] [rbp+B0h] BYREF
  UNICODE_STRING v92; // [rsp+1C0h] [rbp+C0h] BYREF
  UNICODE_STRING v93; // [rsp+1D0h] [rbp+D0h] BYREF
  _QWORD v94[24]; // [rsp+1F0h] [rbp+F0h] BYREF
  _DWORD v95[2]; // [rsp+2E0h] [rbp+1E0h] BYREF
  _BYTE v96[520]; // [rsp+2E8h] [rbp+1E8h] BYREF

  v71 = a2;
  v57 = 0LL;
  v58 = 0LL;
  v53 = 0LL;
  v56 = 0LL;
  v52 = 0LL;
  v67 = 0LL;
  v55 = 0LL;
  v64 = a4;
  v72 = a3;
  RtlInitUnicodeString(&DestinationString, L"\\KnownDlls");
  v60 = 0LL;
  p_DestinationString = &DestinationString;
  v59 = 48;
  v62 = 64;
  v63 = 0LL;
  SymbolicLinkObject = ZwOpenDirectoryObject();
  if ( SymbolicLinkObject >= 0 )
  {
    RtlInitUnicodeString(&v92, L"KnownDllPath");
    v60 = v57;
    v59 = 48;
    p_DestinationString = &v92;
    v62 = 64;
    v63 = 0LL;
    SymbolicLinkObject = ZwOpenSymbolicLinkObject();
    if ( SymbolicLinkObject >= 0 )
    {
      v51 = v96;
      v95[0] = 4128860;
      v95[1] = 6029375;
      v50 = 0x2000000;
      SymbolicLinkObject = ZwQuerySymbolicLinkObject();
      if ( SymbolicLinkObject >= 0 )
      {
        v51 = v95;
        LOWORD(v50) = v50 + 8;
        HIWORD(v50) += 8;
        RtlInitUnicodeString(&v93, "\\");
        SymbolicLinkObject = RtlAppendUnicodeStringToString((unsigned __int16 *)&v50, (__int16 *)&v93);
        if ( SymbolicLinkObject >= 0 )
        {
          SymbolicLinkObject = RtlAppendUnicodeStringToString((unsigned __int16 *)&v50, word_180119468);
          if ( SymbolicLinkObject >= 0 )
          {
            v59 = 48;
            p_DestinationString = (UNICODE_STRING *)&v50;
            v60 = 0LL;
            v62 = 64;
            v63 = 0LL;
            AttributesFile = ZwQueryAttributesFile();
            if ( AttributesFile < 0 && AttributesFile != -1073741757 && AttributesFile != -1073741790 )
              goto LABEL_9;
            v7 = ZwOpenFile();
            SymbolicLinkObject = v7;
            if ( v7 >= 0 )
            {
              SymbolicLinkObject = ZwCreateSection();
              if ( SymbolicLinkObject >= 0 )
              {
                *(_WORD *)(a5 + 370) = 520;
                *(_WORD *)(a5 + 368) = 0;
                *(_QWORD *)(a5 + 376) = a5 + 384;
                v51 = v96;
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
                  Section = ZwQuerySection();
                  if ( Section < 0 )
                  {
                    SymbolicLinkObject = Section;
                    goto LABEL_47;
                  }
                  if ( v68 )
                    *(_QWORD *)(a5 + 248) -= v68;
                  if ( (*(_WORD *)(v12 + 22) & 0x2000) != 0 )
                    *(_DWORD *)(a5 + 104) |= 4u;
                  if ( (*(_DWORD *)(a5 + 104) & 4) == 0 )
                    *(_QWORD *)(a5 + 56) = 0LL;
                  v24 = sub_18001C4DC(*(_QWORD *)(a5 + 48), 1, 9u, &v54, &v69);
                  v25 = v69;
                  if ( v24 < 0 )
                    v25 = 0LL;
                  if ( v25 && v54 )
                  {
                    DbgPrintEx(93, 0, "AVRF: Verifier .dlls must not have thread locals\n");
                    __debugbreak();
                  }
                  v26 = sub_18001C4DC(*(_QWORD *)(a5 + 48), 1, 1u, &v66, (__int64 *)&v70);
                  v27 = v70;
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
                    memset(v94, 0, sizeof(v94));
                    v94[7] = a5;
                    SymbolicLinkObject = sub_180020F00((__int64)v94);
                    if ( SymbolicLinkObject >= 0 )
                    {
                      if ( v94[13] )
                      {
                        v32 = v29 - v28;
                        v33 = v64;
                        while ( 1 )
                        {
                          SymbolicLinkObject = sub_18001C2B0(
                                                 v33,
                                                 (const char *)(*(_QWORD *)(a5 + 48) + *(unsigned int *)v30 + 2LL),
                                                 0,
                                                 (char **)((char *)v30 + v32));
                          if ( SymbolicLinkObject < 0 )
                            break;
                          if ( !*++v30 )
                          {
                            ZwProtectVirtualMemory();
                            if ( sub_18001AE58() )
                              SymbolicLinkObject = sub_1800555A8(*(_QWORD *)(v94[7] + 48LL), 0, 0);
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
                    v33 = v64;
LABEL_66:
                    v34 = *(_DWORD *)(a5 + 104);
                    if ( (v34 & 0x2004) == 4 )
                    {
                      v65 = 0LL;
                      v35 = sub_180020C18();
                      sub_180020514(
                        *(_QWORD *)(a5 + 48),
                        *(_DWORD *)(a5 + 64),
                        0LL,
                        v35 ^ (unsigned int)dword_18017A368,
                        &v65);
                      SymbolicLinkObject = sub_18002088C(a5, (unsigned __int16 *)v12, v65);
                      if ( SymbolicLinkObject < 0 )
                        goto LABEL_47;
                      *(_DWORD *)(a5 + 104) |= 0x2000u;
                      v34 = *(_DWORD *)(a5 + 104);
                    }
                    if ( (v34 & 0x200) == 0 )
                    {
                      sub_180020D8C(v52, *(_DWORD *)(a5 + 64));
                      *(_DWORD *)(a5 + 104) |= 0x200u;
                    }
                    v36 = *(_QWORD *)(a5 + 48);
                    v37 = *(_QWORD *)(a5 + 56);
                    v74 = sub_1800FAF40;
                    v73 = 152;
                    v85 = sub_180032D40;
                    v84 = v33;
                    v75 = sub_1800D95E0;
                    v76 = sub_1800FAB00;
                    v86 = sub_1800FAB20;
                    v87 = sub_1800FAB90;
                    v88 = sub_1800FAB50;
                    v89 = sub_1800FADC0;
                    v90 = sub_1800FAE20;
                    v77 = v71;
                    v83 = v72;
                    v78 = RtlCommitDebugInfo;
                    v79 = RtlSetProcessDebugInformation;
                    v80 = LdrQueryImageFileExecutionOptionsEx;
                    v55 = &v73;
                    v81 = 0LL;
                    v82 = 0LL;
                    if ( sub_180024FBC(v37, v36, 5)
                      && v55 == &v73
                      && (v38 = v82) != 0LL
                      && *v82 == 80
                      && (v39 = (_OWORD *)*((_QWORD *)&v81 + 1)) != 0LL
                      && **((_DWORD **)&v81 + 1) == 176 )
                    {
                      v40 = *(_OWORD *)(*((_QWORD *)&v81 + 1) + 16LL);
                      unk_18015F9C8 = **((_OWORD **)&v81 + 1);
                      v41 = *(_OWORD *)(*((_QWORD *)&v81 + 1) + 32LL);
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
                      off_18015F9B0 = (void *)v81;
                      v38[10] = dword_180164EE8;
                      v38[11] = dword_1801665D4;
                      v49 = *(_QWORD *)(a5 + 48);
                      v52 = 0LL;
                      sub_1800255A8(v49, a5 + 72, 0x14AEu);
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
    ZwUnmapViewOfSection();
    *(_QWORD *)(a5 + 48) = 0LL;
  }
  if ( v56 )
    ZwClose();
  if ( v53 )
    ZwClose();
  if ( v57 )
    ZwClose();
  if ( v58 )
    ZwClose();
  return (unsigned int)SymbolicLinkObject;
}
