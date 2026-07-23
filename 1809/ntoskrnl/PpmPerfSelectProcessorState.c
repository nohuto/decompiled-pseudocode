/*
 * XREFs of PpmPerfSelectProcessorState @ 0x140102CB0
 * Callers:
 *     PpmPerfSelectProcessorStates @ 0x140102BD0 (PpmPerfSelectProcessorStates.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x14005B930 (EtwpLevelKeywordEnabled.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

char __fastcall PpmPerfSelectProcessorState(__int64 a1)
{
  __int64 v1; // r14
  int v2; // r10d
  unsigned __int8 v3; // r8
  __int64 v5; // r13
  __int64 v6; // r9
  __int64 *v7; // rsi
  char v8; // al
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rbx
  unsigned int v12; // ecx
  char v13; // r8
  char v14; // r11
  unsigned int v15; // r12d
  unsigned int v16; // r15d
  unsigned int v17; // eax
  unsigned int v18; // ecx
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21; // r10
  unsigned int v22; // r11d
  unsigned int v23; // ebx
  unsigned int v24; // r8d
  unsigned int v25; // r12d
  int v26; // r15d
  int v27; // r10d
  unsigned int v28; // eax
  bool v29; // cf
  unsigned __int8 v30; // al
  unsigned __int8 v31; // al
  __int64 v32; // rax
  REGHANDLE v33; // r10
  unsigned int v34; // ecx
  unsigned int v35; // eax
  char v36; // r8
  unsigned int v37; // r10d
  bool v38; // cc
  char v39; // al
  char v40; // al
  unsigned int v41; // eax
  __int64 v42; // rcx
  int v44; // [rsp+50h] [rbp-B0h]
  char v45; // [rsp+54h] [rbp-ACh]
  char v46; // [rsp+55h] [rbp-ABh]
  unsigned int v47; // [rsp+58h] [rbp-A8h] BYREF
  int v48; // [rsp+60h] [rbp-A0h]
  unsigned int v49; // [rsp+64h] [rbp-9Ch]
  unsigned int v50; // [rsp+68h] [rbp-98h] BYREF
  __int16 v51; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v52; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v53; // [rsp+80h] [rbp-80h] BYREF
  __int64 v54; // [rsp+88h] [rbp-78h]
  __int64 v55; // [rsp+90h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v57; // [rsp+B0h] [rbp-50h]
  __int64 v58; // [rsp+B8h] [rbp-48h]
  unsigned int *v59; // [rsp+C0h] [rbp-40h]
  __int64 v60; // [rsp+C8h] [rbp-38h]
  unsigned int *v61; // [rsp+D0h] [rbp-30h]
  __int64 v62; // [rsp+D8h] [rbp-28h]
  unsigned int *v63; // [rsp+E0h] [rbp-20h]
  __int64 v64; // [rsp+E8h] [rbp-18h]
  unsigned int *v65; // [rsp+F0h] [rbp-10h]
  __int64 v66; // [rsp+F8h] [rbp-8h]

  v1 = *(_QWORD *)(a1 + 24184);
  v2 = 0;
  v3 = PpmMfBufferingThreshold;
  v5 = *(_QWORD *)(a1 + 24176);
  v6 = *(_QWORD *)(a1 + 24168);
  v55 = *(_QWORD *)(v1 + 8);
  v44 = 0;
  v49 = 0;
  v48 = 1;
  if ( (unsigned int)PpmMfBufferingThreshold > 0x64 )
    v3 = 100;
  v7 = &PpmCurrentProfile[341 * dword_14041918C + 5];
  if ( v6 && PpmCurrentProfile == (__int64 *)PpmLowPowerProfile && byte_1404191CC && *(_BYTE *)(v6 + 305) < v3 )
  {
    v2 = 4096;
    v7 = (__int64 *)((char *)&unk_14040F848 + 2728 * dword_14041918C);
    v44 = 4096;
  }
  if ( (unsigned __int8)PpmHeteroNominalPerformanceClasses <= 1u )
  {
    v8 = *(_BYTE *)(a1 + 24224);
LABEL_7:
    LOBYTE(v9) = v8 != 0;
    goto LABEL_8;
  }
  v9 = *(_QWORD *)(a1 + 24176);
  if ( v9 )
  {
    v8 = *(_BYTE *)(v9 + 205);
    goto LABEL_7;
  }
LABEL_8:
  v10 = *((_DWORD *)v7 + 14);
  v11 = (unsigned __int8)v9;
  v54 = (unsigned __int8)v9;
  v12 = *((unsigned __int8 *)v7 + (unsigned __int8)v9 + 38);
  v13 = *((_BYTE *)v7 + (unsigned __int8)v9 + 34);
  v14 = *((_BYTE *)v7 + (unsigned __int8)v9 + 121);
  v53 = *((unsigned __int8 *)v7 + (unsigned __int8)v9 + 30);
  v52 = *((unsigned __int8 *)v7 + (unsigned __int8)v9 + 32);
  v46 = *((_BYTE *)v7 + (unsigned __int8)v9 + 36);
  v45 = v13;
  v15 = *((unsigned __int8 *)v7 + (unsigned __int8)v9 + 40);
  v50 = v12;
  v16 = (v12 + v15) >> 1;
  if ( !v6 )
    goto LABEL_11;
  v17 = *((_DWORD *)v7 + (unsigned __int8)v9 + 23);
  v18 = *((_DWORD *)v7 + v11 + 21);
  if ( v17 == v18 )
  {
    *(_BYTE *)(v1 + 60) = 0;
    goto LABEL_11;
  }
  v36 = *(_BYTE *)(v1 + 60);
  v37 = *(_DWORD *)(v6 + 308);
  if ( v36 )
  {
    v38 = v37 <= v18;
    v2 = v44;
    if ( v38 )
    {
      ++*(_BYTE *)(v1 + 61);
      v2 = v44 | 0x80000;
      v44 |= 0x80000u;
      if ( *(_BYTE *)(v1 + 61) >= *((_BYTE *)v7 + v11 + 100) )
      {
        *(_WORD *)(v1 + 60) = 0;
        v36 = 0;
      }
      goto LABEL_77;
    }
  }
  else
  {
    v29 = v37 < v17;
    v2 = v44;
    if ( !v29 )
    {
      ++*(_BYTE *)(v1 + 61);
      v2 = v44 | 0x100000;
      v44 |= 0x100000u;
      if ( *(_BYTE *)(v1 + 61) >= *((_BYTE *)v7 + v11 + 102) )
      {
        *(_WORD *)(v1 + 60) = 1;
        v36 = 1;
      }
      goto LABEL_77;
    }
  }
  *(_BYTE *)(v1 + 61) = 0;
LABEL_77:
  v20 = v36 == 0;
  v13 = v45;
  if ( !v20 )
  {
    v2 |= 0x200000u;
    v44 = v2;
  }
LABEL_11:
  if ( ((v10 - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( (unsigned int)(v10 - 5) <= 1 || PpmPerfBoostAtGuaranteed )
      v19 = *(_DWORD *)(v1 + 24);
    else
      v19 = 100;
  }
  else
  {
    v19 = *(_DWORD *)(v5 + 312);
  }
  v20 = *(_BYTE *)(v5 + 352) == 0;
  v47 = v19;
  if ( v20 )
  {
    v25 = v47;
    v26 = v2 | 0x40000;
    v23 = v19;
    v27 = v48;
    goto LABEL_35;
  }
  if ( *(_BYTE *)(a1 + 24228) && v14 )
  {
    v25 = v47;
    v23 = v19;
    v26 = v2 | 1;
    if ( v14 == 1 )
      v23 = 1;
    v27 = 1;
    goto LABEL_35;
  }
  v21 = PpmPerfIdealAggressiveIncreaseThreshold;
  if ( (unsigned __int8)PpmPerfIdealAggressiveIncreaseThreshold > 0x64u )
    v21 = 100;
  if ( !(_BYTE)v16 )
  {
    v39 = v46;
    if ( !v46 )
      v39 = 2;
    v46 = v39;
    v40 = v13;
    if ( !v13 )
      v40 = 2;
    v45 = v40;
  }
  v22 = *(_DWORD *)(a1 + 24244);
  v23 = *(_DWORD *)(v1 + 56);
  if ( PpmPerfCalculateActualUtilization )
  {
    v49 = v22 / *(_DWORD *)(a1 + 24236);
    if ( PpmPerfCalculateActualUtilization == 2 )
      v23 = *(_DWORD *)(v1 + 72);
  }
  else
  {
    v49 = v22 / v23;
  }
  v24 = v23;
  if ( v49 > v15 )
  {
    v25 = v47;
    if ( v23 < v47 )
    {
      if ( v46 == 2 )
      {
        v26 = v44 | 0x40;
      }
      else
      {
        if ( v46 )
        {
          if ( v46 == 1 )
          {
            v23 += PpmPerfSingleStepSize;
            v26 = v44 | 0x20;
          }
          else if ( v46 == 3 )
          {
            if ( v49 < v21 )
              v41 = v22 / (unsigned __int8)v16;
            else
              v41 = v22 / v50;
            v23 = v41;
            v26 = v44 | 0x80;
          }
          else
          {
            v26 = v44;
          }
        }
        else
        {
          v35 = v22 / (unsigned __int8)v16;
          v26 = v44 | 0x10;
          v23 = v35;
        }
        if ( v23 < v47 )
          goto LABEL_28;
      }
      v23 = v47;
LABEL_28:
      v27 = v48;
      goto LABEL_29;
    }
LABEL_27:
    v26 = v44;
    goto LABEL_28;
  }
  if ( v49 >= v50 || v23 <= 1 )
  {
    v25 = v47;
    goto LABEL_27;
  }
  v27 = 3;
  if ( v45 == 1 )
  {
    v26 = v44 | 0x200;
    if ( v23 > PpmPerfSingleStepSize )
    {
      v25 = v47;
      v23 -= PpmPerfSingleStepSize;
      goto LABEL_29;
    }
  }
  else
  {
    if ( !v45 )
    {
      v25 = v47;
      v34 = (unsigned __int8)v16;
      v26 = v44 | 0x100;
      v23 = v22 / v34;
      goto LABEL_29;
    }
    v26 = v44;
    if ( v45 != 2 )
    {
      v25 = v47;
      goto LABEL_29;
    }
  }
  v25 = v47;
  v23 = 1;
  v26 |= 0x400u;
LABEL_29:
  if ( PpmCheckCurrentPipelineId == 5 )
    goto LABEL_32;
  v28 = *(_DWORD *)(v5 + 680);
  v29 = v23 < v24;
  if ( v23 > v24 )
  {
    if ( v28 < v52 )
    {
LABEL_101:
      v26 |= 0x800u;
      v23 = v24;
      goto LABEL_32;
    }
    v29 = v23 < v24;
  }
  if ( v29 && v28 < v53 )
    goto LABEL_101;
LABEL_32:
  if ( v6 )
  {
    v30 = *(_BYTE *)(v6 + 306);
    if ( v30 )
    {
      v26 |= 0x10000u;
      *(_BYTE *)(v6 + 306) = 0;
      if ( v23 <= v30 )
        v23 = v30;
    }
    v31 = *(_BYTE *)(v6 + 307);
    if ( v31 )
    {
      v26 |= 0x20000u;
      *(_BYTE *)(v6 + 307) = 0;
      if ( v23 <= v31 )
        v23 = v31;
    }
  }
LABEL_35:
  LODWORD(v32) = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, int, _QWORD, _QWORD))(v5 + 272))(
                   v55,
                   v23,
                   *(unsigned int *)(v5 + 320),
                   v25,
                   *((_DWORD *)v7 + v54 + 16),
                   *((_DWORD *)v7 + 18),
                   v27,
                   0LL,
                   0LL);
  v20 = PpmEtwRegistered == 0;
  *(_DWORD *)(v1 + 56) = v32;
  v50 = v32;
  LOBYTE(v32) = v49;
  v53 = v49;
  v47 = v26;
  v52 = v23;
  if ( !v20 )
  {
    v33 = PpmEtwHandle;
    if ( PpmEtwHandle )
    {
      if ( (v32 = *(_QWORD *)(PpmEtwHandle + 32), *(_DWORD *)(v32 + 96))
        && (unsigned __int8)(*(_BYTE *)(v32 + 100) - 1) > 2u
        && (*(_BYTE *)(v32 + 112) & 0x20) != 0
        && (v42 = *(_QWORD *)(v32 + 120), LOBYTE(v32) = v42 & 0x20, (v42 & 0x20) == v42)
        || *(_BYTE *)(PpmEtwHandle + 101)
        && (LOBYTE(v32) = EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 40) + 96LL, 4u, 32LL), (_BYTE)v32) )
      {
        v51 = *(unsigned __int8 *)(a1 + 208);
        *(_QWORD *)&UserData.Size = 2LL;
        UserData.Ptr = (ULONGLONG)&v51;
        v58 = 1LL;
        v57 = a1 + 209;
        v60 = 4LL;
        v59 = &v53;
        v61 = &v52;
        v63 = &v50;
        v65 = &v47;
        v62 = 4LL;
        v64 = 4LL;
        v66 = 4LL;
        LOBYTE(v32) = EtwWriteEx(v33, &PPM_ETW_PERF_SELECT_PROCESSOR_STATE, 0LL, 0, 0LL, 0LL, 6u, &UserData);
      }
    }
  }
  return v32;
}
