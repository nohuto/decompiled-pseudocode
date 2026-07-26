/*
 * XREFs of ndisOidPostPMParameters @ 0x1C0024F90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisXlateWakeUpEnableToPMParametersOid @ 0x1C004BD38 (ndisXlateWakeUpEnableToPMParametersOid.c)
 */

void __fastcall ndisOidPostPMParameters(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int128 *v5; // rax
  __int64 v6; // rcx
  __int128 v7; // xmm0

  v1 = a1[4];
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(52LL, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, *a1, v1);
  if ( *(_DWORD *)(v1 + 4) == 1 && *(_DWORD *)(v1 + 48) >= 0x10u )
  {
    if ( *(_DWORD *)(v1 + 32) == -50265850 )
      ndisXlateWakeUpEnableToPMParametersOid(v1);
    v3 = a1[3];
    if ( v3 )
    {
      v5 = (__int128 *)(v3 + 308);
    }
    else
    {
      v4 = a1[1];
      if ( !v4 || (*(_DWORD *)(v1 + 88) & 0x4000) != 0 )
        goto LABEL_10;
      v5 = (__int128 *)(v4 + 744);
    }
    v6 = *(_QWORD *)(v1 + 40);
    v7 = *v5;
    if ( *(_DWORD *)(v1 + 48) < 0x14u )
    {
      *(_OWORD *)v6 = v7;
    }
    else
    {
      *(_OWORD *)v6 = v7;
      *(_DWORD *)(v6 + 16) = *((_DWORD *)v5 + 4);
    }
  }
LABEL_10:
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(53LL, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, *a1, v1);
}
