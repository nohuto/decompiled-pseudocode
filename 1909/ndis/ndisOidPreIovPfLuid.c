/*
 * XREFs of ndisOidPreIovPfLuid @ 0x1C00B4740
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001AD38 (WPP_RECORDER_SF_qDD_ea_1C001AD38.c)
 */

char __fastcall ndisOidPreIovPfLuid(__int64 a1)
{
  __int64 v1; // rsi
  _QWORD *v3; // rbp
  char v4; // bl
  __int64 v5; // rax
  __int64 v6; // rcx
  char v8[4]; // [rsp+38h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD **)a1;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      26,
      77,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      (char)v3,
      v1);
  if ( *(_DWORD *)(v1 + 4) )
    goto LABEL_11;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) >= 0xCu )
  {
    if ( !v3 )
      goto LABEL_13;
    v5 = v3[576];
    if ( v5 && v3[446] && (*(_BYTE *)(v5 + 8) & 3) == 3 )
    {
      v6 = *(_QWORD *)(v1 + 40);
      *(_DWORD *)v6 = 786816;
      *(_QWORD *)(v6 + 4) = *(_QWORD *)((char *)v3 + 4876);
      *(_DWORD *)(v1 + 52) = 12;
      goto LABEL_12;
    }
LABEL_11:
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_12;
  }
  *(_DWORD *)(v1 + 56) = 12;
  *(_DWORD *)(a1 + 40) = -1073676268;
LABEL_12:
  v4 = 1;
LABEL_13:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = *(_DWORD *)(a1 + 40);
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x4Eu,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      (char)v3,
      v4,
      *(_DWORD *)v8);
  }
  return v4;
}
