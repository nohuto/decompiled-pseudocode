/*
 * XREFs of ndisOidPreQosCapabilities @ 0x1C006DD90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001AD38 (WPP_RECORDER_SF_qDD_ea_1C001AD38.c)
 */

char __fastcall ndisOidPreQosCapabilities(__int64 *a1)
{
  __int64 v1; // rbp
  int v2; // ebx
  __int64 v3; // r14
  char v4; // di
  __int64 v6; // rax
  __int64 v7; // rcx
  char v9[4]; // [rsp+38h] [rbp-20h]

  v1 = a1[4];
  v2 = 0;
  v3 = *a1;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      111,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v3,
      v1);
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) >= 0x14u )
  {
    if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
      goto LABEL_6;
    if ( !v3 )
      goto LABEL_13;
    v6 = *(_DWORD *)(v1 + 32) == -66781183 ? *(_QWORD *)(v3 + 4904) : *(_QWORD *)(v3 + 4912);
    if ( !v6 )
    {
LABEL_6:
      v2 = -1073741637;
    }
    else
    {
      v7 = *(_QWORD *)(v1 + 40);
      *(_OWORD *)v7 = *(_OWORD *)v6;
      *(_DWORD *)(v7 + 16) = *(_DWORD *)(v6 + 16);
      *(_DWORD *)(v1 + 52) = 20;
    }
  }
  else
  {
    *(_DWORD *)(v1 + 56) = 20;
    v2 = -1073676268;
  }
  v4 = 1;
  *((_DWORD *)a1 + 10) = v2;
LABEL_13:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = v2;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x70u,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v3,
      v4,
      *(_DWORD *)v9);
  }
  return v4;
}
