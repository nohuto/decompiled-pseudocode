/*
 * XREFs of ndisOidPreIovPfLuid @ 0x1C00FA3C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 */

unsigned __int8 __fastcall ndisOidPreIovPfLuid(__int64 a1)
{
  __int64 v1; // rsi
  _QWORD *v3; // rbp
  unsigned __int8 v4; // bl
  __int64 v5; // rax
  __int64 v6; // rcx
  int v8; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD **)a1;
  v4 = 0;
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_qq(0x4Du, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, v3, v1);
  if ( *(_DWORD *)(v1 + 4) )
    goto LABEL_11;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) >= 0xCu )
  {
    if ( !v3 )
      goto LABEL_13;
    v5 = v3[581];
    if ( v5 && v3[449] && (*(_BYTE *)(v5 + 8) & 3) == 3 )
    {
      v6 = *(_QWORD *)(v1 + 40);
      *(_DWORD *)v6 = 786816;
      *(_QWORD *)(v6 + 4) = *(_QWORD *)((char *)v3 + 4916);
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
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
  {
    v8 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x4Eu, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, (__int64)v3, v4, v8);
  }
  return v4;
}
