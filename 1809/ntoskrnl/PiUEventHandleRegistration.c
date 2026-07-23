/*
 * XREFs of PiUEventHandleRegistration @ 0x140656DA4
 * Callers:
 *     PiUEventHandleIoctl @ 0x1405A0E4C (PiUEventHandleIoctl.c)
 * Callees:
 *     PiUEventHashStringIntoBucket @ 0x140006568 (PiUEventHashStringIntoBucket.c)
 *     RtlStringCchLengthW @ 0x14000733C (RtlStringCchLengthW.c)
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     PsGetCurrentThreadProcessId @ 0x14004D240 (PsGetCurrentThreadProcessId.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     PiUEventHashGuidIntoBucket @ 0x1400DCFE0 (PiUEventHashGuidIntoBucket.c)
 *     PiDmGetObject @ 0x1405999C8 (PiDmGetObject.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     PiUEventInitClientRegistrationContext @ 0x140656AB8 (PiUEventInitClientRegistrationContext.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406C9338 (PiUEventFreeClientRegistrationContext.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x140701988 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 */

__int64 __fastcall PiUEventHandleRegistration(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  _WNF_STATE_NAME *inited; // rdi
  int v8; // ebx
  __int64 v9; // r9
  int v10; // ecx
  int v11; // eax
  _QWORD *v12; // r14
  size_t v13; // r11
  int v14; // ecx
  __int64 v15; // rax
  int v16; // ecx
  unsigned int v17; // eax
  char *v18; // rdx
  _WNF_STATE_NAME **v19; // rax
  int v21; // ecx
  __int64 v22; // r9
  int v23; // ecx
  char *v24; // rax
  _WNF_STATE_NAME **v25; // rcx
  int v26; // ecx
  int v27; // ecx
  unsigned int v28; // eax
  char *v29; // rcx
  _WNF_STATE_NAME **v30; // rax
  int Object; // eax
  unsigned int v32; // eax
  char *v33; // rcx
  _WNF_STATE_NAME **v34; // rax
  _QWORD v35[7]; // [rsp+20h] [rbp-38h] BYREF
  size_t pcchLength; // [rsp+68h] [rbp+10h] BYREF

  v35[0] = 0LL;
  inited = 0LL;
  if ( !a2 || a3 != 936 || a4 != 8 )
  {
    v8 = -1073741811;
    goto LABEL_24;
  }
  inited = PiUEventInitClientRegistrationContext();
  if ( !inited )
  {
    v8 = -1073741670;
LABEL_54:
    *(_QWORD *)(a1 + 32) = 0LL;
    return (unsigned int)v8;
  }
  inited[6] = (_WNF_STATE_NAME)PsGetCurrentThreadProcessId();
  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)&inited[7]);
  v8 = RtlStringCchLengthW((STRSAFE_PCNZWCH)a2, 0x104uLL, &pcchLength);
  if ( v8 < 0 )
    goto LABEL_51;
  if ( *(_DWORD *)(a2 + 520) != 416 )
    goto LABEL_51;
  v10 = *(_DWORD *)(a2 + 528);
  if ( v10 >= 4 )
    goto LABEL_51;
  v11 = *(_DWORD *)(a2 + 524);
  if ( (v11 & 0xFFFFFFFC) != 0 || (v11 & 1) != 0 && v10 )
    goto LABEL_51;
  if ( (v11 & 2) != 0 && (unsigned int)(v10 - 2) > 1 )
    goto LABEL_51;
  v12 = (_QWORD *)(a2 + 536);
  if ( v10 == 1 && ((*v12 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    goto LABEL_51;
  v13 = 200LL;
  if ( v10 == 2 )
  {
    v8 = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a2 + 536), 0xC8uLL, &pcchLength);
    if ( v8 < 0 )
      goto LABEL_51;
  }
  if ( *(_DWORD *)(a2 + 528) == 3 )
  {
    v8 = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a2 + 536), v13, &pcchLength);
    if ( v8 < 0 )
      goto LABEL_51;
  }
  inited[16].Data[1] = *(_DWORD *)(a2 + 528);
  v14 = *(_DWORD *)(a2 + 528);
  if ( v14 )
  {
    v21 = v14 - 1;
    if ( v21 )
    {
      v26 = v21 - 1;
      if ( !v26 || v26 == 1 )
      {
        if ( (*(_DWORD *)(a2 + 524) & 2) != 0 )
          goto LABEL_17;
        Object = PiDmGetObject(1LL, a2 + 536, (__int64 *)&inited[3], v9);
        v8 = Object;
        if ( Object >= 0 )
          goto LABEL_17;
LABEL_52:
        if ( inited )
          PiUEventFreeClientRegistrationContext(inited);
        goto LABEL_54;
      }
    }
    else if ( (int)PiUEventGetDeviceInstanceIdFromUserHandle(*v12, v35, &pcchLength) >= 0 )
    {
      v8 = PiDmGetObject(1LL, *(_QWORD *)(v35[0] + 8LL), (__int64 *)&inited[3], v22);
      if ( v8 >= 0 )
      {
        inited[4] = (_WNF_STATE_NAME)pcchLength;
        LOBYTE(inited[5].Data[0]) = 0;
        goto LABEL_17;
      }
      goto LABEL_52;
    }
LABEL_51:
    v8 = -1073741811;
    goto LABEL_52;
  }
  if ( (*(_DWORD *)(a2 + 524) & 1) == 0 )
    *(_OWORD *)inited[3].Data = *(_OWORD *)v12;
LABEL_17:
  v15 = a5;
  *(_WNF_STATE_NAME *)a2 = inited[11];
  *(_QWORD *)(v15 + 8) = 8LL;
  ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
  v16 = *(_DWORD *)(a2 + 528);
  if ( v16 )
  {
    v23 = v16 - 1;
    if ( v23 )
    {
      v27 = v23 - 1;
      if ( v27 )
      {
        if ( v27 != 1 )
        {
          v8 = -1073741811;
          goto LABEL_22;
        }
        if ( (*(_DWORD *)(a2 + 524) & 2) != 0 )
          v32 = 13;
        else
          v32 = PiUEventHashStringIntoBucket((PCWSTR)(a2 + 536));
        v33 = (char *)&PiUEventDevInstancePropertyClientList + 16 * v32;
        v34 = (_WNF_STATE_NAME **)*((_QWORD *)v33 + 1);
        if ( *v34 == (_WNF_STATE_NAME *)v33 )
        {
          ++PiUEventDevInstancePropertyClientCount;
          *inited = (_WNF_STATE_NAME)v33;
          inited[1] = (_WNF_STATE_NAME)v34;
          *v34 = inited;
          *((_QWORD *)v33 + 1) = inited;
          goto LABEL_22;
        }
      }
      else
      {
        if ( (*(_DWORD *)(a2 + 524) & 2) != 0 )
          v28 = 13;
        else
          v28 = PiUEventHashStringIntoBucket((PCWSTR)(a2 + 536));
        v29 = (char *)&PiUEventDevInstanceClientList + 16 * v28;
        v30 = (_WNF_STATE_NAME **)*((_QWORD *)v29 + 1);
        if ( *v30 == (_WNF_STATE_NAME *)v29 )
        {
          ++PiUEventDevInstanceClientCount;
          *inited = (_WNF_STATE_NAME)v29;
          inited[1] = (_WNF_STATE_NAME)v30;
          *v30 = inited;
          *((_QWORD *)v29 + 1) = inited;
          goto LABEL_22;
        }
      }
    }
    else
    {
      v24 = (char *)&PiUEventDevHandleClientList
          + 16 * (unsigned int)PiUEventHashStringIntoBucket(*(PCWSTR *)(*(_QWORD *)&inited[3] + 16LL));
      v25 = (_WNF_STATE_NAME **)*((_QWORD *)v24 + 1);
      if ( *v25 == (_WNF_STATE_NAME *)v24 )
      {
        ++PiUEventDevHandleClientCount;
        *inited = (_WNF_STATE_NAME)v24;
        inited[1] = (_WNF_STATE_NAME)v25;
        *v25 = inited;
        *((_QWORD *)v24 + 1) = inited;
        goto LABEL_22;
      }
    }
LABEL_69:
    __fastfail(3u);
  }
  if ( (*(_DWORD *)(a2 + 524) & 1) != 0 )
    v17 = 13;
  else
    v17 = PiUEventHashGuidIntoBucket((unsigned __int8 *)(a2 + 536));
  v18 = (char *)&PiUEventDevInterfaceClientList + 16 * v17;
  v19 = (_WNF_STATE_NAME **)*((_QWORD *)v18 + 1);
  if ( *v19 != (_WNF_STATE_NAME *)v18 )
    goto LABEL_69;
  ++PiUEventDevInterfaceClientCount;
  *inited = (_WNF_STATE_NAME)v18;
  inited[1] = (_WNF_STATE_NAME)v19;
  *v19 = inited;
  *((_QWORD *)v18 + 1) = inited;
LABEL_22:
  KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  if ( v8 < 0 )
    goto LABEL_52;
  *(_QWORD *)(a1 + 32) = inited;
LABEL_24:
  if ( v8 < 0 )
    goto LABEL_52;
  return (unsigned int)v8;
}
