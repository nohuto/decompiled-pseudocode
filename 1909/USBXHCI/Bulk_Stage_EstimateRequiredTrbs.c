/*
 * XREFs of Bulk_Stage_EstimateRequiredTrbs @ 0x1C0036A00
 * Callers:
 *     Bulk_PrepareStage @ 0x1C0034E7C (Bulk_PrepareStage.c)
 * Callees:
 *     WPP_RECORDER_SF_dddd @ 0x1C0014BD8 (WPP_RECORDER_SF_dddd.c)
 *     TR_IsUrbUsingChainedMdl @ 0x1C0029478 (TR_IsUrbUsingChainedMdl.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C0029AC0 (WPP_RECORDER_SF_DDDDD.c)
 *     WPP_RECORDER_SF_DDDqDDDDD @ 0x1C0038B7C (WPP_RECORDER_SF_DDDqDDDDD.c)
 */

__int64 __fastcall Bulk_Stage_EstimateRequiredTrbs(__int64 *a1)
{
  unsigned int v1; // r10d
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // rdi
  unsigned int v7; // edx
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int16 v10; // ax
  __int64 *v11; // r14
  unsigned int v12; // edx
  unsigned int v13; // r12d
  unsigned int v14; // r13d
  unsigned int v15; // eax
  unsigned int v16; // r15d
  unsigned int v17; // edi
  unsigned __int64 v18; // r8
  __int64 v19; // rcx
  unsigned int v20; // ebp
  unsigned __int64 v21; // rcx
  unsigned int v22; // r9d
  __int64 v23; // r8
  unsigned int v24; // r9d
  __int64 result; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // [rsp+20h] [rbp-88h]
  unsigned int v29; // [rsp+B0h] [rbp+8h]
  int v30; // [rsp+B8h] [rbp+10h]
  unsigned int v31; // [rsp+C0h] [rbp+18h]

  v1 = 0;
  v3 = *a1;
  v4 = 2;
  v5 = *(_QWORD *)(v3 + 56);
  if ( *(_DWORD *)(v3 + 76) <= 2u )
  {
    *((_DWORD *)a1 + 20) = 2;
    goto LABEL_35;
  }
  v6 = *((unsigned int *)a1 + 10);
  v7 = *(_DWORD *)(*(_QWORD *)(v5 + 56) + 152LL);
  v8 = v6;
  if ( v7 <= (unsigned int)v6 )
    v8 = v7;
  v31 = v8;
  *((_DWORD *)a1 + 20) = ((unsigned __int64)(v8 + 8190) >> 12) + 1;
  v9 = *(_QWORD *)(v3 + 48);
  v10 = *(_WORD *)(v9 + 2);
  if ( v10 < 0x39u || v10 > 0x3Au )
  {
    v11 = (__int64 *)a1[6];
    if ( !TR_IsUrbUsingChainedMdl(v9) )
    {
      *((_DWORD *)a1 + 21) = (v6 + 4095 + (unsigned __int64)((*((_DWORD *)v11 + 8) + *((_DWORD *)v11 + 11)) & 0xFFF)) >> 12;
      goto LABEL_33;
    }
    v29 = v1;
    v13 = v1;
    if ( !(_DWORD)v6 )
      goto LABEL_33;
    while ( 1 )
    {
      v14 = *((_DWORD *)v11 + 10);
      v15 = v6;
      LODWORD(v6) = v6 - v14;
      if ( v15 < v14 )
        LODWORD(v6) = v1;
      v30 = v6;
      if ( v15 < v14 )
        v14 = v15;
      v16 = v14;
      if ( v14 )
        break;
LABEL_32:
      v11 = (__int64 *)*v11;
      if ( !(_DWORD)v6 )
        goto LABEL_33;
    }
    v17 = v29;
    while ( 1 )
    {
      v18 = v11[4] + *((unsigned int *)v11 + 11) + (unsigned __int64)(v14 - v16);
      v19 = (*((_WORD *)v11 + 16) + (unsigned __int16)*((_DWORD *)v11 + 11) + (_WORD)v14 - (_WORD)v16) & 0xFFF;
      if ( v16 + v13 < v12 )
      {
        v13 = v16;
        v21 = ((unsigned __int64)v16 + v19 + 4095) >> 12;
        v16 = v1;
        v20 = v21;
        v17 = v21;
      }
      else
      {
        v20 = v17 + (((unsigned __int64)(v12 - v13) + v19 + 4095) >> 12);
        v17 = v1;
        v16 += v13 - v12;
        v13 = v1;
      }
      v22 = v20 + *((_DWORD *)a1 + 21);
      *((_DWORD *)a1 + 21) = v22;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        && LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v1 )
      {
        WPP_RECORDER_SF_DDDqDDDDD(
          *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
          *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL),
          v18,
          v22,
          v28,
          *(_BYTE *)(*(_QWORD *)(v5 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(v5 + 56) + 144LL),
          *(_DWORD *)(v5 + 64),
          v18,
          v20,
          v16,
          v17,
          v13,
          v22);
      }
      v23 = *(unsigned int *)(v5 + 196);
      if ( v20 >= (unsigned int)v23 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDDDD(
          *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
          3u,
          v23,
          0x1Eu,
          (__int64)&WPP_7d510b11cf7730484f23e28c4fa6ef2f_Traceguids);
      if ( v20 > *((_DWORD *)a1 + 20) )
      {
        *((_DWORD *)a1 + 20) = v20;
        v1 = 0;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          goto LABEL_30;
        }
        WPP_RECORDER_SF_dddd(
          *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
          5u,
          0xEu,
          0x1Fu,
          (__int64)&WPP_7d510b11cf7730484f23e28c4fa6ef2f_Traceguids);
      }
      v1 = 0;
LABEL_30:
      v12 = v31;
      if ( !v16 )
      {
        v29 = v17;
        LODWORD(v6) = v30;
        goto LABEL_32;
      }
    }
  }
  *((_DWORD *)a1 + 21) = ((unsigned __int64)(v6 + 4095) >> 12) + 1;
LABEL_33:
  v4 = *((_DWORD *)a1 + 21) + 2;
LABEL_35:
  *((_DWORD *)a1 + 21) = v4;
  v24 = *((_DWORD *)a1 + 10);
  result = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 336LL);
  if ( (result & 0x400000000LL) != 0 )
  {
    v26 = *(_QWORD *)(v5 + 48);
    if ( *(_DWORD *)(v26 + 40) != v1 )
    {
      v27 = *(_QWORD *)(v5 + 56);
      if ( *(char *)(v27 + 98) < 0 && *(_DWORD *)(v26 + 20) <= 1u )
      {
        result = v24 / (*(_WORD *)(v27 + 100) & 0x7FFu);
        if ( v24 % (*(_WORD *)(v27 + 100) & 0x7FFu) )
        {
          ++*((_DWORD *)a1 + 20);
          ++*((_DWORD *)a1 + 21);
        }
      }
    }
  }
  return result;
}
