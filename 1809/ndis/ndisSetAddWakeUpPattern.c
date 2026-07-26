/*
 * XREFs of ndisSetAddWakeUpPattern @ 0x1C00E8424
 * Callers:
 *     ndisOidPrePMAddWOLPattern @ 0x1C00BB930 (ndisOidPrePMAddWOLPattern.c)
 *     ndisOidPreAddWakeUpPattern @ 0x1C00E6850 (ndisOidPreAddWakeUpPattern.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     memcmp @ 0x1C0026D30 (memcmp.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 *     ndisPMPatternIdExist @ 0x1C00BB600 (ndisPMPatternIdExist.c)
 *     ndisGetNewPatternEntryId @ 0x1C00BBE64 (ndisGetNewPatternEntryId.c)
 *     ndisCreateWakeUpPatternEntry @ 0x1C00E65E8 (ndisCreateWakeUpPatternEntry.c)
 */

__int64 __fastcall ndisSetAddWakeUpPattern(__int64 a1, __int64 a2, _BYTE *a3)
{
  _QWORD *v3; // r13
  __int64 v4; // r9
  int v8; // r14d
  unsigned int v9; // r8d
  _DWORD *v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // ebx
  unsigned __int64 v13; // rdx
  unsigned int v14; // ecx
  __int64 i; // rcx
  __int64 **v16; // rax
  __int64 *v17; // rdi
  unsigned int v18; // eax
  int v19; // eax
  size_t v20; // r8
  unsigned int v21; // eax
  int v22; // eax
  __int64 *v23; // r14
  unsigned int v24; // edx
  int v25; // edx
  _QWORD *j; // rax
  _DWORD *WakeUpPatternEntry; // rax
  _DWORD *v28; // r9
  unsigned int NewPatternEntryId; // eax
  __int64 v31; // [rsp+38h] [rbp-50h]
  unsigned int v32; // [rsp+90h] [rbp+8h]
  unsigned int v33; // [rsp+98h] [rbp+10h]
  int v34; // [rsp+A0h] [rbp+18h]
  int v35; // [rsp+A8h] [rbp+20h]

  v3 = 0LL;
  v4 = a2 + 72;
  v8 = 24;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    WPP_SF_qq(0x18u, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, a1, a2);
    v4 = a2 + 72;
  }
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  v9 = *(_DWORD *)(a2 + 48);
  *a3 = 1;
  if ( v9 < 0x18 )
    goto LABEL_10;
  v10 = *(_DWORD **)(a2 + 40);
  v11 = (unsigned int)v10[2];
  if ( !(_DWORD)v11 || (v13 = (unsigned int)v10[3], v13 < v11 + 24) || (v14 = v13 + v10[4], v14 < (unsigned int)v13) )
  {
    v12 = -1073676267;
    goto LABEL_43;
  }
  if ( v9 < v14 )
  {
    v8 = v13 + v10[4];
LABEL_10:
    *(_DWORD *)(a2 + 56) = v8;
    v12 = -1073676268;
    if ( (unsigned __int8)byte_1C00A025A >= 2u )
      WPP_SF_(0x1Au, &WPP_293c7713174a39067998d2cc62157da6_Traceguids);
    goto LABEL_43;
  }
  for ( i = v4; (*(_DWORD *)(i + 16) & 0x4000) != 0; i = *(_QWORD *)(i + 24) + 72LL )
    ;
  v16 = (__int64 **)(a1 + 960);
  v17 = *(__int64 **)(a1 + 960);
  v12 = -1073676267;
  v31 = *(_QWORD *)(i + 32);
  if ( !v17 )
  {
LABEL_22:
    v23 = 0LL;
    goto LABEL_23;
  }
  while ( 1 )
  {
    if ( v10[4] != *((_DWORD *)v17 + 16) || v10[2] != *((_DWORD *)v17 + 14) )
      goto LABEL_20;
    v18 = v10[3];
    v10[3] = 0;
    v32 = v18;
    v19 = v10[1];
    v10[1] = 0;
    v34 = v19;
    v20 = *((unsigned int *)v17 + 14) + 24LL;
    v21 = *((_DWORD *)v17 + 15);
    *((_DWORD *)v17 + 15) = 0;
    v33 = v21;
    v22 = *((_DWORD *)v17 + 13);
    *((_DWORD *)v17 + 13) = 0;
    v35 = v22;
    if ( !memcmp(v10, v17 + 6, v20) && !memcmp((char *)v10 + v32, (char *)v17 + v33 + 48, *((unsigned int *)v17 + 16)) )
      break;
    v10[3] = v32;
    v10[1] = v34;
    *((_DWORD *)v17 + 15) = v33;
    *((_DWORD *)v17 + 13) = v35;
LABEL_20:
    v17 = (__int64 *)*v17;
    if ( !v17 )
    {
      v16 = (__int64 **)(a1 + 960);
      goto LABEL_22;
    }
  }
  v23 = v17;
  v10[3] = v32;
  v10[1] = v34;
  *((_DWORD *)v17 + 15) = v33;
  *((_DWORD *)v17 + 13) = v35;
  if ( v17[3] != v31 )
  {
    v3 = v17;
    for ( j = v17 + 1; j; j = (_QWORD *)*j )
    {
      v3 = j - 1;
      if ( j[2] == v31 )
        goto LABEL_43;
    }
    v16 = (__int64 **)(a1 + 960);
LABEL_23:
    v24 = v10[1];
    if ( v24 > 0xFFFF && ndisPMPatternIdExist(v16, v24) )
    {
      if ( (unsigned __int8)byte_1C00A025D >= 2u )
        WPP_SF_D(0x19u, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, v25);
    }
    else
    {
      WakeUpPatternEntry = ndisCreateWakeUpPatternEntry(v10, *(_DWORD *)(a2 + 8));
      v28 = WakeUpPatternEntry;
      if ( WakeUpPatternEntry )
      {
        *((_QWORD *)WakeUpPatternEntry + 3) = v31;
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
        v12 = 0;
        *(_DWORD *)(a2 + 152) = NewPatternEntryId;
        v28[13] = v28[10];
        if ( v3 )
        {
          *a3 = 1;
          *((_QWORD *)v28 + 1) = v17 + 1;
        }
        else
        {
          *a3 = 0;
        }
      }
      else
      {
        v12 = -1073741670;
      }
    }
  }
LABEL_43:
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qdD(0x1Bu, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, a1, (unsigned __int8)*a3, v12);
  return v12;
}
