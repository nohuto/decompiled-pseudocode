/*
 * XREFs of ndisOidPostMaxLookahead @ 0x1C0046B10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 */

void __fastcall ndisOidPostMaxLookahead(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx

  v1 = a1[4];
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(0x5Au, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, *a1, v1);
  v3 = *a1;
  if ( *a1 && (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) == 0 )
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) >= 4u )
    {
      *(_DWORD *)(v3 + 596) = **(_DWORD **)(v1 + 40);
      *(_DWORD *)(v1 + 52) = 4;
    }
    else
    {
      *(_DWORD *)(v1 + 56) = 4;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
  }
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(0x5Bu, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, *a1, v1);
}
