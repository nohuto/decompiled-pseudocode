/*
 * XREFs of ndisOidPreRcvFilterGlobalParameters @ 0x1C0060600
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001808C (WPP_RECORDER_SF_qqLd.c)
 */

char __fastcall ndisOidPreRcvFilterGlobalParameters(__int64 *a1)
{
  __int64 v1; // rbp
  int v2; // ebx
  __int64 v3; // r14
  __int64 v5; // r12
  char v6; // di
  __int64 v7; // r15
  const struct _GUID *v8; // rdx
  int v9; // eax

  v1 = a1[4];
  v2 = 0;
  v3 = *a1;
  v5 = a1[3];
  v6 = 0;
  v7 = *(_QWORD *)(v1 + 40);
  v8 = &WPP_618aa347117e3c7f045079f88f1cf08e_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v8,
      11,
      12,
      (struct _GUID *)&WPP_618aa347117e3c7f045079f88f1cf08e_Traceguids,
      v3,
      v5,
      v1);
  }
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
    goto LABEL_4;
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x10u )
  {
    *(_DWORD *)(v1 + 56) = 16;
    v2 = -1073676268;
    goto LABEL_13;
  }
  if ( !v3 )
  {
    v6 = 0;
    goto LABEL_14;
  }
  if ( !*(_QWORD *)(v3 + 3536) )
  {
LABEL_4:
    v2 = -1073741637;
LABEL_13:
    *((_DWORD *)a1 + 10) = v2;
    v6 = 1;
    goto LABEL_14;
  }
  v9 = *(_DWORD *)(v1 + 4);
  if ( v9 == 2 || !v9 )
  {
    *(_QWORD *)v7 = 1048960LL;
    *(_DWORD *)(v7 + 12) = *(_DWORD *)(v3 + 3532);
    *(_DWORD *)(v7 + 8) = *(_DWORD *)(v3 + 3528);
    *(_DWORD *)(v1 + 52) = 16;
    goto LABEL_13;
  }
LABEL_14:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xDu,
      (struct _GUID *)&WPP_618aa347117e3c7f045079f88f1cf08e_Traceguids,
      v3,
      v5,
      v6,
      v2);
  return v6;
}
