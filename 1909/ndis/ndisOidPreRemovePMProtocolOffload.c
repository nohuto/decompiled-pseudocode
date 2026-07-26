/*
 * XREFs of ndisOidPreRemovePMProtocolOffload @ 0x1C00235C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ndisFindPatternEntry @ 0x1C002388C (ndisFindPatternEntry.c)
 *     ndisGetOidSourceHandle @ 0x1C0035154 (ndisGetOidSourceHandle.c)
 */

char __fastcall ndisOidPreRemovePMProtocolOffload(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  char v4; // bl
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // r10d
  char v9; // r8
  unsigned int *v10; // rax
  unsigned int v11; // r9d
  __int64 v12; // rcx
  __int64 OidSourceHandle; // rax
  int v15; // r9d
  __int64 *v16; // rcx
  __int64 v17; // r10
  __int64 *v18; // rdx
  bool v19; // zf
  _QWORD *v20; // rdx
  _QWORD *v21; // rax
  _QWORD *v22; // rcx
  char v23; // al
  __int64 v24; // rcx
  unsigned __int8 v25; // al
  __int64 v26; // rdx
  unsigned __int8 v27; // al

  v1 = a1[4];
  v3 = a1[3];
  v4 = 0;
  v5 = *a1;
  v6 = v3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      103,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      v5,
      v1);
    v6 = a1[3];
  }
  if ( v6
    && (v24 = *(_QWORD *)(v6 + 24), v25 = *(_BYTE *)(v24 + 56), v25 <= 6u)
    && (v25 != 6 || *(_BYTE *)(v24 + 57) < 0x14u)
    || (v7 = a1[1], v8 = 0x4000, v7)
    && (*(_DWORD *)(v1 + 88) & 0x4000) == 0
    && (v26 = *(_QWORD *)(v7 + 16), v27 = *(_BYTE *)(v26 + 100), v27 <= 6u)
    && (v27 != 6 || *(_BYTE *)(v26 + 101) < 0x14u) )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    v4 = 1;
    goto LABEL_12;
  }
  v9 = 1;
  if ( *(_DWORD *)(v1 + 4) != 1 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_37;
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < 4u )
  {
    *(_DWORD *)(v1 + 56) = 4;
    *((_DWORD *)a1 + 10) = -1073676268;
    goto LABEL_37;
  }
  v10 = *(unsigned int **)(v1 + 40);
  *(_DWORD *)(v1 + 56) = 0;
  v11 = *v10;
  if ( a1[3] && !ndisFindPatternEntry(v3 + 512, v11) )
    goto LABEL_30;
  v12 = a1[1];
  if ( v12 )
  {
    if ( (v8 & *(_DWORD *)(v1 + 88)) == 0 && !ndisFindPatternEntry(v12 + 728, v11) )
      goto LABEL_30;
  }
  if ( !*a1 )
    goto LABEL_12;
  OidSourceHandle = ndisGetOidSourceHandle(v1);
  v16 = *(__int64 **)(v5 + 976);
  v17 = OidSourceHandle;
  if ( !v16 )
    goto LABEL_30;
  do
  {
    v18 = v16;
    if ( *((_DWORD *)v16 + 49) == v15 )
      break;
    v16 = (__int64 *)*v16;
    v18 = 0LL;
  }
  while ( v16 );
  if ( !v18 )
    goto LABEL_30;
  v19 = v18 + 1 == 0LL;
  v20 = v18 + 1;
  v21 = v20;
  if ( v19 )
    goto LABEL_30;
  do
  {
    v22 = v21 - 1;
    if ( v21[2] == v17 )
      break;
    v21 = (_QWORD *)*v21;
    v22 = 0LL;
  }
  while ( v21 );
  if ( !v22 )
  {
LABEL_30:
    *((_DWORD *)a1 + 10) = -1073676261;
LABEL_37:
    v4 = v9;
    goto LABEL_12;
  }
  v23 = 0;
  if ( *v20 )
    v23 = v9;
  v4 = v23;
LABEL_12:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      104,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      *a1,
      *((_DWORD *)a1 + 10));
  return v4;
}
