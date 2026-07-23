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

int __fastcall sub_1800D2538(__int64 a1, void *a2)
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
  WCHAR *v12; // rdx
  USHORT Length; // r8
  char v14; // al
  int result; // eax
  unsigned int i; // ecx
  _QWORD *v17; // rax
  unsigned __int64 v18; // rax
  char v19; // cl
  int v20; // ecx
  _BYTE *v21; // rax
  unsigned int *v22; // rax
  unsigned int *v23; // r15
  ULONG v24; // r13d
  unsigned int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  __int64 v28; // rax
  char v29; // al
  int v30; // ecx
  char v31; // al
  SIZE_T SizeOfHeapCommit; // r9
  SIZE_T SizeOfHeapReserve; // r8
  PVOID Heap; // rax
  void *v35; // r15
  char v36; // al
  __int64 v37; // rcx
  PRTL_USER_PROCESS_PARAMETERS v38; // r13
  const WCHAR *NtSystemRoot; // rax
  USHORT v40; // r12
  WCHAR *v41; // rax
  SIZE_T v42; // r12
  int *v43; // rax
  int v44; // edx
  WCHAR *v45; // r13
  __m128i DosPath; // xmm0
  WCHAR *v47; // xmm0_8
  PWSTR v48; // rax
  PWCH v49; // rdx
  unsigned __int64 v50; // r15
  SIZE_T v51; // r12
  __int64 v52; // rdx
  PVOID v53; // r12
  char *v54; // rax
  char *v55; // r15
  _UNICODE_STRING *v56; // rcx
  __int64 v57; // rcx
  _QWORD *v58; // rax
  __int64 v59; // rcx
  char *v60; // rax
  char *v61; // r11
  __int64 v62; // rdx
  __int64 v63; // rdx
  int v64; // ecx
  char v65; // r12
  int v66; // ecx
  __int64 v67; // rdx
  WCHAR *v68; // r9
  WCHAR *v69; // rax
  WCHAR *v70; // rcx
  __int16 v71; // r8
  void *v72; // rcx
  void *v73; // r8
  int v74; // eax
  char v75; // cl
  char *v76; // rax
  __int64 v77; // r15
  char v78; // r12
  PVOID v79; // rcx
  __int64 v80; // r15
  char v81; // al
  unsigned int LoaderThreads; // ecx
  PULONG ReturnedLength; // [rsp+28h] [rbp-410h]
  PULONG ReturnedLengtha; // [rsp+28h] [rbp-410h]
  __int64 v85; // [rsp+30h] [rbp-408h]
  __int64 v86; // [rsp+38h] [rbp-400h]
  int v87; // [rsp+50h] [rbp-3E8h] BYREF
  char v88; // [rsp+54h] [rbp-3E4h] BYREF
  char v89; // [rsp+55h] [rbp-3E3h] BYREF
  char v90[2]; // [rsp+56h] [rbp-3E2h] BYREF
  int v91; // [rsp+58h] [rbp-3E0h]
  __int64 v92; // [rsp+60h] [rbp-3D8h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+68h] [rbp-3D0h] BYREF
  _UNICODE_STRING v94; // [rsp+70h] [rbp-3C8h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-3B8h] BYREF
  unsigned int Buffer; // [rsp+90h] [rbp-3A8h] BYREF
  int v97; // [rsp+94h] [rbp-3A4h] BYREF
  int v98; // [rsp+98h] [rbp-3A0h]
  PVOID DllHandle; // [rsp+A0h] [rbp-398h] BYREF
  HANDLE v100; // [rsp+A8h] [rbp-390h] BYREF
  _UNICODE_STRING SubKey; // [rsp+B0h] [rbp-388h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp-378h] BYREF
  _UNICODE_STRING Destination; // [rsp+C8h] [rbp-370h] BYREF
  __m128i ImagePathName; // [rsp+D8h] [rbp-360h] BYREF
  ULONG v105; // [rsp+E8h] [rbp-350h] BYREF
  int VmInformation; // [rsp+ECh] [rbp-34Ch] BYREF
  PRTL_USER_PROCESS_PARAMETERS v107; // [rsp+F0h] [rbp-348h]
  PIMAGE_NT_HEADERS v108; // [rsp+F8h] [rbp-340h] BYREF
  PVOID BaseOfImage; // [rsp+100h] [rbp-338h]
  struct _TEB *v110; // [rsp+108h] [rbp-330h]
  __int64 v111; // [rsp+110h] [rbp-328h]
  _UNICODE_STRING DestinationString; // [rsp+120h] [rbp-318h] BYREF
  __int64 v113; // [rsp+130h] [rbp-308h]
  PVOID ProcedureAddress; // [rsp+138h] [rbp-300h] BYREF
  HANDLE LinkHandle; // [rsp+140h] [rbp-2F8h] BYREF
  __int64 **v116; // [rsp+148h] [rbp-2F0h] BYREF
  int v117; // [rsp+150h] [rbp-2E8h] BYREF
  const WCHAR *v118; // [rsp+158h] [rbp-2E0h]
  char *v119; // [rsp+160h] [rbp-2D8h] BYREF
  PVOID v120; // [rsp+168h] [rbp-2D0h] BYREF
  __int64 SystemInformation; // [rsp+170h] [rbp-2C8h] BYREF
  ULONG Size; // [rsp+178h] [rbp-2C0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+180h] [rbp-2B8h] BYREF
  _MEMORY_RANGE_ENTRY VirtualAddresses; // [rsp+1B0h] [rbp-288h] BYREF
  _QWORD v125[4]; // [rsp+1C0h] [rbp-278h] BYREF
  __int64 v126; // [rsp+1E0h] [rbp-258h] BYREF
  int v127; // [rsp+1E8h] [rbp-250h]
  _BYTE v128[56]; // [rsp+1F0h] [rbp-248h] BYREF
  _OWORD v129[15]; // [rsp+230h] [rbp-208h] BYREF
  _QWORD Parameters[12]; // [rsp+320h] [rbp-118h] BYREF
  __int64 v131[16]; // [rsp+380h] [rbp-B8h] BYREF

  BaseOfImage = a2;
  v111 = a1;
  v117 = 1441812;
  v118 = L"\\KnownDlls";
  RtlSetUnhandledExceptionFilter(0LL);
  v3 = NtCurrentTeb();
  v110 = v3;
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
  sub_1800D24F8((PUSHORT *)ProcessEnvironmentBlock);
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
  v12 = (WCHAR *)(*(_QWORD *)(v11 + 104) + v11);
  if ( (*(_BYTE *)(v11 + 8) & 1) != 0 )
    v12 = *(WCHAR **)(v11 + 104);
  SubKey.Buffer = v12;
  SubKey.Length = *(_WORD *)(v11 + 96);
  Length = SubKey.Length;
  SubKey.MaximumLength = SubKey.Length + 2;
  if ( SubKey.Length >= 8u && *v12 == 92 )
  {
    if ( v12[1] == 63 && v12[2] == 63 && v12[3] == 92 )
    {
      SubKey.Length -= 8;
      SubKey.MaximumLength = Length - 6;
      SubKey.Buffer = v12 + 4;
      *(_WORD *)(v11 + 96) -= 8;
      *(_WORD *)(v11 + 98) -= 8;
      *(_QWORD *)(v11 + 104) += 8LL;
    }
    v6 = 0;
  }
  v98 = 1;
  byte_180165368 = 0;
  LOBYTE(v5) = 0;
  v91 = v5;
  v97 = 0;
  RtlImageNtHeaderEx(3u, *(PVOID *)(ProcessEnvironmentBlock + 16), 0LL, &OutHeaders);
  qword_180165308 = (__int64)OutHeaders;
  if ( byte_180165430 && (OutHeaders->FileHeader.Characteristics & 0x20) == 0 )
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
    return -1073741637;
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
  v129[12] = *(_OWORD *)LdrSystemDllInitBlock.MitigationOptionsMap.Map;
  v18 = (_mm_srli_si128(*(__m128i *)LdrSystemDllInitBlock.MitigationOptionsMap.Map, 8).m128i_u64[0] >> 4) & 3;
  if ( (_BYTE)v18 == 1 )
  {
    byte_180165310 = 1;
  }
  else
  {
    byte_180165310 = 0;
    v129[13] = *(_OWORD *)LdrSystemDllInitBlock.MitigationOptionsMap.Map;
    byte_180165358 = 0;
    if ( (_BYTE)v18 != 3 )
      goto LABEL_31;
  }
  byte_180165358 = 1;
LABEL_31:
  result = sub_1800D16F0(&SubKey.Length, ProcessEnvironmentBlock, (__int64)a2, &Handle, &v100, (__int64)&v92);
  v87 = result;
  if ( result < 0 )
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
      result = v87;
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
  v113 = 0LL;
  if ( v110->WowTebOffset <= 0 )
  {
    dword_180165428 = 0;
    v20 = 0;
  }
  else
  {
    dword_180165428 = 1;
    v20 = 1;
  }
  if ( OutHeaders )
  {
    if ( OutHeaders->OptionalHeader.Magic == 267 && !v20 )
    {
      byte_180165368 = 1;
      LOBYTE(v5) = 1;
      v91 = v5;
      v6 = 1;
      result = sub_1800CEDF8(*(void **)(ProcessEnvironmentBlock + 16));
      v87 = result;
      if ( result < 0 )
        return result;
    }
  }
  if ( !dword_180165428 && !byte_180165368 )
  {
    v21 = RtlImageDirectoryEntryToData(*(PVOID *)(ProcessEnvironmentBlock + 16), 1u, 0xEu, &Size);
    if ( v21 )
    {
      byte_180165368 = 1;
      v5 = (unsigned __int8)v5;
      if ( (v21[16] & 1) != 0 )
        v5 = 1;
      v91 = v5;
    }
  }
  qword_1801653A8 = (__int64)BaseOfImage;
  if ( !dword_180165428 )
    v113 = *(_QWORD *)(ProcessEnvironmentBlock + 728);
  qword_180164F00 = *(_QWORD *)(ProcessEnvironmentBlock + 192);
  v107 = RtlNormalizeProcessParams(*(PRTL_USER_PROCESS_PARAMETERS *)(ProcessEnvironmentBlock + 32));
  ImagePathName = (__m128i)v107->ImagePathName;
  v22 = 0LL;
  if ( !dword_180165428 && (!byte_180165368 || !v6) )
    v22 = sub_18001F450(*(void **)(ProcessEnvironmentBlock + 16));
  v23 = v22;
  memset((char *)Parameters + 4, 0, 0x5CuLL);
  v24 = 2;
  LODWORD(Parameters[0]) = 96;
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
      Parameters[3] = *((_QWORD *)v23 + 3);
      v25 = *v23;
    }
    if ( v25 >= 0x28 && *((_QWORD *)v23 + 4) )
    {
      Parameters[4] = *((_QWORD *)v23 + 4);
      v25 = *v23;
    }
    if ( v25 >= 0x38 && *((_QWORD *)v23 + 6) )
    {
      Parameters[5] = *((_QWORD *)v23 + 6);
      v25 = *v23;
    }
    if ( v25 >= 0x40 )
    {
      v28 = Parameters[6];
      if ( *((_QWORD *)v23 + 7) )
        v28 = *((_QWORD *)v23 + 7);
      Parameters[6] = v28;
    }
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    dword_18015FAB0 |= 1u;
  v29 = byte_180164EF8;
  if ( qword_180164F00 < -36000000000LL )
    v29 = 1;
  byte_180164EF8 = v29;
  result = sub_1800E6AAC();
  v87 = result;
  if ( result < 0 )
    return result;
  *(_QWORD *)(ProcessEnvironmentBlock + 120) = &dword_180165340;
  *(_QWORD *)(ProcessEnvironmentBlock + 568) = &dword_180165320;
  sub_1800DE480(&stru_180166120);
  dword_180165340 = 64;
  qword_180165348 = ProcessEnvironmentBlock + 128;
  *(_DWORD *)(ProcessEnvironmentBlock + 128) |= 1u;
  dword_180165320 = 1024;
  qword_180165328 = ProcessEnvironmentBlock + 576;
  *(_DWORD *)(ProcessEnvironmentBlock + 576) |= 1u;
  if ( dword_180165428 )
    RtlSetBits(*(PRTL_BITMAP *)(ProcessEnvironmentBlock + 120), 0, 0x13u);
  RtlSetBits(*(PRTL_BITMAP *)(ProcessEnvironmentBlock + 120), 4u, 1u);
  RtlSetBits(*(PRTL_BITMAP *)(ProcessEnvironmentBlock + 120), 0x10u, 1u);
  v30 = *(_DWORD *)(ProcessEnvironmentBlock + 188);
  if ( (v30 & 0x1000) != 0 || (v31 = byte_1801665B8) != 0 )
  {
    Buffer = 24;
    v87 = LdrQueryImageFileExecutionOptions(&SubKey, L"StackTraceDatabaseSizeInMb", 4u, &Buffer, 4u, 0LL);
    if ( v87 >= 0 && Buffer >= 0x18 )
    {
      if ( Buffer <= 0x80 )
        v7 = Buffer << 20;
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
    v125[0] = 0LL;
    v125[1] = 0LL;
    v125[2] = v7;
    sub_1800FAA88(0LL, 24LL, v125);
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
  result = RtlInitializeCriticalSection(&stru_180164FE0);
  v87 = result;
  if ( result < 0 )
    return result;
  *(_QWORD *)(ProcessEnvironmentBlock + 56) = &stru_180164FE0;
  result = sub_1800EEE84(&SubKey);
  v87 = result;
  if ( result < 0 )
    return result;
  v129[14] = *(_OWORD *)LdrSystemDllInitBlock.MitigationOptionsMap.Map;
  if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[0] >> 12) & 3) == 1 )
    RtlSetHeapInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL);
  if ( dword_180165428 || OutHeaders->OptionalHeader.Magic == 267 )
  {
    SizeOfHeapCommit = 0LL;
    SizeOfHeapReserve = 0LL;
  }
  else
  {
    if ( OutHeaders->OptionalHeader.MajorSubsystemVersion <= 3u
      && OutHeaders->OptionalHeader.MinorSubsystemVersion < 0x33u )
    {
      v24 |= 0x10000u;
    }
    SizeOfHeapCommit = OutHeaders->OptionalHeader.SizeOfHeapCommit;
    SizeOfHeapReserve = OutHeaders->OptionalHeader.SizeOfHeapReserve;
  }
  Heap = RtlCreateHeap(v24, 0LL, SizeOfHeapReserve, SizeOfHeapCommit, 0LL, Parameters);
  v35 = Heap;
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
  sub_18006EA94((__int64)v110);
  HeapHandle = v35;
  RtlInitializeSListHead_0(&ListHead);
  qword_180163510 = 0LL;
  v87 = ZwQuerySystemInformation(SystemHypervisorSharedPageInformation, &SystemInformation, 8u, 0LL);
  v37 = qword_180163EC8;
  if ( v87 >= 0 )
    v37 = SystemInformation;
  qword_180163EC8 = v37;
  Flags = RtlCreateTagHeap(v35, 0, (PWSTR)L"NTDLL!", (PWSTR)L"!Process");
  result = sub_18007C45C();
  v87 = result;
  if ( result < 0 )
    return result;
  if ( v107->DefaultThreadpoolCpuSetMaskCount )
    sub_18010E8E8((void *)v107->DefaultThreadpoolCpuSetMasks);
  EtwEventRegister(&stru_18011CA10, 0LL, 0LL, &qword_180163508);
  EtwEventRegister(&stru_18012C210, sub_1800F6B10, 0LL, &qword_180163B90);
  sub_1800098D0();
  WinSqmStartSqmOptinListener();
  result = sub_18005C988();
  v87 = result;
  if ( result < 0 )
    return result;
  result = sub_18007C668();
  v87 = result;
  if ( result < 0 )
    return result;
  v38 = *(PRTL_USER_PROCESS_PARAMETERS *)(ProcessEnvironmentBlock + 32);
  v107 = v38;
  ImagePathName = (__m128i)v38->ImagePathName;
  SubKey.Buffer = (PWCH)_mm_srli_si128(ImagePathName, 8).m128i_u64[0];
  if ( Handle || v100 )
  {
    v87 = sub_1800798FC(v100, Handle, L"DebugProcessHeapOnly", 4u, &v97, 4u, 0LL, 0LL);
    if ( v87 >= 0 && dword_18015F9B8 && v97 )
    {
      dword_18015F9B8 = 0;
      *Value &= ~0x400u;
    }
  }
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlInitUnicodeStringEx(&DestinationString, NtSystemRoot);
  v40 = DestinationString.Length + 40;
  v41 = (WCHAR *)RtlAllocateHeap(v35, 0, (unsigned int)DestinationString.Length + 38 + 2LL);
  if ( !v41 )
    return -1073741801;
  Destination.Length = 0;
  Destination.MaximumLength = v40;
  Destination.Buffer = v41;
  RtlAppendUnicodeStringToString(&Destination, &DestinationString);
  RtlAppendUnicodeStringToString(&Destination, &stru_180118240);
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x42) != 2 )
  {
    v42 = 48LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v117;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenDirectoryObject(&DirectoryHandle, 3u, &ObjectAttributes);
    v87 = result;
    if ( result != -1073741772 || (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x40) == 0 )
    {
      if ( result >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = DirectoryHandle;
        ObjectAttributes.Attributes = 64;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_1801192D0;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        result = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
        v87 = result;
        if ( result >= 0 )
        {
          while ( 1 )
          {
            v45 = (WCHAR *)RtlAllocateHeap(v35, 0, v42);
            if ( !v45 )
              return -1073741801;
            LinkTarget.Length = 0;
            LinkTarget.MaximumLength = v42;
            LinkTarget.Buffer = v45;
            result = ZwQuerySymbolicLinkObject(LinkHandle, &LinkTarget, &v105);
            v87 = result;
            if ( result >= 0 )
            {
              ZwClose(LinkHandle);
              v38 = v107;
              goto LABEL_161;
            }
            if ( result != -1073741789 )
            {
              v19 = dword_18015FAB0;
              if ( (dword_18015FAB0 & 3) == 0 )
                goto LABEL_34;
              LODWORD(ReturnedLength) = result;
              sub_1800CE318(
                (unsigned int)"minkernel\\ntdll\\ldrinit.c",
                4692,
                (unsigned int)"LdrpInitializeProcess",
                0,
                "Querying the known DLL directory link object failed with status 0x%08lx\n",
                ReturnedLength);
              goto LABEL_150;
            }
            RtlFreeHeap(v35, 0, v45);
            v42 = v105;
          }
        }
        v19 = dword_18015FAB0;
        if ( (dword_18015FAB0 & 3) == 0 )
          goto LABEL_34;
        LODWORD(v85) = result;
        v43 = (int *)&unk_1801192D0;
        v44 = 4657;
      }
      else
      {
        v19 = dword_18015FAB0;
        if ( (dword_18015FAB0 & 3) == 0 )
          goto LABEL_34;
        LODWORD(v85) = result;
        v43 = &v117;
        v44 = 4634;
      }
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        v44,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Failed to open %wZ with status 0x%08lx\n",
        v43,
        v85);
LABEL_150:
      result = v87;
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
    v87 = 0;
  }
LABEL_161:
  if ( dword_180165428 || byte_180165430 )
  {
    UnicodeString = DestinationString;
  }
  else
  {
    DosPath = (__m128i)v38->CurrentDirectory.DosPath;
    *(_QWORD *)&UnicodeString.Length = *(_QWORD *)&v38->CurrentDirectory.DosPath.Length;
    v47 = (WCHAR *)_mm_srli_si128(DosPath, 8).m128i_u64[0];
    UnicodeString.Buffer = v47;
    if ( !v47 || !UnicodeString.Length || !*v47 )
    {
      UnicodeString.Buffer = (PWCH)RtlAllocateHeap(v35, 0, 8uLL);
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
      v98 = 0;
      v48 = RtlGetNtSystemRoot();
      v49 = UnicodeString.Buffer;
      *(_DWORD *)UnicodeString.Buffer = *(_DWORD *)v48;
      v49[2] = v48[2];
      UnicodeString.Buffer[3] = 0;
      *(_DWORD *)&UnicodeString.Length = 524294;
    }
  }
  sub_18007ED94();
  v50 = Destination.Length;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
    v50 = 2LL * Destination.Length + 22;
  v51 = v50;
  if ( !sub_18008180C(1) )
  {
    v51 = v50 + 2 * (DestinationString.Length + 9LL);
    if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) != 0 )
      v38->DllPath.Length = 0;
  }
  v94.Buffer = (PWCH)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v51);
  if ( !v94.Buffer )
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
    return -1073741801;
  }
  v94.Length = 0;
  v94.MaximumLength = v51;
  RtlAppendUnicodeStringToString(&v94, &Destination);
  v52 = 59LL;
  v94.Buffer[((unsigned __int64)v94.Length >> 1) - 1] = 59;
  xmmword_180166308 = (__int128)v94;
  stru_180165330 = v94;
  stru_180165330.Length = _mm_cvtsi128_si32((__m128i)v94) - 2;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    RtlAppendUnicodeStringToString(&v94, &Destination);
    RtlAppendUnicodeToString(&v94, L"forwarders;");
  }
  if ( v51 > v50 )
  {
    RtlAppendUnicodeStringToString(&v94, &DestinationString);
    RtlAppendUnicodeToString(&v94, L"\\system;");
    RtlAppendUnicodeStringToString(&v94, &DestinationString);
    RtlAppendUnicodeToString(&v94, ";");
    stru_180166318 = v94;
  }
  if ( (unsigned int)(dword_1801664DC - 1) <= 0xFFFFFFFD )
    sub_1800D0D7C((_UNICODE_STRING *)&ImagePathName, v52);
  v53 = BaseOfImage;
  RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &v108);
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
  qword_1801653A0 = (__int64)v54;
  *(_DWORD *)(*((_QWORD *)v54 + 19) + 24LL) = -1;
  *(_WORD *)(**(_QWORD **)(qword_1801653A0 + 152) - 52LL) = -1;
  v56 = (_UNICODE_STRING *)qword_1801653A0;
  *(_DWORD *)(qword_1801653A0 + 104) |= 0x204u;
  v56[15].Buffer = (PWCH)((char *)v56[15].Buffer - LdrSystemDllInitBlock.SystemDllNativeRelocation);
  v56 = (_UNICODE_STRING *)((char *)v56 + 72);
  *v56 = Destination;
  RtlAppendUnicodeStringToString(v56, &stru_180119390);
  v57 = qword_1801653A0;
  *(UNICODE_STRING *)(qword_1801653A0 + 88) = stru_180119390;
  *(_QWORD *)(v57 + 48) = v53;
  sub_18002A63C(v57);
  sub_1800255A8(*(_QWORD *)(qword_1801653A0 + 48), qword_1801653A0 + 72, 0x14A5u);
  sub_18007ED50(qword_1801653A0, (__int64)v108);
  result = sub_180020654(qword_1801653A0, 0, 1);
  v87 = result;
  if ( result < 0 )
    return result;
  sub_1800255A8(*(_QWORD *)(qword_1801653A0 + 48), qword_1801653A0 + 72, 0x14AEu);
  *(_DWORD *)(*(_QWORD *)(qword_1801653A0 + 152) + 56LL) = 9;
  sub_180077CE4();
  v58 = v55 + 32;
  v59 = qword_1801653F0;
  if ( *(__int64 **)(qword_1801653F0 + 8) != &qword_1801653F0 )
    __fastfail(3u);
  *v58 = qword_1801653F0;
  *((_QWORD *)v55 + 5) = &qword_1801653F0;
  *(_QWORD *)(v59 + 8) = v58;
  qword_1801653F0 = (__int64)(v55 + 32);
  result = sub_18007CFCC();
  v87 = result;
  if ( result < 0 )
  {
    v19 = dword_18015FAB0;
    if ( (dword_18015FAB0 & 3) != 0 )
    {
      LODWORD(ReturnedLength) = result;
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5009,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Failed to initialize Parallel loader, st = 0x%x\n",
        ReturnedLength);
      goto LABEL_150;
    }
LABEL_34:
    if ( (v19 & 0x10) != 0 )
      __debugbreak();
    return result;
  }
  sub_18002E73C(0);
  sub_180021798(0LL, 0LL, v131);
  memset(v129, 0, 0xC0uLL);
  *(_QWORD *)&v129[1] = v131;
  LODWORD(v129[2]) = 512;
  v129[0] = ImagePathName;
  *((_QWORD *)&v129[2] + 1) = &v87;
  v60 = sub_18002AC94((__int64)v129);
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
  qword_180164FC8 = (__int64)v60;
  v62 = 2LL;
  do
  {
    *(_DWORD *)(*(_QWORD *)(qword_180164FC8 + 152) + 24LL) = -1;
    --v62;
  }
  while ( v62 );
  *(_WORD *)(**(_QWORD **)(qword_180164FC8 + 152) - 52LL) = -1;
  v63 = qword_180164FC8;
  *(__m128i *)(qword_180164FC8 + 72) = ImagePathName;
  *(_DWORD *)(v63 + 104) |= 4u;
  v64 = *(_DWORD *)(v63 + 104);
  if ( (NtCurrentPeb()->BitField & 0x10) != 0 )
  {
    v64 |= 1u;
    *(_DWORD *)(v63 + 104) = v64;
  }
  v65 = v91;
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
  v69 = (WCHAR *)(ImagePathName.m128i_i64[1] + ImagePathName.m128i_u16[0]);
  if ( v69 )
  {
    while ( 1 )
    {
      v70 = v69--;
      if ( (unsigned __int64)v70 <= ImagePathName.m128i_i64[1] )
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
    v71 = ImagePathName.m128i_i16[4] + ImagePathName.m128i_i16[0] - (_WORD)v68;
    *(_WORD *)(v67 + 88) = v71;
    if ( ImagePathName.m128i_u16[1] - (unsigned __int64)ImagePathName.m128i_u16[0] >= 2 )
      v71 += 2;
    *(_WORD *)(v67 + 90) = v71;
    *(_QWORD *)(v67 + 96) = v68;
  }
  else
  {
    *(_OWORD *)(v67 + 88) = *(_OWORD *)(v61 + 72);
  }
  v72 = *(void **)(ProcessEnvironmentBlock + 16);
  v73 = v72;
  if ( (void *)OutHeaders->OptionalHeader.ImageBase != v72 && !v65 && !dword_180165428 )
  {
    result = sub_180082190(v72);
    v87 = result;
    if ( result < 0 )
      return result;
    v73 = *(void **)(ProcessEnvironmentBlock + 16);
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
  sub_18007ED50(qword_180164FC8, (__int64)OutHeaders);
  result = sub_180020654(qword_180164FC8, 0, dword_180165428 == 0, v129);
  v87 = result;
  if ( result < 0 )
    return result;
  *(_DWORD *)(*(_QWORD *)(qword_180164FC8 + 152) + 56LL) = 9;
  v74 = sub_180076994(&UnicodeString.Length);
  v87 = v74;
  if ( v74 < 0 )
  {
    v75 = dword_18015FAB0;
    if ( (dword_18015FAB0 & 3) != 0 )
    {
      LODWORD(v85) = v74;
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5190,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n",
        &UnicodeString,
        v85);
      v75 = dword_18015FAB0;
    }
    if ( (v75 & 0x10) != 0 )
      __debugbreak();
  }
  if ( !v98 )
    RtlFreeUnicodeString(&UnicodeString);
  if ( dword_18017A29C )
  {
    v76 = sub_18002AC94(0LL);
    v77 = (__int64)v76;
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
    *(_DWORD *)(*((_QWORD *)v76 + 19) + 24LL) = -1;
    *(_WORD *)(**((_QWORD **)v76 + 19) - 52LL) = -1;
    *((_DWORD *)v76 + 26) |= *(_DWORD *)(v92 + 104);
    *((_QWORD *)v76 + 31) = *(_QWORD *)(v92 + 248);
    *((_WORD *)v76 + 55) = 0;
    *(_OWORD *)(v76 + 72) = *(_OWORD *)(v92 + 72);
    *(_OWORD *)(v76 + 88) = *(_OWORD *)(v92 + 88);
    *((_DWORD *)v76 + 32) = *(_DWORD *)(v92 + 128);
    *((_QWORD *)v76 + 6) = *(_QWORD *)(v92 + 48);
    sub_18002A63C((__int64)v76);
    sub_1800255A8(*(_QWORD *)(v77 + 48), v77 + 72, 0x14A5u);
    result = RtlImageNtHeaderEx(3u, *(PVOID *)(v77 + 48), 0LL, &v108);
    v87 = result;
    if ( result < 0 )
      return result;
    sub_18007ED50(v77, (__int64)v108);
    result = sub_180020654(v77, 0, 1);
    v87 = result;
    if ( result < 0 )
      return result;
    *(_QWORD *)(v77 + 56) = *(_QWORD *)(v92 + 56);
    sub_1800255A8(*(_QWORD *)(v77 + 48), v77 + 72, 0x14ADu);
    *(_DWORD *)(*(_QWORD *)(v77 + 152) + 56LL) = 7;
    if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x100) == 0 && (dword_18017A29C & 2) == 0 )
    {
      v88 = 0;
      result = sub_180069778(*(__int64 **)(v77 + 152), 0LL, &v88);
      v87 = result;
    }
    else
    {
      result = sub_1800D8B78(0, 0, 0, 1, (__int64)BaseOfImage, 0LL);
      v87 = result;
      if ( result >= 0 && (dword_18017A29C & 2) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v77 + 152) + 56LL) = 9;
        result = v87;
      }
    }
    if ( result < 0 )
      return result;
  }
  sub_180073E1C();
  if ( dword_180165428 )
  {
    if ( Handle )
    {
      ZwClose(Handle);
      Handle = 0LL;
      if ( qword_180164F20 )
      {
        ZwClose(qword_180164F20);
        qword_180164F20 = 0LL;
      }
    }
    if ( v100 )
    {
      ZwClose(v100);
      v100 = 0LL;
    }
    result = sub_180081C0C(&Destination);
    v87 = result;
    if ( result >= 0 )
    {
      if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
        sub_1800D0F9C();
      dword_1801664E0 = 3;
      _interlockedbittestandreset((volatile signed __int32 *)(ProcessEnvironmentBlock + 80), 1u);
      sub_180084D14(v111);
LABEL_328:
      if ( Handle )
        ZwClose(Handle);
      if ( v100 )
        ZwClose(v100);
      return 0;
    }
    return result;
  }
  v116 = 0LL;
  if ( byte_180165368 )
  {
    result = sub_180081070((PVOID *)&v116);
    v87 = result;
    if ( result < 0 )
      return result;
    v78 = v91;
    if ( (_BYTE)v91 )
    {
      result = sub_180083AF0(*(_QWORD *)(ProcessEnvironmentBlock + 16));
      v87 = result;
      if ( result < 0 )
        return result;
    }
    if ( (v110->SameTebFlags & 0x400) != 0 )
      *(_QWORD *)(v111 + 128) = __ROR8__(qword_180165438, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
  }
  else
  {
    v78 = v91;
  }
  result = sub_1800550B8();
  v87 = result;
  if ( result < 0 )
  {
    v19 = dword_18015FAB0;
    if ( (dword_18015FAB0 & 3) != 0 )
    {
      LODWORD(ReturnedLength) = result;
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5440,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Initializing TLS slots failed with status 0x%08lx\n",
        ReturnedLength);
      goto LABEL_150;
    }
    goto LABEL_34;
  }
  if ( v116 )
  {
    v89 = 0;
    result = sub_180069778(v116[19], 0LL, &v89);
    v87 = result;
    if ( result < 0 )
    {
      v19 = dword_18015FAB0;
      if ( (dword_18015FAB0 & 3) != 0 )
      {
        LODWORD(ReturnedLength) = result;
        sub_1800CE318(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5459,
          (unsigned int)"LdrpInitializeProcess",
          0,
          "DllMain of MSCOREE (or its dependents) failed with status 0x%08lx\n",
          ReturnedLength);
        goto LABEL_150;
      }
      goto LABEL_34;
    }
  }
  result = sub_1800805E4();
  v87 = result;
  if ( result < 0 )
  {
    v19 = dword_18015FAB0;
    if ( (dword_18015FAB0 & 3) != 0 )
    {
      LODWORD(ReturnedLength) = result;
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5475,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Loading of import redirection module failed with status 0x%08x\n",
        ReturnedLength);
      goto LABEL_150;
    }
    goto LABEL_34;
  }
  ProcedureAddress = 0LL;
  if ( (unsigned __int16)(OutHeaders->OptionalHeader.Subsystem - 2) <= 1u )
  {
    result = LdrLoadDll((PWSTR)0x4001, 0LL, (PUNICODE_STRING)&stru_180118260, &DllHandle);
    v87 = result;
    if ( result < 0 )
    {
      if ( result != -1073741515 )
      {
        v19 = dword_18015FAB0;
        if ( (dword_18015FAB0 & 3) != 0 )
        {
          LODWORD(v85) = result;
          sub_1800CE318(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5633,
            (unsigned int)"LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &stru_180118260,
            v85);
          goto LABEL_150;
        }
        goto LABEL_34;
      }
      result = LdrLoadDll((PWSTR)0x4001, 0LL, (PUNICODE_STRING)&BaseDllName, &DllHandle);
      v87 = result;
      if ( result < 0 )
      {
        v19 = dword_18015FAB0;
        if ( (dword_18015FAB0 & 3) != 0 )
        {
          LODWORD(v85) = result;
          sub_1800CE318(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5606,
            (unsigned int)"LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &BaseDllName,
            v85);
          goto LABEL_150;
        }
        goto LABEL_34;
      }
      result = sub_18007A3BC();
      v87 = result;
      if ( (int)(result + 0x80000000) >= 0 && result != -1073741515 )
      {
        v19 = dword_18015FAB0;
        if ( (dword_18015FAB0 & 3) != 0 )
        {
          LODWORD(ReturnedLength) = result;
          sub_1800CE318(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5622,
            (unsigned int)"LdrpInitializeProcess",
            0,
            "LdrpCodeAuthzInitialize failed with status 0x%08lx\n",
            ReturnedLength);
          goto LABEL_150;
        }
        goto LABEL_34;
      }
      v87 = 0;
      v79 = DllHandle;
    }
    else
    {
      result = LdrGetProcedureAddress(DllHandle, (PANSI_STRING)&stru_180119330, 0, &qword_180164EF0);
      v87 = result;
      if ( result < 0 )
      {
        v19 = dword_18015FAB0;
        if ( (dword_18015FAB0 & 3) != 0 )
        {
          LODWORD(v86) = result;
          sub_1800CE318(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5520,
            (unsigned int)"LdrpInitializeProcess",
            0,
            "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &stru_180119330,
            &stru_180118260,
            v86);
          goto LABEL_150;
        }
        goto LABEL_34;
      }
      LdrGetProcedureAddress(DllHandle, (PANSI_STRING)&stru_180119350, 0, &ProcedureAddress);
      result = sub_180021B60();
      v87 = result;
      if ( result < 0 )
        return result;
      result = sub_18007A3BC();
      v87 = result;
      if ( result < 0 )
        return result;
      result = sub_180021908((__int64)&BaseDllName, 0LL, &v119);
      v87 = result;
      if ( result < 0 )
      {
        v19 = dword_18015FAB0;
        if ( (dword_18015FAB0 & 3) != 0 )
        {
          LODWORD(v85) = result;
          sub_1800CE318(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5588,
            (unsigned int)"LdrpInitializeProcess",
            0,
            "Finding \"%wZ\" failed with status 0x%08lx\n",
            &BaseDllName,
            v85);
          goto LABEL_150;
        }
        goto LABEL_34;
      }
      v79 = (PVOID)*((_QWORD *)v119 + 6);
      DllHandle = v79;
    }
    result = LdrGetProcedureAddress(v79, (PANSI_STRING)&stru_1801193B0, 0, &v120);
    v87 = result;
    if ( result < 0 )
    {
      v19 = dword_18015FAB0;
      if ( (dword_18015FAB0 & 3) != 0 )
      {
        LODWORD(ReturnedLength) = result;
        sub_1800CE318(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5651,
          (unsigned int)"LdrpInitializeProcess",
          0,
          "Finding KernelbasePostInit failed with status 0x%08lx\n",
          ReturnedLength);
        goto LABEL_150;
      }
      goto LABEL_34;
    }
    result = _guard_dispatch_icall_fptr();
    v87 = result;
    if ( result < 0 )
    {
      v19 = dword_18015FAB0;
      if ( (dword_18015FAB0 & 3) != 0 )
      {
        LODWORD(ReturnedLength) = result;
        sub_1800CE318(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5659,
          (unsigned int)"LdrpInitializeProcess",
          0,
          "Calling KernelbasePostInit failed with status 0x%08lx\n",
          ReturnedLength);
        goto LABEL_150;
      }
      goto LABEL_34;
    }
    v87 = 0;
  }
  sub_18002E73C(0);
  sub_18007D76C(0LL);
  v80 = v113;
  if ( v113 && *(_DWORD *)(v113 + 528) )
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
    v38->LoaderThreads = 1;
    LoaderThreads = 1;
  }
  else
  {
    LoaderThreads = v38->LoaderThreads;
  }
  sub_180062B70(LoaderThreads);
  dword_1801664E0 = 1;
  *(_DWORD *)(*(_QWORD *)(qword_180164FC8 + 152) + 56LL) = 2;
  **((_DWORD **)&v129[2] + 1) = 0;
  if ( v78 )
  {
    result = sub_180083398(qword_180164FC8);
  }
  else
  {
    LODWORD(v129[2]) |= 1u;
    sub_180022F1C((__int64)v129);
    sub_18002E73C(1);
    result = v87;
    if ( v87 < 0 )
      goto LABEL_311;
    result = sub_18002A958(qword_180164FC8, *((__int64 *)&v129[2] + 1));
  }
  v87 = result;
  if ( result < 0 )
  {
LABEL_311:
    v19 = dword_18015FAB0;
    if ( (dword_18015FAB0 & 3) != 0 )
    {
      LODWORD(ReturnedLength) = result;
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5871,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n",
        ReturnedLength);
      goto LABEL_150;
    }
    goto LABEL_34;
  }
  dword_1801664E0 = 2;
  VmInformation = 1;
  VirtualAddresses.VirtualAddress = *(PVOID *)(qword_180164FC8 + 48);
  VirtualAddresses.NumberOfBytes = 4096LL;
  ZwSetInformationVirtualMemory(
    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
    VmImageHotPatchInformation,
    1uLL,
    &VirtualAddresses,
    &VmInformation,
    4u);
  if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
    sub_1800D0F9C();
  sub_180073E1C();
  if ( !qword_180164EF0
    || (result = _guard_dispatch_icall_fptr(), v87 = result, result >= 0)
    && (result = sub_180080CF0((__int64 (__fastcall *)(_BYTE *, __int64))ProcedureAddress), v87 = result, result >= 0) )
  {
    qword_180165388 = v111;
    sub_18002E73C(0);
    sub_18002D7BC();
    v90[0] = 0;
    v87 = sub_180069778(*(__int64 **)(qword_180164FC8 + 152), *((__int64 *)&v129[2] + 1), v90);
    sub_18002D75C(0LL, 9, v87);
    sub_180064F24(*(_QWORD **)(qword_180164FC8 + 152), *((__int64 *)&v129[2] + 1));
    sub_180073E1C();
    qword_180165388 = 0LL;
    sub_180081880((__int64)v131);
    result = v87;
    if ( v87 < 0 )
    {
      v19 = dword_18015FAB0;
      if ( (dword_18015FAB0 & 3) != 0 )
      {
        LODWORD(ReturnedLengtha) = v87;
        sub_1800CE318(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          6013,
          (unsigned int)"LdrpInitializeProcess",
          0,
          "Running the init routines of the executable's static imports failed with status 0x%08lx\n",
          ReturnedLengtha);
        goto LABEL_150;
      }
      goto LABEL_34;
    }
    if ( *(_WORD *)(qword_180164FC8 + 110) )
    {
      v126 = 72LL;
      v127 = 1;
      memset(v128, 0, sizeof(v128));
      RtlActivateActivationContextUnsafeFast((__int64)&v126, *(_QWORD *)(qword_180164FC8 + 136));
      sub_18002507C(1, qword_180164FC8);
      RtlDeactivateActivationContextUnsafeFast((__int64)&v126);
    }
    if ( byte_180166014 )
    {
      RtlDecodeSystemPointer(Ptr);
      if ( !(unsigned __int8)_guard_dispatch_icall_fptr() )
      {
        byte_180166014 = 0;
        LdrUnloadDll(::DllHandle);
        ::DllHandle = 0LL;
      }
    }
    if ( *(_QWORD *)(ProcessEnvironmentBlock + 560) )
      _guard_dispatch_icall_fptr();
    goto LABEL_328;
  }
  return result;
}
