/*
 * XREFs of PopConfigureHeteroPolicies @ 0x140750934
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140750624 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KeConfigureHeteroPolicy @ 0x140750DF8 (KeConfigureHeteroPolicy.c)
 *     PpmHeteroComputeBias @ 0x1408776F8 (PpmHeteroComputeBias.c)
 */

char __fastcall PopConfigureHeteroPolicies(int a1, char a2)
{
  __int64 v4; // r15
  __int64 v5; // rbx
  int v6; // edi
  int *v7; // r9
  int v8; // r11d
  unsigned int i; // r10d
  unsigned __int64 v10; // rax
  __int64 *v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // edx
  unsigned __int64 v17; // r8
  int v18; // ecx
  int v19; // r9d
  int v20; // ecx
  _DWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  char v24; // al
  _DWORD *v25; // r10
  _DWORD *v26; // r11
  __int64 v27; // rdi
  char v28; // dl
  bool v29; // zf
  __int64 v30; // rdx
  __int64 v31; // r9
  int v32; // eax
  int v33; // eax
  unsigned int v34; // eax
  __int64 v35; // rcx
  int v36; // edi
  char result; // al
  __int64 v38; // rcx
  int v39; // edx
  wchar_t **v40; // rdi
  unsigned int v41; // edx
  _DWORD *v42; // rcx
  __int64 v43; // r8
  char v44; // r10
  __int64 *v45; // rsi
  __int64 v46; // r15
  unsigned __int8 v47; // di
  __int64 v48; // rdx
  int v49; // eax
  char v50; // r10
  int v51; // eax
  char v52; // r11
  unsigned __int64 v53; // [rsp+38h] [rbp-D0h]
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING ValueName; // [rsp+A0h] [rbp-68h] BYREF
  _DWORD v61[14]; // [rsp+B0h] [rbp-58h] BYREF
  _DWORD KeyValueInformation[4]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v63; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v64; // [rsp+100h] [rbp-8h]

  memset(v61, 0, 0x34uLL);
  v4 = 7LL;
  v61[0] = 5;
  v5 = 0LL;
  v61[11] = 7;
  if ( a1 == 4 )
  {
    v61[9] = 10;
    goto LABEL_3;
  }
  v61[9] = 8;
  if ( a1 != 3 )
  {
LABEL_3:
    v61[10] = 100;
    if ( a1 > 0 && (a1 <= 2 || a1 == 5) )
    {
      v41 = 0;
      v42 = &v61[1];
      do
      {
        v43 = 2LL;
        do
        {
          *v42++ = (0x300000001LL - (unsigned __int64)(v41 - 2)) >> 32;
          --v43;
        }
        while ( v43 );
        ++v41;
      }
      while ( v41 < 4 );
    }
    else
    {
      memset(&v61[1], 0, 32);
    }
    goto LABEL_5;
  }
  v61[10] = 5200;
  *(_QWORD *)&v61[1] = 0x200000004LL;
  *(_QWORD *)&v61[3] = 0x200000004LL;
  *(_QWORD *)&v61[5] = 0x400000004LL;
  *(_QWORD *)&v61[7] = 0x400000004LL;
LABEL_5:
  v6 = 5;
  v7 = &v61[2];
  v8 = 5;
  for ( i = 0; i < 4; ++i )
  {
    if ( i == 1 )
    {
      v12 = PpmEntryLevelPerfProfile;
      if ( !PpmEntryLevelPerfProfile )
      {
        v11 = 0LL;
        v53 = 0LL;
        LOWORD(v10) = 0;
        goto LABEL_15;
      }
    }
    else
    {
      if ( i == 2 )
      {
        if ( PpmBackgroundProfile )
          v53 = *(_QWORD *)(2728LL * dword_14041918C + PpmBackgroundProfile + 40);
        else
          v53 = 0LL;
      }
      else if ( i != 3 )
      {
        LODWORD(v10) = HIDWORD(v53);
        v11 = &PpmCurrentProfile[341 * dword_14041918C + 5];
LABEL_14:
        LODWORD(v10) = v10 | 0x1800;
        HIDWORD(v53) = v10;
        goto LABEL_15;
      }
      v12 = PpmMultimediaQosProfile;
      if ( !PpmMultimediaQosProfile )
      {
        v11 = &PpmCurrentProfile[341 * dword_14041918C + 5];
        v10 = HIDWORD(v53);
        goto LABEL_14;
      }
    }
    v11 = (__int64 *)(2728LL * dword_14041918C + v12 + 40);
    v53 = *v11;
    v10 = HIDWORD(*v11);
LABEL_15:
    if ( (v10 & 0x1000) != 0 )
      v6 = *((_DWORD *)v11 + 680);
    if ( (v10 & 0x800) != 0 )
      v8 = *((_DWORD *)v11 + 681);
    if ( v6 != 5 )
      *(v7 - 1) = v6;
    if ( v8 != 5 )
      *v7 = v8;
    v7 += 2;
  }
  if ( a2 )
  {
    dword_1404114EC = -1;
    PopHeteroLegacyOverride = 5;
    qword_1404114C4 = 0x500000005LL;
    qword_1404114CC = 0x500000005LL;
    qword_1404114D4 = 0x500000005LL;
    qword_1404114DC = 0x500000005LL;
    qword_1404114E4 = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes) >= 0 )
    {
      v40 = &off_14090BCA8;
      ObjectAttributes.RootDirectory = KeyHandle;
      do
      {
        RtlInitUnicodeString(&DestinationString, *(v40 - 1));
        if ( ZwOpenKey(&Handle, 1u, &ObjectAttributes) >= 0 )
        {
          RtlInitUnicodeString(&ValueName, *v40);
          if ( ZwQueryValueKey(
                 Handle,
                 &ValueName,
                 KeyValuePartialInformationAlign64,
                 KeyValueInformation,
                 0x10u,
                 &ResultLength) >= 0
            && KeyValueInformation[0] == 4 )
          {
            *(int *)((char *)&PopHeteroLegacyOverride + *((unsigned int *)v40 + 2)) = KeyValueInformation[2];
          }
          ZwClose(Handle);
        }
        v40 += 3;
        --v4;
      }
      while ( v4 );
      ZwClose(KeyHandle);
    }
  }
  v13 = 4LL;
  v14 = 0LL;
  do
  {
    v15 = 2LL;
    do
    {
      v16 = *(_DWORD *)((char *)&qword_1404114C4 + v14 * 4);
      if ( v16 != 5 )
        v61[v14 + 1] = v16;
      ++v14;
      --v15;
    }
    while ( v15 );
    --v13;
  }
  while ( v13 );
  v17 = v61[0];
  if ( PopHeteroLegacyOverride != 5 )
    v17 = (unsigned int)PopHeteroLegacyOverride;
  v18 = v61[9];
  v19 = v61[11];
  if ( (_DWORD)qword_1404114E4 )
    v18 = qword_1404114E4;
  v61[9] = v18;
  v20 = v61[10];
  if ( HIDWORD(qword_1404114E4) )
    v20 = HIDWORD(qword_1404114E4);
  v61[0] = v17;
  v61[10] = v20;
  if ( dword_1404114EC != -1 )
    v19 = dword_1404114EC;
  v61[11] = v19;
  if ( PpmPerfBootHeteroPolicyOverrideEnabled )
  {
    v21 = &v61[1];
    v22 = 4LL;
    do
    {
      v23 = 2LL;
      do
      {
        if ( *v21 == 3 )
          *v21 = 4;
        ++v21;
        --v23;
      }
      while ( v23 );
      --v22;
    }
    while ( v22 );
    v19 = v61[11];
    v17 = v61[0];
  }
  v24 = 1;
  v25 = &v61[1];
  v26 = &v61[2];
  v27 = 4LL;
  do
  {
    v28 = 0;
    v29 = *v25 == *v26;
    v25 += 2;
    if ( v29 )
      v28 = v24;
    v26 += 2;
    v24 = v28;
    --v27;
  }
  while ( v27 );
  if ( v28 )
    v61[11] = v19 & 0xFFFFFFFB;
  v30 = (unsigned int)PpmPerfQosTransitionHysteresisOverride;
  v31 = (unsigned int)PpmPerfQosTransitionHysteresis;
  v32 = PpmPerfQosTransitionHysteresisOverride;
  if ( PpmPerfQosTransitionHysteresisOverride == -1 )
    v32 = PpmPerfQosTransitionHysteresis;
  if ( v32 )
  {
    v33 = KeMinimumIncrement;
    if ( 10 * PpmPerfQosTransitionHysteresis > (unsigned int)KeMinimumIncrement )
      v33 = 10 * PpmPerfQosTransitionHysteresis;
    v61[12] = v33;
  }
  v34 = PpmPerfQosTransitionHysteresisOverride;
  v35 = 500LL;
  if ( PpmPerfQosTransitionHysteresisOverride == -1 )
    v34 = PpmPerfQosTransitionHysteresis;
  if ( v34 <= 0x1F4 )
  {
    v30 = 500LL;
  }
  else if ( PpmPerfQosTransitionHysteresisOverride == -1 )
  {
    v30 = (unsigned int)PpmPerfQosTransitionHysteresis;
  }
  PpmPerfQosIdleExpirationTimeout = (unsigned int)(10 * v30);
  if ( ((a1 - 1) & 0xFFFFFFFA) != 0 || a1 == 6 )
  {
    v36 = 1;
    v63 = 0x100000001LL;
    v64 = 0x100000001LL;
    goto LABEL_66;
  }
  LOBYTE(v31) = 0;
  v44 = 0;
  if ( !(_DWORD)v17 )
  {
    v44 = 1;
    goto LABEL_116;
  }
  v17 = (unsigned int)(v17 - 2);
  if ( !(_DWORD)v17 )
  {
    v44 = 1;
    goto LABEL_117;
  }
  v17 = (unsigned int)(v17 - 2);
  if ( !(_DWORD)v17 )
  {
LABEL_116:
    LOBYTE(v31) = 1;
    goto LABEL_117;
  }
  if ( (_DWORD)v17 == 1 )
  {
    v45 = &v63;
    v46 = 4LL;
    v17 = (unsigned __int64)&v61[1];
    do
    {
      LOBYTE(v35) = 0;
      v47 = 0;
      v48 = 2LL;
      do
      {
        v49 = *(_DWORD *)v17;
        if ( !*(_DWORD *)v17 )
        {
          v47 = 1;
LABEL_110:
          LOBYTE(v35) = 1;
          goto LABEL_111;
        }
        if ( v49 == 2 )
        {
          v47 = 1;
          goto LABEL_111;
        }
        if ( v49 == 4 )
          goto LABEL_110;
LABEL_111:
        v17 += 4LL;
        --v48;
      }
      while ( v48 );
      *(_DWORD *)v45 = PpmHeteroComputeBias(v35, v47, v17, v31);
      LOBYTE(v31) = v35 | v31;
      v45 = (__int64 *)((char *)v45 + 4);
      v44 = v47 | v50;
      --v46;
    }
    while ( v46 );
  }
LABEL_117:
  LOBYTE(v30) = v44;
  LOBYTE(v35) = v31;
  v51 = PpmHeteroComputeBias(v35, v30, v17, v31);
  v36 = v51;
  if ( v52 )
  {
    LODWORD(v63) = v51;
    HIDWORD(v63) = v51;
    LODWORD(v64) = v51;
    HIDWORD(v64) = v51;
  }
LABEL_66:
  result = KeConfigureHeteroPolicy(v61);
  if ( PpmHeteroParkBias != v36 )
  {
    PpmHeteroParkBias = v36;
    result = 1;
  }
  v38 = 4LL;
  do
  {
    v39 = *(_DWORD *)((char *)&v63 + v5 * 4);
    if ( PpmHeteroQosBias[v5] != v39 )
    {
      PpmHeteroQosBias[v5] = v39;
      result = 1;
    }
    ++v5;
    --v38;
  }
  while ( v38 );
  return result;
}
