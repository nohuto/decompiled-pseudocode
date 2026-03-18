/*
 * XREFs of PiUEventHandleRegistration @ 0x140695404
 * Callers:
 *     PiUEventHandleIoctl @ 0x140695E9C (PiUEventHandleIoctl.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x140036F60 (PsGetCurrentThreadProcessId.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     RtlStringCchLengthW @ 0x1400EDF4C (RtlStringCchLengthW.c)
 *     PiUEventHashStringIntoBucket @ 0x1400EE028 (PiUEventHashStringIntoBucket.c)
 *     KeAcquireGuardedMutex @ 0x1400EF450 (KeAcquireGuardedMutex.c)
 *     PiUEventHashGuidIntoBucket @ 0x14013696C (PiUEventHashGuidIntoBucket.c)
 *     PiDmGetObject @ 0x1405BEF20 (PiDmGetObject.c)
 *     SeCaptureSubjectContext @ 0x1405DE350 (SeCaptureSubjectContext.c)
 *     PiUEventInitClientRegistrationContext @ 0x14069FF58 (PiUEventInitClientRegistrationContext.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406EA0E4 (PiUEventFreeClientRegistrationContext.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x14071D818 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 */

__int64 __fastcall PiUEventHandleRegistration(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  char **inited; // rdi
  int v8; // ebx
  int v9; // ecx
  int v10; // eax
  _QWORD *v11; // r14
  size_t v12; // r11
  int v13; // ecx
  __int64 v14; // rax
  int v15; // ecx
  unsigned int v16; // eax
  char *v17; // rdx
  char **v18; // rax
  int v20; // ecx
  int v21; // ecx
  char *v22; // rax
  char **v23; // rcx
  int v24; // ecx
  int v25; // ecx
  unsigned int v26; // eax
  char *v27; // rcx
  char **v28; // rax
  int Object; // eax
  unsigned int v30; // eax
  char *v31; // rcx
  char **v32; // rax
  __int64 v33[7]; // [rsp+20h] [rbp-38h] BYREF
  size_t pcchLength; // [rsp+68h] [rbp+10h] BYREF

  v33[0] = 0LL;
  inited = 0LL;
  if ( !a2 || a3 != 936 || a4 != 8 )
  {
    v8 = -1073741811;
    goto LABEL_24;
  }
  inited = (char **)PiUEventInitClientRegistrationContext();
  if ( !inited )
  {
    v8 = -1073741670;
LABEL_54:
    *(_QWORD *)(a1 + 32) = 0LL;
    return (unsigned int)v8;
  }
  inited[6] = (char *)PsGetCurrentThreadProcessId();
  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)(inited + 7));
  v8 = RtlStringCchLengthW((STRSAFE_PCNZWCH)a2, 0x104uLL, &pcchLength);
  if ( v8 < 0 )
    goto LABEL_51;
  if ( *(_DWORD *)(a2 + 520) != 416 )
    goto LABEL_51;
  v9 = *(_DWORD *)(a2 + 528);
  if ( v9 >= 4 )
    goto LABEL_51;
  v10 = *(_DWORD *)(a2 + 524);
  if ( (v10 & 0xFFFFFFFC) != 0 || (v10 & 1) != 0 && v9 )
    goto LABEL_51;
  if ( (v10 & 2) != 0 && (unsigned int)(v9 - 2) > 1 )
    goto LABEL_51;
  v11 = (_QWORD *)(a2 + 536);
  if ( v9 == 1 && ((*v11 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    goto LABEL_51;
  v12 = 200LL;
  if ( v9 == 2 )
  {
    v8 = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a2 + 536), 0xC8uLL, &pcchLength);
    if ( v8 < 0 )
      goto LABEL_51;
  }
  if ( *(_DWORD *)(a2 + 528) == 3 )
  {
    v8 = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a2 + 536), v12, &pcchLength);
    if ( v8 < 0 )
      goto LABEL_51;
  }
  *((_DWORD *)inited + 33) = *(_DWORD *)(a2 + 528);
  v13 = *(_DWORD *)(a2 + 528);
  if ( v13 )
  {
    v20 = v13 - 1;
    if ( v20 )
    {
      v24 = v20 - 1;
      if ( !v24 || v24 == 1 )
      {
        if ( (*(_DWORD *)(a2 + 524) & 2) != 0 )
          goto LABEL_17;
        Object = PiDmGetObject(1LL, a2 + 536, (__int64 *)inited + 3);
        v8 = Object;
        if ( Object >= 0 )
          goto LABEL_17;
LABEL_52:
        if ( inited )
          PiUEventFreeClientRegistrationContext(inited);
        goto LABEL_54;
      }
    }
    else if ( (int)PiUEventGetDeviceInstanceIdFromUserHandle(*v11, v33, &pcchLength) >= 0 )
    {
      v8 = PiDmGetObject(1LL, *(_QWORD *)(v33[0] + 8), (__int64 *)inited + 3);
      if ( v8 >= 0 )
      {
        inited[4] = (char *)pcchLength;
        *((_BYTE *)inited + 40) = 0;
        goto LABEL_17;
      }
      goto LABEL_52;
    }
LABEL_51:
    v8 = -1073741811;
    goto LABEL_52;
  }
  if ( (*(_DWORD *)(a2 + 524) & 1) == 0 )
    *(_OWORD *)(inited + 3) = *(_OWORD *)v11;
LABEL_17:
  v14 = a5;
  *(_QWORD *)a2 = inited[11];
  *(_QWORD *)(v14 + 8) = 8LL;
  KeAcquireGuardedMutex(&PiUEventClientRegistrationListLock);
  v15 = *(_DWORD *)(a2 + 528);
  if ( v15 )
  {
    v21 = v15 - 1;
    if ( v21 )
    {
      v25 = v21 - 1;
      if ( v25 )
      {
        if ( v25 != 1 )
        {
          v8 = -1073741811;
          goto LABEL_22;
        }
        if ( (*(_DWORD *)(a2 + 524) & 2) != 0 )
          v30 = 13;
        else
          v30 = PiUEventHashStringIntoBucket((PCWSTR)(a2 + 536));
        v31 = (char *)&PiUEventDevInstancePropertyClientList + 16 * v30;
        v32 = (char **)*((_QWORD *)v31 + 1);
        if ( *v32 == v31 )
        {
          ++PiUEventDevInstancePropertyClientCount;
          *inited = v31;
          inited[1] = (char *)v32;
          *v32 = (char *)inited;
          *((_QWORD *)v31 + 1) = inited;
          goto LABEL_22;
        }
      }
      else
      {
        if ( (*(_DWORD *)(a2 + 524) & 2) != 0 )
          v26 = 13;
        else
          v26 = PiUEventHashStringIntoBucket((PCWSTR)(a2 + 536));
        v27 = (char *)&PiUEventDevInstanceClientList + 16 * v26;
        v28 = (char **)*((_QWORD *)v27 + 1);
        if ( *v28 == v27 )
        {
          ++PiUEventDevInstanceClientCount;
          *inited = v27;
          inited[1] = (char *)v28;
          *v28 = (char *)inited;
          *((_QWORD *)v27 + 1) = inited;
          goto LABEL_22;
        }
      }
    }
    else
    {
      v22 = (char *)&PiUEventDevHandleClientList
          + 16 * (unsigned int)PiUEventHashStringIntoBucket(*((PCWSTR *)inited[3] + 2));
      v23 = (char **)*((_QWORD *)v22 + 1);
      if ( *v23 == v22 )
      {
        ++PiUEventDevHandleClientCount;
        *inited = v22;
        inited[1] = (char *)v23;
        *v23 = (char *)inited;
        *((_QWORD *)v22 + 1) = inited;
        goto LABEL_22;
      }
    }
LABEL_69:
    __fastfail(3u);
  }
  if ( (*(_DWORD *)(a2 + 524) & 1) != 0 )
    v16 = 13;
  else
    v16 = PiUEventHashGuidIntoBucket((unsigned __int8 *)(a2 + 536));
  v17 = (char *)&PiUEventDevInterfaceClientList + 16 * v16;
  v18 = (char **)*((_QWORD *)v17 + 1);
  if ( *v18 != v17 )
    goto LABEL_69;
  ++PiUEventDevInterfaceClientCount;
  *inited = v17;
  inited[1] = (char *)v18;
  *v18 = (char *)inited;
  *((_QWORD *)v17 + 1) = inited;
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
