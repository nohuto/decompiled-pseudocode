/*
 * XREFs of PpmHeteroDistributeUtility @ 0x1402E41A0
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     PpmParkDistributeUtility @ 0x1401037A0 (PpmParkDistributeUtility.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x1402E6820 (PpmEventTraceHeteroDistributeUtility.c)
 */

char PpmHeteroDistributeUtility()
{
  unsigned int v0; // r12d
  char v1; // r15
  __int64 v2; // rbx
  unsigned __int16 v3; // r8
  __int64 v4; // rcx
  unsigned __int8 v5; // r9
  __int64 v6; // rcx
  unsigned __int8 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdi
  char v11; // r13
  __int16 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 *v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  char v21; // si
  __int64 v22; // rdi
  __int64 *v23; // r15
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned __int64 v27; // [rsp+40h] [rbp-38h]
  unsigned __int16 *v28; // [rsp+50h] [rbp-28h] BYREF
  __int64 v29; // [rsp+58h] [rbp-20h]
  __int16 v30; // [rsp+60h] [rbp-18h]
  char v31; // [rsp+C0h] [rbp+48h]
  ULONG v32; // [rsp+C8h] [rbp+50h] BYREF
  int v33; // [rsp+D0h] [rbp+58h] BYREF
  __int64 *v34; // [rsp+D8h] [rbp+60h]

  v0 = 0;
  v34 = PpmCurrentProfile;
  v27 = 341LL * dword_14041918C;
  v1 = BYTE3(PpmCurrentProfile[v27 + 20]) != 0;
  v31 = v1;
  if ( PpmParkNumNodes )
  {
    while ( 1 )
    {
      v2 = PpmParkNodes + 264LL * v0;
      if ( PpmHeteroPolicy == 4 )
        break;
      PpmParkDistributeUtility(
        *(_QWORD *)(v2 + 8),
        *(_QWORD *)(v2 + 32),
        *(_WORD *)(v2 + 4),
        *(_BYTE *)(v2 + 134),
        v1,
        0,
        0LL);
LABEL_36:
      if ( ++v0 >= PpmParkNumNodes )
        return 1;
    }
    if ( *(_BYTE *)(v2 + 135) && *(_BYTE *)(v2 + 136) )
    {
      if ( !PpmHeteroImplementationGeneration )
        goto LABEL_17;
      v3 = *(_WORD *)(v2 + 4);
      switch ( PpmHeteroParkBias )
      {
        case 0:
          PpmParkDistributeUtility(
            *(_QWORD *)(v2 + 16),
            *(_QWORD *)(v2 + 32) & *(_QWORD *)(v2 + 16),
            v3,
            *(_BYTE *)(v2 + 256),
            v1,
            0,
            0LL);
          v6 = *(_QWORD *)(v2 + 24);
          v7 = *(_BYTE *)(v2 + 257);
          v8 = *(_QWORD *)(v2 + 32) & v6;
          v3 = *(_WORD *)(v2 + 4);
LABEL_16:
          PpmParkDistributeUtility(v6, v8, v3, v7, v1, 0, 0LL);
LABEL_17:
          v9 = *(_QWORD *)(v2 + 24);
          v10 = ~*(_QWORD *)(v2 + 32);
          if ( (v9 & v10) != 0 )
          {
            v11 = 0;
            v12 = *(_WORD *)(v2 + 4);
            v13 = v9 & *(_QWORD *)(v2 + 40);
            v32 = 0;
            v14 = v10 & v13;
            v28 = 0LL;
            v15 = v34;
            v29 = v14;
            v30 = v12;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v32, &v28) )
            {
              v16 = *(_QWORD *)(KeGetPrcb(v32) + 24168);
              if ( v16 )
              {
                v11 = BYTE6(v15[v27 + 344]);
                *(_BYTE *)(v16 + 307) = v11;
              }
            }
            v1 = v31;
            v30 = v12;
            v17 = v14 ^ *(_QWORD *)(v2 + 24);
            v28 = 0LL;
            v29 = v17;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v32, &v28) )
            {
              v20 = *(_QWORD *)(KeGetPrcb(v32) + 24168);
              if ( v20 )
                *(_BYTE *)(v20 + 307) = 0;
            }
            v21 = 0;
            if ( !PpmPerfQosEnabled )
            {
              v22 = *(_QWORD *)(v2 + 16) & v10;
              v23 = v34;
              v29 = v22;
              v32 = 0;
              v30 = v12;
              v28 = 0LL;
              while ( !(unsigned int)KeEnumerateNextProcessor(&v32, &v28) )
              {
                v24 = *(_QWORD *)(KeGetPrcb(v32) + 24168);
                if ( v24 )
                {
                  v21 = BYTE5(v23[v27 + 344]);
                  *(_BYTE *)(v24 + 306) = v21;
                }
              }
              v1 = v31;
              v30 = v12;
              v29 = *(_QWORD *)(v2 + 16) ^ v22;
              v28 = 0LL;
              while ( !(unsigned int)KeEnumerateNextProcessor(&v32, &v28) )
              {
                v25 = *(_QWORD *)(KeGetPrcb(v32) + 24168);
                if ( v25 )
                  *(_BYTE *)(v25 + 306) = 0;
              }
            }
            LOBYTE(v19) = v11;
            LOBYTE(v18) = v21;
            PpmEventTraceHeteroDistributeUtility(v2, v18, v19);
          }
          goto LABEL_36;
        case 2:
          PpmParkDistributeUtility(
            *(_QWORD *)(v2 + 24),
            *(_QWORD *)(v2 + 32) & *(_QWORD *)(v2 + 24),
            v3,
            *(_BYTE *)(v2 + 257),
            v1,
            0,
            &v33);
          v4 = *(_QWORD *)(v2 + 16);
          v5 = *(_BYTE *)(v2 + 256);
          goto LABEL_11;
        case 3:
          PpmParkDistributeUtility(
            *(_QWORD *)(v2 + 16),
            *(_QWORD *)(v2 + 32) & *(_QWORD *)(v2 + 16),
            v3,
            *(_BYTE *)(v2 + 256),
            v1,
            0,
            &v33);
          v4 = *(_QWORD *)(v2 + 24);
          v5 = *(_BYTE *)(v2 + 257);
LABEL_11:
          PpmParkDistributeUtility(v4, *(_QWORD *)(v2 + 32) & v4, *(_WORD *)(v2 + 4), v5, v1, v33, 0LL);
          goto LABEL_17;
      }
    }
    else
    {
      v3 = *(_WORD *)(v2 + 4);
    }
    v7 = *(_BYTE *)(v2 + 134);
    v8 = *(_QWORD *)(v2 + 32);
    v6 = *(_QWORD *)(v2 + 8);
    goto LABEL_16;
  }
  return 1;
}
