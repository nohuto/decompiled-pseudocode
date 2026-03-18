/*
 * XREFs of PopConfigureHeteroPolicies @ 0x140773F08
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140773BB8 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     PpmConvertTime @ 0x140004E24 (PpmConvertTime.c)
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     KeInitializeEnumerationContext @ 0x1400B9050 (KeInitializeEnumerationContext.c)
 *     KeEnumerateNextProcessor @ 0x1400BE260 (KeEnumerateNextProcessor.c)
 *     KeQueryCycleCounterFrequency @ 0x14013D720 (KeQueryCycleCounterFrequency.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C03B0 (ZwQueryValueKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KeConfigureHeteroPolicy @ 0x14077461C (KeConfigureHeteroPolicy.c)
 *     PpmHeteroComputeBias @ 0x1408B3768 (PpmHeteroComputeBias.c)
 */

char __fastcall PopConfigureHeteroPolicies(int a1, char a2)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  unsigned int v6; // edx
  int v7; // r10d
  int v8; // r9d
  __int64 *v9; // rax
  unsigned int v10; // edx
  _DWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r8
  unsigned int i; // ebx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  int v18; // edx
  int v19; // ebx
  int v20; // ecx
  __int64 v21; // r9
  int v22; // r14d
  int v23; // ecx
  _DWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int8 v27; // cl
  unsigned int v28; // r10d
  unsigned int v29; // eax
  __int64 v30; // r8
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  __int64 Prcb; // rsi
  unsigned __int64 CycleCounterFrequency; // rax
  unsigned int v36; // edx
  __int64 v37; // rcx
  __int64 v38; // rdx
  int v39; // ebx
  int v40; // ebx
  __int64 *v41; // rsi
  __int64 v42; // r14
  int *v43; // r11
  unsigned __int8 v44; // bl
  __int64 v45; // rdx
  int v46; // eax
  int v47; // eax
  int v48; // ebx
  char v49; // r10
  char v50; // cl
  int v51; // edx
  __int64 v53; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v54; // [rsp+40h] [rbp-C8h]
  __int64 v55; // [rsp+48h] [rbp-C0h]
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A8h] BYREF
  ULONG ResultLength[2]; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING ValueName; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int16 *v61[3]; // [rsp+88h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-68h] BYREF
  _DWORD v63[14]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 KeyValueInformation; // [rsp+108h] [rbp+0h] BYREF
  __int64 v65; // [rsp+110h] [rbp+8h]
  __int64 v66; // [rsp+118h] [rbp+10h] BYREF
  __int64 v67; // [rsp+120h] [rbp+18h]

  LODWORD(v55) = a1;
  memset(v61, 0, sizeof(v61));
  v4 = 0;
  HIDWORD(v5) = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v54 = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyValueInformation = 0LL;
  v65 = 0LL;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  memset(v63, 0, 0x34uLL);
  v63[11] = 7;
  v63[0] = 5;
  if ( a1 == 4 )
  {
    v63[9] = 10;
LABEL_3:
    v63[10] = 100;
    if ( a1 > 0 && (a1 <= 2 || a1 == 5) )
    {
      v10 = 0;
      v11 = &v63[1];
      do
      {
        v12 = 2LL;
        do
        {
          *v11++ = (0x300000001LL - (unsigned __int64)(v10 - 2)) >> 32;
          --v12;
        }
        while ( v12 );
        ++v10;
      }
      while ( v10 < 4 );
    }
    else
    {
      memset(&v63[1], 0, 32);
    }
    goto LABEL_7;
  }
  v63[9] = 8;
  if ( a1 != 3 )
    goto LABEL_3;
  v63[10] = 5200;
  v63[11] = 55;
  *(_QWORD *)&v63[1] = 0x200000004LL;
  *(_QWORD *)&v63[3] = 0x200000004LL;
  *(_QWORD *)&v63[5] = 0x400000004LL;
  *(_QWORD *)&v63[7] = 0x400000004LL;
LABEL_7:
  v6 = 0;
  v7 = 5;
  LODWORD(v53) = 0;
  v8 = 5;
  do
  {
    switch ( v6 )
    {
      case 1u:
        v13 = PpmEntryLevelPerfProfile;
        break;
      case 2u:
        v13 = PpmBackgroundProfile;
        break;
      case 3u:
        v13 = PpmMultimediaQosProfile;
        if ( !PpmMultimediaQosProfile )
        {
          v9 = &PpmCurrentProfile[341 * dword_140443ACC + 5];
          HIDWORD(v54) = HIDWORD(v5) | 0x1800;
          goto LABEL_22;
        }
        goto LABEL_20;
      default:
        v9 = &PpmCurrentProfile[341 * dword_140443ACC + 5];
        HIDWORD(v54) |= 0x1800u;
LABEL_22:
        HIDWORD(v5) = HIDWORD(v54);
        v6 = v53;
        goto LABEL_27;
    }
    if ( !v13 )
    {
      v5 = 0LL;
      v9 = 0LL;
      goto LABEL_26;
    }
LABEL_20:
    v9 = (__int64 *)(2728LL * dword_140443ACC + v13 + 40);
    v5 = *v9;
LABEL_26:
    v54 = v5;
LABEL_27:
    if ( (v5 & 0x100000000000LL) != 0 )
      v7 = *((_DWORD *)v9 + 680);
    if ( (v5 & 0x80000000000LL) != 0 )
      v8 = *((_DWORD *)v9 + 681);
    if ( v7 != 5 )
      v63[2 * v6 + 1] = v7;
    if ( v8 != 5 )
      v63[2 * v6 + 2] = v8;
    LODWORD(v53) = ++v6;
  }
  while ( v6 < 4 );
  if ( a2 )
  {
    dword_140438D4C = -1;
    PopHeteroLegacyOverride = 5;
    qword_140438D24 = 0x500000005LL;
    qword_140438D2C = 0x500000005LL;
    qword_140438D34 = 0x500000005LL;
    qword_140438D3C = 0x500000005LL;
    qword_140438D44 = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes) >= 0 )
    {
      ObjectAttributes.RootDirectory = KeyHandle;
      for ( i = 0; i < 7; ++i )
      {
        RtlInitUnicodeString(&DestinationString, PopHeteroConfig[3 * i]);
        if ( ZwOpenKey(&Handle, 1u, &ObjectAttributes) >= 0 )
        {
          RtlInitUnicodeString(&ValueName, (&off_1409490C8)[3 * i]);
          if ( ZwQueryValueKey(
                 Handle,
                 &ValueName,
                 KeyValuePartialInformationAlign64,
                 &KeyValueInformation,
                 0x10u,
                 ResultLength) >= 0
            && (_DWORD)KeyValueInformation == 4 )
          {
            *(int *)((char *)&PopHeteroLegacyOverride + (unsigned int)dword_1409490D0[6 * i]) = v65;
          }
          ZwClose(Handle);
        }
      }
      ZwClose(KeyHandle);
    }
  }
  v15 = 0LL;
  v16 = 4LL;
  do
  {
    v17 = 2LL;
    do
    {
      v18 = *(_DWORD *)((char *)&qword_140438D24 + v15 * 4);
      if ( v18 != 5 )
        v63[v15 + 1] = v18;
      ++v15;
      --v17;
    }
    while ( v17 );
    --v16;
  }
  while ( v16 );
  v19 = v63[0];
  if ( PopHeteroLegacyOverride != 5 )
    v19 = PopHeteroLegacyOverride;
  v20 = v63[9];
  v21 = v63[11];
  if ( (_DWORD)qword_140438D44 )
    v20 = qword_140438D44;
  v22 = v55;
  v63[9] = v20;
  v23 = v63[10];
  if ( HIDWORD(qword_140438D44) )
    v23 = HIDWORD(qword_140438D44);
  v63[0] = v19;
  v63[10] = v23;
  if ( dword_140438D4C != -1 )
    v21 = (unsigned int)dword_140438D4C;
  v63[11] = v21;
  if ( PpmPerfBootHeteroPolicyOverrideEnabled )
  {
    v24 = &v63[1];
    v25 = 4LL;
    do
    {
      v26 = 2LL;
      do
      {
        if ( *v24 == 3 )
          *v24 = 4;
        ++v24;
        --v26;
      }
      while ( v26 );
      --v25;
    }
    while ( v25 );
    v21 = v63[11];
    v19 = v63[0];
  }
  v27 = 1;
  v28 = 0;
  v29 = 0;
  do
  {
    v30 = 0LL;
    if ( v63[2 * v29 + 1] == v63[2 * v28 + 2] )
      v30 = v27;
    ++v28;
    v27 = v30;
    v29 = v28;
  }
  while ( v28 < 4 );
  LODWORD(v53) = v28;
  if ( (_BYTE)v30 )
  {
    v21 = (unsigned int)v21 & 0xFFFFFFFB;
    v63[11] = v21;
  }
  v31 = PpmPerfQosTransitionHysteresisOverride;
  if ( PpmPerfQosTransitionHysteresisOverride == -1 )
  {
    v31 = PpmPerfQosTransitionHysteresis19h2;
    if ( !PpmPerfQosTransitionHysteresisUse19h2Value )
      v31 = PpmPerfQosTransitionHysteresis;
  }
  if ( v31 )
  {
    v32 = KeMinimumIncrement;
    v33 = PpmPerfQosTransitionHysteresis19h2;
    if ( !PpmPerfQosTransitionHysteresisUse19h2Value )
      v33 = PpmPerfQosTransitionHysteresis;
    if ( 10 * v33 > (unsigned int)KeMinimumIncrement )
      v32 = 10 * v33;
    v63[12] = v32;
  }
  if ( PpmPerfQosTransitionHysteresisUse19h2Value )
  {
    KeInitializeEnumerationContext((__int64)v61, (__int64)PpmPerfStatesRegistered);
    while ( !(unsigned int)KeEnumerateNextProcessor(&v53, v61) )
    {
      Prcb = KeGetPrcb(v53);
      CycleCounterFrequency = KeQueryCycleCounterFrequency(Prcb, 0);
      v36 = PpmPerfQosTransitionHysteresisOverride;
      if ( PpmPerfQosTransitionHysteresisOverride == -1 )
      {
        v36 = PpmPerfQosTransitionHysteresis19h2;
        if ( !PpmPerfQosTransitionHysteresisUse19h2Value )
          v36 = PpmPerfQosTransitionHysteresis;
      }
      *(_QWORD *)(Prcb + 24296) = PpmConvertTime(v36, 0xF4240uLL, CycleCounterFrequency);
    }
  }
  v37 = (unsigned int)PpmPerfQosTransitionHysteresisOverride;
  if ( PpmPerfQosTransitionHysteresisOverride == -1 )
  {
    v38 = (unsigned int)PpmPerfQosTransitionHysteresis19h2;
    if ( !PpmPerfQosTransitionHysteresisUse19h2Value )
      v38 = (unsigned int)PpmPerfQosTransitionHysteresis;
  }
  else
  {
    v38 = (unsigned int)PpmPerfQosTransitionHysteresisOverride;
  }
  if ( (unsigned int)v38 <= 0x1F4 )
  {
    v37 = 500LL;
  }
  else if ( PpmPerfQosTransitionHysteresisOverride == -1 )
  {
    v37 = (unsigned int)PpmPerfQosTransitionHysteresis19h2;
    if ( !PpmPerfQosTransitionHysteresisUse19h2Value )
      v37 = (unsigned int)PpmPerfQosTransitionHysteresis;
  }
  PpmPerfQosIdleExpirationTimeout = (unsigned int)(10 * v37);
  if ( ((v22 - 1) & 0xFFFFFFFA) != 0 || v22 == 6 )
  {
    v48 = 1;
    v66 = 0x100000001LL;
    v67 = 0x100000001LL;
    goto LABEL_126;
  }
  LOBYTE(v30) = 0;
  LOBYTE(v21) = 0;
  if ( !v19 )
  {
    LOBYTE(v21) = 1;
    goto LABEL_122;
  }
  v39 = v19 - 2;
  if ( !v39 )
  {
    LOBYTE(v21) = 1;
    goto LABEL_123;
  }
  v40 = v39 - 2;
  if ( !v40 )
  {
LABEL_122:
    LOBYTE(v30) = 1;
    goto LABEL_123;
  }
  if ( v40 == 1 )
  {
    v41 = &v66;
    v42 = 4LL;
    v43 = &v63[1];
    do
    {
      LOBYTE(v37) = 0;
      v44 = 0;
      v45 = 2LL;
      do
      {
        v46 = *v43;
        if ( *v43 )
        {
          if ( v46 == 2 )
          {
            v44 = 1;
            goto LABEL_117;
          }
          if ( v46 != 4 )
            goto LABEL_117;
        }
        else
        {
          v44 = 1;
        }
        LOBYTE(v37) = 1;
LABEL_117:
        ++v43;
        --v45;
      }
      while ( v45 );
      *(_DWORD *)v41 = PpmHeteroComputeBias(v37, v44, v30, v21);
      LOBYTE(v30) = v37 | v30;
      v41 = (__int64 *)((char *)v41 + 4);
      LOBYTE(v21) = v44 | v21;
      --v42;
    }
    while ( v42 );
  }
LABEL_123:
  LOBYTE(v38) = v21;
  LOBYTE(v37) = v30;
  v47 = PpmHeteroComputeBias(v37, v38, v30, v21);
  v48 = v47;
  if ( v49 )
  {
    LODWORD(v66) = v47;
    HIDWORD(v66) = v47;
    LODWORD(v67) = v47;
    HIDWORD(v67) = v47;
  }
LABEL_126:
  v50 = KeConfigureHeteroPolicy(v63);
  if ( PpmHeteroParkBias != v48 )
  {
    PpmHeteroParkBias = v48;
    v50 = 1;
  }
  do
  {
    v51 = *((_DWORD *)&v66 + v4);
    if ( PpmHeteroQosBias[v4] != v51 )
    {
      PpmHeteroQosBias[v4] = v51;
      v50 = 1;
    }
    ++v4;
  }
  while ( v4 < 4 );
  return v50;
}
