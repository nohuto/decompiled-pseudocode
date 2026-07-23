/*
 * XREFs of AVrfInitializeVerifier @ 0x1800D8C38
 * Callers:
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D12B4 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x18001AEC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpDereferenceModule @ 0x18001B678 (LdrpDereferenceModule.c)
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     LdrpFindLoadedDllByName @ 0x180022698 (LdrpFindLoadedDllByName.c)
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 *     RtlInitializeCriticalSectionEx @ 0x180035C80 (RtlInitializeCriticalSectionEx.c)
 *     LdrProtectMrdata @ 0x180035F18 (LdrProtectMrdata.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     DbgPrintEx @ 0x180052820 (DbgPrintEx.c)
 *     DbgPrint @ 0x180053E40 (DbgPrint.c)
 *     LdrpInitializeGraphRecurse @ 0x1800699C8 (LdrpInitializeGraphRecurse.c)
 *     RtlUnicodeStringToInteger @ 0x180074900 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x18009D170 (NtQueryValueKey.c)
 *     _alloca_probe @ 0x1800A1EE0 (_alloca_probe.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     LdrpPayloadRestrictionMitigationsEnabled @ 0x1800D4A04 (LdrpPayloadRestrictionMitigationsEnabled.c)
 *     AVrfpChainDuplicateVerificationLayers @ 0x1800D9948 (AVrfpChainDuplicateVerificationLayers.c)
 *     AVrfpEnableVerifierOptions @ 0x1800D9E40 (AVrfpEnableVerifierOptions.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DA090 (AVrfpLoadAndInitializeProvider.c)
 *     AVrfpParseVerifierDllsString @ 0x1800DA3B8 (AVrfpParseVerifierDllsString.c)
 *     AVrfpSnapAlreadyLoadedDlls @ 0x1800DA668 (AVrfpSnapAlreadyLoadedDlls.c)
 *     AVrfpVerifierStopInitialize @ 0x1800DA8F4 (AVrfpVerifierStopInitialize.c)
 *     AvrfMiniLoadDll @ 0x1800DA9B4 (AvrfMiniLoadDll.c)
 */

__int64 __fastcall AVrfInitializeVerifier(void *ProcessHeap, __int64 a2, void *a3, int a4, __int64 a5, _QWORD *a6)
{
  void *v6; // rdi
  struct _PEB *v7; // rsi
  char v9; // r15
  int Dll; // ebx
  __int64 *i; // rbx
  int LoadedDllByName; // eax
  void *v13; // rbx
  NTSTATUS ProcedureAddressForCaller; // ebx
  __int64 *j; // rdi
  __int64 v16; // rax
  __int64 *v17; // rbx
  __int64 v18; // rdx
  unsigned int NtGlobalFlag; // r11d
  char v20; // al
  int v21; // ebx
  _BYTE *v22; // rbx
  NTSTATUS v23; // eax
  void *v24; // rsi
  ULONG v25; // edi
  PVOID Heap; // rax
  NTSTATUS v27; // eax
  unsigned __int16 *v28; // rbx
  NTSTATUS v29; // eax
  void *v30; // rsi
  int v31; // ecx
  ULONG v32; // edi
  void *v33; // rcx
  PVOID v34; // rax
  NTSTATUS v35; // eax
  unsigned __int16 *v36; // rbx
  NTSTATUS v37; // eax
  void *v38; // rsi
  int v39; // ecx
  ULONG v40; // edi
  void *v41; // rcx
  PVOID v42; // rax
  NTSTATUS v43; // eax
  _DWORD *v44; // rbx
  NTSTATUS v45; // eax
  ULONG v46; // esi
  PVOID v47; // rax
  NTSTATUS v48; // eax
  ULONG v49; // eax
  size_t v50; // r8
  ULONG Flags[2]; // [rsp+20h] [rbp-E0h]
  char v53; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v54[3]; // [rsp+31h] [rbp-CFh] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-CCh] BYREF
  ULONG Length; // [rsp+38h] [rbp-C8h] BYREF
  ULONG v57; // [rsp+3Ch] [rbp-C4h] BYREF
  ULONG v58; // [rsp+40h] [rbp-C0h] BYREF
  int v59; // [rsp+44h] [rbp-BCh]
  ULONG Value; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING ValueName; // [rsp+60h] [rbp-A0h] BYREF
  _UNICODE_STRING String; // [rsp+70h] [rbp-90h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp-80h] BYREF
  PVOID ProcedureAddress; // [rsp+88h] [rbp-78h] BYREF
  __int64 v66; // [rsp+90h] [rbp-70h]
  __int64 v67; // [rsp+98h] [rbp-68h]
  _QWORD *v68; // [rsp+A0h] [rbp-60h]
  _UNICODE_STRING v69; // [rsp+A8h] [rbp-58h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE KeyValueInformation[1024]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v72[1024]; // [rsp+4C0h] [rbp+3C0h] BYREF
  _BYTE v73[1024]; // [rsp+8C0h] [rbp+7C0h] BYREF
  _BYTE v74[1024]; // [rsp+CC0h] [rbp+BC0h] BYREF
  PVOID *Callback; // [rsp+1108h] [rbp+1008h]

  v6 = 0LL;
  v7 = NtCurrentPeb();
  v66 = a5;
  v9 = (char)ProcessHeap;
  v68 = a6;
  v67 = a2;
  Value = 0;
  if ( !a4 )
  {
    if ( !a6 )
      return (unsigned int)-1073741811;
    *a6 = 0LL;
    NtGlobalFlag = v7->NtGlobalFlag;
    if ( (NtGlobalFlag & 0x2000100) != 0 )
    {
      v59 = 1;
    }
    else
    {
      v20 = LdrpPayloadRestrictionMitigationsEnabled();
      LODWORD(ProcessHeap) = 0;
      if ( v20 )
        LODWORD(ProcessHeap) = 2;
      v59 = (int)ProcessHeap;
    }
    if ( (NtGlobalFlag & 0x100) != 0 || (v21 = 0, v9) )
      v21 = 294916;
    AVrfpVerifierFlags = v21;
    AVrfpVerifierDllsString = 0;
    if ( a3 && RtlInitUnicodeStringEx(&DestinationString, L"VerifierFlags") >= 0 )
    {
      v22 = KeyValueInformation;
      v23 = NtQueryValueKey(
              a3,
              &DestinationString,
              KeyValuePartialInformation,
              KeyValueInformation,
              0x400u,
              &ResultLength);
      if ( v23 < 0 )
      {
        if ( v23 == -2147483643 )
        {
          while ( 1 )
          {
            v25 = ResultLength;
            ProcessHeap = NtCurrentPeb()->ProcessHeap;
            if ( !ProcessHeap )
              break;
            Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, ResultLength);
            v24 = Heap;
            if ( !Heap )
              break;
            v22 = Heap;
            v27 = NtQueryValueKey(a3, &DestinationString, KeyValuePartialInformation, Heap, v25, &ResultLength);
            v6 = 0LL;
            if ( v27 >= 0 )
              goto LABEL_43;
            if ( v27 != -2147483643 )
              goto LABEL_59;
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v22);
          }
          v6 = 0LL;
        }
      }
      else
      {
        v24 = 0LL;
LABEL_43:
        LODWORD(ProcessHeap) = *((_DWORD *)v22 + 1);
        if ( (((_DWORD)ProcessHeap - 3) & 0xFFFFFFFB) != 0 )
        {
          if ( (_DWORD)ProcessHeap == 4 )
          {
            if ( *((_DWORD *)v22 + 2) == 4 )
            {
              ResultLength = 4;
              Value = *((_DWORD *)v22 + 3);
            }
          }
          else if ( (_DWORD)ProcessHeap == 1 && ((unsigned __int8)&Value & 3) == 0 )
          {
            ResultLength = 4;
            DestinationString.Buffer = (wchar_t *)(v22 + 12);
            DestinationString.Length = *((_WORD *)v22 + 4);
            DestinationString.MaximumLength = *((_WORD *)v22 + 4);
            RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
          }
        }
        else if ( (_DWORD)ProcessHeap == 4 )
        {
          ResultLength = *((_DWORD *)v22 + 2);
          if ( *((_DWORD *)v22 + 2) <= 4u )
            memmove(&Value, v22 + 12, *((unsigned int *)v22 + 2));
        }
LABEL_59:
        if ( v24 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v24);
        LOBYTE(v21) = Value;
        if ( Value )
        {
          AVrfpVerifierFlags = Value;
LABEL_67:
          if ( !a3 )
            goto LABEL_131;
          if ( (v21 & 4) != 0 && RtlInitUnicodeStringEx(&ValueName, L"HandleTraces") >= 0 )
          {
            v28 = (unsigned __int16 *)v72;
            v29 = NtQueryValueKey(a3, &ValueName, KeyValuePartialInformation, v72, 0x400u, &Length);
            if ( v29 < 0 )
            {
              if ( v29 == -2147483643 )
              {
                while ( 1 )
                {
                  v32 = Length;
                  v33 = NtCurrentPeb()->ProcessHeap;
                  if ( !v33 )
                    break;
                  v34 = RtlAllocateHeap(v33, NtdllBaseTag + 1572864, Length);
                  v30 = v34;
                  if ( !v34 )
                    break;
                  v28 = (unsigned __int16 *)v34;
                  v35 = NtQueryValueKey(a3, &ValueName, KeyValuePartialInformation, v34, v32, &Length);
                  v6 = 0LL;
                  if ( v35 >= 0 )
                    goto LABEL_72;
                  if ( v35 != -2147483643 )
                    goto LABEL_88;
                  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v28);
                }
                v6 = 0LL;
              }
            }
            else
            {
              v30 = 0LL;
LABEL_72:
              v31 = *((_DWORD *)v28 + 1);
              if ( ((v31 - 3) & 0xFFFFFFFB) != 0 )
              {
                if ( v31 == 4 )
                {
                  if ( *((_DWORD *)v28 + 2) == 4 )
                  {
                    Length = 4;
                    AVrfpHandleTraces = *((_DWORD *)v28 + 3);
                  }
                }
                else if ( v31 == 1 && ((unsigned __int8)&AVrfpHandleTraces & 3) == 0 )
                {
                  Length = 4;
                  ValueName.Buffer = v28 + 6;
                  ValueName.Length = v28[4];
                  ValueName.MaximumLength = v28[4];
                  RtlUnicodeStringToInteger(&ValueName, 0, &AVrfpHandleTraces);
                }
              }
              else if ( v31 == 4 )
              {
                Length = *((_DWORD *)v28 + 2);
                if ( *((_DWORD *)v28 + 2) <= 4u )
                  memmove(&AVrfpHandleTraces, v28 + 6, *((unsigned int *)v28 + 2));
              }
LABEL_88:
              if ( v30 )
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v30);
            }
          }
          if ( RtlInitUnicodeStringEx(&String, L"VerifierDebug") >= 0 )
          {
            v36 = (unsigned __int16 *)v73;
            v37 = NtQueryValueKey(a3, &String, KeyValuePartialInformation, v73, 0x400u, &v57);
            if ( v37 < 0 )
            {
              if ( v37 == -2147483643 )
              {
                while ( 1 )
                {
                  v40 = v57;
                  v41 = NtCurrentPeb()->ProcessHeap;
                  if ( !v41 )
                    break;
                  v42 = RtlAllocateHeap(v41, NtdllBaseTag + 1572864, v57);
                  v38 = v42;
                  if ( !v42 )
                    break;
                  v36 = (unsigned __int16 *)v42;
                  v43 = NtQueryValueKey(a3, &String, KeyValuePartialInformation, v42, v40, &v57);
                  v6 = 0LL;
                  if ( v43 >= 0 )
                    goto LABEL_94;
                  if ( v43 != -2147483643 )
                    goto LABEL_110;
                  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v36);
                }
                v6 = 0LL;
              }
            }
            else
            {
              v38 = 0LL;
LABEL_94:
              v39 = *((_DWORD *)v36 + 1);
              if ( ((v39 - 3) & 0xFFFFFFFB) != 0 )
              {
                if ( v39 == 4 )
                {
                  if ( *((_DWORD *)v36 + 2) == 4 )
                  {
                    v57 = 4;
                    AVrfpDebug = *((_DWORD *)v36 + 3);
                  }
                }
                else if ( v39 == 1 && ((unsigned __int8)&AVrfpDebug & 3) == 0 )
                {
                  v57 = 4;
                  String.Buffer = v36 + 6;
                  String.Length = v36[4];
                  String.MaximumLength = v36[4];
                  RtlUnicodeStringToInteger(&String, 0, &AVrfpDebug);
                }
              }
              else if ( v39 == 4 )
              {
                v57 = *((_DWORD *)v36 + 2);
                if ( *((_DWORD *)v36 + 2) <= 4u )
                  memmove(&AVrfpDebug, v36 + 6, *((unsigned int *)v36 + 2));
              }
LABEL_110:
              if ( v38 )
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v38);
            }
          }
          if ( RtlInitUnicodeStringEx(&v69, L"VerifierDlls") < 0 )
            goto LABEL_131;
          v44 = v74;
          v45 = NtQueryValueKey(a3, &v69, KeyValuePartialInformation, v74, 0x400u, &v58);
          if ( v45 < 0 )
          {
            if ( v45 == -2147483643 )
            {
              while ( 1 )
              {
                v46 = v58;
                ProcessHeap = NtCurrentPeb()->ProcessHeap;
                if ( !ProcessHeap )
                  break;
                v47 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, v58);
                v6 = v47;
                if ( !v47 )
                  break;
                v44 = v47;
                v48 = NtQueryValueKey(a3, &v69, KeyValuePartialInformation, v47, v46, &v58);
                if ( v48 >= 0 )
                  goto LABEL_121;
                if ( v48 != -2147483643 )
                  goto LABEL_129;
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v44);
              }
            }
            goto LABEL_131;
          }
LABEL_121:
          LODWORD(ProcessHeap) = v44[1];
          if ( (((_DWORD)ProcessHeap - 3) & 0xFFFFFFFB) != 0 )
          {
            if ( (_DWORD)ProcessHeap == 1 )
            {
              v49 = v44[2];
              v58 = v49;
              if ( v49 <= 0x200 )
              {
                v50 = v49;
LABEL_128:
                memmove(&AVrfpVerifierDllsString, v44 + 3, v50);
              }
            }
          }
          else if ( (_DWORD)ProcessHeap == 1 )
          {
            v58 = v44[2];
            if ( v44[2] <= 0x200u )
            {
              v50 = (unsigned int)v44[2];
              goto LABEL_128;
            }
          }
LABEL_129:
          if ( v6 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
LABEL_131:
          Dll = AvrfMiniLoadDll((_BYTE)ProcessHeap, v67, (_DWORD)a3, v66, (__int64)&AvrfpLoaderEntry);
          if ( Dll >= 0 )
          {
            *v68 = &AvrfpLoaderEntry;
            Dll = AVrfpEnableVerifierOptions();
            if ( Dll >= 0 )
            {
              LdrProtectMrdata(0);
              AvrfAppVerifierMode = v59;
              LdrProtectMrdata(1);
            }
          }
          return (unsigned int)Dll;
        }
      }
      LOBYTE(v21) = AVrfpVerifierFlags;
    }
    if ( v9 )
      AVrfpEnabledSystemWide = 1;
    goto LABEL_67;
  }
  if ( a4 != 1 )
    return 0;
  qword_180164618 = (__int64)&AVrfpVerifierProvidersList;
  AVrfpVerifierProvidersList = (__int64)&AVrfpVerifierProvidersList;
  Dll = RtlInitializeCriticalSectionEx(&AVrfpVerifierLock, 0, 0);
  if ( Dll >= 0 )
  {
    if ( AvrfAppVerifierMode == 2 )
    {
      v54[0] = 0;
      Dll = LdrpInitializeGraphRecurse(qword_180164740, 0LL, v54);
      if ( Dll < 0 )
        return (unsigned int)Dll;
    }
    else
    {
      DbgPrintEx(
        0x5Du,
        0,
        "AVRF: %ws: pid 0x%X: flags 0x%X: application verifier enabled\n",
        *(_QWORD *)(qword_1801653D0 + 96),
        LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
        AVrfpVerifierFlags);
      if ( (int)AVrfpParseVerifierDllsString() < 0 )
      {
        Flags[0] = (ULONG)NtCurrentTeb()->ClientId.UniqueProcess;
        DbgPrintEx(
          0x5Du,
          0,
          "AVRF: %ws: pid 0x%X: application verifier will be disabled due to an initialization error.\n",
          *(_QWORD *)(qword_1801653D0 + 96),
          *(_QWORD *)Flags);
        Dll = -1073741823;
        NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag & 0xFFFFFEFF;
        return (unsigned int)Dll;
      }
      for ( i = (__int64 *)AVrfpVerifierProvidersList; i != &AVrfpVerifierProvidersList; i = (__int64 *)*i )
      {
        if ( !(unsigned __int8)AVrfpLoadAndInitializeProvider(i) )
          return (unsigned int)-1073741502;
      }
      AVrfpChainDuplicateVerificationLayers();
      LoadedDllByName = LdrpFindLoadedDllByName(
                          (PUNICODE_STRING)&VrfcoreDllString,
                          0LL,
                          0LL,
                          (__int64)&BaseAddress,
                          0LL);
      Dll = LoadedDllByName;
      if ( LoadedDllByName < 0 )
      {
        if ( LoadedDllByName != -1073741515 )
          return (unsigned int)Dll;
        v13 = (void *)qword_180164650;
      }
      else
      {
        v13 = (void *)*((_QWORD *)BaseAddress + 6);
        LdrpDereferenceModule((char *)BaseAddress);
      }
      ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(
                                    v13,
                                    (PANSI_STRING)&AvrfpAPILookupCallbackName,
                                    0,
                                    &ProcedureAddress,
                                    1u,
                                    Callback);
      LdrProtectMrdata(0);
      if ( ProcedureAddressForCaller >= 0 )
      {
        AvrfpAPILookupCallbackRoutine = __ROR8__(
                                          (unsigned __int64)ProcedureAddress ^ MEMORY[0x7FFE0330],
                                          MEMORY[0x7FFE0330] & 0x3F);
        AvrfpAPILookupCallbacksEnabled = 1;
      }
      AVrfpEnabled = 1;
      RtlGuardAllowSuppressedCalls = 1;
      LdrProtectMrdata(1);
      AVrfpSnapAlreadyLoadedDlls();
      for ( j = (__int64 *)AVrfpVerifierProvidersList; j != &AVrfpVerifierProvidersList; j = (__int64 *)*j )
      {
        v16 = j[4];
        v53 = 0;
        Dll = LdrpInitializeGraphRecurse(*(__int64 **)(v16 + 152), 0LL, &v53);
        if ( Dll < 0 )
          return (unsigned int)Dll;
      }
      if ( (AVrfpDebug & 8) != 0 )
      {
        DbgPrint("AVRF: -*- final list of providers -*- \n");
        v17 = (__int64 *)AVrfpVerifierProvidersList;
        while ( v17 != &AVrfpVerifierProvidersList )
        {
          v18 = v17[3];
          v17 = (__int64 *)*v17;
          DbgPrint("AVRF: provider %ws \n", v18);
        }
      }
      AVrfpVerifierStopInitialize();
      RtlImageNtHeaderEx(3u, v7->ImageBaseAddress, 0LL, &OutHeaders);
    }
    return 0;
  }
  return (unsigned int)Dll;
}
