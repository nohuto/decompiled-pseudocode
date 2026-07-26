/*
 * XREFs of ndisPreRemoveMiniportWakeUpPattern @ 0x1C0075894
 * Callers:
 *     ndisOidPrePMRemoveWOLPattern @ 0x1C0074680 (ndisOidPrePMRemoveWOLPattern.c)
 *     ndisOidPreRemoveWakeUpPattern @ 0x1C0074AA0 (ndisOidPreRemoveWakeUpPattern.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     memcmp @ 0x1C0040FC0 (memcmp.c)
 */

bool __fastcall ndisPreRemoveMiniportWakeUpPattern(__int64 a1, __int64 a2)
{
  char v2; // r15
  __int64 v3; // rbp
  bool v4; // si
  __int64 v6; // rcx
  int v7; // edx
  __int64 *v8; // rbx
  _DWORD *v9; // rdi
  __int64 v10; // r12
  const void *v11; // rcx
  __int64 v12; // r13
  int v13; // eax
  __int64 v14; // r8
  _QWORD *i; // rax
  char v17; // [rsp+30h] [rbp-48h]
  int v18; // [rsp+80h] [rbp+8h]
  int v19; // [rsp+88h] [rbp+10h]
  __int64 v20; // [rsp+90h] [rbp+18h]

  v2 = 0;
  v3 = a2;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      33,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1,
      v17);
  }
  v6 = v3 + 72;
  v7 = 0x4000;
  while ( (*(_DWORD *)(v6 + 16) & 0x4000) != 0 )
    v6 = *(_QWORD *)(v6 + 24) + 72LL;
  v8 = *(__int64 **)(a1 + 960);
  v20 = *(_QWORD *)(v6 + 32);
  while ( 1 )
  {
    if ( !v8 )
      goto LABEL_24;
    v9 = *(_DWORD **)(v3 + 40);
    if ( v9[4] == *((_DWORD *)v8 + 16) && v9[2] == *((_DWORD *)v8 + 14) )
      break;
LABEL_12:
    v8 = (__int64 *)*v8;
  }
  v10 = (unsigned int)v9[3];
  v11 = *(const void **)(v3 + 40);
  v12 = *((unsigned int *)v8 + 15);
  v18 = v9[1];
  v13 = *((_DWORD *)v8 + 13);
  v9[3] = 0;
  *((_DWORD *)v8 + 15) = 0;
  v9[1] = 0;
  v14 = *((unsigned int *)v8 + 14);
  *((_DWORD *)v8 + 13) = 0;
  v19 = v13;
  if ( memcmp(v11, v8 + 6, v14 + 24) || memcmp((char *)v9 + v10, (char *)v8 + v12 + 48, *((unsigned int *)v8 + 16)) )
  {
    v9[3] = v10;
    *((_DWORD *)v8 + 15) = v12;
    goto LABEL_12;
  }
  if ( v20 == v8[3] )
  {
    v2 = 1;
    v4 = v8[1] != 0;
  }
  else
  {
    for ( i = (_QWORD *)v8[1]; i; i = (_QWORD *)*i )
    {
      if ( i[2] == v20 )
      {
        v2 = 1;
        v4 = 1;
        break;
      }
    }
  }
  v9[3] = v10;
  *((_DWORD *)v8 + 15) = v12;
  v9[1] = v18;
  *((_DWORD *)v8 + 13) = v19;
  if ( !v2 )
LABEL_24:
    v4 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      11,
      34,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1,
      v3);
  }
  return v4;
}
