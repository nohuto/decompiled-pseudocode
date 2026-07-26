/*
 * XREFs of ndisSetAddWakeUpPattern @ 0x1C007685C
 * Callers:
 *     ndisOidPrePMAddWOLPattern @ 0x1C001CCF0 (ndisOidPrePMAddWOLPattern.c)
 *     ndisOidPreAddWakeUpPattern @ 0x1C0074140 (ndisOidPreAddWakeUpPattern.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C00158A0 (WPP_RECORDER_SF_qdL.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032358 (WPP_RECORDER_SF_D.c)
 *     ndisGetNewPatternEntryId @ 0x1C0035364 (ndisGetNewPatternEntryId.c)
 *     ndisPMPatternIdExist @ 0x1C0035390 (ndisPMPatternIdExist.c)
 *     memcmp @ 0x1C0041250 (memcmp.c)
 *     ndisCreateWakeUpPatternEntry @ 0x1C0072F3C (ndisCreateWakeUpPatternEntry.c)
 */

__int64 __fastcall ndisSetAddWakeUpPattern(__int64 a1, unsigned __int64 a2, char *a3)
{
  _QWORD *v3; // r13
  __int64 v4; // r9
  char *v5; // r12
  unsigned __int64 v6; // rbp
  int v8; // r14d
  unsigned int v9; // r8d
  _DWORD *v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // ebx
  unsigned int v14; // ecx
  __int64 i; // rcx
  __int64 **v16; // rax
  __int64 *v17; // rdi
  int v18; // eax
  __int64 v19; // r12
  __int64 v20; // r13
  size_t v21; // r8
  int v22; // eax
  __int64 *v23; // r14
  unsigned int v24; // edx
  int v25; // edx
  _QWORD *j; // rax
  _DWORD *WakeUpPatternEntry; // rax
  _DWORD *v28; // r9
  unsigned int NewPatternEntryId; // eax
  char v30; // [rsp+28h] [rbp-70h]
  char v31; // [rsp+30h] [rbp-68h]
  __int64 v32; // [rsp+40h] [rbp-58h]
  int v33; // [rsp+A0h] [rbp+8h]
  int v34; // [rsp+A8h] [rbp+10h]

  v3 = 0LL;
  v4 = a2 + 72;
  v5 = a3;
  v6 = a2;
  v8 = 24;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v31 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      24,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1,
      v31);
    v4 = v6 + 72;
  }
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_DWORD *)(v6 + 56) = 0;
  v9 = *(_DWORD *)(v6 + 48);
  *v5 = 1;
  if ( v9 < 0x18 )
    goto LABEL_13;
  v10 = *(_DWORD **)(v6 + 40);
  v11 = (unsigned int)v10[2];
  if ( !(_DWORD)v11 || (a2 = (unsigned int)v10[3], a2 < v11 + 24) || (v14 = a2 + v10[4], v14 < (unsigned int)a2) )
  {
    v12 = -1073676267;
LABEL_6:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        0xBu,
        0x1Bu,
        (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
        a1,
        *a3,
        v12);
    return v12;
  }
  if ( v9 < v14 )
  {
    v8 = a2 + v10[4];
LABEL_13:
    *(_DWORD *)(v6 + 56) = v8;
    v12 = -1073676268;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v12;
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      26,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids);
    goto LABEL_6;
  }
  for ( i = v4; (*(_DWORD *)(i + 16) & 0x4000) != 0; i = *(_QWORD *)(i + 24) + 72LL )
    ;
  v16 = (__int64 **)(a1 + 960);
  v17 = *(__int64 **)(a1 + 960);
  v12 = -1073676267;
  v32 = *(_QWORD *)(i + 32);
  if ( !v17 )
  {
LABEL_25:
    v23 = 0LL;
    goto LABEL_26;
  }
  while ( 1 )
  {
    if ( v10[4] != *((_DWORD *)v17 + 16) || v10[2] != *((_DWORD *)v17 + 14) )
      goto LABEL_23;
    v18 = v10[1];
    v10[1] = 0;
    v19 = (unsigned int)v10[3];
    v10[3] = 0;
    v20 = *((unsigned int *)v17 + 15);
    v21 = *((unsigned int *)v17 + 14) + 24LL;
    *((_DWORD *)v17 + 15) = 0;
    v33 = v18;
    v22 = *((_DWORD *)v17 + 13);
    *((_DWORD *)v17 + 13) = 0;
    v34 = v22;
    if ( !memcmp(v10, v17 + 6, v21) && !memcmp((char *)v10 + v19, (char *)v17 + v20 + 48, *((unsigned int *)v17 + 16)) )
      break;
    v10[1] = v33;
    v10[3] = v19;
    *((_DWORD *)v17 + 13) = v34;
    *((_DWORD *)v17 + 15) = v20;
LABEL_23:
    v17 = (__int64 *)*v17;
    if ( !v17 )
    {
      v5 = a3;
      v16 = (__int64 **)(a1 + 960);
      v3 = 0LL;
      goto LABEL_25;
    }
  }
  v23 = v17;
  v10[1] = v33;
  v10[3] = v19;
  *((_DWORD *)v17 + 13) = v34;
  *((_DWORD *)v17 + 15) = v20;
  if ( v17[3] == v32 )
    goto LABEL_6;
  v3 = v17;
  for ( j = v17 + 1; j; j = (_QWORD *)*j )
  {
    v3 = j - 1;
    if ( j[2] == v32 )
      goto LABEL_6;
  }
  v5 = a3;
  v16 = (__int64 **)(a1 + 960);
LABEL_26:
  v24 = v10[1];
  if ( v24 <= 0xFFFF || !ndisPMPatternIdExist(v16, v24) )
  {
    WakeUpPatternEntry = ndisCreateWakeUpPatternEntry(v10, *(_DWORD *)(v6 + 8));
    v28 = WakeUpPatternEntry;
    if ( WakeUpPatternEntry )
    {
      *((_QWORD *)WakeUpPatternEntry + 3) = v32;
      *(_QWORD *)(a1 + 192) = WakeUpPatternEntry;
      NewPatternEntryId = v10[1];
      if ( NewPatternEntryId <= 0xFFFF )
      {
        if ( v23 )
          NewPatternEntryId = *((_DWORD *)v23 + 10);
        else
          NewPatternEntryId = ndisGetNewPatternEntryId((__int64 **)(a1 + 960));
      }
      v28[10] = NewPatternEntryId;
      *(_DWORD *)(v6 + 152) = NewPatternEntryId;
      v12 = 0;
      v28[13] = v28[10];
      if ( v3 )
      {
        *v5 = 1;
        *((_QWORD *)v28 + 1) = v17 + 1;
      }
      else
      {
        *v5 = 0;
      }
    }
    else
    {
      v12 = -1073741670;
    }
    goto LABEL_6;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v30 = v25;
    LOBYTE(v25) = 2;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v25,
      14,
      25,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      v30);
    goto LABEL_6;
  }
  return v12;
}
