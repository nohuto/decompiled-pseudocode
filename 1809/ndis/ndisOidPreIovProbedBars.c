/*
 * XREFs of ndisOidPreIovProbedBars @ 0x1C00FA4B0
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0014FD0 (ndisGetOidSourceHandle.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 */

unsigned __int8 __fastcall ndisOidPreIovProbedBars(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  unsigned __int8 v4; // bl
  int v5; // eax
  unsigned __int64 v6; // rdx
  int v8; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_qq(0x49u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, v3, v1);
  v4 = 0;
  if ( *(_DWORD *)(v1 + 4) )
  {
    v5 = -1073741637;
    v4 = 1;
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_13;
  }
  *(_DWORD *)(a1 + 40) = 0;
  v6 = *(unsigned int *)(v1 + 48);
  if ( (unsigned int)v6 < 8 )
  {
    *(_DWORD *)(v1 + 56) = 8;
    v5 = -1073676268;
LABEL_7:
    *(_DWORD *)(a1 + 40) = v5;
    v4 = 1;
    goto LABEL_13;
  }
  if ( (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v1 + 40) + 4LL) + 24 < v6 )
  {
    v5 = -1073741811;
    goto LABEL_7;
  }
  if ( (_UNKNOWN *)ndisGetOidSourceHandle(v1) != &ndisIntReqGeneric )
  {
    v5 = -1073741637;
    goto LABEL_7;
  }
  v5 = 0;
LABEL_13:
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
  {
    v8 = v5;
    WPP_SF_qdD(0x4Au, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, v3, v4, v8);
  }
  return v4;
}
