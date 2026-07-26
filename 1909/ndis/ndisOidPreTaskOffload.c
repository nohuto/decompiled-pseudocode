/*
 * XREFs of ndisOidPreTaskOffload @ 0x1C006E930
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001808C (WPP_RECORDER_SF_qqLd.c)
 *     ndisAllocateOpenOffload @ 0x1C003BEBC (ndisAllocateOpenOffload.c)
 *     ndisPreTaskOffloadQuery @ 0x1C006EE08 (ndisPreTaskOffloadQuery.c)
 *     ndisPreTaskOffloadSet @ 0x1C006F024 (ndisPreTaskOffloadSet.c)
 */

char __fastcall ndisOidPreTaskOffload(__int64 *a1)
{
  __int64 v1; // r14
  __int64 v3; // rbp
  __int64 v4; // rsi
  char v5; // di
  int OpenOffload; // eax
  int v7; // ecx
  int v8; // ecx
  char v9; // al
  char v11[4]; // [rsp+40h] [rbp-28h]

  v1 = *a1;
  v3 = a1[4];
  v4 = a1[3];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      206,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v1,
      v4,
      v3);
  *((_DWORD *)a1 + 10) = -1073741637;
  v5 = 1;
  if ( (*(_DWORD *)(v3 + 88) & 0x20) != 0 )
  {
    if ( !*(_QWORD *)(*(_QWORD *)(v4 + 16) + 4096LL) )
      goto LABEL_15;
    if ( !*(_QWORD *)(v4 + 696) )
    {
      OpenOffload = ndisAllocateOpenOffload(v4);
      *((_DWORD *)a1 + 10) = OpenOffload;
      if ( OpenOffload )
      {
        *((_DWORD *)a1 + 10) = -1073741670;
        goto LABEL_15;
      }
    }
  }
  v7 = *(_DWORD *)(v3 + 4);
  if ( !v7 )
  {
LABEL_13:
    v9 = ndisPreTaskOffloadQuery(v4);
    goto LABEL_14;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    if ( v8 != 1 )
    {
      *((_DWORD *)a1 + 10) = -1073741637;
      goto LABEL_15;
    }
    goto LABEL_13;
  }
  v9 = ndisPreTaskOffloadSet(a1);
LABEL_14:
  v5 = v9;
LABEL_15:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xCFu,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v1,
      v4,
      v5,
      *(_DWORD *)v11);
  }
  return v5;
}
