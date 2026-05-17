/*
 * XREFs of sub_1800D2538 @ 0x1800D2538
 * Callers:
 *     sub_180071E6C @ 0x180071E6C (sub_180071E6C.c)
 * Callees:
 *     sub_1800098D0 @ 0x1800098D0 (sub_1800098D0.c)
 *     EtwEventRegister @ 0x18000A640 (EtwEventRegister.c)
 *     RtlAppendUnicodeToString @ 0x180015120 (RtlAppendUnicodeToString.c)
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     sub_18001F450 @ 0x18001F450 (sub_18001F450.c)
 *     sub_180020654 @ 0x180020654 (sub_180020654.c)
 *     LdrLoadDll @ 0x180021600 (LdrLoadDll.c)
 *     sub_180021798 @ 0x180021798 (sub_180021798.c)
 *     sub_180021908 @ 0x180021908 (sub_180021908.c)
 *     sub_180021B60 @ 0x180021B60 (sub_180021B60.c)
 *     sub_180022F1C @ 0x180022F1C (sub_180022F1C.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180024DB0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180024F00 (RtlActivateActivationContextUnsafeFast.c)
 *     sub_18002507C @ 0x18002507C (sub_18002507C.c)
 *     sub_1800255A8 @ 0x1800255A8 (sub_1800255A8.c)
 *     RtlAppendUnicodeStringToString @ 0x180026140 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 *     RtlGetNtSystemRoot @ 0x180029260 (RtlGetNtSystemRoot.c)
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     sub_18002A63C @ 0x18002A63C (sub_18002A63C.c)
 *     sub_18002A958 @ 0x18002A958 (sub_18002A958.c)
 *     sub_18002AC94 @ 0x18002AC94 (sub_18002AC94.c)
 *     sub_18002D75C @ 0x18002D75C (sub_18002D75C.c)
 *     sub_18002D7BC @ 0x18002D7BC (sub_18002D7BC.c)
 *     sub_18002E73C @ 0x18002E73C (sub_18002E73C.c)
 *     LdrUnloadDll @ 0x18002F330 (LdrUnloadDll.c)
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlCreateHeap @ 0x180049100 (RtlCreateHeap.c)
 *     sub_1800550B8 @ 0x1800550B8 (sub_1800550B8.c)
 *     RtlSetBits @ 0x1800565C0 (RtlSetBits.c)
 *     sub_18005C988 @ 0x18005C988 (sub_18005C988.c)
 *     sub_180062B70 @ 0x180062B70 (sub_180062B70.c)
 *     RtlInitializeCriticalSection @ 0x1800636A0 (RtlInitializeCriticalSection.c)
 *     sub_180064F24 @ 0x180064F24 (sub_180064F24.c)
 *     sub_180068E90 @ 0x180068E90 (sub_180068E90.c)
 *     sub_180069778 @ 0x180069778 (sub_180069778.c)
 *     sub_18006EA94 @ 0x18006EA94 (sub_18006EA94.c)
 *     RtlInitializeSListHead_0 @ 0x18006F07C (RtlInitializeSListHead_0.c)
 *     sub_180073E1C @ 0x180073E1C (sub_180073E1C.c)
 *     sub_180076994 @ 0x180076994 (sub_180076994.c)
 *     sub_180077CE4 @ 0x180077CE4 (sub_180077CE4.c)
 *     RtlSetHeapInformation @ 0x180079240 (RtlSetHeapInformation.c)
 *     sub_1800798FC @ 0x1800798FC (sub_1800798FC.c)
 *     LdrQueryImageFileExecutionOptions @ 0x1800799A0 (LdrQueryImageFileExecutionOptions.c)
 *     sub_18007A3BC @ 0x18007A3BC (sub_18007A3BC.c)
 *     sub_18007C45C @ 0x18007C45C (sub_18007C45C.c)
 *     RtlCreateTagHeap @ 0x18007C500 (RtlCreateTagHeap.c)
 *     sub_18007C668 @ 0x18007C668 (sub_18007C668.c)
 *     sub_18007CFCC @ 0x18007CFCC (sub_18007CFCC.c)
 *     sub_18007D76C @ 0x18007D76C (sub_18007D76C.c)
 *     LdrGetProcedureAddress @ 0x18007E510 (LdrGetProcedureAddress.c)
 *     RtlSetUnhandledExceptionFilter @ 0x18007E970 (RtlSetUnhandledExceptionFilter.c)
 *     RtlImageDirectoryEntryToData @ 0x18007EBE0 (RtlImageDirectoryEntryToData.c)
 *     sub_18007ED50 @ 0x18007ED50 (sub_18007ED50.c)
 *     sub_18007ED94 @ 0x18007ED94 (sub_18007ED94.c)
 *     sub_1800805E4 @ 0x1800805E4 (sub_1800805E4.c)
 *     sub_180080CF0 @ 0x180080CF0 (sub_180080CF0.c)
 *     sub_180081070 @ 0x180081070 (sub_180081070.c)
 *     RtlDecodeSystemPointer @ 0x1800813B0 (RtlDecodeSystemPointer.c)
 *     sub_18008180C @ 0x18008180C (sub_18008180C.c)
 *     sub_180081880 @ 0x180081880 (sub_180081880.c)
 *     sub_180081C0C @ 0x180081C0C (sub_180081C0C.c)
 *     sub_180082190 @ 0x180082190 (sub_180082190.c)
 *     WinSqmStartSqmOptinListener @ 0x180082920 (WinSqmStartSqmOptinListener.c)
 *     sub_180083398 @ 0x180083398 (sub_180083398.c)
 *     sub_180083AF0 @ 0x180083AF0 (sub_180083AF0.c)
 *     sub_180084D14 @ 0x180084D14 (sub_180084D14.c)
 *     RtlNormalizeProcessParams @ 0x18008A090 (RtlNormalizeProcessParams.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwQuerySystemInformation @ 0x18009CDA0 (ZwQuerySystemInformation.c)
 *     ZwOpenDirectoryObject @ 0x18009D1E0 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x18009EBD0 (ZwOpenSymbolicLinkObject.c)
 *     ZwQuerySymbolicLinkObject @ 0x18009F1D0 (ZwQuerySymbolicLinkObject.c)
 *     ZwSetInformationVirtualMemory @ 0x18009F9D0 (ZwSetInformationVirtualMemory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800CDF80 @ 0x1800CDF80 (sub_1800CDF80.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 *     sub_1800CEDF8 @ 0x1800CEDF8 (sub_1800CEDF8.c)
 *     sub_1800D0D7C @ 0x1800D0D7C (sub_1800D0D7C.c)
 *     sub_1800D0F9C @ 0x1800D0F9C (sub_1800D0F9C.c)
 *     sub_1800D16A0 @ 0x1800D16A0 (sub_1800D16A0.c)
 *     sub_1800D16F0 @ 0x1800D16F0 (sub_1800D16F0.c)
 *     sub_1800D24F8 @ 0x1800D24F8 (sub_1800D24F8.c)
 *     sub_1800D491C @ 0x1800D491C (sub_1800D491C.c)
 *     sub_1800D4E64 @ 0x1800D4E64 (sub_1800D4E64.c)
 *     sub_1800D4FE0 @ 0x1800D4FE0 (sub_1800D4FE0.c)
 *     sub_1800D8B78 @ 0x1800D8B78 (sub_1800D8B78.c)
 *     sub_1800DE480 @ 0x1800DE480 (sub_1800DE480.c)
 *     sub_1800E6AAC @ 0x1800E6AAC (sub_1800E6AAC.c)
 *     sub_1800EEE84 @ 0x1800EEE84 (sub_1800EEE84.c)
 *     sub_1800F5708 @ 0x1800F5708 (sub_1800F5708.c)
 *     sub_1800FA2D8 @ 0x1800FA2D8 (sub_1800FA2D8.c)
 *     sub_1800FAA88 @ 0x1800FAA88 (sub_1800FAA88.c)
 *     sub_1800FC690 @ 0x1800FC690 (sub_1800FC690.c)
 *     sub_18010E8E8 @ 0x18010E8E8 (sub_18010E8E8.c)
 */

__int64 __fastcall sub_1800D2538(__int64 a1, __int64 a2)
{
  struct _TEB *v3; // rsi
  __int64 ProcessEnvironmentBlock; // rbx
  int v5; // r15d
  int v6; // edi
  unsigned __int64 v7; // r12
  int v8; // eax
  bool v9; // cc
  int v10; // eax
  __int64 v11; // rcx
  _WORD *v12; // rdx
  unsigned __int16 v13; // r8
  char v14; // al
  __int64 result; // rax
  unsigned int i; // ecx
  _QWORD *v17; // rax
  unsigned __int64 v18; // rax
  char v19; // cl
  int v20; // ecx
  __int64 v21; // rax
  unsigned int *v22; // rax
  unsigned int *v23; // r15
  int v24; // r13d
  unsigned int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  __int64 v28; // rax
  char v29; // al
  int v30; // ecx
  char v31; // al
  unsigned __int64 v32; // r9
  __int64 v33; // r8
  __int64 Heap; // rax
  void *v35; // r15
  char v36; // al
  __int64 v37; // rcx
  __int64 v38; // r13
  __int64 NtSystemRoot; // rax
  __int16 v40; // r12
  __int64 v41; // rax
  __int64 v42; // r12
  int *v43; // rax
  int v44; // edx
  __int64 v45; // r13
  __m128i v46; // xmm0
  wchar_t *v47; // xmm0_8
  __int64 v48; // rax
  wchar_t *Buffer; // rdx
  unsigned __int64 v50; // r15
  unsigned __int64 v51; // r12
  __int64 v52; // rdx
  __int64 v53; // r12
  __int64 v54; // rax
  __int64 v55; // r15
  __int64 v56; // rcx
  __int64 v57; // rcx
  _QWORD *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // r11
  __int64 v62; // rdx
  __int64 v63; // rdx
  int v64; // ecx
  char v65; // r12
  int v66; // ecx
  __int64 v67; // rdx
  unsigned __int64 v68; // r9
  _WORD *v69; // rax
  unsigned __int64 v70; // rcx
  __int16 v71; // r8
  const void *v72; // rcx
  const void *v73; // r8
  int v74; // eax
  char v75; // cl
  __int64 v76; // rax
  __int64 v77; // r15
  char v78; // r12
  unsigned __int64 v79; // rcx
  __int64 v80; // r15
  char v81; // al
  unsigned int v82; // ecx
  __int64 v83; // rcx
  unsigned __int64 v84; // r8
  unsigned __int64 v85; // r9
  __int64 v86; // [rsp+28h] [rbp-410h]
  __int64 v87; // [rsp+30h] [rbp-408h]
  __int64 v88; // [rsp+38h] [rbp-400h]
  int ImageFileExecutionOptions; // [rsp+50h] [rbp-3E8h] BYREF
  char v90; // [rsp+54h] [rbp-3E4h] BYREF
  char v91; // [rsp+55h] [rbp-3E3h] BYREF
  char v92[2]; // [rsp+56h] [rbp-3E2h] BYREF
  int v93; // [rsp+58h] [rbp-3E0h]
  __int64 v94; // [rsp+60h] [rbp-3D8h] BYREF
  __int64 v95; // [rsp+68h] [rbp-3D0h] BYREF
  __m128i v96; // [rsp+70h] [rbp-3C8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-3B8h] BYREF
  unsigned int v98; // [rsp+90h] [rbp-3A8h] BYREF
  int v99; // [rsp+94h] [rbp-3A4h] BYREF
  int v100; // [rsp+98h] [rbp-3A0h]
  unsigned __int64 v101; // [rsp+A0h] [rbp-398h] BYREF
  __int64 v102; // [rsp+A8h] [rbp-390h] BYREF
  unsigned __int16 v103; // [rsp+B0h] [rbp-388h] BYREF
  __int16 v104; // [rsp+B2h] [rbp-386h]
  unsigned __int64 v105; // [rsp+B8h] [rbp-380h]
  __int64 v106; // [rsp+C0h] [rbp-378h] BYREF
  __int128 v107; // [rsp+C8h] [rbp-370h] BYREF
  __m128i v108; // [rsp+D8h] [rbp-360h] BYREF
  unsigned int v109; // [rsp+E8h] [rbp-350h]
  int v110; // [rsp+ECh] [rbp-34Ch]
  __int64 v111; // [rsp+F0h] [rbp-348h]
  __int64 v112; // [rsp+F8h] [rbp-340h] BYREF
  __int64 v113; // [rsp+100h] [rbp-338h]
  struct _TEB *v114; // [rsp+108h] [rbp-330h]
  __int64 v115; // [rsp+110h] [rbp-328h]
  UNICODE_STRING v116; // [rsp+120h] [rbp-318h] BYREF
  __int64 v117; // [rsp+130h] [rbp-308h]
  __int64 (__fastcall *v118)(_BYTE *, __int64); // [rsp+138h] [rbp-300h] BYREF
  __int64 v119; // [rsp+148h] [rbp-2F0h] BYREF
  int v120; // [rsp+150h] [rbp-2E8h] BYREF
  const WCHAR *v121; // [rsp+158h] [rbp-2E0h]
  __int64 v122; // [rsp+160h] [rbp-2D8h] BYREF
  _QWORD v123[2]; // [rsp+168h] [rbp-2D0h] BYREF
  int v124; // [rsp+178h] [rbp-2C0h] BYREF
  int v125; // [rsp+180h] [rbp-2B8h]
  __int64 v126; // [rsp+188h] [rbp-2B0h]
  int *v127; // [rsp+190h] [rbp-2A8h]
  int v128; // [rsp+198h] [rbp-2A0h]
  __int128 v129; // [rsp+1A0h] [rbp-298h]
  __int64 v130; // [rsp+1B0h] [rbp-288h]
  __int64 v131; // [rsp+1B8h] [rbp-280h]
  _QWORD v132[4]; // [rsp+1C0h] [rbp-278h] BYREF
  __int64 v133; // [rsp+1E0h] [rbp-258h] BYREF
  int v134; // [rsp+1E8h] [rbp-250h]
  _BYTE v135[56]; // [rsp+1F0h] [rbp-248h] BYREF
  _OWORD v136[15]; // [rsp+230h] [rbp-208h] BYREF
  _QWORD v137[12]; // [rsp+320h] [rbp-118h] BYREF
  __int64 v138[16]; // [rsp+380h] [rbp-B8h] BYREF

  v113 = a2;
  v115 = a1;
  v120 = 1441812;
  v121 = L"\\KnownDlls";
  RtlSetUnhandledExceptionFilter(0LL);
  v3 = NtCurrentTeb();
  v114 = v3;
  ProcessEnvironmentBlock = (__int64)v3->ProcessEnvironmentBlock;
  dword_1801653C0 = 88;
  v5 = 1;
  byte_1801653C4 = 1;
  qword_1801653D8 = (__int64)&qword_1801653D0;
  qword_1801653D0 = (__int64)&qword_1801653D0;
  qword_1801653E8 = (__int64)&qword_1801653E0;
  qword_1801653E0 = (__int64)&qword_1801653E0;
  qword_1801653F8 = (__int64)&qword_1801653F0;
  qword_1801653F0 = (__int64)&qword_1801653F0;
  v6 = 0;
  byte_180165408 = 0;
  qword_180165410 = 0LL;
  *(_QWORD *)(ProcessEnvironmentBlock + 24) = &dword_1801653C0;
  v7 = 0x8000000LL;
  if ( (unsigned __int8)sub_1800D4FE0()
    || (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x8000000) != 0 )
  {
    *(_QWORD *)(ProcessEnvironmentBlock + 160) = 0LL;
    *(_QWORD *)(ProcessEnvironmentBlock + 168) = 0LL;
  }
  sub_1800D24F8((_QWORD *)ProcessEnvironmentBlock);
  v8 = 0;
  v9 = *(_DWORD *)(ProcessEnvironmentBlock + 184) <= 1u;
  if ( *(_DWORD *)(ProcessEnvironmentBlock + 184) > 1u )
    v8 = 10240;
  dword_180163EC4 = v8;
  v10 = 0;
  if ( !v9 )
    v10 = 10240;
  dword_180163B84 = v10;
  sub_1800FC690(ProcessEnvironmentBlock);
  sub_1800F5708();
  v11 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v12 = (_WORD *)(*(_QWORD *)(v11 + 104) + v11);
  if ( (*(_BYTE *)(v11 + 8) & 1) != 0 )
    v12 = *(_WORD **)(v11 + 104);
  v105 = (unsigned __int64)v12;
  v103 = *(_WORD *)(v11 + 96);
  v13 = v103;
  v104 = v103 + 2;
  if ( v103 >= 8u && *v12 == 92 )
  {
    if ( v12[1] == 63 && v12[2] == 63 && v12[3] == 92 )
    {
      v103 -= 8;
      v104 = v13 - 6;
      v105 = (unsigned __int64)(v12 + 4);
      *(_WORD *)(v11 + 96) -= 8;
      *(_WORD *)(v11 + 98) -= 8;
      *(_QWORD *)(v11 + 104) += 8LL;
    }
    v6 = 0;
  }
  v100 = 1;
  byte_180165368 = 0;
  LOBYTE(v5) = 0;
  v93 = v5;
  v99 = 0;
  RtlImageNtHeaderEx(3, *(_QWORD *)(ProcessEnvironmentBlock + 16), 0LL, &v95);
  qword_180165308 = v95;
  if ( byte_180165430 && (*(_BYTE *)(v95 + 22) & 0x20) == 0 )
  {
    v14 = dword_18015FAB0;
    if ( (dword_18015FAB0 & 3) != 0 )
    {
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3788,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Secure processes must be large address aware\n");
      v14 = dword_18015FAB0;
    }
    if ( (v14 & 0x10) != 0 )
      __debugbreak();
    return 3221225659LL;
  }
  for ( i = 0; i < 0x20; ++i )
  {
    v17 = (_QWORD *)((char *)&unk_180165040 + 16 * i);
    v17[1] = v17;
    *v17 = v17;
  }
  sub_1800D16A0(a2);
  sub_1800D4E64();
  sub_180035F18(1);
  sub_1800D491C();
  v136[12] = xmmword_18017A370;
  v18 = (_mm_srli_si128((__m128i)xmmword_18017A370, 8).m128i_u64[0] >> 4) & 3;
  if ( (_BYTE)v18 == 1 )
  {
    byte_180165310 = 1;
  }
  else
  {
    byte_180165310 = 0;
    v136[13] = xmmword_18017A370;
    byte_180165358 = 0;
    if ( (_BYTE)v18 != 3 )
      goto LABEL_31;
  }
  byte_180165358 = 1;
LABEL_31:
  result = sub_1800D16F0(&v103, ProcessEnvironmentBlock, a2, &v106, &v102, (__int64)&v94);
  ImageFileExecutionOptions = result;
  if ( (int)result < 0 )
  {
    v19 = dword_18015FAB0;
    if ( (dword_18015FAB0 & 3) != 0 )
    {
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3934,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Initializing the execution options for the process %lx failed with status 0x%08lx\n",
        LODWORD(v3->ClientId.UniqueProcess),
        result);
      result = (unsigned int)ImageFileExecutionOptions;
      v19 = dword_18015FAB0;
    }
    goto LABEL_34;
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    dword_18015FAB0 |= 1u;
  if ( (dword_18015FAB0 & 5) != 0 )
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3981,
      (unsigned int)"LdrpInitializeProcess",
      2,
      "Initializing process 0x%p\n",
      v3->ClientId.UniqueProcess);
  v117 = 0LL;
  if ( (int)v114->SpareUlong0 <= 0 )
  {
    dword_180165428 = 0;
    v20 = 0;
  }
  else
  {
    dword_180165428 = 1;
    v20 = 1;
  }
  if ( v95 )
  {
    if ( *(_WORD *)(v95 + 24) == 267 && !v20 )
    {
      byte_180165368 = 1;
      LOBYTE(v5) = 1;
      v93 = v5;
      v6 = 1;
      result = sub_1800CEDF8(*(_QWORD *)(ProcessEnvironmentBlock + 16));
      ImageFileExecutionOptions = result;
      if ( (int)result < 0 )
        return result;
    }
  }
  if ( !dword_180165428 && !byte_180165368 )
  {
    v21 = RtlImageDirectoryEntryToData(*(_QWORD *)(ProcessEnvironmentBlock + 16), 1, 0xEu, &v124);
    if ( v21 )
    {
      byte_180165368 = 1;
      v5 = (unsigned __int8)v5;
      if ( (*(_BYTE *)(v21 + 16) & 1) != 0 )
        v5 = 1;
      v93 = v5;
    }
  }
  qword_1801653A8 = v113;
  if ( !dword_180165428 )
    v117 = *(_QWORD *)(ProcessEnvironmentBlock + 728);
  qword_180164F00 = *(_QWORD *)(ProcessEnvironmentBlock + 192);
  v111 = RtlNormalizeProcessParams(*(_QWORD *)(ProcessEnvironmentBlock + 32));
  v108 = *(__m128i *)(v111 + 96);
  v22 = 0LL;
  if ( !dword_180165428 && (!byte_180165368 || !v6) )
    v22 = sub_18001F450(*(_QWORD *)(ProcessEnvironmentBlock + 16));
  v23 = v22;
  memset((char *)v137 + 4, 0, 0x5CuLL);
  v24 = 2;
  LODWORD(v137[0]) = 96;
  if ( v23 )
  {
    v25 = *v23;
    if ( *v23 >= 0x10 )
    {
      *(_DWORD *)(ProcessEnvironmentBlock + 188) &= ~v23[3];
      v25 = *v23;
    }
    if ( v25 >= 0x14 )
    {
      *(_DWORD *)(ProcessEnvironmentBlock + 188) |= v23[4];
      v25 = *v23;
    }
    if ( v25 >= 0x18 && v23[5] )
    {
      qword_180164F00 = -10000LL * (int)v23[5];
      v25 = *v23;
    }
    if ( v25 >= 0x4C )
    {
      v26 = v23[18];
      if ( v26 )
      {
        v27 = v26 & 0xFFFF0FFF;
        if ( v27 )
          v24 = v27;
      }
    }
    if ( v25 >= 0x20 && *((_QWORD *)v23 + 3) )
    {
      v137[3] = *((_QWORD *)v23 + 3);
      v25 = *v23;
    }
    if ( v25 >= 0x28 && *((_QWORD *)v23 + 4) )
    {
      v137[4] = *((_QWORD *)v23 + 4);
      v25 = *v23;
    }
    if ( v25 >= 0x38 && *((_QWORD *)v23 + 6) )
    {
      v137[5] = *((_QWORD *)v23 + 6);
      v25 = *v23;
    }
    if ( v25 >= 0x40 )
    {
      v28 = v137[6];
      if ( *((_QWORD *)v23 + 7) )
        v28 = *((_QWORD *)v23 + 7);
      v137[6] = v28;
    }
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    dword_18015FAB0 |= 1u;
  v29 = byte_180164EF8;
  if ( qword_180164F00 < -36000000000LL )
    v29 = 1;
  byte_180164EF8 = v29;
  result = sub_1800E6AAC();
  ImageFileExecutionOptions = result;
  if ( (int)result < 0 )
    return result;
  *(_QWORD *)(ProcessEnvironmentBlock + 120) = &dword_180165340;
  *(_QWORD *)(ProcessEnvironmentBlock + 568) = &dword_180165320;
  sub_1800DE480(qword_180166120);
  dword_180165340 = 64;
  qword_180165348 = ProcessEnvironmentBlock + 128;
  *(_DWORD *)(ProcessEnvironmentBlock + 128) |= 1u;
  dword_180165320 = 1024;
  qword_180165328 = ProcessEnvironmentBlock + 576;
  *(_DWORD *)(ProcessEnvironmentBlock + 576) |= 1u;
  if ( dword_180165428 )
    RtlSetBits(*(_QWORD *)(ProcessEnvironmentBlock + 120), 0, 0x13u);
  RtlSetBits(*(_QWORD *)(ProcessEnvironmentBlock + 120), 4u, 1u);
  RtlSetBits(*(_QWORD *)(ProcessEnvironmentBlock + 120), 0x10u, 1u);
  v30 = *(_DWORD *)(ProcessEnvironmentBlock + 188);
  if ( (v30 & 0x1000) != 0 || (v31 = byte_1801665B8) != 0 )
  {
    v98 = 24;
    ImageFileExecutionOptions = LdrQueryImageFileExecutionOptions(
                                  (int)&v103,
                                  (int)L"StackTraceDatabaseSizeInMb",
                                  4,
                                  (int)&v98,
                                  4,
                                  0LL);
    if ( ImageFileExecutionOptions >= 0 && v98 >= 0x18 )
    {
      if ( v98 <= 0x80 )
        v7 = v98 << 20;
    }
    else
    {
      v7 = 25165824LL;
    }
    if ( (dword_18015FAB0 & 5) != 0 )
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4267,
        (unsigned int)"LdrpInitializeProcess",
        2,
        "Stack trace database size is %Id Mb\n",
        v7 >> 20);
    v132[0] = 0LL;
    v132[1] = 0LL;
    v132[2] = v7;
    sub_1800FAA88(0LL, 24LL, v132);
    v30 = *(_DWORD *)(ProcessEnvironmentBlock + 188);
    v31 = byte_1801665B8;
  }
  if ( (v30 & 0x1000) != 0 || v31 )
    byte_180163EC0 = 1;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
  {
    byte_180163EC0 = 1;
    byte_180163EC2 = 1;
  }
  result = RtlInitializeCriticalSection((__int64)&unk_180164FE0);
  ImageFileExecutionOptions = result;
  if ( (int)result < 0 )
    return result;
  *(_QWORD *)(ProcessEnvironmentBlock + 56) = &unk_180164FE0;
  result = sub_1800EEE84(&v103);
  ImageFileExecutionOptions = result;
  if ( (int)result < 0 )
    return result;
  v136[14] = xmmword_18017A370;
  if ( (((unsigned __int64)xmmword_18017A370 >> 12) & 3) == 1 )
    RtlSetHeapInformation(0LL, 1, 0LL, 0LL);
  if ( dword_180165428 || *(_WORD *)(v95 + 24) == 267 )
  {
    v32 = 0LL;
    v33 = 0LL;
  }
  else
  {
    if ( *(_WORD *)(v95 + 72) <= 3u && *(_WORD *)(v95 + 74) < 0x33u )
      v24 |= 0x10000u;
    v32 = *(_QWORD *)(v95 + 120);
    v33 = *(_QWORD *)(v95 + 112);
  }
  Heap = RtlCreateHeap(v24, 0LL, v33, v32, 0LL, (__int64)v137);
  v35 = (void *)Heap;
  if ( !Heap )
  {
    v36 = dword_18015FAB0;
    if ( (dword_18015FAB0 & 3) == 0 )
      goto LABEL_121;
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4369,
      (unsigned int)"LdrpInitializeProcess",
      0,
      "Creating the process heap failed\n");
    goto LABEL_120;
  }
  *(_QWORD *)(ProcessEnvironmentBlock + 48) = Heap;
  sub_1800CDF80();
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x800000) != 0 )
    sub_1800FA2D8(50LL);
  sub_18006EA94((__int64)v114);
  qword_180165420 = (__int64)v35;
  RtlInitializeSListHead_0(&ListHead);
  qword_180163510 = 0LL;
  ImageFileExecutionOptions = ZwQuerySystemInformation();
  v37 = qword_180163EC8;
  if ( ImageFileExecutionOptions >= 0 )
    v37 = v123[1];
  qword_180163EC8 = v37;
  dword_18016542C = RtlCreateTagHeap(v35, 0, (__int64)L"NTDLL!", L"!Process");
  result = sub_18007C45C();
  ImageFileExecutionOptions = result;
  if ( (int)result < 0 )
    return result;
  if ( *(_DWORD *)(v111 + 1080) )
    sub_18010E8E8(*(void **)(v111 + 1072));
  EtwEventRegister((int)&qword_18011CA10, 0LL, 0LL, (__int64)&unk_180163508);
  EtwEventRegister((int)&unk_18012C210, (__int64)sub_1800F6B10, 0LL, (__int64)&qword_180163B90);
  sub_1800098D0();
  WinSqmStartSqmOptinListener();
  result = sub_18005C988();
  ImageFileExecutionOptions = result;
  if ( (int)result < 0 )
    return result;
  result = sub_18007C668();
  ImageFileExecutionOptions = result;
  if ( (int)result < 0 )
    return result;
  v38 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v111 = v38;
  v108 = *(__m128i *)(v38 + 96);
  v105 = _mm_srli_si128(v108, 8).m128i_u64[0];
  if ( v106 || v102 )
  {
    ImageFileExecutionOptions = sub_1800798FC(
                                  v102,
                                  v106,
                                  (__int64)L"DebugProcessHeapOnly",
                                  4u,
                                  (__int64)&v99,
                                  4,
                                  0,
                                  0LL);
    if ( ImageFileExecutionOptions >= 0 && dword_18015F9B8 && v99 )
    {
      dword_18015F9B8 = 0;
      *(_DWORD *)off_18015F9B0 &= ~0x400u;
    }
  }
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlInitUnicodeStringEx((__int64)&v116, NtSystemRoot);
  v40 = v116.Length + 40;
  v41 = RtlAllocateHeap((__int64)v35, 0, (unsigned int)v116.Length + 38 + 2LL);
  if ( !v41 )
    return 3221225495LL;
  LOWORD(v107) = 0;
  WORD1(v107) = v40;
  *((_QWORD *)&v107 + 1) = v41;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v107, (__int16 *)&v116);
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v107, word_180118240);
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x42) != 2 )
  {
    v42 = 48LL;
    v125 = 48;
    v126 = 0LL;
    v128 = 64;
    v127 = &v120;
    v129 = 0LL;
    result = ZwOpenDirectoryObject();
    ImageFileExecutionOptions = result;
    if ( (_DWORD)result != -1073741772 || (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x40) == 0 )
    {
      if ( (int)result >= 0 )
      {
        v125 = 48;
        v126 = qword_180164F30;
        v128 = 64;
        v127 = (int *)&unk_1801192D0;
        v129 = 0LL;
        result = ZwOpenSymbolicLinkObject();
        ImageFileExecutionOptions = result;
        if ( (int)result >= 0 )
        {
          while ( 1 )
          {
            v45 = RtlAllocateHeap((__int64)v35, 0, v42);
            if ( !v45 )
              return 3221225495LL;
            word_180164F10 = 0;
            word_180164F12 = v42;
            qword_180164F18 = v45;
            result = ZwQuerySymbolicLinkObject();
            ImageFileExecutionOptions = result;
            if ( (int)result >= 0 )
            {
              ZwClose();
              v38 = v111;
              goto LABEL_161;
            }
            if ( (_DWORD)result != -1073741789 )
            {
              v19 = dword_18015FAB0;
              if ( (dword_18015FAB0 & 3) == 0 )
                goto LABEL_34;
              LODWORD(v86) = result;
              sub_1800CE318(
                (unsigned int)"minkernel\\ntdll\\ldrinit.c",
                4692,
                (unsigned int)"LdrpInitializeProcess",
                0,
                "Querying the known DLL directory link object failed with status 0x%08lx\n",
                v86);
              goto LABEL_150;
            }
            RtlFreeHeap((__int64)v35, 0, v45);
            v42 = v109;
          }
        }
        v19 = dword_18015FAB0;
        if ( (dword_18015FAB0 & 3) == 0 )
          goto LABEL_34;
        LODWORD(v87) = result;
        v43 = (int *)&unk_1801192D0;
        v44 = 4657;
      }
      else
      {
        v19 = dword_18015FAB0;
        if ( (dword_18015FAB0 & 3) == 0 )
          goto LABEL_34;
        LODWORD(v87) = result;
        v43 = &v120;
        v44 = 4634;
      }
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        v44,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Failed to open %wZ with status 0x%08lx\n",
        v43,
        v87);
LABEL_150:
      result = (unsigned int)ImageFileExecutionOptions;
      v19 = dword_18015FAB0;
      goto LABEL_34;
    }
    if ( (dword_18015FAB0 & 5) != 0 )
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4624,
        (unsigned int)"LdrpInitializeProcess",
        2,
        "KnownDLL directory does not yet exist.  SMSS will create it.\n");
    ImageFileExecutionOptions = 0;
  }
LABEL_161:
  if ( dword_180165428 || byte_180165430 )
  {
    UnicodeString = v116;
  }
  else
  {
    v46 = *(__m128i *)(v38 + 56);
    *(_QWORD *)&UnicodeString.Length = *(_QWORD *)(v38 + 56);
    v47 = (wchar_t *)_mm_srli_si128(v46, 8).m128i_u64[0];
    UnicodeString.Buffer = v47;
    if ( !v47 || !UnicodeString.Length || !*v47 )
    {
      UnicodeString.Buffer = (wchar_t *)RtlAllocateHeap((__int64)v35, 0, 8LL);
      if ( !UnicodeString.Buffer )
      {
        v36 = dword_18015FAB0;
        if ( (dword_18015FAB0 & 3) != 0 )
        {
          sub_1800CE318(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            4740,
            (unsigned int)"LdrpInitializeProcess",
            0,
            "Allocating a buffer to hold the current working directory failed\n");
LABEL_120:
          v36 = dword_18015FAB0;
          goto LABEL_121;
        }
        goto LABEL_121;
      }
      v100 = 0;
      v48 = RtlGetNtSystemRoot();
      Buffer = UnicodeString.Buffer;
      *(_DWORD *)UnicodeString.Buffer = *(_DWORD *)v48;
      Buffer[2] = *(_WORD *)(v48 + 4);
      UnicodeString.Buffer[3] = 0;
      *(_DWORD *)&UnicodeString.Length = 524294;
    }
  }
  sub_18007ED94();
  v50 = (unsigned __int16)v107;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
    v50 = 2LL * (unsigned __int16)v107 + 22;
  v51 = v50;
  if ( !sub_18008180C(1) )
  {
    v51 = v50 + 2 * (v116.Length + 9LL);
    if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) != 0 )
      *(_WORD *)(v38 + 80) = 0;
  }
  v96.m128i_i64[1] = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v51);
  if ( !v96.m128i_i64[1] )
  {
    v36 = dword_18015FAB0;
    if ( (dword_18015FAB0 & 3) != 0 )
    {
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4823,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Failed to allocate the system dirs string!\n");
      goto LABEL_120;
    }
LABEL_121:
    if ( (v36 & 0x10) != 0 )
      __debugbreak();
    return 3221225495LL;
  }
  v96.m128i_i16[0] = 0;
  v96.m128i_i16[1] = v51;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v96, (__int16 *)&v107);
  v52 = 59LL;
  *(_WORD *)(v96.m128i_i64[1] + 2 * ((unsigned __int64)v96.m128i_u16[0] >> 1) - 2) = 59;
  xmmword_180166308 = (__int128)v96;
  xmmword_180165330 = (__int128)v96;
  LOWORD(xmmword_180165330) = _mm_cvtsi128_si32(v96) - 2;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v96, (__int16 *)&v107);
    RtlAppendUnicodeToString((unsigned __int16 *)&v96, L"forwarders;");
  }
  if ( v51 > v50 )
  {
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v96, (__int16 *)&v116);
    RtlAppendUnicodeToString((unsigned __int16 *)&v96, L"\\system;");
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v96, (__int16 *)&v116);
    RtlAppendUnicodeToString((unsigned __int16 *)&v96, ";");
    xmmword_180166318 = (__int128)v96;
  }
  if ( (unsigned int)(dword_1801664DC - 1) <= 0xFFFFFFFD )
    sub_1800D0D7C(&v108, v52);
  v53 = v113;
  RtlImageNtHeaderEx(3, v113, 0LL, &v112);
  v54 = sub_18002AC94(0LL);
  v55 = v54;
  if ( !v54 )
  {
    v36 = dword_18015FAB0;
    if ( (dword_18015FAB0 & 3) != 0 )
    {
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4930,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Allocating a data table entry for the system DLL failed\n");
      goto LABEL_120;
    }
    goto LABEL_121;
  }
  qword_1801653A0 = v54;
  *(_DWORD *)(*(_QWORD *)(v54 + 152) + 24LL) = -1;
  *(_WORD *)(**(_QWORD **)(qword_1801653A0 + 152) - 52LL) = -1;
  v56 = qword_1801653A0;
  *(_DWORD *)(qword_1801653A0 + 104) |= 0x204u;
  *(_QWORD *)(v56 + 248) -= qword_18017A2E0;
  v56 += 72LL;
  *(_OWORD *)v56 = v107;
  RtlAppendUnicodeStringToString((unsigned __int16 *)v56, word_180119390);
  v57 = qword_1801653A0;
  *(_OWORD *)(qword_1801653A0 + 88) = *(_OWORD *)word_180119390;
  *(_QWORD *)(v57 + 48) = v53;
  sub_18002A63C(v57);
  sub_1800255A8(*(_QWORD *)(qword_1801653A0 + 48), qword_1801653A0 + 72, 0x14A5u);
  sub_18007ED50(qword_1801653A0, v112);
  result = sub_180020654(qword_1801653A0, 0, 1);
  ImageFileExecutionOptions = result;
  if ( (int)result < 0 )
    return result;
  sub_1800255A8(*(_QWORD *)(qword_1801653A0 + 48), qword_1801653A0 + 72, 0x14AEu);
  *(_DWORD *)(*(_QWORD *)(qword_1801653A0 + 152) + 56LL) = 9;
  sub_180077CE4();
  v58 = (_QWORD *)(v55 + 32);
  v59 = qword_1801653F0;
  if ( *(__int64 **)(qword_1801653F0 + 8) != &qword_1801653F0 )
    __fastfail(3u);
  *v58 = qword_1801653F0;
  *(_QWORD *)(v55 + 40) = &qword_1801653F0;
  *(_QWORD *)(v59 + 8) = v58;
  qword_1801653F0 = v55 + 32;
  result = sub_18007CFCC();
  ImageFileExecutionOptions = result;
  if ( (int)result < 0 )
  {
    v19 = dword_18015FAB0;
    if ( (dword_18015FAB0 & 3) != 0 )
    {
      LODWORD(v86) = result;
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5009,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Failed to initialize Parallel loader, st = 0x%x\n",
        v86);
      goto LABEL_150;
    }
LABEL_34:
    if ( (v19 & 0x10) != 0 )
      __debugbreak();
    return result;
  }
  sub_18002E73C(0);
  sub_180021798(0LL, 0LL, v138);
  memset(v136, 0, 0xC0uLL);
  *(_QWORD *)&v136[1] = v138;
  LODWORD(v136[2]) = 512;
  v136[0] = v108;
  *((_QWORD *)&v136[2] + 1) = &ImageFileExecutionOptions;
  v60 = sub_18002AC94((__int64)v136);
  v61 = v60;
  if ( !v60 )
  {
    v36 = dword_18015FAB0;
    if ( (dword_18015FAB0 & 3) != 0 )
    {
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5030,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Allocating a data table entry for the executable failed\n");
      goto LABEL_120;
    }
    goto LABEL_121;
  }
  qword_180164FC8 = v60;
  v62 = 2LL;
  do
  {
    *(_DWORD *)(*(_QWORD *)(qword_180164FC8 + 152) + 24LL) = -1;
    --v62;
  }
  while ( v62 );
  *(_WORD *)(**(_QWORD **)(qword_180164FC8 + 152) - 52LL) = -1;
  v63 = qword_180164FC8;
  *(__m128i *)(qword_180164FC8 + 72) = v108;
  *(_DWORD *)(v63 + 104) |= 4u;
  v64 = *(_DWORD *)(v63 + 104);
  if ( (NtCurrentPeb()->BitField & 0x10) != 0 )
  {
    v64 |= 1u;
    *(_DWORD *)(v63 + 104) = v64;
  }
  v65 = v93;
  if ( byte_180165368 )
  {
    v66 = v64 | 0x400000;
    *(_DWORD *)(v63 + 104) = v66;
    if ( v65 )
      *(_DWORD *)(v63 + 104) = v66 | 0x1000000;
  }
  v67 = qword_180164FC8;
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 4) != 0 )
    *(_QWORD *)(qword_180164FC8 + 248) = 0LL;
  v68 = 0LL;
  v69 = (_WORD *)(v108.m128i_i64[1] + v108.m128i_u16[0]);
  if ( v69 )
  {
    while ( 1 )
    {
      v70 = (unsigned __int64)v69--;
      if ( v70 <= v108.m128i_i64[1] )
        break;
      if ( *v69 == 92 )
      {
        v68 = v70;
        break;
      }
    }
  }
  if ( v68 )
  {
    v71 = v108.m128i_i16[4] + v108.m128i_i16[0] - v68;
    *(_WORD *)(v67 + 88) = v71;
    if ( v108.m128i_u16[1] - (unsigned __int64)v108.m128i_u16[0] >= 2 )
      v71 += 2;
    *(_WORD *)(v67 + 90) = v71;
    *(_QWORD *)(v67 + 96) = v68;
  }
  else
  {
    *(_OWORD *)(v67 + 88) = *(_OWORD *)(v61 + 72);
  }
  v72 = *(const void **)(ProcessEnvironmentBlock + 16);
  v73 = v72;
  if ( *(const void **)(v95 + 48) != v72 && !v65 && !dword_180165428 )
  {
    result = sub_180082190(v72);
    ImageFileExecutionOptions = result;
    if ( (int)result < 0 )
      return result;
    v73 = *(const void **)(ProcessEnvironmentBlock + 16);
    v67 = qword_180164FC8;
  }
  *(_QWORD *)(v67 + 48) = v73;
  sub_18002A63C(v67);
  if ( (dword_18015FAB0 & 5) != 0 )
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      5153,
      (unsigned int)"LdrpInitializeProcess",
      2,
      "Beginning execution of %wZ (%wZ)\n\tCurrent directory: %wZ\n\tPackage directories: %wZ\n",
      qword_180164FC8 + 88,
      qword_180164FC8 + 72,
      &UnicodeString,
      &xmmword_180164390);
  sub_1800255A8(*(_QWORD *)(qword_180164FC8 + 48), qword_180164FC8 + 72, 0x14A5u);
  sub_18007ED50(qword_180164FC8, v95);
  result = sub_180020654(qword_180164FC8, 0, dword_180165428 == 0, v136);
  ImageFileExecutionOptions = result;
  if ( (int)result < 0 )
    return result;
  *(_DWORD *)(*(_QWORD *)(qword_180164FC8 + 152) + 56LL) = 9;
  v74 = sub_180076994(&UnicodeString.Length);
  ImageFileExecutionOptions = v74;
  if ( v74 < 0 )
  {
    v75 = dword_18015FAB0;
    if ( (dword_18015FAB0 & 3) != 0 )
    {
      LODWORD(v87) = v74;
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5190,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n",
        &UnicodeString,
        v87);
      v75 = dword_18015FAB0;
    }
    if ( (v75 & 0x10) != 0 )
      __debugbreak();
  }
  if ( !v100 )
    RtlFreeUnicodeString(&UnicodeString);
  if ( dword_18017A29C )
  {
    v76 = sub_18002AC94(0LL);
    v77 = v76;
    if ( !v76 )
    {
      v36 = dword_18015FAB0;
      if ( (dword_18015FAB0 & 3) != 0 )
      {
        sub_1800CE318(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5213,
          (unsigned int)"LdrpInitializeProcess",
          0,
          "Allocating a data table entry for the application verifier DLL failed\n");
        goto LABEL_120;
      }
      goto LABEL_121;
    }
    *(_DWORD *)(*(_QWORD *)(v76 + 152) + 24LL) = -1;
    *(_WORD *)(**(_QWORD **)(v76 + 152) - 52LL) = -1;
    *(_DWORD *)(v76 + 104) |= *(_DWORD *)(v94 + 104);
    *(_QWORD *)(v76 + 248) = *(_QWORD *)(v94 + 248);
    *(_WORD *)(v76 + 110) = 0;
    *(_OWORD *)(v76 + 72) = *(_OWORD *)(v94 + 72);
    *(_OWORD *)(v76 + 88) = *(_OWORD *)(v94 + 88);
    *(_DWORD *)(v76 + 128) = *(_DWORD *)(v94 + 128);
    *(_QWORD *)(v76 + 48) = *(_QWORD *)(v94 + 48);
    sub_18002A63C(v76);
    sub_1800255A8(*(_QWORD *)(v77 + 48), v77 + 72, 0x14A5u);
    result = RtlImageNtHeaderEx(3, *(_QWORD *)(v77 + 48), 0LL, &v112);
    ImageFileExecutionOptions = result;
    if ( (int)result < 0 )
      return result;
    sub_18007ED50(v77, v112);
    result = sub_180020654(v77, 0, 1);
    ImageFileExecutionOptions = result;
    if ( (int)result < 0 )
      return result;
    *(_QWORD *)(v77 + 56) = *(_QWORD *)(v94 + 56);
    sub_1800255A8(*(_QWORD *)(v77 + 48), v77 + 72, 0x14ADu);
    *(_DWORD *)(*(_QWORD *)(v77 + 152) + 56LL) = 7;
    if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x100) == 0 && (dword_18017A29C & 2) == 0 )
    {
      v90 = 0;
      result = sub_180069778(*(__int64 **)(v77 + 152), 0LL, &v90);
      ImageFileExecutionOptions = result;
    }
    else
    {
      result = sub_1800D8B78(0, 0, 0, 1, v113, 0LL);
      ImageFileExecutionOptions = result;
      if ( (int)result >= 0 && (dword_18017A29C & 2) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v77 + 152) + 56LL) = 9;
        result = (unsigned int)ImageFileExecutionOptions;
      }
    }
    if ( (int)result < 0 )
      return result;
  }
  sub_180073E1C();
  if ( dword_180165428 )
  {
    if ( v106 )
    {
      ZwClose();
      v106 = 0LL;
      if ( qword_180164F20 )
      {
        ZwClose();
        qword_180164F20 = 0LL;
      }
    }
    if ( v102 )
    {
      ZwClose();
      v102 = 0LL;
    }
    result = sub_180081C0C((__int16 *)&v107);
    ImageFileExecutionOptions = result;
    if ( (int)result >= 0 )
    {
      if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
        sub_1800D0F9C();
      dword_1801664E0 = 3;
      _interlockedbittestandreset((volatile signed __int32 *)(ProcessEnvironmentBlock + 80), 1u);
      sub_180084D14(v115);
LABEL_328:
      if ( v106 )
        ZwClose();
      if ( v102 )
        ZwClose();
      return 0LL;
    }
    return result;
  }
  v119 = 0LL;
  if ( byte_180165368 )
  {
    result = sub_180081070(&v119);
    ImageFileExecutionOptions = result;
    if ( (int)result < 0 )
      return result;
    v78 = v93;
    if ( (_BYTE)v93 )
    {
      result = sub_180083AF0(*(_QWORD *)(ProcessEnvironmentBlock + 16));
      ImageFileExecutionOptions = result;
      if ( (int)result < 0 )
        return result;
    }
    if ( (v114->SameTebFlags & 0x400) != 0 )
      *(_QWORD *)(v115 + 128) = __ROR8__(qword_180165438, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
  }
  else
  {
    v78 = v93;
  }
  result = sub_1800550B8();
  ImageFileExecutionOptions = result;
  if ( (int)result < 0 )
  {
    v19 = dword_18015FAB0;
    if ( (dword_18015FAB0 & 3) != 0 )
    {
      LODWORD(v86) = result;
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5440,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Initializing TLS slots failed with status 0x%08lx\n",
        v86);
      goto LABEL_150;
    }
    goto LABEL_34;
  }
  if ( v119 )
  {
    v91 = 0;
    result = sub_180069778(*(__int64 **)(v119 + 152), 0LL, &v91);
    ImageFileExecutionOptions = result;
    if ( (int)result < 0 )
    {
      v19 = dword_18015FAB0;
      if ( (dword_18015FAB0 & 3) != 0 )
      {
        LODWORD(v86) = result;
        sub_1800CE318(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5459,
          (unsigned int)"LdrpInitializeProcess",
          0,
          "DllMain of MSCOREE (or its dependents) failed with status 0x%08lx\n",
          v86);
        goto LABEL_150;
      }
      goto LABEL_34;
    }
  }
  result = sub_1800805E4();
  ImageFileExecutionOptions = result;
  if ( (int)result < 0 )
  {
    v19 = dword_18015FAB0;
    if ( (dword_18015FAB0 & 3) != 0 )
    {
      LODWORD(v86) = result;
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5475,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Loading of import redirection module failed with status 0x%08x\n",
        v86);
      goto LABEL_150;
    }
    goto LABEL_34;
  }
  v118 = 0LL;
  if ( (unsigned __int16)(*(_WORD *)(v95 + 92) - 2) <= 1u )
  {
    result = LdrLoadDll(16385LL, 0LL, (__int64)word_180118260, &v101);
    ImageFileExecutionOptions = result;
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result != -1073741515 )
      {
        v19 = dword_18015FAB0;
        if ( (dword_18015FAB0 & 3) != 0 )
        {
          LODWORD(v87) = result;
          sub_1800CE318(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5633,
            (unsigned int)"LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            word_180118260,
            v87);
          goto LABEL_150;
        }
        goto LABEL_34;
      }
      result = LdrLoadDll(16385LL, 0LL, (__int64)&unk_180118060, &v101);
      ImageFileExecutionOptions = result;
      if ( (int)result < 0 )
      {
        v19 = dword_18015FAB0;
        if ( (dword_18015FAB0 & 3) != 0 )
        {
          LODWORD(v87) = result;
          sub_1800CE318(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5606,
            (unsigned int)"LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &unk_180118060,
            v87);
          goto LABEL_150;
        }
        goto LABEL_34;
      }
      result = sub_18007A3BC();
      ImageFileExecutionOptions = result;
      if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741515 )
      {
        v19 = dword_18015FAB0;
        if ( (dword_18015FAB0 & 3) != 0 )
        {
          LODWORD(v86) = result;
          sub_1800CE318(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5622,
            (unsigned int)"LdrpInitializeProcess",
            0,
            "LdrpCodeAuthzInitialize failed with status 0x%08lx\n",
            v86);
          goto LABEL_150;
        }
        goto LABEL_34;
      }
      ImageFileExecutionOptions = 0;
      v79 = v101;
    }
    else
    {
      result = LdrGetProcedureAddress(v101, &qword_180119330, 0, &qword_180164EF0);
      ImageFileExecutionOptions = result;
      if ( (int)result < 0 )
      {
        v19 = dword_18015FAB0;
        if ( (dword_18015FAB0 & 3) != 0 )
        {
          LODWORD(v88) = result;
          sub_1800CE318(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5520,
            (unsigned int)"LdrpInitializeProcess",
            0,
            "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &qword_180119330,
            word_180118260,
            v88);
          goto LABEL_150;
        }
        goto LABEL_34;
      }
      LdrGetProcedureAddress(v101, &qword_180119350, 0, &v118);
      result = sub_180021B60();
      ImageFileExecutionOptions = result;
      if ( (int)result < 0 )
        return result;
      result = sub_18007A3BC();
      ImageFileExecutionOptions = result;
      if ( (int)result < 0 )
        return result;
      result = sub_180021908((__int64)&unk_180118060, 0, &v122);
      ImageFileExecutionOptions = result;
      if ( (int)result < 0 )
      {
        v19 = dword_18015FAB0;
        if ( (dword_18015FAB0 & 3) != 0 )
        {
          LODWORD(v87) = result;
          sub_1800CE318(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5588,
            (unsigned int)"LdrpInitializeProcess",
            0,
            "Finding \"%wZ\" failed with status 0x%08lx\n",
            &unk_180118060,
            v87);
          goto LABEL_150;
        }
        goto LABEL_34;
      }
      v79 = *(_QWORD *)(v122 + 48);
      v101 = v79;
    }
    result = LdrGetProcedureAddress(v79, &qword_1801193B0, 0, v123);
    ImageFileExecutionOptions = result;
    if ( (int)result < 0 )
    {
      v19 = dword_18015FAB0;
      if ( (dword_18015FAB0 & 3) != 0 )
      {
        LODWORD(v86) = result;
        sub_1800CE318(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5651,
          (unsigned int)"LdrpInitializeProcess",
          0,
          "Finding KernelbasePostInit failed with status 0x%08lx\n",
          v86);
        goto LABEL_150;
      }
      goto LABEL_34;
    }
    result = _guard_dispatch_icall_fptr();
    ImageFileExecutionOptions = result;
    if ( (int)result < 0 )
    {
      v19 = dword_18015FAB0;
      if ( (dword_18015FAB0 & 3) != 0 )
      {
        LODWORD(v86) = result;
        sub_1800CE318(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5659,
          (unsigned int)"LdrpInitializeProcess",
          0,
          "Calling KernelbasePostInit failed with status 0x%08lx\n",
          v86);
        goto LABEL_150;
      }
      goto LABEL_34;
    }
    ImageFileExecutionOptions = 0;
  }
  sub_18002E73C(0);
  sub_18007D76C(0LL);
  v80 = v117;
  if ( v117 && *(_DWORD *)(v117 + 528) )
  {
    *(_QWORD *)(ProcessEnvironmentBlock + 736) = 0LL;
    sub_180068E90(v80);
  }
  v81 = byte_180163EC0;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
    v81 = 1;
  byte_180163EC0 = v81;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x10000000) != 0 )
  {
    *(_DWORD *)(v38 + 1036) = 1;
    v82 = 1;
  }
  else
  {
    v82 = *(_DWORD *)(v38 + 1036);
  }
  sub_180062B70(v82);
  dword_1801664E0 = 1;
  *(_DWORD *)(*(_QWORD *)(qword_180164FC8 + 152) + 56LL) = 2;
  **((_DWORD **)&v136[2] + 1) = 0;
  if ( v78 )
  {
    result = sub_180083398(qword_180164FC8);
  }
  else
  {
    LODWORD(v136[2]) |= 1u;
    sub_180022F1C((__int64)v136);
    sub_18002E73C(1);
    result = (unsigned int)ImageFileExecutionOptions;
    if ( ImageFileExecutionOptions < 0 )
      goto LABEL_311;
    result = sub_18002A958(qword_180164FC8, *((__int64 *)&v136[2] + 1));
  }
  ImageFileExecutionOptions = result;
  if ( (int)result < 0 )
  {
LABEL_311:
    v19 = dword_18015FAB0;
    if ( (dword_18015FAB0 & 3) != 0 )
    {
      LODWORD(v86) = result;
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5871,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n",
        v86);
      goto LABEL_150;
    }
    goto LABEL_34;
  }
  dword_1801664E0 = 2;
  v110 = 1;
  v130 = *(_QWORD *)(qword_180164FC8 + 48);
  v131 = 4096LL;
  ZwSetInformationVirtualMemory();
  if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
    sub_1800D0F9C();
  sub_180073E1C();
  if ( !qword_180164EF0
    || (result = _guard_dispatch_icall_fptr(), ImageFileExecutionOptions = result, (int)result >= 0)
    && (result = sub_180080CF0(v118), ImageFileExecutionOptions = result, (int)result >= 0) )
  {
    qword_180165388 = v115;
    sub_18002E73C(0);
    sub_18002D7BC(v83);
    v92[0] = 0;
    ImageFileExecutionOptions = sub_180069778(*(__int64 **)(qword_180164FC8 + 152), *((__int64 *)&v136[2] + 1), v92);
    sub_18002D75C(0LL, 9, ImageFileExecutionOptions);
    sub_180064F24(*(_QWORD **)(qword_180164FC8 + 152), *((__int64 *)&v136[2] + 1));
    sub_180073E1C();
    qword_180165388 = 0LL;
    sub_180081880((__int64)v138);
    result = (unsigned int)ImageFileExecutionOptions;
    if ( ImageFileExecutionOptions < 0 )
    {
      v19 = dword_18015FAB0;
      if ( (dword_18015FAB0 & 3) != 0 )
      {
        LODWORD(v86) = ImageFileExecutionOptions;
        sub_1800CE318(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          6013,
          (unsigned int)"LdrpInitializeProcess",
          0,
          "Running the init routines of the executable's static imports failed with status 0x%08lx\n",
          v86);
        goto LABEL_150;
      }
      goto LABEL_34;
    }
    if ( *(_WORD *)(qword_180164FC8 + 110) )
    {
      v133 = 72LL;
      v134 = 1;
      memset(v135, 0, sizeof(v135));
      RtlActivateActivationContextUnsafeFast((__int64)&v133, *(_QWORD *)(qword_180164FC8 + 136));
      sub_18002507C(1, qword_180164FC8, v84, v85);
      RtlDeactivateActivationContextUnsafeFast((__int64)&v133);
    }
    if ( byte_180166014 )
    {
      RtlDecodeSystemPointer(qword_18017A218);
      if ( !(unsigned __int8)_guard_dispatch_icall_fptr() )
      {
        byte_180166014 = 0;
        LdrUnloadDll(qword_180165398);
        qword_180165398 = 0LL;
      }
    }
    if ( *(_QWORD *)(ProcessEnvironmentBlock + 560) )
      _guard_dispatch_icall_fptr();
    goto LABEL_328;
  }
  return result;
}
