/*
 * XREFs of ndisPostRemoveMiniportWakeUpPattern @ 0x1C004B28C
 * Callers:
 *     ndisOidPostPMRemoveWOLPattern @ 0x1C004AE60 (ndisOidPostPMRemoveWOLPattern.c)
 *     ndisPostSetRemoveWakeUpPattern @ 0x1C004B670 (ndisPostSetRemoveWakeUpPattern.c)
 * Callees:
 *     memcmp @ 0x1C0026D30 (memcmp.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 */

void __fastcall ndisPostRemoveMiniportWakeUpPattern(__int64 a1, __int64 a2, int a3)
{
  char v6; // r14
  __int64 i; // rcx
  _QWORD *v8; // rdi
  _DWORD *v9; // rbx
  _DWORD *v10; // rsi
  __int64 v11; // r13
  const void *v12; // rcx
  int v13; // eax
  __int64 v14; // r8
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // r8
  __int64 v21; // [rsp+20h] [rbp-58h]
  int v22; // [rsp+30h] [rbp-48h]
  __int64 v23; // [rsp+38h] [rbp-40h]
  unsigned int v24; // [rsp+90h] [rbp+18h]
  int v25; // [rsp+98h] [rbp+20h]

  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqd(0x25u, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, a1, a2, a3);
  if ( !a3 )
  {
    v6 = 0;
    for ( i = a2 + 72; (*(_DWORD *)(i + 16) & 0x4000) != 0; i = *(_QWORD *)(i + 24) + 72LL )
      ;
    v8 = 0LL;
    v9 = *(_DWORD **)(a1 + 960);
    v23 = *(_QWORD *)(i + 32);
    while ( v9 )
    {
      v10 = *(_DWORD **)(a2 + 40);
      if ( v10[4] == v9[16] && v10[2] == v9[14] )
      {
        v11 = (unsigned int)v9[15];
        v12 = *(const void **)(a2 + 40);
        v24 = v10[3];
        v25 = v10[1];
        v13 = v9[13];
        v10[1] = 0;
        v9[13] = 0;
        v10[3] = 0;
        v14 = (unsigned int)v9[14];
        v9[15] = 0;
        v22 = v13;
        if ( !memcmp(v12, v9 + 12, v14 + 24) && !memcmp((char *)v10 + v24, (char *)v9 + v11 + 48, (unsigned int)v9[16]) )
        {
          v15 = v9 + 2;
          if ( v23 == *((_QWORD *)v9 + 3) )
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
                if ( v19[2] == v23 )
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
          v10[3] = v24;
          if ( v6 )
            ExFreePoolWithTag(v9, 0);
          break;
        }
        v10[3] = v24;
        v9[15] = v11;
        v10[1] = v25;
        v9[13] = v22;
      }
      v8 = v9;
      v9 = *(_DWORD **)v9;
    }
  }
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    LODWORD(v21) = a3;
    WPP_SF_qqd(0x26u, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, a1, a2, v21);
  }
}
