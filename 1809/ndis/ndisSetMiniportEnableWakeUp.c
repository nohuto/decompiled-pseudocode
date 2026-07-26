/*
 * XREFs of ndisSetMiniportEnableWakeUp @ 0x1C00E896C
 * Callers:
 *     ndisPreSetPMParameters @ 0x1C00BBC64 (ndisPreSetPMParameters.c)
 *     ndisSetEnableWakeUp @ 0x1C00E8758 (ndisSetEnableWakeUp.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisSetMiniportEnableWakeUp(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v6; // edi
  unsigned int *v7; // rdx
  unsigned int v8; // ecx
  unsigned int v10; // [rsp+20h] [rbp-18h]

  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(0x12u, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, a1, a2);
  v6 = 0;
  *a3 = 1;
  if ( *(_DWORD *)(a2 + 48) >= 4u )
  {
    v7 = *(unsigned int **)(a2 + 40);
    v8 = *v7;
    if ( (*(_DWORD *)(a1 + 3896) & 0x100) != 0 )
    {
      v8 &= ~2u;
      *v7 = v8;
    }
    *a3 = 0;
    *v7 = v8 & 0xFFFFFFFB;
  }
  else
  {
    *(_DWORD *)(a2 + 52) = 0;
    v6 = -1073676268;
    *(_DWORD *)(a2 + 56) = 4;
  }
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    v10 = v6;
    WPP_SF_qqd(0x13u, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, a1, a2, v10);
  }
  return v6;
}
