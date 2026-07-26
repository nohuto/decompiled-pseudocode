/*
 * XREFs of ndisOidPreMaxLinkSpeed @ 0x1C00E3D70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 */

unsigned __int8 __fastcall ndisOidPreMaxLinkSpeed(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int8 v2; // bl
  __int64 v3; // rsi
  __int64 v5; // rax
  int v7; // [rsp+20h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 0;
  v3 = 0LL;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(0xC0u, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, 0LL, v1);
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 16);
    if ( v5 )
    {
      v3 = *(_QWORD *)(v5 + 32);
    }
    else if ( *(_QWORD *)a1 )
    {
      v3 = *(_QWORD *)a1;
    }
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v1 + 48) < 0x10u )
    {
      *(_DWORD *)(v1 + 56) = 16;
      *(_DWORD *)(a1 + 40) = -1073676268;
      goto LABEL_13;
    }
    *(_OWORD *)*(_QWORD *)(v1 + 40) = *(_OWORD *)(v3 + 3040);
    *(_DWORD *)(a1 + 40) = 0;
    *(_QWORD *)(v1 + 52) = 16LL;
  }
  v2 = 1;
LABEL_13:
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    v7 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0xC1u, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v3, v2, v7);
  }
  return v2;
}
