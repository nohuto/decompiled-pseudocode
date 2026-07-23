/*
 * XREFs of VrpPreLoadKey @ 0x140844778
 * Callers:
 *     VrpRegistryCallback @ 0x140840F00 (VrpRegistryCallback.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140002BC0 (RtlAppendUnicodeToString.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     RtlAppendUnicodeStringToString @ 0x1400EC910 (RtlAppendUnicodeStringToString.c)
 *     EtwActivityIdControl @ 0x14010A760 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObOpenObjectByPointer @ 0x1405D0890 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     CmLoadDifferencingKey @ 0x14063BC6C (CmLoadDifferencingKey.c)
 *     RtlEqualUnicodeString @ 0x140666E20 (RtlEqualUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x14069DD28 (RtlStringFromGUIDEx.c)
 *     CmSetCallbackObjectContext @ 0x140825030 (CmSetCallbackObjectContext.c)
 *     VrpAllocateKeyContext @ 0x140841288 (VrpAllocateKeyContext.c)
 *     VrpFreeKeyContext @ 0x1408413B0 (VrpFreeKeyContext.c)
 *     VrpAddNamespaceNodeToList @ 0x140842A58 (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x140842D70 (VrpCreateNamespaceNode.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x140843020 (VrpCreateNamespaceNodePlaceholderKey.c)
 *     VrpDestroyNamespaceNode @ 0x1408430C8 (VrpDestroyNamespaceNode.c)
 *     VrpBuildKeyPath @ 0x140846F5C (VrpBuildKeyPath.c)
 *     VrpGetNextToken @ 0x14084717C (VrpGetNextToken.c)
 *     VrpStripTrailingCharacters @ 0x140847260 (VrpStripTrailingCharacters.c)
 */

__int64 __fastcall VrpPreLoadKey(_QWORD *a1, GUID *a2)
{
  __int64 v4; // r15
  const UNICODE_STRING *v5; // rcx
  UNICODE_STRING *v6; // r13
  int NamespaceNodePlaceholderKey; // esi
  PVOID *v8; // rax
  int v9; // ecx
  PVOID v10; // rax
  GUID *v11; // r15
  const UNICODE_STRING *v12; // rbx
  int v13; // r9d
  wchar_t *Buffer; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // r12
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  NTSTATUS v21; // eax
  PVOID v22; // rsi
  UNICODE_STRING *KeyContext; // rax
  PVOID *v24; // rcx
  UNICODE_STRING *p_Destination; // rdx
  char v26; // bl
  int v28; // [rsp+38h] [rbp-2E0h]
  char v29; // [rsp+60h] [rbp-2B8h]
  UNICODE_STRING Destination; // [rsp+70h] [rbp-2A8h] BYREF
  int v32; // [rsp+80h] [rbp-298h]
  PVOID P[2]; // [rsp+88h] [rbp-290h] BYREF
  UNICODE_STRING GuidString; // [rsp+98h] [rbp-280h] BYREF
  UNICODE_STRING Source; // [rsp+A8h] [rbp-270h] BYREF
  UNICODE_STRING String1; // [rsp+B8h] [rbp-260h] BYREF
  int v37; // [rsp+C8h] [rbp-250h]
  int v38; // [rsp+CCh] [rbp-24Ch] BYREF
  int v39; // [rsp+D0h] [rbp-248h] BYREF
  __int64 v40; // [rsp+D8h] [rbp-240h] BYREF
  UNICODE_STRING *v41; // [rsp+E0h] [rbp-238h]
  __int64 v42; // [rsp+E8h] [rbp-230h] BYREF
  HANDLE Handle; // [rsp+F0h] [rbp-228h] BYREF
  HANDLE v44; // [rsp+F8h] [rbp-220h] BYREF
  HANDLE v45; // [rsp+100h] [rbp-218h] BYREF
  HANDLE v46; // [rsp+108h] [rbp-210h] BYREF
  HANDLE v47; // [rsp+110h] [rbp-208h] BYREF
  _QWORD *v48; // [rsp+118h] [rbp-200h]
  PVOID Object; // [rsp+120h] [rbp-1F8h] BYREF
  HANDLE v50; // [rsp+128h] [rbp-1F0h] BYREF
  PVOID v51; // [rsp+130h] [rbp-1E8h]
  GUID *v52; // [rsp+138h] [rbp-1E0h]
  int v53[12]; // [rsp+140h] [rbp-1D8h] BYREF
  int v54[12]; // [rsp+170h] [rbp-1A8h] BYREF
  GUID ActivityId; // [rsp+1A0h] [rbp-178h] BYREF
  EVENT_DATA_DESCRIPTOR v56; // [rsp+1B0h] [rbp-168h] BYREF
  _DWORD *v57; // [rsp+1D0h] [rbp-148h]
  __int64 v58; // [rsp+1D8h] [rbp-140h]
  PVOID v59; // [rsp+1E0h] [rbp-138h]
  _DWORD v60[2]; // [rsp+1E8h] [rbp-130h] BYREF
  _DWORD *v61; // [rsp+1F0h] [rbp-128h]
  __int64 v62; // [rsp+1F8h] [rbp-120h]
  wchar_t *v63; // [rsp+200h] [rbp-118h]
  _DWORD v64[2]; // [rsp+208h] [rbp-110h] BYREF
  int *v65; // [rsp+210h] [rbp-108h]
  __int64 v66; // [rsp+218h] [rbp-100h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+220h] [rbp-F8h] BYREF
  _DWORD *v68; // [rsp+240h] [rbp-D8h]
  __int64 v69; // [rsp+248h] [rbp-D0h]
  PVOID v70; // [rsp+250h] [rbp-C8h]
  _DWORD v71[2]; // [rsp+258h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v72; // [rsp+260h] [rbp-B8h] BYREF
  int *v73; // [rsp+280h] [rbp-98h]
  __int64 v74; // [rsp+288h] [rbp-90h]
  char v75; // [rsp+290h] [rbp-88h] BYREF

  v48 = a1;
  v52 = a2;
  P[0] = 0LL;
  P[1] = 0LL;
  *(_QWORD *)&GuidString.Length = 5111808LL;
  memset(v53, 0, sizeof(v53));
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  memset(v54, 0, sizeof(v54));
  *(_QWORD *)&Source.Length = 0LL;
  Source.Buffer = 0LL;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v4 = *a1;
  GuidString.Buffer = (wchar_t *)&v75;
  v29 = 0;
  v32 = 0;
  v5 = *(const UNICODE_STRING **)(v4 + 72);
  v42 = 0LL;
  v40 = 0LL;
  Handle = 0LL;
  v44 = 0LL;
  v47 = 0LL;
  v51 = 0LL;
  v50 = 0LL;
  v6 = 0LL;
  v41 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  if ( v5 )
  {
    NamespaceNodePlaceholderKey = VrpBuildKeyPath(v5 + 1, *(PCUNICODE_STRING *)(v4 + 8), (PUNICODE_STRING)P);
    if ( NamespaceNodePlaceholderKey < 0 )
      goto LABEL_53;
    v29 = 1;
  }
  else
  {
    *(_OWORD *)P = *(_OWORD *)*(_QWORD *)(v4 + 8);
  }
  if ( stru_140425BF8.LevelPlus1 > 5 )
  {
    v8 = P;
    if ( !P[1] )
      v8 = (PVOID *)&EmptyUnicodeString;
    v9 = *(unsigned __int16 *)v8;
    v10 = v8[1];
    v68 = v71;
    v69 = 2LL;
    v70 = v10;
    v71[0] = v9;
    v71[1] = 0;
    TlgWrite(&stru_140425BF8, &unk_14038C822, &ActivityId, 0LL, 4u, &pData);
  }
  VrpGetNextToken(P, &v40, &String1);
  if ( !RtlEqualUnicodeString(&String1, &VrpRegistryString, 1u) )
  {
LABEL_10:
    NamespaceNodePlaceholderKey = -1073741790;
    goto LABEL_55;
  }
  VrpGetNextToken(P, &v40, &String1);
  if ( RtlEqualUnicodeString(&String1, &VrpAppString, 1u) || RtlEqualUnicodeString(&String1, &VrpWcString, 1u) )
  {
    NamespaceNodePlaceholderKey = 0;
  }
  else
  {
    if ( (*(_DWORD *)(v4 + 24) & 0x10) != 0 )
    {
      NamespaceNodePlaceholderKey = 0;
      v11 = a2;
      goto LABEL_58;
    }
    v12 = &VrpMachineString;
    if ( !RtlEqualUnicodeString(&String1, &VrpMachineString, 1u) )
    {
      v12 = &VrpUserString;
      if ( !RtlEqualUnicodeString(&String1, &VrpUserString, 1u) )
        goto LABEL_10;
    }
    Source.Buffer = (wchar_t *)((char *)P[1] + 2 * v40);
    Source.Length = LOWORD(P[0]) - 2 * v40;
    Source.MaximumLength = Source.Length;
    VrpStripTrailingCharacters(&Source);
    v13 = 0;
    if ( Source.Length )
    {
      Buffer = Source.Buffer;
      while ( *Buffer != 92 )
      {
        ++v13;
        ++Buffer;
        if ( 2LL * v13 >= (unsigned __int64)Source.Length )
          goto LABEL_22;
      }
      goto LABEL_10;
    }
LABEL_22:
    NamespaceNodePlaceholderKey = RtlStringFromGUIDEx(a2, &GuidString, 0);
    if ( NamespaceNodePlaceholderKey >= 0 )
    {
      ++GuidString.Buffer;
      GuidString.Length -= 4;
      GuidString.MaximumLength -= 4;
      Destination.Length = 0;
      Destination.MaximumLength = Source.Length + v12->Length + GuidString.Length + 40;
      Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Destination.MaximumLength, 0x67655256u);
      if ( !Destination.Buffer )
      {
        NamespaceNodePlaceholderKey = -1073741670;
        goto LABEL_55;
      }
      RtlAppendUnicodeStringToString(&Destination, &VrpRootHivePath);
      RtlAppendUnicodeToString(&Destination, L"\\Silo_");
      RtlAppendUnicodeStringToString(&Destination, &GuidString);
      RtlAppendUnicodeToString(&Destination, L"_");
      RtlAppendUnicodeStringToString(&Destination, v12);
      RtlAppendUnicodeToString(&Destination, L"_");
      RtlAppendUnicodeStringToString(&Destination, &Source);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&a2[1], 0LL);
      v32 = 1;
      v37 = 1;
      NamespaceNodePlaceholderKey = VrpCreateNamespaceNode(
                                      (__int64)a2,
                                      (const void **)P,
                                      0LL,
                                      (const void **)&Destination,
                                      0x80000000,
                                      &v42);
      if ( NamespaceNodePlaceholderKey >= 0 )
      {
        v16 = v42;
        NamespaceNodePlaceholderKey = VrpAddNamespaceNodeToList((__int64)a2, v42);
        if ( NamespaceNodePlaceholderKey >= 0 )
        {
          NamespaceNodePlaceholderKey = VrpCreateNamespaceNodePlaceholderKey(v16);
          if ( NamespaceNodePlaceholderKey >= 0 )
          {
            v53[0] = 48;
            *(_QWORD *)&v53[2] = 0LL;
            v53[6] = 576;
            *(_QWORD *)&v53[4] = *(_QWORD *)(v4 + 16);
            *(_OWORD *)&v53[8] = 0LL;
            v54[0] = 48;
            *(_QWORD *)&v54[2] = 0LL;
            v54[6] = 576;
            *(_QWORD *)&v54[4] = &Destination;
            *(_OWORD *)&v54[8] = 0LL;
            v17 = *(void **)(v4 + 32);
            if ( !v17
              || (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                                  v17,
                                                  0x200u,
                                                  0LL,
                                                  0,
                                                  (POBJECT_TYPE)CmKeyObjectType,
                                                  0,
                                                  &Handle),
                  NamespaceNodePlaceholderKey >= 0) )
            {
              v18 = *(void **)(v4 + 40);
              if ( !v18
                || (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                                    v18,
                                                    0x200u,
                                                    0LL,
                                                    2u,
                                                    (POBJECT_TYPE)ExEventObjectType,
                                                    0,
                                                    &v44),
                    NamespaceNodePlaceholderKey >= 0) )
              {
                v19 = (void *)v48[1];
                if ( !v19
                  || (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                                      v19,
                                                      0x200u,
                                                      0LL,
                                                      0,
                                                      (POBJECT_TYPE)CmKeyObjectType,
                                                      0,
                                                      &v45),
                      NamespaceNodePlaceholderKey >= 0) )
                {
                  if ( *(_QWORD *)(v4 + 80) != 2LL
                    || (v20 = *(void **)(v4 + 88)) == 0LL
                    || (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                                        v20,
                                                        0x200u,
                                                        0LL,
                                                        0,
                                                        (POBJECT_TYPE)SeTokenObjectType,
                                                        0,
                                                        &v46),
                        NamespaceNodePlaceholderKey >= 0) )
                  {
                    NamespaceNodePlaceholderKey = CmLoadDifferencingKey(
                                                    (__int64)v54,
                                                    v53,
                                                    *(_DWORD *)(v4 + 24),
                                                    (__int64)Handle,
                                                    v44,
                                                    *(_DWORD *)(v4 + 48),
                                                    (HANDLE *)((unsigned __int64)&v47 & -(__int64)(*(_QWORD *)(v4 + 56) != 0LL)),
                                                    v28,
                                                    (__int64)v45,
                                                    *((_BYTE *)v48 + 16),
                                                    v46,
                                                    0);
                    if ( NamespaceNodePlaceholderKey >= 0 )
                    {
                      if ( *(_QWORD *)(v4 + 56) )
                      {
                        if ( v47 )
                        {
                          v21 = ObReferenceObjectByHandle(
                                  v47,
                                  *(_DWORD *)(v4 + 48),
                                  (POBJECT_TYPE)CmKeyObjectType,
                                  0,
                                  &Object,
                                  0LL);
                          v22 = Object;
                          v51 = Object;
                          if ( v21 >= 0 )
                          {
                            KeyContext = (UNICODE_STRING *)VrpAllocateKeyContext(a2);
                            v6 = KeyContext;
                            v41 = KeyContext;
                            if ( KeyContext )
                            {
                              if ( (int)VrpBuildKeyPath(0LL, (PCUNICODE_STRING)P, KeyContext + 1) >= 0 )
                              {
                                *(_DWORD *)(&v6[2].MaximumLength + 1) = 0x20000000;
                                if ( CmSetCallbackObjectContext(v22, &VrpCallbackCookie, v6, 0LL) >= 0 )
                                {
                                  v6 = 0LL;
                                  v41 = 0LL;
                                  ObOpenObjectByPointer(
                                    Object,
                                    KeGetCurrentThread()->PreviousMode != 0 ? 64 : 576,
                                    0LL,
                                    *(_DWORD *)(v4 + 48),
                                    (POBJECT_TYPE)CmKeyObjectType,
                                    KeGetCurrentThread()->PreviousMode,
                                    &v50);
                                }
                              }
                            }
                          }
                        }
                        **(_QWORD **)(v4 + 56) = v50;
                      }
                      NamespaceNodePlaceholderKey = -1073740541;
                      if ( stru_140425BF8.LevelPlus1 > 5 )
                      {
                        v24 = P;
                        if ( !P[1] )
                          v24 = (PVOID *)&EmptyUnicodeString;
                        p_Destination = &Destination;
                        if ( !Destination.Buffer )
                          p_Destination = (UNICODE_STRING *)&EmptyUnicodeString;
                        v38 = -1073740541;
                        v57 = v60;
                        v58 = 2LL;
                        v59 = v24[1];
                        v60[0] = *(unsigned __int16 *)v24;
                        v60[1] = 0;
                        v61 = v64;
                        v62 = 2LL;
                        v63 = p_Destination->Buffer;
                        v64[0] = p_Destination->Length;
                        v64[1] = 0;
                        v65 = &v38;
                        v66 = 4LL;
                        TlgWrite(&stru_140425BF8, &unk_14038C9ED, &ActivityId, 0LL, 7u, &v56);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_53:
  if ( ((NamespaceNodePlaceholderKey + 0x80000000) & 0x80000000) != 0 || NamespaceNodePlaceholderKey == -1073740541 )
  {
    v11 = a2;
    goto LABEL_58;
  }
LABEL_55:
  v11 = a2;
  if ( v42 )
    VrpDestroyNamespaceNode((ULONGLONG *)&a2->Data1, v42);
LABEL_58:
  if ( v32 )
  {
    v26 = _InterlockedExchangeAdd64((volatile signed __int64 *)&v11[1], 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v26 & 2) != 0 && (v26 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&v11[1]);
    KeAbPostRelease((ULONG_PTR)&v11[1]);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( ((NamespaceNodePlaceholderKey + 0x80000000) & 0x80000000) == 0
    && NamespaceNodePlaceholderKey != -1073740541
    && stru_140425BF8.LevelPlus1 > 2 )
  {
    v39 = NamespaceNodePlaceholderKey;
    v73 = &v39;
    v74 = 4LL;
    TlgWrite(&stru_140425BF8, &unk_14038C7F8, &ActivityId, 0LL, 3u, &v72);
  }
  if ( v6 )
    VrpFreeKeyContext(v6);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( v44 )
    ObCloseHandle(v44, 0);
  if ( v45 )
    ObCloseHandle(v45, 0);
  if ( v46 )
    ObCloseHandle(v46, 0);
  if ( v47 )
    ObCloseHandle(v47, 0);
  if ( v51 )
    ObfDereferenceObject(v51);
  if ( v29 == 1 )
    ExFreePoolWithTag(P[1], 0x67655256u);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0x67655256u);
  return (unsigned int)NamespaceNodePlaceholderKey;
}
