/*
 * XREFs of ndisOidPreMacAddress @ 0x1C00E3C10
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 */

char __fastcall ndisOidPreMacAddress(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  char v4; // di
  __int64 v5; // rdx
  unsigned int v6; // eax

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(0xBCu, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v1, v3);
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 16) )
      goto LABEL_10;
    *(_DWORD *)(a1 + 40) = 0;
    v5 = *(_QWORD *)(v1 + 4072);
    v6 = *(unsigned __int16 *)(v5 + 1124);
    if ( *(_DWORD *)(v3 + 48) < v6 )
    {
      *(_DWORD *)(v3 + 56) = v6;
      *(_DWORD *)(a1 + 40) = -1073676268;
      goto LABEL_10;
    }
    memmove(*(void **)(v3 + 40), (const void *)(v5 + 1126), *(unsigned __int16 *)(v5 + 1124));
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(v3 + 52) = *(unsigned __int16 *)(*(_QWORD *)(v1 + 4072) + 1124LL);
  }
  v4 = 1;
LABEL_10:
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qD(0xBDu, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v1, *(_DWORD *)(a1 + 40));
  return v4;
}
