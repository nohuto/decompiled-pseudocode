/*
 * XREFs of PpmPerfCalculateQosClassPolicies @ 0x14017DA68
 * Callers:
 *     PpmPerfUpdateDomainPolicy @ 0x14074501C (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     PpmGetPerfPolicyClass @ 0x14010C8A8 (PpmGetPerfPolicyClass.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1401CCD70 (RtlCompareMemory.c)
 */

char __fastcall PpmPerfCalculateQosClassPolicies(__int64 a1)
{
  __int64 v1; // r9
  __int64 PerfPolicyClass; // r15
  int v4; // ecx
  char v5; // si
  _DWORD *v6; // rdi
  unsigned int v7; // r12d
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 *v10; // r10
  __int64 v11; // r8
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // xmm1_8
  __int64 v15; // rdx
  int v16; // ebx
  bool v17; // zf
  int v18; // eax
  __int64 v19; // xmm1_8
  __int64 v20; // rcx
  unsigned int v21; // ecx
  _WORD *v22; // rdi
  unsigned int i; // esi
  unsigned int j; // ebx
  __int64 v26; // rax
  __int64 *v27; // r10
  _DWORD *v28; // rax
  unsigned int v29; // esi
  unsigned int v30; // ebx
  int v31; // eax
  unsigned int v32; // r11d
  char v33; // al
  char v34; // al
  char v35; // al
  char v36; // cl
  int v37; // eax
  __int64 v38; // rbx
  __int128 v39; // xmm0
  int v40; // eax
  __int64 v41; // xmm1_8
  __int64 v42; // rcx
  unsigned int v43; // eax
  unsigned int v44; // [rsp+20h] [rbp-40h]
  char v45; // [rsp+24h] [rbp-3Ch]
  char v46; // [rsp+28h] [rbp-38h]
  int v47; // [rsp+2Ch] [rbp-34h]
  __int128 Source2; // [rsp+30h] [rbp-30h] BYREF
  __int64 v49; // [rsp+40h] [rbp-20h]
  int v50; // [rsp+48h] [rbp-18h]

  v1 = 0LL;
  if ( *(_BYTE *)(a1 + 207) )
    PerfPolicyClass = 0LL;
  else
    PerfPolicyClass = (unsigned __int8)PpmGetPerfPolicyClass(*(_QWORD *)(a1 + 16));
  v4 = dword_140443A2C;
  v5 = v1;
  v45 = v1;
  v46 = v1;
  v6 = (_DWORD *)v1;
  v44 = v1;
  v7 = v1;
  v47 = dword_140443A2C;
  v8 = v1;
  while ( 1 )
  {
    Source2 = 0uLL;
    v49 = 0LL;
    v50 = 0;
    switch ( v7 )
    {
      case 0u:
LABEL_47:
        v26 = dword_140443A2C;
        v27 = PpmCurrentProfile + 5;
LABEL_48:
        v10 = &v27[341 * v26];
        goto LABEL_13;
      case 1u:
        v9 = PpmEntryLevelPerfProfile;
        break;
      case 2u:
        v9 = PpmBackgroundProfile;
        break;
      case 3u:
        v9 = PpmMultimediaQosProfile;
        v6 = (_DWORD *)(a1 + 368);
        break;
      default:
        goto LABEL_47;
    }
    if ( v9 )
    {
      v26 = v4;
      v27 = (__int64 *)(v9 + 40);
      goto LABEL_48;
    }
    v10 = (__int64 *)v1;
LABEL_13:
    if ( v10 )
    {
      v11 = *v10;
      v12 = v10[PerfPolicyClass];
    }
    else
    {
      v11 = v1;
      v12 = v1;
    }
    if ( v6 )
    {
      v13 = v6[6];
      v14 = *((_QWORD *)v6 + 2);
      Source2 = *(_OWORD *)v6;
      if ( !PopHeteroSystem )
        LODWORD(v1) = 64;
      v49 = v14;
      v50 = v13;
      if ( PpmPerfQosGroupPolicyDisable )
        LODWORD(v1) = v1 | 0x100;
      if ( !PpmPerfSchedulerDirectedPerfStatesSupported )
        LODWORD(v1) = v1 | 0x80;
      if ( v10 )
      {
        if ( (v12 & 0x400000040C0LL) == 0 && (v11 & 0x1C000000C00LL) == 0 )
          LODWORD(v1) = v1 | 4;
      }
      else
      {
        LODWORD(v1) = v1 | 2;
      }
      v15 = *(__int64 *)((char *)PpmCurrentProfile + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_LATENCY.Data1;
      if ( !v15 )
        v15 = *(__int64 *)((char *)PpmCurrentProfile + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_LATENCY.Data4;
      v16 = v1 | 0x20;
      if ( v15 )
        v16 = v1;
      v1 = 0LL;
      if ( PpmPerfMaxOverrideEnabled )
        v16 |= 0x10u;
      if ( PpmPerfQosDisableRefcount )
        v16 |= 1u;
      if ( v16 )
      {
        v17 = RtlCompareMemory((const void *)(a1 + 28LL * v7 + 368), &Source2, 0x1CuLL) == 28;
        v18 = v50;
        v19 = v49;
        if ( v17 )
          v5 = 1;
        v20 = 28 * v8;
        v45 = v5;
        *(_OWORD *)(v20 + a1 + 368) = Source2;
        *(_QWORD *)(v20 + a1 + 384) = v19;
        *(_DWORD *)(v20 + a1 + 392) = v18;
        *(_DWORD *)(a1 + 4 * v8 + 480) = v16;
        goto LABEL_36;
      }
    }
    if ( v7 == 3 )
    {
      v11 = 0x1C000000C00LL;
      v12 = 0x400000040C0LL;
    }
    v28 = (_DWORD *)v1;
    if ( v7 != 3 )
      v28 = v6;
    v6 = v28;
    if ( PpmPerfEppViaPerfControl != (_BYTE)v1
      && (!v28 || (v12 & 0x4000000000LL) != 0 && v28[4] < *((_DWORD *)v10 + PerfPolicyClass + 16)) )
    {
      LODWORD(v49) = *((_DWORD *)v10 + PerfPolicyClass + 16);
    }
    if ( !v28 || (v12 & 0x40) != 0 && v28[2] > (unsigned int)*((unsigned __int8 *)v10 + PerfPolicyClass + 26) )
    {
      v29 = *((unsigned __int8 *)v10 + PerfPolicyClass + 26);
      DWORD2(Source2) = v29;
    }
    else
    {
      v29 = DWORD2(Source2);
    }
    if ( v28 && ((v12 & 0x80u) == 0LL || *v28 <= (unsigned int)*((unsigned __int8 *)v10 + PerfPolicyClass + 28)) )
    {
      v30 = Source2;
    }
    else
    {
      v30 = *((unsigned __int8 *)v10 + PerfPolicyClass + 28);
      LODWORD(Source2) = v30;
    }
    v31 = *((_DWORD *)v10 + PerfPolicyClass + 11);
    v32 = *(_DWORD *)(a1 + 312);
    if ( v31 )
    {
      v43 = (unsigned int)((*(_DWORD *)(a1 + 308) >> 1) + 100 * v31) / *(_DWORD *)(a1 + 308);
      if ( v43 < v32 )
        v32 = v43;
      LODWORD(v1) = 0;
    }
    if ( !v6 || (v12 & 0x40000000000LL) != 0 && v6[1] > v32 )
      DWORD1(Source2) = v32;
    else
      v32 = DWORD1(Source2);
    if ( PpmPerfAutonomousActivityWindowViaPerfControl != (_BYTE)v1 && (!v6 || (v11 & 0x8000000000LL) != 0) )
      HIDWORD(Source2) = *((_DWORD *)v10 + 18);
    if ( !v6 || (v11 & 0x400) != 0 && *((_BYTE *)v6 + 22) != (_BYTE)v1 && *((_DWORD *)v10 + 14) == (_DWORD)v1 )
      BYTE6(v49) = *((_BYTE *)v10 + 56);
    if ( !v6 || (v12 & 0x4000) != 0 && *((_BYTE *)v6 + 23) > *((_BYTE *)v10 + PerfPolicyClass + 77) )
      HIBYTE(v49) = *((_BYTE *)v10 + PerfPolicyClass + 77);
    v33 = *((_BYTE *)v10 + 16);
    if ( v33 == 1 || v33 == 2 && *(_BYTE *)(a1 + 348) != (_BYTE)v1 )
      v34 = 1;
    else
      v34 = v1;
    if ( !v6 || (v11 & 0x800) != 0 )
      BYTE5(v49) = v34;
    if ( *((_BYTE *)v10 + 76) == (_BYTE)v1 || (v35 = v1, *(_BYTE *)(a1 + 351) == (_BYTE)v1) )
      v35 = 1;
    if ( !v6 || (v11 & 0x10000000000LL) != 0 )
    {
      v36 = v46;
      if ( v35 )
        v36 = 1;
      BYTE4(v49) = v35;
      v46 = v36;
    }
    if ( v30 < v29 )
      v30 = v29;
    LODWORD(Source2) = v30;
    if ( v32 < v29 )
      v32 = v29;
    DWORD1(Source2) = v32;
    if ( v35
      && ((v37 = PpmHeteroQosBias[v8], v37 == 1)
       || v37 == 3 && *(_BYTE *)(a1 + 204) > (unsigned __int8)v1
       || v37 == 2 && *(_BYTE *)(a1 + 204) == (_BYTE)v1) )
    {
      LOBYTE(v50) = 1;
    }
    else
    {
      LOBYTE(v50) = v1;
    }
    v38 = 28LL * v7;
    v5 = v45;
    v17 = RtlCompareMemory((const void *)(v38 + a1 + 368), &Source2, 0x1CuLL) == 28;
    v39 = Source2;
    v40 = v50;
    v41 = v49;
    if ( !v17 )
      v5 = 1;
    *(_DWORD *)(a1 + 4 * v8 + 480) = 0;
    v42 = 28 * v8;
    v45 = v5;
    *(_OWORD *)(v42 + a1 + 368) = v39;
    *(_QWORD *)(v42 + a1 + 384) = v41;
    *(_DWORD *)(v42 + a1 + 392) = v40;
    if ( v6 && RtlCompareMemory(v6, &Source2, 0x1CuLL) == 28 )
    {
      *(_DWORD *)(a1 + 4 * v8 + 480) = 8;
LABEL_36:
      v21 = v44;
      goto LABEL_37;
    }
    v6 = (_DWORD *)(v38 + a1 + 368);
    v21 = ++v44;
LABEL_37:
    ++v7;
    ++v8;
    if ( v7 >= 4 )
      break;
    v4 = v47;
    v1 = 0LL;
  }
  v22 = (_WORD *)(a1 + 496);
  *(_BYTE *)(a1 + 504) = v21 > 1;
  *(_BYTE *)(a1 + 352) = v46;
  for ( i = 0; i < 4; ++i )
  {
    *v22 = 0;
    for ( j = 0; j < 4; ++j )
    {
      if ( i == j
        || RtlCompareMemory((const void *)(a1 + 28LL * i + 368), (const void *)(28LL * j + a1 + 368), 0x1CuLL) == 28 )
      {
        *v22 |= 1 << j;
      }
    }
    ++v22;
  }
  return v45;
}
