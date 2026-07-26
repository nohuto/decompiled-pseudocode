/*
 * XREFs of ndisOidPreEnumeratePorts @ 0x1C00E3860
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     ndisEnumeratePorts @ 0x1C003D868 (ndisEnumeratePorts.c)
 */

char __fastcall ndisOidPreEnumeratePorts(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rbx
  char v4; // di
  __int64 v5; // rax
  int v6; // eax
  __int64 v8; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  v5 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    WPP_SF_qq(0xCFu, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v1, v3);
    v5 = *(_QWORD *)a1;
  }
  if ( v5 )
  {
    if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
      v6 = -1073676265;
    else
      v6 = ndisEnumeratePorts(
             v1,
             *(_DWORD **)(v3 + 40),
             *(_DWORD *)(v3 + 48),
             (unsigned int *)(v3 + 52),
             (unsigned int *)(v3 + 56));
    *(_DWORD *)(a1 + 40) = v6;
    v4 = 1;
  }
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    LODWORD(v8) = *(_DWORD *)(a1 + 40);
    WPP_SF_qqd(0xD0u, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v1, v3, v8);
  }
  return v4;
}
