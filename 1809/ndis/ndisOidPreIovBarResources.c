/*
 * XREFs of ndisOidPreIovBarResources @ 0x1C00F9630
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0014FD0 (ndisGetOidSourceHandle.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisIovFindVFByVFId @ 0x1C00F904C (ndisIovFindVFByVFId.c)
 */

unsigned __int8 __fastcall ndisOidPreIovBarResources(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  unsigned __int8 v4; // bl
  int v5; // eax
  unsigned int v6; // eax
  int v7; // ecx
  __int64 v8; // r8
  int v9; // r9d
  int v11; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_qq(0x4Bu, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, v3, v1);
  if ( *(_DWORD *)(v1 + 4) != 12 )
    goto LABEL_4;
  v4 = 0;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0xCu )
  {
    v5 = -1073676268;
LABEL_9:
    *(_DWORD *)(v1 + 68) = 12;
LABEL_10:
    *(_DWORD *)(a1 + 40) = v5;
    goto LABEL_22;
  }
  if ( *(_DWORD *)(v1 + 52) < 0xCu )
  {
    v5 = -1073676266;
    goto LABEL_9;
  }
  v6 = *(_DWORD *)(*(_QWORD *)(v1 + 40) + 8LL) + 20;
  *(_DWORD *)(a1 + 40) = 0;
  v7 = v6;
  if ( v6 < 0xC )
    v7 = 12;
  if ( *(_DWORD *)(v1 + 48) < 0xCu )
  {
    v5 = -1073676268;
LABEL_17:
    *(_DWORD *)(v1 + 68) = v7;
    goto LABEL_10;
  }
  if ( *(_DWORD *)(v1 + 52) < v6 )
  {
    v5 = -1073676266;
    goto LABEL_17;
  }
  if ( (_UNKNOWN *)ndisGetOidSourceHandle(v1) != &ndisIntReqGeneric )
  {
LABEL_4:
    *(_DWORD *)(a1 + 40) = -1073741637;
LABEL_22:
    v4 = 1;
    goto LABEL_23;
  }
  if ( *(_QWORD *)a1 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 64LL) = v9;
    if ( !ndisIovFindVFByVFId(v3, *(_WORD *)(v8 + 4)) )
    {
      *(_DWORD *)(a1 + 40) = -1073741811;
      goto LABEL_22;
    }
  }
LABEL_23:
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
  {
    v11 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x4Cu, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, v3, v4, v11);
  }
  return v4;
}
