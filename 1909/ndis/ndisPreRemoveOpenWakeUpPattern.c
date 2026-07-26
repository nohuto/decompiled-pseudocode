/*
 * XREFs of ndisPreRemoveOpenWakeUpPattern @ 0x1C0075C34
 * Callers:
 *     ndisOidPreRemoveWakeUpPattern @ 0x1C0074C70 (ndisOidPreRemoveWakeUpPattern.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     memcmp @ 0x1C0041250 (memcmp.c)
 */

char __fastcall ndisPreRemoveOpenWakeUpPattern(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  char v4; // bp
  __int64 *i; // rbx
  _DWORD *v6; // rdi
  int v7; // eax
  __int64 v8; // r15
  const void *v9; // rcx
  __int64 v10; // r12
  int v11; // r13d
  __int64 v12; // r8
  char v14; // [rsp+30h] [rbp-38h]
  int v15; // [rsp+70h] [rbp+8h]

  v2 = a2;
  v4 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      31,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1,
      v14);
  }
  for ( i = *(__int64 **)(a1 + 496); ; i = (__int64 *)*i )
  {
    if ( !i )
    {
      v4 = 0;
      goto LABEL_12;
    }
    v6 = *(_DWORD **)(v2 + 40);
    if ( v6[4] == *((_DWORD *)i + 16) && v6[2] == *((_DWORD *)i + 14) )
      break;
LABEL_9:
    ;
  }
  v7 = *((_DWORD *)i + 13);
  v8 = (unsigned int)v6[3];
  v9 = *(const void **)(v2 + 40);
  v10 = *((unsigned int *)i + 15);
  v6[3] = 0;
  v11 = v6[1];
  *((_DWORD *)i + 15) = 0;
  v6[1] = 0;
  v12 = *((unsigned int *)i + 14);
  *((_DWORD *)i + 13) = 0;
  v15 = v7;
  if ( memcmp(v9, i + 6, v12 + 24) || memcmp((char *)v6 + v8, (char *)i + v10 + 48, *((unsigned int *)i + 16)) )
  {
    v6[3] = v8;
    *((_DWORD *)i + 15) = v10;
    v6[1] = v11;
    *((_DWORD *)i + 13) = v15;
    goto LABEL_9;
  }
  v6[3] = v8;
  *((_DWORD *)i + 15) = v10;
  *(_DWORD *)(v2 + 152) = *((_DWORD *)i + 10);
LABEL_12:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      32,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1,
      v2,
      v4);
  }
  return v4;
}
