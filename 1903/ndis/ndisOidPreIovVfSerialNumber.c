/*
 * XREFs of ndisOidPreIovVfSerialNumber @ 0x1C00B5250
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001AD38 (WPP_RECORDER_SF_qDD_ea_1C001AD38.c)
 */

char __fastcall ndisOidPreIovVfSerialNumber(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  char v4; // bl
  __int64 v5; // rax
  _DWORD *v6; // rcx
  char v8[4]; // [rsp+38h] [rbp-20h]

  v1 = a1[4];
  v3 = *a1;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      26,
      79,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      v3,
      v1);
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
    goto LABEL_11;
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) >= 8u )
  {
    if ( !v3 )
      goto LABEL_13;
    v5 = *(_QWORD *)(v3 + 4608);
    if ( v5 && (*(_BYTE *)(v5 + 8) & 5) == 5 && *(_QWORD *)(v3 + 4864) )
    {
      v6 = *(_DWORD **)(v1 + 40);
      *v6 = 524672;
      v6[1] = *(_DWORD *)(v3 + 4872);
      *(_DWORD *)(v1 + 52) = 8;
      goto LABEL_12;
    }
LABEL_11:
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_12;
  }
  *(_DWORD *)(v1 + 56) = 8;
  *((_DWORD *)a1 + 10) = -1073676268;
LABEL_12:
  v4 = 1;
LABEL_13:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x50u,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      v3,
      v4,
      *(_DWORD *)v8);
  }
  return v4;
}
