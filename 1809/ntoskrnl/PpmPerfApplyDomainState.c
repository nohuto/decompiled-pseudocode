/*
 * XREFs of PpmPerfApplyDomainState @ 0x140112990
 * Callers:
 *     PpmPerfApplyDomainStates @ 0x140063AB0 (PpmPerfApplyDomainStates.c)
 * Callees:
 *     KeAndAffinityEx @ 0x1400DC780 (KeAndAffinityEx.c)
 *     PpmPerfApplyCapsAndFloors @ 0x140113090 (PpmPerfApplyCapsAndFloors.c)
 *     PpmGetPerfPolicyClass @ 0x140113138 (PpmGetPerfPolicyClass.c)
 *     PpmEventDomainPerfStateChange @ 0x1401785B0 (PpmEventDomainPerfStateChange.c)
 *     KeIsEqualAffinityEx @ 0x14018A430 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PpmPerfApplyDomainState(__int64 a1)
{
  int v1; // r13d
  unsigned int v3; // r10d
  unsigned int v4; // r14d
  unsigned int v5; // edi
  unsigned int v6; // r12d
  __int64 v7; // rbx
  __int64 *v8; // r15
  unsigned __int64 v9; // r14
  char v10; // r8
  char v11; // r9
  unsigned int v12; // ebx
  unsigned int v13; // r10d
  __int64 v14; // r9
  __int64 *v15; // rcx
  __int64 v16; // r12
  char v17; // cl
  unsigned int v18; // eax
  unsigned int v19; // edx
  char v20; // r10
  int v21; // r9d
  unsigned int v22; // eax
  unsigned int v23; // r8d
  unsigned int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // r15d
  unsigned int v29; // eax
  unsigned int v30; // ecx
  __int64 v31; // rdx
  unsigned int v32; // eax
  unsigned int v33; // r8d
  __int64 *v34; // r10
  int v35; // eax
  unsigned int v36; // r13d
  unsigned int v37; // eax
  unsigned int v38; // edi
  char v39; // bl
  int v40; // ecx
  unsigned int v41; // eax
  char v42; // al
  __int64 v43; // rdx
  char v44; // r8
  unsigned __int8 v45; // r15
  int v46; // ecx
  int v47; // edx
  char v49; // [rsp+50h] [rbp-B0h]
  char v50; // [rsp+51h] [rbp-AFh]
  int v51; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v52; // [rsp+58h] [rbp-A8h]
  unsigned int v53; // [rsp+5Ch] [rbp-A4h]
  unsigned int PerfPolicyClass; // [rsp+60h] [rbp-A0h]
  int v55; // [rsp+64h] [rbp-9Ch]
  unsigned int v56; // [rsp+68h] [rbp-98h]
  unsigned int v57; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v58; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v59; // [rsp+74h] [rbp-8Ch]
  unsigned int v60; // [rsp+78h] [rbp-88h]
  int v61; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 *v62; // [rsp+80h] [rbp-80h]
  __int64 v63; // [rsp+88h] [rbp-78h]
  __int64 v64; // [rsp+90h] [rbp-70h]
  __int64 v65; // [rsp+98h] [rbp-68h] BYREF
  __int64 v66; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v67; // [rsp+A8h] [rbp-58h]
  int v68; // [rsp+ACh] [rbp-54h]
  unsigned __int64 v69; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v70; // [rsp+B8h] [rbp-48h]
  int v71; // [rsp+C0h] [rbp-40h]
  BOOL v72; // [rsp+C4h] [rbp-3Ch]
  _BYTE v73[176]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v74[176]; // [rsp+180h] [rbp+80h] BYREF

  v3 = 0;
  v49 = 0;
  v50 = 0;
  v64 = *(_QWORD *)(*(_QWORD *)(a1 + 208) + 8LL);
  v62 = &PpmCurrentProfile[341 * dword_14041918C + 5];
  if ( *(_BYTE *)(a1 + 207) )
    PerfPolicyClass = 0;
  else
    PerfPolicyClass = (unsigned __int8)PpmGetPerfPolicyClass(*(_QWORD *)(a1 + 16));
  v4 = *(_DWORD *)(a1 + 320);
  LOBYTE(v1) = 0;
  v51 = 100;
  v5 = 100;
  v6 = v3;
  v56 = *(_DWORD *)(a1 + 312);
  v57 = v56;
  v53 = v3;
  v55 = v1;
  v52 = v3;
  v60 = v4;
  v58 = v4;
  if ( PpmPerfArtificialDomainEnabled == v3
    || (KeAndAffinityEx((unsigned __int16 *)(a1 + 24), (unsigned __int16 *)&PpmPerfNewCoreParkingMask, v73),
        (unsigned int)KeIsEqualAffinityEx(a1 + 24, v73))
    || *(_BYTE *)(a1 + 207) != (_BYTE)v6 )
  {
    v8 = *(__int64 **)a1;
    v7 = a1;
  }
  else
  {
    v7 = PpmPerfDomainHead;
    v8 = &PpmPerfDomainHead;
  }
  if ( (__int64 *)v7 != v8 )
  {
    while ( 1 )
    {
      v9 = *(unsigned int *)(v7 + 356);
      if ( v7 == a1 )
        break;
      if ( !*(_BYTE *)(v7 + 207) )
      {
        KeAndAffinityEx((unsigned __int16 *)(v7 + 24), (unsigned __int16 *)&PpmPerfNewCoreParkingMask, v74);
        if ( !(unsigned int)KeIsEqualAffinityEx(v7 + 24, v74)
          && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 192LL) == *(_QWORD *)(*(_QWORD *)(v7 + 16) + 192LL) )
        {
          v10 = *(_BYTE *)(a1 + 204);
          v11 = *(_BYTE *)(v7 + 204);
          if ( v10 == v11 || PpmPerfQosEnabled )
          {
            if ( *(_BYTE *)(a1 + 205) != *(_BYTE *)(v7 + 205) )
            {
              v9 = ((*(_QWORD *)(v7 + 336) >> 1) + *(_QWORD *)(v7 + 336) * v9) / *(_QWORD *)(a1 + 336);
              if ( (unsigned int)v9 > *(_DWORD *)(a1 + 312) )
                LODWORD(v9) = *(_DWORD *)(a1 + 312);
            }
            if ( v10 == v11 )
              break;
            if ( (unsigned int)v9 <= v52 )
              LODWORD(v9) = v52;
            v52 = v9;
          }
        }
      }
LABEL_28:
      v7 = *(_QWORD *)v7;
      if ( (__int64 *)v7 == v8 )
      {
        v12 = v57;
        v4 = v58;
        v5 = v51;
        v56 = v57;
        v60 = v58;
        v53 = v6;
        v55 = v1;
        goto LABEL_31;
      }
    }
    v1 = (unsigned __int8)v1;
    if ( (unsigned int)v9 <= v6 )
      LODWORD(v9) = v6;
    v6 = v9;
    if ( *(_BYTE *)(v7 + 364) )
      v1 = 1;
    v49 |= PpmPerfApplyCapsAndFloors(&v57, &v58, &v51, v7);
    goto LABEL_28;
  }
  v12 = v56;
LABEL_31:
  v13 = 0;
  v59 = 0;
  v14 = 0LL;
  v63 = 0LL;
  do
  {
    if ( *(_DWORD *)(a1 + 4 * v14 + 480) )
    {
      v15 = (__int64 *)(a1 + 8 * (v13 - 1 + 4 * (v13 - 1 + 16LL)));
      goto LABEL_126;
    }
    v16 = 28 * v14 + a1 + 368;
    v17 = *(_BYTE *)(v16 + 21);
    if ( v17 )
      v18 = *(_DWORD *)(a1 + 320);
    else
      v18 = *(_DWORD *)(a1 + 316);
    v19 = *(_DWORD *)(v16 + 8);
    v20 = *(_BYTE *)(v16 + 22);
    v21 = v17 != 0;
    if ( v18 > v19 )
      v19 = v18;
    if ( v20 )
    {
      v22 = *(_DWORD *)(a1 + 312);
    }
    else
    {
      v21 |= 8u;
      v22 = v5;
      if ( !PpmPerfBoostAtGuaranteed )
        v22 = 100;
    }
    if ( *(_DWORD *)v16 < 0x64u && v22 >= *(_DWORD *)v16 )
      v22 = *(_DWORD *)v16;
    v23 = *(_DWORD *)(v16 + 4);
    if ( v22 < v23 )
      v23 = v22;
    if ( PpmPerfMaxOverrideEnabled )
    {
      v24 = 100;
    }
    else if ( PpmCheckLatencyBoostActive )
    {
      v24 = *(unsigned __int8 *)(v16 + 23);
    }
    else if ( (_BYTE)v1 )
    {
      v24 = *((_DWORD *)v62 + PerfPolicyClass + 28);
    }
    else
    {
      v24 = 0;
    }
    v25 = v19;
    if ( v24 >= v23 )
      v24 = v23;
    if ( v24 > v19 )
      v25 = v24;
    if ( v25 >= v5 )
    {
      v26 = v5;
    }
    else
    {
      v26 = v19;
      if ( v24 > v19 )
        v26 = v24;
    }
    if ( v26 <= v4 )
    {
      v28 = v4;
    }
    else
    {
      v27 = v19;
      if ( v24 > v19 )
        v27 = v24;
      if ( v27 >= v5 )
      {
        v28 = v5;
      }
      else
      {
        v28 = v19;
        if ( v24 > v19 )
          v28 = v24;
      }
    }
    v29 = v12;
    if ( v23 <= v19 )
      v23 = v19;
    if ( v23 < v12 )
      v29 = v23;
    if ( v29 > v4 )
    {
      v4 = v12;
      if ( v23 < v12 )
        v4 = v23;
    }
    if ( PpmPerfMaxOverrideEnabled )
    {
      v30 = v4;
      v31 = v4;
    }
    else
    {
      if ( *(_BYTE *)(v16 + 24) )
      {
        v30 = v53;
        if ( v53 <= v52 )
          v30 = v52;
      }
      else
      {
        v30 = v53;
      }
      v31 = v30;
      if ( v30 > v4 )
      {
        v31 = v4;
        v35 = v21 | 2;
        if ( !v49 )
          v35 = v21;
        v21 = v35;
        goto LABEL_85;
      }
    }
    if ( v30 < v28 )
      v31 = v28;
LABEL_85:
    if ( v20 == 2 || (unsigned __int8)(v20 - 4) <= 2u )
    {
      if ( (unsigned __int8)(v20 - 5) <= 1u || (v32 = 100, PpmPerfBoostAtGuaranteed) )
        v32 = v5;
      if ( (unsigned int)v31 >= v32 )
        v31 = v4;
    }
    if ( PpmPerfMaxOverrideEnabled )
    {
      v33 = 0;
      v34 = v62;
    }
    else
    {
      v34 = v62;
      v33 = *((_DWORD *)v62 + 15);
    }
    v36 = v28;
    v37 = v30 - v33;
    if ( v33 >= v30 )
      v37 = 0;
    if ( v37 >= v28 )
      v36 = v37;
    if ( v36 > v5 )
      v36 = v5;
    if ( PpmPerfMaxOverrideEnabled || PpmCheckDeadlineBoostActive )
      v38 = 0;
    else
      v38 = *(_DWORD *)(v16 + 16);
    if ( (_BYTE)v55 && v38 >= *((_DWORD *)v34 + PerfPolicyClass + 26) )
      v38 = *((_DWORD *)v34 + PerfPolicyClass + 26);
    v39 = *(_BYTE *)(v16 + 20);
    v40 = v21 | 4;
    if ( v39 )
      v40 = v21;
    v41 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, unsigned int, _DWORD, int, int *, __int64 *))(a1 + 272))(
            v64,
            v31,
            v28,
            v4,
            v38,
            *(_DWORD *)(v16 + 12),
            v40,
            &v61,
            &v65);
    v13 = v59;
    if ( v36 > v41 )
      v36 = v41;
    v69 = 0LL;
    v70 = 0LL;
    v71 = 0;
    v72 = v39 == 0;
    v67 = v41;
    v68 = v61;
    v71 = *(_DWORD *)(v16 + 12);
    v66 = v65;
    v69 = __PAIR64__(v4, v28);
    v70 = __PAIR64__(v38, v36);
    if ( !v59 )
    {
      v42 = BYTE1(v72);
      if ( *(_QWORD *)(a1 + 296) )
        v42 = 1;
      BYTE1(v72) = v42;
    }
    v14 = v63;
    v15 = &v66;
    LOBYTE(v1) = v55;
LABEL_126:
    v43 = a1 + 512 + 40 * v14;
    if ( !*(_BYTE *)(a1 + 684)
      && (v44 = *((_BYTE *)v15 + 36), *(_BYTE *)(v43 + 36) == v44)
      && *(_DWORD *)(v43 + 16) == *((_DWORD *)v15 + 4)
      && *(_DWORD *)(v43 + 20) == *((_DWORD *)v15 + 5)
      && *(_DWORD *)(v43 + 28) == *((_DWORD *)v15 + 7) )
    {
      v5 = v51;
      if ( *(_DWORD *)(v43 + 32) == *((_DWORD *)v15 + 8)
        && *(_QWORD *)v43 == *v15
        && v51 == *(_DWORD *)(a1 + 360)
        && (v44 || *(_DWORD *)(v43 + 24) == *((_DWORD *)v15 + 6) && *(_DWORD *)(v43 + 8) == *((_DWORD *)v15 + 2)) )
      {
        v45 = v50;
        goto LABEL_138;
      }
    }
    else
    {
      v5 = v51;
    }
    v45 = 1;
    v50 = 1;
    *(_OWORD *)v43 = *(_OWORD *)v15;
    *(_OWORD *)(v43 + 16) = *((_OWORD *)v15 + 1);
    *(_QWORD *)(v43 + 32) = v15[4];
LABEL_138:
    v4 = v60;
    ++v13;
    v12 = v56;
    ++v14;
    v59 = v13;
    v63 = v14;
  }
  while ( v13 < 4 );
  if ( v45 )
  {
    v46 = 1;
    v47 = v51;
    if ( *(_DWORD *)(a1 + 508) != -1 )
      v46 = *(_DWORD *)(a1 + 508) + 1;
    *(_DWORD *)(a1 + 508) = v46;
    *(_BYTE *)(a1 + 684) = 0;
    *(_DWORD *)(a1 + 360) = v47;
    *(LARGE_INTEGER *)(a1 + 672) = KeQueryPerformanceCounter(0LL);
    *(_DWORD *)(a1 + 680) = 0;
    if ( !*(_BYTE *)(a1 + 207) )
      PpmEventDomainPerfStateChange(a1);
  }
  return v45;
}
