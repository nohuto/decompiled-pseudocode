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

__int64 __fastcall AVrfInitializeVerifier(void *ProcessHeap, __int64 a2, __int64 a3, int a4, __int64 a5, _QWORD *a6)
{
  __int64 v6; // rdi
  struct _PEB *v7; // rsi
  char v9; // r15
  int Dll; // ebx
  __int64 *i; // rbx
  int LoadedDllByName; // eax
  unsigned __int64 v13; // rbx
  int ProcedureAddressForCaller; // ebx
  __int64 *j; // rdi
  __int64 v16; // rax
  __int64 *v17; // rbx
  __int64 v18; // rdx
  unsigned int NtGlobalFlag; // r11d
  char v20; // al
  int v21; // ebx
  char *v22; // rbx
  int ValueKey; // eax
  __int64 v24; // rsi
  __int64 Heap; // rax
  int v26; // eax
  char *v27; // rbx
  int v28; // eax
  __int64 v29; // rsi
  int v30; // ecx
  void *v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  char *v34; // rbx
  int v35; // eax
  __int64 v36; // rsi
  int v37; // ecx
  void *v38; // rcx
  __int64 v39; // rax
  int v40; // eax
  char *v41; // rbx
  int v42; // eax
  __int64 v43; // rax
  int v44; // eax
  unsigned int v45; // eax
  size_t v46; // r8
  __int64 v48; // [rsp+20h] [rbp-E0h]
  char v49; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v50[3]; // [rsp+31h] [rbp-CFh] BYREF
  unsigned int v51; // [rsp+34h] [rbp-CCh]
  unsigned int v52; // [rsp+38h] [rbp-C8h]
  unsigned int v53; // [rsp+3Ch] [rbp-C4h]
  unsigned int v54; // [rsp+40h] [rbp-C0h]
  int v55; // [rsp+44h] [rbp-BCh]
  int v56; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 v57[4]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v58; // [rsp+58h] [rbp-A8h]
  unsigned __int16 v59[4]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD *v60; // [rsp+68h] [rbp-98h]
  unsigned __int16 v61[4]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD *v62; // [rsp+78h] [rbp-88h]
  __int64 v63; // [rsp+80h] [rbp-80h] BYREF
  __int64 v64; // [rsp+88h] [rbp-78h] BYREF
  __int64 v65; // [rsp+90h] [rbp-70h]
  __int64 v66; // [rsp+98h] [rbp-68h]
  _QWORD *v67; // [rsp+A0h] [rbp-60h]
  _BYTE v68[16]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v69; // [rsp+B8h] [rbp-48h] BYREF
  char v70; // [rsp+C0h] [rbp-40h] BYREF
  char v71; // [rsp+4C0h] [rbp+3C0h] BYREF
  char v72; // [rsp+8C0h] [rbp+7C0h] BYREF
  char v73; // [rsp+CC0h] [rbp+BC0h] BYREF
  __int64 retaddr; // [rsp+1108h] [rbp+1008h]

  v6 = 0LL;
  v7 = NtCurrentPeb();
  v65 = a5;
  v9 = (char)ProcessHeap;
  v67 = a6;
  v66 = a2;
  v56 = 0;
  if ( !a4 )
  {
    if ( !a6 )
      return (unsigned int)-1073741811;
    *a6 = 0LL;
    NtGlobalFlag = v7->NtGlobalFlag;
    if ( (NtGlobalFlag & 0x2000100) != 0 )
    {
      v55 = 1;
    }
    else
    {
      v20 = LdrpPayloadRestrictionMitigationsEnabled();
      LODWORD(ProcessHeap) = 0;
      if ( v20 )
        LODWORD(ProcessHeap) = 2;
      v55 = (int)ProcessHeap;
    }
    if ( (NtGlobalFlag & 0x100) != 0 || (v21 = 0, v9) )
      v21 = 294916;
    AVrfpVerifierFlags = v21;
    AVrfpVerifierDllsString = 0;
    if ( a3 && (int)RtlInitUnicodeStringEx((__int64)v57, (__int64)L"VerifierFlags") >= 0 )
    {
      v22 = &v70;
      ValueKey = NtQueryValueKey();
      if ( ValueKey < 0 )
      {
        if ( ValueKey == -2147483643 )
        {
          while ( 1 )
          {
            ProcessHeap = NtCurrentPeb()->ProcessHeap;
            if ( !ProcessHeap )
              break;
            Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, v51);
            v24 = Heap;
            if ( !Heap )
              break;
            v22 = (char *)Heap;
            v26 = NtQueryValueKey();
            v6 = 0LL;
            if ( v26 >= 0 )
              goto LABEL_43;
            if ( v26 != -2147483643 )
              goto LABEL_59;
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v22);
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
              v51 = 4;
              v56 = *((_DWORD *)v22 + 3);
            }
          }
          else if ( (_DWORD)ProcessHeap == 1 && ((unsigned __int8)&v56 & 3) == 0 )
          {
            v51 = 4;
            v58 = v22 + 12;
            v57[0] = *((_WORD *)v22 + 4);
            v57[1] = *((_WORD *)v22 + 4);
            RtlUnicodeStringToInteger(v57, 0, &v56);
          }
        }
        else if ( (_DWORD)ProcessHeap == 4 )
        {
          v51 = *((_DWORD *)v22 + 2);
          if ( *((_DWORD *)v22 + 2) <= 4u )
            memmove(&v56, v22 + 12, *((unsigned int *)v22 + 2));
        }
LABEL_59:
        if ( v24 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v24);
        LOBYTE(v21) = v56;
        if ( v56 )
        {
          AVrfpVerifierFlags = v56;
LABEL_67:
          if ( !a3 )
            goto LABEL_131;
          if ( (v21 & 4) != 0 && (int)RtlInitUnicodeStringEx((__int64)v59, (__int64)L"HandleTraces") >= 0 )
          {
            v27 = &v71;
            v28 = NtQueryValueKey();
            if ( v28 < 0 )
            {
              if ( v28 == -2147483643 )
              {
                while ( 1 )
                {
                  v31 = NtCurrentPeb()->ProcessHeap;
                  if ( !v31 )
                    break;
                  v32 = RtlAllocateHeap((__int64)v31, NtdllBaseTag + 1572864, v52);
                  v29 = v32;
                  if ( !v32 )
                    break;
                  v27 = (char *)v32;
                  v33 = NtQueryValueKey();
                  v6 = 0LL;
                  if ( v33 >= 0 )
                    goto LABEL_72;
                  if ( v33 != -2147483643 )
                    goto LABEL_88;
                  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v27);
                }
                v6 = 0LL;
              }
            }
            else
            {
              v29 = 0LL;
LABEL_72:
              v30 = *((_DWORD *)v27 + 1);
              if ( ((v30 - 3) & 0xFFFFFFFB) != 0 )
              {
                if ( v30 == 4 )
                {
                  if ( *((_DWORD *)v27 + 2) == 4 )
                  {
                    v52 = 4;
                    AVrfpHandleTraces = *((_DWORD *)v27 + 3);
                  }
                }
                else if ( v30 == 1 && ((unsigned __int8)&AVrfpHandleTraces & 3) == 0 )
                {
                  v52 = 4;
                  v60 = v27 + 12;
                  v59[0] = *((_WORD *)v27 + 4);
                  v59[1] = *((_WORD *)v27 + 4);
                  RtlUnicodeStringToInteger(v59, 0, &AVrfpHandleTraces);
                }
              }
              else if ( v30 == 4 )
              {
                v52 = *((_DWORD *)v27 + 2);
                if ( *((_DWORD *)v27 + 2) <= 4u )
                  memmove(&AVrfpHandleTraces, v27 + 12, *((unsigned int *)v27 + 2));
              }
LABEL_88:
              if ( v29 )
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v29);
            }
          }
          if ( (int)RtlInitUnicodeStringEx((__int64)v61, (__int64)L"VerifierDebug") >= 0 )
          {
            v34 = &v72;
            v35 = NtQueryValueKey();
            if ( v35 < 0 )
            {
              if ( v35 == -2147483643 )
              {
                while ( 1 )
                {
                  v38 = NtCurrentPeb()->ProcessHeap;
                  if ( !v38 )
                    break;
                  v39 = RtlAllocateHeap((__int64)v38, NtdllBaseTag + 1572864, v53);
                  v36 = v39;
                  if ( !v39 )
                    break;
                  v34 = (char *)v39;
                  v40 = NtQueryValueKey();
                  v6 = 0LL;
                  if ( v40 >= 0 )
                    goto LABEL_94;
                  if ( v40 != -2147483643 )
                    goto LABEL_110;
                  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v34);
                }
                v6 = 0LL;
              }
            }
            else
            {
              v36 = 0LL;
LABEL_94:
              v37 = *((_DWORD *)v34 + 1);
              if ( ((v37 - 3) & 0xFFFFFFFB) != 0 )
              {
                if ( v37 == 4 )
                {
                  if ( *((_DWORD *)v34 + 2) == 4 )
                  {
                    v53 = 4;
                    AVrfpDebug = *((_DWORD *)v34 + 3);
                  }
                }
                else if ( v37 == 1 && ((unsigned __int8)&AVrfpDebug & 3) == 0 )
                {
                  v53 = 4;
                  v62 = v34 + 12;
                  v61[0] = *((_WORD *)v34 + 4);
                  v61[1] = *((_WORD *)v34 + 4);
                  RtlUnicodeStringToInteger(v61, 0, &AVrfpDebug);
                }
              }
              else if ( v37 == 4 )
              {
                v53 = *((_DWORD *)v34 + 2);
                if ( *((_DWORD *)v34 + 2) <= 4u )
                  memmove(&AVrfpDebug, v34 + 12, *((unsigned int *)v34 + 2));
              }
LABEL_110:
              if ( v36 )
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v36);
            }
          }
          if ( (int)RtlInitUnicodeStringEx((__int64)v68, (__int64)L"VerifierDlls") < 0 )
            goto LABEL_131;
          v41 = &v73;
          v42 = NtQueryValueKey();
          if ( v42 < 0 )
          {
            if ( v42 == -2147483643 )
            {
              while ( 1 )
              {
                ProcessHeap = NtCurrentPeb()->ProcessHeap;
                if ( !ProcessHeap )
                  break;
                v43 = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, v54);
                v6 = v43;
                if ( !v43 )
                  break;
                v41 = (char *)v43;
                v44 = NtQueryValueKey();
                if ( v44 >= 0 )
                  goto LABEL_121;
                if ( v44 != -2147483643 )
                  goto LABEL_129;
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v41);
              }
            }
            goto LABEL_131;
          }
LABEL_121:
          LODWORD(ProcessHeap) = *((_DWORD *)v41 + 1);
          if ( (((_DWORD)ProcessHeap - 3) & 0xFFFFFFFB) != 0 )
          {
            if ( (_DWORD)ProcessHeap == 1 )
            {
              v45 = *((_DWORD *)v41 + 2);
              v54 = v45;
              if ( v45 <= 0x200 )
              {
                v46 = v45;
LABEL_128:
                memmove(&AVrfpVerifierDllsString, v41 + 12, v46);
              }
            }
          }
          else if ( (_DWORD)ProcessHeap == 1 )
          {
            v54 = *((_DWORD *)v41 + 2);
            if ( *((_DWORD *)v41 + 2) <= 0x200u )
            {
              v46 = *((unsigned int *)v41 + 2);
              goto LABEL_128;
            }
          }
LABEL_129:
          if ( v6 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
LABEL_131:
          Dll = AvrfMiniLoadDll((_BYTE)ProcessHeap, v66, a3, v65, (__int64)&AvrfpLoaderEntry);
          if ( Dll >= 0 )
          {
            *v67 = &AvrfpLoaderEntry;
            Dll = AVrfpEnableVerifierOptions();
            if ( Dll >= 0 )
            {
              LdrProtectMrdata(0);
              AvrfAppVerifierMode = v55;
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
  Dll = RtlInitializeCriticalSectionEx((__int64)&AVrfpVerifierLock, 0, 0);
  if ( Dll >= 0 )
  {
    if ( AvrfAppVerifierMode == 2 )
    {
      v50[0] = 0;
      Dll = LdrpInitializeGraphRecurse(qword_180164740, 0LL, v50);
      if ( Dll < 0 )
        return (unsigned int)Dll;
    }
    else
    {
      DbgPrintEx(
        93,
        0,
        "AVRF: %ws: pid 0x%X: flags 0x%X: application verifier enabled\n",
        *(_QWORD *)(qword_1801653D0 + 96),
        LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
        AVrfpVerifierFlags);
      if ( (int)AVrfpParseVerifierDllsString() < 0 )
      {
        LODWORD(v48) = NtCurrentTeb()->ClientId.UniqueProcess;
        DbgPrintEx(
          93,
          0,
          "AVRF: %ws: pid 0x%X: application verifier will be disabled due to an initialization error.\n",
          *(_QWORD *)(qword_1801653D0 + 96),
          v48);
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
      LoadedDllByName = LdrpFindLoadedDllByName(VrfcoreDllString, 0LL, 0, (__int64)&v63, 0LL);
      Dll = LoadedDllByName;
      if ( LoadedDllByName < 0 )
      {
        if ( LoadedDllByName != -1073741515 )
          return (unsigned int)Dll;
        v13 = qword_180164650;
      }
      else
      {
        v13 = *(_QWORD *)(v63 + 48);
        LdrpDereferenceModule(v63);
      }
      ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(v13, &AvrfpAPILookupCallbackName, 0, &v64, 1, retaddr);
      LdrProtectMrdata(0);
      if ( ProcedureAddressForCaller >= 0 )
      {
        AvrfpAPILookupCallbackRoutine = __ROR8__(v64 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        AvrfpAPILookupCallbacksEnabled = 1;
      }
      AVrfpEnabled = 1;
      RtlGuardAllowSuppressedCalls = 1;
      LdrProtectMrdata(1);
      AVrfpSnapAlreadyLoadedDlls();
      for ( j = (__int64 *)AVrfpVerifierProvidersList; j != &AVrfpVerifierProvidersList; j = (__int64 *)*j )
      {
        v16 = j[4];
        v49 = 0;
        Dll = LdrpInitializeGraphRecurse(*(__int64 **)(v16 + 152), 0LL, &v49);
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
      RtlImageNtHeaderEx(3, (unsigned __int64)v7->ImageBaseAddress, 0LL, &v69);
    }
    return 0;
  }
  return (unsigned int)Dll;
}
