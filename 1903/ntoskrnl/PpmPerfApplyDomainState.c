/*
 * XREFs of PpmPerfApplyDomainState @ 0x14010C980
 * Callers:
 *     PpmPerfApplyDomainStates @ 0x14010C910 (PpmPerfApplyDomainStates.c)
 * Callees:
 *     PpmPerfApplyCapsAndFloors @ 0x14010CF48 (PpmPerfApplyCapsAndFloors.c)
 *     PpmGetPerfPolicyClass @ 0x14010CFF8 (PpmGetPerfPolicyClass.c)
 *     PpmEventDomainPerfStateChange @ 0x140177408 (PpmEventDomainPerfStateChange.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KeIsSubsetAffinityEx @ 0x1402A4EA0 (KeIsSubsetAffinityEx.c)
 */

__int64 __fastcall PpmPerfApplyDomainState(__int64 a1)
{
  __int64 v2; // rax
  int v3; // esi
  __int64 *v4; // r10
  unsigned int v5; // r12d
  char v6; // dl
  unsigned int v7; // r13d
  unsigned int v8; // r11d
  unsigned int v9; // r15d
  __int64 *v10; // r14
  __int64 v11; // rdi
  unsigned int v12; // r12d
  unsigned __int64 v13; // rsi
  unsigned int v14; // r9d
  __int64 v15; // rdi
  _QWORD *v16; // rdx
  char v17; // r8
  unsigned __int8 v18; // di
  __int64 v20; // r15
  unsigned int v21; // ecx
  char v22; // r8
  unsigned int v23; // r14d
  unsigned int v24; // eax
  unsigned int v25; // edx
  unsigned int v26; // edx
  unsigned int v27; // edx
  unsigned int v28; // r10d
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // ecx
  __int64 v33; // rdx
  unsigned int v34; // eax
  unsigned int v35; // r8d
  unsigned int v36; // r13d
  unsigned int v37; // eax
  unsigned int v38; // r12d
  char v39; // si
  int v40; // ecx
  unsigned int v41; // ecx
  __int128 v42; // xmm0
  int v43; // eax
  int v44; // edx
  LARGE_INTEGER PerformanceCounter; // rax
  bool v46; // zf
  int IsSubsetAffinity; // eax
  char v48; // r8
  char v49; // r9
  int v50; // eax
  char v51; // [rsp+50h] [rbp-49h]
  char v52; // [rsp+51h] [rbp-48h]
  int v53; // [rsp+54h] [rbp-45h] BYREF
  char v54; // [rsp+58h] [rbp-41h]
  int v55; // [rsp+5Ch] [rbp-3Dh]
  unsigned int v56; // [rsp+60h] [rbp-39h]
  unsigned int v57; // [rsp+64h] [rbp-35h]
  unsigned int PerfPolicyClass; // [rsp+68h] [rbp-31h]
  unsigned int v59; // [rsp+6Ch] [rbp-2Dh]
  __int64 *v60; // [rsp+70h] [rbp-29h]
  unsigned int v61; // [rsp+78h] [rbp-21h] BYREF
  unsigned int v62; // [rsp+7Ch] [rbp-1Dh] BYREF
  unsigned int v63; // [rsp+80h] [rbp-19h]
  unsigned int v64; // [rsp+84h] [rbp-15h]
  unsigned int v65; // [rsp+88h] [rbp-11h]
  unsigned int v66; // [rsp+8Ch] [rbp-Dh] BYREF
  __int64 v67; // [rsp+90h] [rbp-9h]
  __int64 v68; // [rsp+98h] [rbp-1h] BYREF
  _QWORD v69[5]; // [rsp+A0h] [rbp+7h] BYREF

  memset(v69, 0, sizeof(v69));
  v2 = *(_QWORD *)(a1 + 208);
  v3 = 0;
  v54 = 0;
  v52 = 0;
  v67 = *(_QWORD *)(v2 + 8);
  v4 = &PpmCurrentProfile[341 * dword_140443ACC + 5];
  v60 = v4;
  if ( *(_BYTE *)(a1 + 207) )
    PerfPolicyClass = 0;
  else
    PerfPolicyClass = (unsigned __int8)PpmGetPerfPolicyClass(*(_QWORD *)(a1 + 16));
  v5 = *(_DWORD *)(a1 + 312);
  v6 = 0;
  v7 = *(_DWORD *)(a1 + 320);
  v8 = 100;
  v53 = 100;
  v9 = 0;
  v57 = 0;
  v51 = 0;
  v56 = 0;
  v64 = v5;
  v61 = v5;
  v65 = v7;
  v62 = v7;
  if ( !PpmPerfArtificialDomainEnabled
    || (IsSubsetAffinity = KeIsSubsetAffinityEx(a1 + 24, &PpmPerfNewCoreParkingMask),
        v8 = v53,
        v6 = 0,
        v4 = v60,
        IsSubsetAffinity)
    || *(_BYTE *)(a1 + 207) )
  {
    v10 = *(__int64 **)a1;
    v11 = a1;
  }
  else
  {
    v11 = PpmPerfDomainHead;
    v10 = &PpmPerfDomainHead;
  }
  if ( (__int64 *)v11 != v10 )
  {
    v12 = 0;
    while ( 1 )
    {
      v13 = *(unsigned int *)(v11 + 356);
      if ( v11 == a1 )
        goto LABEL_8;
      if ( !*(_BYTE *)(v11 + 207)
        && !(unsigned int)KeIsSubsetAffinityEx(v11 + 24, &PpmPerfNewCoreParkingMask)
        && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 192LL) == *(_QWORD *)(*(_QWORD *)(v11 + 16) + 192LL) )
      {
        v48 = *(_BYTE *)(a1 + 204);
        v49 = *(_BYTE *)(v11 + 204);
        if ( v48 == v49 || PpmPerfQosEnabled )
          break;
      }
LABEL_13:
      v11 = *(_QWORD *)v11;
      if ( (__int64 *)v11 == v10 )
      {
        v7 = v62;
        v3 = 0;
        v8 = v53;
        v6 = v51;
        v4 = v60;
        v56 = v12;
        v5 = v61;
        v64 = v61;
        v57 = v9;
        v65 = v62;
        goto LABEL_15;
      }
    }
    if ( *(_BYTE *)(a1 + 205) != *(_BYTE *)(v11 + 205) )
    {
      v13 = ((*(_QWORD *)(v11 + 336) >> 1) + *(_QWORD *)(v11 + 336) * v13) / *(_QWORD *)(a1 + 336);
      if ( (unsigned int)v13 > *(_DWORD *)(a1 + 312) )
        LODWORD(v13) = *(_DWORD *)(a1 + 312);
    }
    if ( v48 != v49 )
    {
      if ( (unsigned int)v13 <= v12 )
        LODWORD(v13) = v12;
      v12 = v13;
      goto LABEL_13;
    }
LABEL_8:
    if ( (unsigned int)v13 <= v9 )
      LODWORD(v13) = v9;
    v9 = v13;
    if ( *(_BYTE *)(v11 + 364) )
      v51 = 1;
    v52 |= PpmPerfApplyCapsAndFloors(&v61, &v62, &v53, v11);
    goto LABEL_13;
  }
LABEL_15:
  v14 = 0;
  v63 = 0;
  v15 = 0LL;
  do
  {
    if ( *(_DWORD *)(a1 + 4 * v15 + 480) )
    {
      v16 = (_QWORD *)(a1 + 8 * (v14 - 1 + 4 * (v14 - 1 + 16LL)));
      goto LABEL_18;
    }
    v55 = 0;
    v20 = 28 * v15 + a1 + 368;
    if ( *(_BYTE *)(v20 + 21) )
    {
      v21 = *(_DWORD *)(a1 + 320);
      v3 = 1;
      v55 = 1;
    }
    else
    {
      v21 = *(_DWORD *)(a1 + 316);
    }
    if ( v21 <= *(_DWORD *)(v20 + 8) )
      v21 = *(_DWORD *)(v20 + 8);
    v22 = *(_BYTE *)(v20 + 22);
    if ( v22 )
    {
      v23 = *(_DWORD *)(a1 + 312);
    }
    else
    {
      v3 |= 8u;
      v23 = v8;
      v55 = v3;
      if ( !PpmPerfBoostAtGuaranteed )
        v23 = 100;
    }
    if ( *(_DWORD *)v20 < 0x64u && v23 >= *(_DWORD *)v20 )
      v23 = *(_DWORD *)v20;
    if ( v23 >= *(_DWORD *)(v20 + 4) )
      v23 = *(_DWORD *)(v20 + 4);
    if ( PpmPerfMaxOverrideEnabled )
    {
      v24 = 100;
    }
    else if ( PpmCheckLatencyBoostActive )
    {
      v24 = *(unsigned __int8 *)(v20 + 23);
    }
    else if ( v6 )
    {
      v24 = *((_DWORD *)v4 + PerfPolicyClass + 28);
    }
    else
    {
      v24 = 0;
    }
    if ( v24 >= v23 )
      v24 = v23;
    if ( v24 > v21 )
      v25 = v24;
    else
      v25 = v21;
    if ( v25 < v8 )
    {
      v26 = v21;
      if ( v24 > v21 )
        v26 = v24;
    }
    else
    {
      v26 = v8;
    }
    if ( v26 <= v7 )
    {
      v28 = v7;
    }
    else
    {
      if ( v24 > v21 )
        v27 = v24;
      else
        v27 = v21;
      if ( v27 < v8 )
      {
        v28 = v21;
        if ( v24 > v21 )
          v28 = v24;
      }
      else
      {
        v28 = v8;
      }
    }
    v59 = v28;
    if ( v23 > v21 )
      v29 = v23;
    else
      v29 = v21;
    if ( v29 < v5 )
    {
      v30 = v23;
      if ( v23 <= v21 )
        v30 = v21;
    }
    else
    {
      v30 = v5;
    }
    if ( v30 <= v7 )
    {
      v23 = v7;
    }
    else
    {
      if ( v23 > v21 )
        v31 = v23;
      else
        v31 = v21;
      if ( v31 < v5 )
      {
        if ( v23 <= v21 )
          v23 = v21;
      }
      else
      {
        v23 = v5;
      }
    }
    if ( PpmPerfMaxOverrideEnabled )
    {
      v32 = v23;
      v33 = v23;
    }
    else
    {
      if ( *(_BYTE *)(v20 + 24) )
      {
        v32 = v57;
        if ( v57 <= v56 )
          v32 = v56;
      }
      else
      {
        v32 = v57;
      }
      v33 = v32;
      if ( v32 > v23 )
      {
        v33 = v23;
        v50 = v3 | 2;
        if ( !v52 )
          v50 = v3;
        v55 = v50;
        goto LABEL_72;
      }
    }
    if ( v32 < v28 )
      v33 = v28;
LABEL_72:
    if ( v22 == 2 || (unsigned __int8)(v22 - 4) <= 2u )
    {
      v34 = (unsigned __int8)(v22 - 5) <= 1u || PpmPerfBoostAtGuaranteed ? v8 : 100;
      if ( (unsigned int)v33 >= v34 )
        v33 = v23;
    }
    if ( PpmPerfMaxOverrideEnabled )
      v35 = 0;
    else
      v35 = *((_DWORD *)v60 + 15);
    v36 = v28;
    v37 = v32 - v35;
    if ( v35 >= v32 )
      v37 = 0;
    if ( v37 >= v28 )
      v36 = v37;
    if ( v36 > v8 )
      v36 = v8;
    if ( PpmPerfMaxOverrideEnabled || PpmCheckDeadlineBoostActive )
      v38 = 0;
    else
      v38 = *(_DWORD *)(v20 + 16);
    if ( v51 && v38 >= *((_DWORD *)v60 + PerfPolicyClass + 26) )
      v38 = *((_DWORD *)v60 + PerfPolicyClass + 26);
    v39 = *(_BYTE *)(v20 + 20);
    v40 = v55;
    if ( !v39 )
      v40 = v55 | 4;
    v41 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, unsigned int, _DWORD, int, unsigned int *, __int64 *))(a1 + 272))(
            v67,
            v33,
            v28,
            v23,
            v38,
            *(_DWORD *)(v20 + 12),
            v40,
            &v66,
            &v68);
    if ( v36 > v41 )
      v36 = v41;
    HIDWORD(v69[4]) = v39 == 0;
    v14 = v63;
    v69[0] = v68;
    v69[2] = __PAIR64__(v23, v59);
    LODWORD(v69[4]) = *(_DWORD *)(v20 + 12);
    v69[1] = __PAIR64__(v66, v41);
    v69[3] = __PAIR64__(v38, v36);
    if ( !v63 && *(_QWORD *)(a1 + 296) )
      BYTE5(v69[4]) = 1;
    v16 = v69;
    v3 = 0;
LABEL_18:
    if ( *(_BYTE *)(a1 + 684)
      || (v17 = *((_BYTE *)v16 + 36), *(_BYTE *)(a1 + 40 * v15 + 548) != v17)
      || *(_DWORD *)(a1 + 40 * v15 + 528) != *((_DWORD *)v16 + 4)
      || *(_DWORD *)(a1 + 40 * v15 + 532) != *((_DWORD *)v16 + 5)
      || *(_DWORD *)(a1 + 40 * v15 + 540) != *((_DWORD *)v16 + 7) )
    {
      v8 = v53;
LABEL_99:
      v42 = *(_OWORD *)v16;
      v54 = 1;
      *(_OWORD *)(a1 + 40 * v15 + 512) = v42;
      *(_OWORD *)(a1 + 40 * v15 + 528) = *((_OWORD *)v16 + 1);
      *(_QWORD *)(a1 + 40 * v15 + 544) = v16[4];
      goto LABEL_29;
    }
    v8 = v53;
    if ( *(_DWORD *)(a1 + 40 * v15 + 544) != *((_DWORD *)v16 + 8)
      || *(_QWORD *)(a1 + 40 * v15 + 512) != *v16
      || v53 != *(_DWORD *)(a1 + 360)
      || !v17
      && (*(_DWORD *)(a1 + 40 * v15 + 536) != *((_DWORD *)v16 + 6)
       || *(_DWORD *)(a1 + 40 * v15 + 520) != *((_DWORD *)v16 + 2)) )
    {
      goto LABEL_99;
    }
LABEL_29:
    v5 = v64;
    ++v14;
    v7 = v65;
    ++v15;
    v6 = v51;
    v4 = v60;
    v63 = v14;
  }
  while ( v14 < 4 );
  v18 = v54;
  if ( v54 )
  {
    v43 = *(_DWORD *)(a1 + 508) + 1;
    if ( *(_DWORD *)(a1 + 508) == -1 )
      v43 = 1;
    v44 = v53;
    *(_DWORD *)(a1 + 508) = v43;
    *(_BYTE *)(a1 + 684) = 0;
    *(_DWORD *)(a1 + 360) = v44;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v46 = *(_BYTE *)(a1 + 207) == 0;
    *(LARGE_INTEGER *)(a1 + 672) = PerformanceCounter;
    *(_DWORD *)(a1 + 680) = 0;
    if ( v46 )
      PpmEventDomainPerfStateChange(a1);
  }
  return v18;
}
