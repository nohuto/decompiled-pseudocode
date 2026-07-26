/*
 * XREFs of ndisPostRemoveMiniportWakeUpPattern @ 0x1C007533C
 * Callers:
 *     ndisOidPostPMRemoveWOLPattern @ 0x1C0073F40 (ndisOidPostPMRemoveWOLPattern.c)
 *     ndisPostSetRemoveWakeUpPattern @ 0x1C0075770 (ndisPostSetRemoveWakeUpPattern.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     memcmp @ 0x1C0041250 (memcmp.c)
 */

_UNKNOWN **__fastcall ndisPostRemoveMiniportWakeUpPattern(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r15
  char v6; // r14
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  _DWORD *v9; // rbx
  _DWORD *v10; // rsi
  __int64 v11; // r12
  const void *v12; // rcx
  int v13; // eax
  __int64 v14; // r8
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // r8
  _UNKNOWN **result; // rax
  char v22; // [rsp+30h] [rbp-58h]
  int v23; // [rsp+40h] [rbp-48h]
  __int64 v24; // [rsp+48h] [rbp-40h]
  unsigned int v25; // [rsp+A0h] [rbp+18h]
  int v26; // [rsp+A8h] [rbp+20h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v22 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      37,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1,
      v22,
      a3);
  }
  if ( !a3 )
  {
    v6 = 0;
    v7 = v4 + 72;
    LODWORD(a2) = 0x4000;
    while ( (*(_DWORD *)(v7 + 16) & 0x4000) != 0 )
      v7 = *(_QWORD *)(v7 + 24) + 72LL;
    v8 = 0LL;
    v9 = *(_DWORD **)(a1 + 960);
    v24 = *(_QWORD *)(v7 + 32);
    while ( v9 )
    {
      v10 = *(_DWORD **)(v4 + 40);
      if ( v10[4] == v9[16] && v10[2] == v9[14] )
      {
        v11 = (unsigned int)v9[15];
        v12 = *(const void **)(v4 + 40);
        v25 = v10[3];
        v26 = v10[1];
        v13 = v9[13];
        v10[1] = 0;
        v9[13] = 0;
        v10[3] = 0;
        v14 = (unsigned int)v9[14];
        v9[15] = 0;
        v23 = v13;
        if ( !memcmp(v12, v9 + 12, v14 + 24) && !memcmp((char *)v10 + v25, (char *)v9 + v11 + 48, (unsigned int)v9[16]) )
        {
          v15 = v9 + 2;
          if ( v24 == *((_QWORD *)v9 + 3) )
          {
            v16 = (_QWORD *)*v15;
            v6 = 1;
            if ( v16 )
            {
              v18 = v16 - 1;
              if ( v8 )
                *v8 = v18;
              else
                *(_QWORD *)(a1 + 960) = v18;
              *v18 = *(_QWORD *)v9;
            }
            else
            {
              v17 = *(_QWORD *)v9;
              if ( v8 )
                *v8 = v17;
              else
                *(_QWORD *)(a1 + 960) = v17;
            }
          }
          else
          {
            v9[15] = v11;
            v19 = (_QWORD *)*v15;
            if ( *v15 )
            {
              while ( 1 )
              {
                v20 = *v19;
                LODWORD(a2) = (_DWORD)v19 - 8;
                if ( v19[2] == v24 )
                  break;
                v15 = v19;
                v19 = (_QWORD *)*v19;
                if ( !v20 )
                  goto LABEL_31;
              }
              *v15 = v20;
              v6 = 1;
              if ( v19 )
                v9 = v19 - 1;
            }
          }
LABEL_31:
          v10[3] = v25;
          if ( v6 )
            ExFreePoolWithTag(v9, 0);
          break;
        }
        v10[3] = v25;
        v9[15] = v11;
        v10[1] = v26;
        v9[13] = v23;
      }
      v8 = v9;
      v9 = *(_DWORD **)v9;
    }
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    return (_UNKNOWN **)WPP_RECORDER_SF_qqL(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          a2,
                          11,
                          38,
                          (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
                          a1,
                          v4,
                          a3);
  }
  return result;
}
