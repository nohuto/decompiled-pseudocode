/*
 * XREFs of ndisSetOpenAddWakeUpPattern @ 0x1C0076F9C
 * Callers:
 *     ndisOidPreAddWakeUpPattern @ 0x1C0074140 (ndisOidPreAddWakeUpPattern.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C00158A0 (WPP_RECORDER_SF_qdL.c)
 *     memcmp @ 0x1C0041250 (memcmp.c)
 *     ndisCreateWakeUpPatternEntry @ 0x1C0072F3C (ndisCreateWakeUpPatternEntry.c)
 */

__int64 __fastcall ndisSetOpenAddWakeUpPattern(__int64 a1, __int64 a2, char *a3)
{
  char *v3; // rdi
  __int64 v4; // rbp
  unsigned int v6; // ebx
  __int64 v7; // rax
  unsigned __int8 v8; // cl
  int v9; // r14d
  _DWORD *v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // r8
  unsigned int v13; // ecx
  __int64 *i; // rdi
  __int64 v15; // r12
  __int64 v16; // r13
  size_t v17; // r8
  _DWORD *WakeUpPatternEntry; // rcx
  char v20; // [rsp+30h] [rbp-38h]

  v3 = a3;
  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      21,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1,
      v20);
  }
  v6 = 0;
  *v3 = 1;
  *(_DWORD *)(v4 + 56) = 0;
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_BYTE *)(v7 + 56);
  if ( v8 > 6u || v8 == 6 && *(_BYTE *)(v7 + 57) >= 0x14u )
  {
    v6 = -1073741637;
  }
  else
  {
    LODWORD(a2) = *(_DWORD *)(v4 + 48);
    v9 = 24;
    if ( (unsigned int)a2 >= 0x18 )
    {
      v10 = *(_DWORD **)(v4 + 40);
      v11 = (unsigned int)v10[2];
      if ( !(_DWORD)v11 || (v12 = (unsigned int)v10[3], v12 < v11 + 24) || (v13 = v12 + v10[4], v13 < (unsigned int)v12) )
      {
LABEL_8:
        v6 = -1073676267;
        goto LABEL_28;
      }
      if ( (unsigned int)a2 >= v13 )
      {
        *v10 = 0;
        for ( i = *(__int64 **)(a1 + 496); i; i = (__int64 *)*i )
        {
          if ( v10[4] == *((_DWORD *)i + 16) && v10[2] == *((_DWORD *)i + 14) )
          {
            v15 = (unsigned int)v10[3];
            v16 = *((unsigned int *)i + 15);
            v10[3] = 0;
            v17 = *((unsigned int *)i + 14) + 24LL;
            *((_DWORD *)i + 15) = 0;
            if ( !memcmp(v10, i + 6, v17) && !memcmp((char *)v10 + v15, (char *)i + v16 + 48, *((unsigned int *)i + 16)) )
            {
              v10[3] = v15;
              *((_DWORD *)i + 15) = v16;
              v3 = a3;
              goto LABEL_8;
            }
            v10[3] = v15;
            *((_DWORD *)i + 15) = v16;
          }
        }
        v3 = a3;
        WakeUpPatternEntry = ndisCreateWakeUpPatternEntry(v10, *(_DWORD *)(v4 + 8));
        if ( WakeUpPatternEntry )
        {
          *((_QWORD *)WakeUpPatternEntry + 3) = *(_QWORD *)(v4 + 104);
          *(_QWORD *)(v4 + 160) = WakeUpPatternEntry;
          *a3 = 0;
        }
        else
        {
          v6 = -1073741670;
        }
        goto LABEL_28;
      }
      v9 = v12 + v10[4];
    }
    *(_DWORD *)(v4 + 56) = v9;
    v6 = -1073676268;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v6;
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      22,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids);
  }
LABEL_28:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0xBu,
      0x17u,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1,
      *v3,
      v6);
  return v6;
}
