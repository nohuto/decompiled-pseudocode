/*
 * XREFs of ndisPreRemoveMiniportWakeUpPattern @ 0x1C00E7820
 * Callers:
 *     ndisOidPrePMRemoveWOLPattern @ 0x1C00E6E80 (ndisOidPrePMRemoveWOLPattern.c)
 *     ndisOidPreRemoveWakeUpPattern @ 0x1C00E7220 (ndisOidPreRemoveWakeUpPattern.c)
 * Callees:
 *     memcmp @ 0x1C0026D30 (memcmp.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 */

bool __fastcall ndisPreRemoveMiniportWakeUpPattern(__int64 a1, __int64 a2)
{
  char v2; // r15
  bool v4; // si
  __int64 i; // rcx
  __int64 *v7; // rbx
  _DWORD *v8; // rdi
  __int64 v9; // r12
  const void *v10; // rcx
  __int64 v11; // r13
  int v12; // eax
  __int64 v13; // r8
  _QWORD *j; // rax
  int v16; // [rsp+60h] [rbp+8h]
  int v17; // [rsp+68h] [rbp+10h]
  __int64 v18; // [rsp+70h] [rbp+18h]

  v2 = 0;
  v4 = 0;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(0x21u, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, a1, a2);
  for ( i = a2 + 72; (*(_DWORD *)(i + 16) & 0x4000) != 0; i = *(_QWORD *)(i + 24) + 72LL )
    ;
  v7 = *(__int64 **)(a1 + 960);
  v18 = *(_QWORD *)(i + 32);
  while ( 1 )
  {
    if ( !v7 )
      goto LABEL_24;
    v8 = *(_DWORD **)(a2 + 40);
    if ( v8[4] == *((_DWORD *)v7 + 16) && v8[2] == *((_DWORD *)v7 + 14) )
      break;
LABEL_12:
    v7 = (__int64 *)*v7;
  }
  v9 = (unsigned int)v8[3];
  v10 = *(const void **)(a2 + 40);
  v11 = *((unsigned int *)v7 + 15);
  v16 = v8[1];
  v12 = *((_DWORD *)v7 + 13);
  v8[3] = 0;
  *((_DWORD *)v7 + 15) = 0;
  v8[1] = 0;
  v13 = *((unsigned int *)v7 + 14);
  *((_DWORD *)v7 + 13) = 0;
  v17 = v12;
  if ( memcmp(v10, v7 + 6, v13 + 24) || memcmp((char *)v8 + v9, (char *)v7 + v11 + 48, *((unsigned int *)v7 + 16)) )
  {
    v8[3] = v9;
    *((_DWORD *)v7 + 15) = v11;
    goto LABEL_12;
  }
  if ( v18 == v7[3] )
  {
    v2 = 1;
    v4 = v7[1] != 0;
  }
  else
  {
    for ( j = (_QWORD *)v7[1]; j; j = (_QWORD *)*j )
    {
      if ( j[2] == v18 )
      {
        v2 = 1;
        v4 = 1;
        break;
      }
    }
  }
  v8[3] = v9;
  *((_DWORD *)v7 + 15) = v11;
  v8[1] = v16;
  *((_DWORD *)v7 + 13) = v17;
  if ( !v2 )
LABEL_24:
    v4 = 1;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(0x22u, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, a1, a2);
  return v4;
}
