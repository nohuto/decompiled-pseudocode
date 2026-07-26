/*
 * XREFs of ndisSetOpenAddWakeUpPattern @ 0x1C00E8A2C
 * Callers:
 *     ndisOidPreAddWakeUpPattern @ 0x1C00E6850 (ndisOidPreAddWakeUpPattern.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     memcmp @ 0x1C0026D30 (memcmp.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisCreateWakeUpPatternEntry @ 0x1C00E65E8 (ndisCreateWakeUpPatternEntry.c)
 */

__int64 __fastcall ndisSetOpenAddWakeUpPattern(__int64 a1, __int64 a2, _BYTE *a3)
{
  _BYTE *v3; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rax
  unsigned __int8 v8; // cl
  unsigned int v9; // edx
  int v10; // r14d
  _DWORD *v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // r8
  unsigned int v14; // ecx
  __int64 *i; // rdi
  __int64 v16; // r12
  __int64 v17; // r13
  size_t v18; // r8
  _DWORD *WakeUpPatternEntry; // rcx

  v3 = a3;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(0x15u, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, a1, a2);
  v6 = 0;
  *v3 = 1;
  *(_DWORD *)(a2 + 56) = 0;
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_BYTE *)(v7 + 56);
  if ( v8 > 6u || v8 == 6 && *(_BYTE *)(v7 + 57) >= 0x14u )
  {
    v6 = -1073741637;
    goto LABEL_28;
  }
  v9 = *(_DWORD *)(a2 + 48);
  v10 = 24;
  if ( v9 < 0x18 )
    goto LABEL_13;
  v11 = *(_DWORD **)(a2 + 40);
  v12 = (unsigned int)v11[2];
  if ( !(_DWORD)v12 || (v13 = (unsigned int)v11[3], v13 < v12 + 24) || (v14 = v13 + v11[4], v14 < (unsigned int)v13) )
  {
    v6 = -1073676267;
    goto LABEL_28;
  }
  if ( v9 < v14 )
  {
    v10 = v13 + v11[4];
LABEL_13:
    *(_DWORD *)(a2 + 56) = v10;
    v6 = -1073676268;
    if ( (unsigned __int8)byte_1C00A025A >= 2u )
      WPP_SF_(0x16u, &WPP_293c7713174a39067998d2cc62157da6_Traceguids);
    goto LABEL_28;
  }
  *v11 = 0;
  for ( i = *(__int64 **)(a1 + 496); i; i = (__int64 *)*i )
  {
    if ( v11[4] == *((_DWORD *)i + 16) && v11[2] == *((_DWORD *)i + 14) )
    {
      v16 = (unsigned int)v11[3];
      v17 = *((unsigned int *)i + 15);
      v11[3] = 0;
      v18 = *((unsigned int *)i + 14) + 24LL;
      *((_DWORD *)i + 15) = 0;
      if ( !memcmp(v11, i + 6, v18) && !memcmp((char *)v11 + v16, (char *)i + v17 + 48, *((unsigned int *)i + 16)) )
      {
        v11[3] = v16;
        v6 = -1073676267;
        *((_DWORD *)i + 15) = v17;
        v3 = a3;
        goto LABEL_28;
      }
      v11[3] = v16;
      *((_DWORD *)i + 15) = v17;
    }
  }
  v3 = a3;
  WakeUpPatternEntry = ndisCreateWakeUpPatternEntry(v11, *(_DWORD *)(a2 + 8));
  if ( WakeUpPatternEntry )
  {
    *((_QWORD *)WakeUpPatternEntry + 3) = *(_QWORD *)(a2 + 104);
    *(_QWORD *)(a2 + 160) = WakeUpPatternEntry;
    *a3 = 0;
  }
  else
  {
    v6 = -1073741670;
  }
LABEL_28:
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qdD(0x17u, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, a1, (unsigned __int8)*v3, v6);
  return v6;
}
