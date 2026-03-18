/*
 * XREFs of PpmCheckComputeHeteroResponse @ 0x140300AB0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1400BE260 (KeEnumerateNextProcessor.c)
 *     PpmParkCalculateUnparkCount @ 0x140121C20 (PpmParkCalculateUnparkCount.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     qsort @ 0x1401A0AD0 (qsort.c)
 *     PpmHeteroUtilityGreaterThanOrEqualThreshold @ 0x140301254 (PpmHeteroUtilityGreaterThanOrEqualThreshold.c)
 *     PpmHeteroUtilityToNormalizedUtility @ 0x1403012A0 (PpmHeteroUtilityToNormalizedUtility.c)
 *     PpmEventTraceHeteroResponse @ 0x1403033B8 (PpmEventTraceHeteroResponse.c)
 */

char PpmCheckComputeHeteroResponse()
{
  __int64 *v0; // r15
  unsigned int v1; // r13d
  char v2; // si
  __int64 v3; // rdi
  int v4; // r14d
  __int16 v5; // ax
  __int64 v6; // r14
  __int64 v7; // rcx
  unsigned int v8; // r12d
  __int64 v9; // rbx
  __int64 Prcb; // rax
  unsigned int v11; // eax
  __int64 v12; // rcx
  size_t v13; // r10
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rdx
  _QWORD *v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // r14d
  unsigned int v21; // ebx
  int v22; // ecx
  int v23; // r14d
  unsigned int v24; // edx
  char v25; // al
  bool v26; // zf
  size_t NumOfElements; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+40h] [rbp-C8h]
  unsigned __int16 *v30; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B8h]
  __int64 v32; // [rsp+58h] [rbp-B0h]
  _DWORD Base[64]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v34[64]; // [rsp+168h] [rbp+60h] BYREF

  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v0 = &PpmCurrentProfile[341 * dword_140443ACC];
  if ( PpmHeteroPolicy != 4 )
  {
LABEL_41:
    PpmParkCalculateUnparkCount();
    return 1;
  }
  v1 = 0;
  LODWORD(v29) = 0;
  if ( PpmParkNumNodes )
  {
    while ( 1 )
    {
      v2 = 0;
      v3 = PpmParkNodes + 272LL * v1;
      if ( *(_BYTE *)(v3 + 129) )
        break;
      v4 = 1;
      LODWORD(v29) = 1;
LABEL_39:
      if ( ++v1 >= PpmParkNumNodes )
      {
        if ( v4 )
          goto LABEL_41;
        return 1;
      }
    }
    v5 = *(_WORD *)(v3 + 4);
    v6 = 0LL;
    v7 = *(_QWORD *)(v3 + 8);
    LODWORD(NumOfElements) = 0;
    v30 = 0LL;
    v8 = *(unsigned __int8 *)(v3 + 139);
    LOWORD(v32) = v5;
    v31 = v7;
    while ( !(unsigned int)KeEnumerateNextProcessor(&NumOfElements, &v30) )
    {
      v9 = (unsigned int)NumOfElements;
      Prcb = KeGetPrcb(NumOfElements);
      v11 = PpmHeteroUtilityToNormalizedUtility(Prcb + 23808, *(unsigned int *)(Prcb + 24244));
      v6 += v11;
      Base[v9] = v11;
      LODWORD(NumOfElements) = v9 + 1;
    }
    qsort(Base, (unsigned int)NumOfElements, 4uLL, PpmUtilityComparer);
    v12 = *(unsigned __int8 *)(v3 + 6);
    v13 = 0LL;
    v14 = *(_QWORD *)(v3 + 96);
    v15 = 0LL;
    NumOfElements = 0LL;
    if ( (_DWORD)v12 )
    {
      v16 = (unsigned int)v12;
      v17 = (_QWORD *)(v14 + 8 * v12);
      do
      {
        v15 += v6 * *v17;
        v18 = v16;
        v12 = (unsigned int)(v12 - 1);
        --v16;
        v34[v12] = v15;
        v19 = *v17-- * v18;
        v13 += v19;
      }
      while ( (_DWORD)v12 );
      NumOfElements = v13;
    }
    v20 = *(unsigned __int8 *)(v3 + 129);
    v21 = v8;
    if ( v8 >= v20 )
      goto LABEL_19;
    do
    {
      if ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(
                            v13,
                            (unsigned int)Base[v21],
                            v34[v21],
                            *((unsigned __int8 *)v0 + v21 + 1477)) )
        break;
      v13 = NumOfElements;
      ++v21;
    }
    while ( v21 < v20 );
    if ( v21 <= v8 )
    {
      do
      {
        v13 = NumOfElements;
LABEL_19:
        if ( !v21 )
          goto LABEL_22;
        v23 = v21--;
      }
      while ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(
                               v13,
                               (unsigned int)Base[v21],
                               v34[v21],
                               *((unsigned __int8 *)v0 + v21 + 197)) );
      v21 = v23;
LABEL_22:
      v22 = v21 < v8;
    }
    else
    {
      v22 = 2;
    }
    if ( *(char *)(v3 + 148) == v22 )
    {
      v24 = (unsigned __int8)++*(_BYTE *)(v3 + 147);
    }
    else
    {
      v24 = 1;
      *(_BYTE *)(v3 + 148) = v22;
      *(_BYTE *)(v3 + 147) = 1;
      v2 = 4;
    }
    if ( PpmCheckCurrentPipelineId == 5 )
    {
      v2 |= 0x10u;
LABEL_34:
      *(_BYTE *)(v3 + 139) = v21;
      goto LABEL_35;
    }
    if ( v22 == 2 )
    {
      if ( v24 >= *((unsigned __int8 *)v0 + 196) )
      {
        v2 |= 0x20u;
        goto LABEL_34;
      }
    }
    else if ( v22 == 1 && v24 >= *((unsigned __int8 *)v0 + 195) )
    {
      v2 |= 0x40u;
      goto LABEL_34;
    }
LABEL_35:
    v25 = *(_BYTE *)(v3 + 146) | 6;
    v26 = *(_BYTE *)(v3 + 139) == 0;
    *(_BYTE *)(v3 + 146) = v25;
    if ( v26 )
    {
      v4 = 1;
      *(_BYTE *)(v3 + 146) = v25 & 0xFD;
      LODWORD(v29) = 1;
    }
    else
    {
      v4 = v29;
    }
    PpmEventTraceHeteroResponse(v3, (unsigned int)Base, (unsigned int)v34, NumOfElements, v21, v2 | (2 - (v4 != 0)));
    goto LABEL_39;
  }
  return 1;
}
