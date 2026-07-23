/*
 * XREFs of PpmPerfCalculateQosClassPolicies @ 0x140174170
 * Callers:
 *     PpmPerfUpdateDomainPolicy @ 0x14071AE2C (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     PpmGetPerfPolicyClass @ 0x140113138 (PpmGetPerfPolicyClass.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1401C5D30 (RtlCompareMemory.c)
 */

char __fastcall PpmPerfCalculateQosClassPolicies(__int64 a1)
{
  _QWORD *v1; // r9
  __int64 PerfPolicyClass; // r15
  int v4; // ecx
  char v5; // si
  _QWORD *v6; // rdi
  unsigned int v7; // r12d
  _QWORD *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 *v11; // r10
  __int64 *v12; // r10
  __int64 v13; // r8
  __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // xmm1_8
  int v17; // eax
  __int64 v18; // r9
  BOOL v19; // eax
  int v20; // ebx
  bool v21; // zf
  int v22; // eax
  __int64 v23; // xmm1_8
  __int64 v24; // rcx
  unsigned int v25; // ecx
  _DWORD *v26; // rax
  unsigned int v27; // esi
  unsigned int v28; // ebx
  int v29; // eax
  unsigned int v30; // r11d
  unsigned int v31; // eax
  char v32; // al
  char v33; // al
  char v34; // al
  char v35; // cl
  int v36; // eax
  __int64 v37; // rbx
  __int128 v38; // xmm0
  int v39; // eax
  __int64 v40; // xmm1_8
  __int64 v41; // rcx
  _WORD *v42; // rdi
  unsigned int i; // esi
  unsigned int j; // ebx
  unsigned int v46; // [rsp+20h] [rbp-40h]
  char v47; // [rsp+24h] [rbp-3Ch]
  char v48; // [rsp+28h] [rbp-38h]
  int v49; // [rsp+2Ch] [rbp-34h]
  __int128 Source2; // [rsp+30h] [rbp-30h] BYREF
  __int64 v51; // [rsp+40h] [rbp-20h]
  int v52; // [rsp+48h] [rbp-18h]

  v1 = 0LL;
  if ( *(_BYTE *)(a1 + 207) )
    PerfPolicyClass = 0LL;
  else
    PerfPolicyClass = (unsigned __int8)PpmGetPerfPolicyClass(*(_QWORD *)(a1 + 16));
  v4 = dword_14041918C;
  v5 = (char)v1;
  v46 = (unsigned int)v1;
  v47 = (char)v1;
  v6 = v1;
  v48 = (char)v1;
  v49 = dword_14041918C;
  v7 = (unsigned int)v1;
  v8 = v1;
  while ( 1 )
  {
    Source2 = 0uLL;
    v51 = 0LL;
    v52 = 0;
    switch ( v7 )
    {
      case 0u:
LABEL_16:
        v10 = dword_14041918C;
        v11 = PpmCurrentProfile + 5;
        goto LABEL_17;
      case 1u:
        v9 = PpmEntryLevelPerfProfile;
        break;
      case 2u:
        v9 = PpmBackgroundProfile;
        break;
      case 3u:
        v9 = PpmMultimediaQosProfile;
        v6 = (_QWORD *)(a1 + 368);
        break;
      default:
        goto LABEL_16;
    }
    if ( v9 )
    {
      v10 = v4;
      v11 = (__int64 *)(v9 + 40);
LABEL_17:
      v12 = &v11[341 * v10];
      goto LABEL_18;
    }
    v12 = v1;
LABEL_18:
    if ( v12 )
    {
      v13 = *v12;
      v14 = v12[PerfPolicyClass];
    }
    else
    {
      v13 = (__int64)v1;
      v14 = (__int64)v1;
    }
    if ( v6 )
    {
      v15 = (int)v1;
      if ( PopHeteroSystem == (_DWORD)v1 )
        v15 = 64;
      v16 = v6[2];
      v17 = *((_DWORD *)v6 + 6);
      Source2 = *(_OWORD *)v6;
      v52 = v17;
      v51 = v16;
      if ( PpmPerfQosGroupPolicyDisable != (_DWORD)v1 )
        v15 |= 0x100u;
      if ( PpmPerfSchedulerDirectedPerfStatesSupported == (_BYTE)v1 )
        v15 |= 0x80u;
      if ( v12 )
      {
        if ( (v13 & 0x1C000000C00LL) == 0 && (v14 & 0x400000040C0LL) == 0 )
          v15 |= 4u;
      }
      else
      {
        v15 |= 2u;
      }
      v18 = *(__int64 *)((char *)PpmCurrentProfile + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_LATENCY.Data1;
      if ( !v18 )
        v18 = *(__int64 *)((char *)PpmCurrentProfile + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_LATENCY.Data4;
      v19 = v18 == 0;
      v20 = v15 | 0x20;
      v1 = 0LL;
      if ( !v19 )
        v20 = v15;
      if ( PpmPerfMaxOverrideEnabled )
        v20 |= 0x10u;
      if ( PpmPerfQosDisableRefcount )
        v20 |= 1u;
      if ( v20 )
      {
        v21 = RtlCompareMemory((const void *)(a1 + 28LL * v7 + 368), &Source2, 0x1CuLL) == 28;
        v22 = v52;
        v23 = v51;
        if ( v21 )
          v5 = 1;
        v24 = 28LL * (_QWORD)v8;
        v47 = v5;
        *(_OWORD *)(v24 + a1 + 368) = Source2;
        *(_QWORD *)(v24 + a1 + 384) = v23;
        *(_DWORD *)(v24 + a1 + 392) = v22;
        *(_DWORD *)(a1 + 4LL * (_QWORD)v8 + 480) = v20;
        goto LABEL_45;
      }
    }
    if ( v7 == 3 )
    {
      v14 = 0x400000040C0LL;
      v13 = 0x1C000000C00LL;
    }
    v26 = v1;
    if ( v7 != 3 )
      v26 = v6;
    v6 = v26;
    if ( PpmPerfEppViaPerfControl != (_BYTE)v1
      && (!v26 || (v14 & 0x4000000000LL) != 0 && v26[4] < *((_DWORD *)v12 + PerfPolicyClass + 16)) )
    {
      LODWORD(v51) = *((_DWORD *)v12 + PerfPolicyClass + 16);
    }
    if ( !v26 || (v14 & 0x40) != 0 && v26[2] > (unsigned int)*((unsigned __int8 *)v12 + PerfPolicyClass + 26) )
    {
      v27 = *((unsigned __int8 *)v12 + PerfPolicyClass + 26);
      DWORD2(Source2) = v27;
    }
    else
    {
      v27 = DWORD2(Source2);
    }
    if ( v26 && ((v14 & 0x80u) == 0LL || *v26 <= (unsigned int)*((unsigned __int8 *)v12 + PerfPolicyClass + 28)) )
    {
      v28 = Source2;
    }
    else
    {
      v28 = *((unsigned __int8 *)v12 + PerfPolicyClass + 28);
      LODWORD(Source2) = v28;
    }
    v29 = *((_DWORD *)v12 + PerfPolicyClass + 11);
    v30 = *(_DWORD *)(a1 + 312);
    if ( v29 )
    {
      v31 = (unsigned int)((*(_DWORD *)(a1 + 308) >> 1) + 100 * v29) / *(_DWORD *)(a1 + 308);
      if ( v31 < v30 )
        v30 = v31;
      LODWORD(v1) = 0;
    }
    if ( !v6 || (v14 & 0x40000000000LL) != 0 && *((_DWORD *)v6 + 1) > v30 )
      DWORD1(Source2) = v30;
    else
      v30 = DWORD1(Source2);
    if ( PpmPerfAutonomousActivityWindowViaPerfControl != (_BYTE)v1 && (!v6 || (v13 & 0x8000000000LL) != 0) )
      HIDWORD(Source2) = *((_DWORD *)v12 + 18);
    if ( !v6 || (v13 & 0x400) != 0 && *((_BYTE *)v6 + 22) != (_BYTE)v1 && *((_DWORD *)v12 + 14) == (_DWORD)v1 )
      BYTE6(v51) = *((_BYTE *)v12 + 56);
    if ( !v6 || (v14 & 0x4000) != 0 && *((_BYTE *)v6 + 23) > *((_BYTE *)v12 + PerfPolicyClass + 77) )
      HIBYTE(v51) = *((_BYTE *)v12 + PerfPolicyClass + 77);
    v32 = *((_BYTE *)v12 + 16);
    if ( v32 == 1 || v32 == 2 && *(_BYTE *)(a1 + 348) != (_BYTE)v1 )
      v33 = 1;
    else
      v33 = (char)v1;
    if ( !v6 || (v13 & 0x800) != 0 )
      BYTE5(v51) = v33;
    if ( *((_BYTE *)v12 + 76) == (_BYTE)v1 || (v34 = (char)v1, *(_BYTE *)(a1 + 351) == (_BYTE)v1) )
      v34 = 1;
    if ( !v6 || (v13 & 0x10000000000LL) != 0 )
    {
      v35 = v48;
      if ( v34 )
        v35 = 1;
      BYTE4(v51) = v34;
      v48 = v35;
    }
    if ( v28 < v27 )
      v28 = v27;
    LODWORD(Source2) = v28;
    if ( v30 < v27 )
      v30 = v27;
    DWORD1(Source2) = v30;
    if ( v34
      && ((v36 = PpmHeteroQosBias[(_QWORD)v8], v36 == 1)
       || v36 == 3 && *(_BYTE *)(a1 + 204) > (unsigned __int8)v1
       || v36 == 2 && *(_BYTE *)(a1 + 204) == (_BYTE)v1) )
    {
      LOBYTE(v52) = 1;
    }
    else
    {
      LOBYTE(v52) = (_BYTE)v1;
    }
    v37 = 28LL * v7;
    v5 = v47;
    v21 = RtlCompareMemory((const void *)(v37 + a1 + 368), &Source2, 0x1CuLL) == 28;
    v38 = Source2;
    v39 = v52;
    v40 = v51;
    if ( !v21 )
      v5 = 1;
    *(_DWORD *)(a1 + 4LL * (_QWORD)v8 + 480) = 0;
    v41 = 28LL * (_QWORD)v8;
    v47 = v5;
    *(_OWORD *)(v41 + a1 + 368) = v38;
    *(_QWORD *)(v41 + a1 + 384) = v40;
    *(_DWORD *)(v41 + a1 + 392) = v39;
    if ( v6 && RtlCompareMemory(v6, &Source2, 0x1CuLL) == 28 )
    {
      *(_DWORD *)(a1 + 4LL * (_QWORD)v8 + 480) = 8;
LABEL_45:
      v25 = v46;
      goto LABEL_121;
    }
    v6 = (_QWORD *)(v37 + a1 + 368);
    v25 = ++v46;
LABEL_121:
    ++v7;
    v8 = (_QWORD *)((char *)v8 + 1);
    if ( v7 >= 4 )
      break;
    v4 = v49;
    v1 = 0LL;
  }
  v42 = (_WORD *)(a1 + 496);
  *(_BYTE *)(a1 + 504) = v25 > 1;
  *(_BYTE *)(a1 + 352) = v48;
  for ( i = 0; i < 4; ++i )
  {
    *v42 = 0;
    for ( j = 0; j < 4; ++j )
    {
      if ( i == j
        || RtlCompareMemory((const void *)(a1 + 28LL * i + 368), (const void *)(28LL * j + a1 + 368), 0x1CuLL) == 28 )
      {
        *v42 |= 1 << j;
      }
    }
    ++v42;
  }
  return v47;
}
