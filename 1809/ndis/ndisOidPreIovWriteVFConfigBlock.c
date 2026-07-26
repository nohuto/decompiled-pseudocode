/*
 * XREFs of ndisOidPreIovWriteVFConfigBlock @ 0x1C00FAFA0
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0014FD0 (ndisGetOidSourceHandle.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisIovFindVFByVFId @ 0x1C00F904C (ndisIovFindVFByVFId.c)
 */

unsigned __int8 __fastcall ndisOidPreIovWriteVFConfigBlock(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  unsigned __int8 v4; // bl
  unsigned int v5; // r8d
  int v6; // r8d
  __int64 v7; // r9
  __int64 v8; // r10
  int v10; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_qq(0x41u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, v3, v1);
  v4 = 1;
  if ( *(_DWORD *)(v1 + 4) != 1 )
  {
LABEL_4:
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_15;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) >= 0x14u )
  {
    v5 = *(_DWORD *)(*(_QWORD *)(v1 + 40) + 12LL) + *(_DWORD *)(*(_QWORD *)(v1 + 40) + 16LL);
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v1 + 48) >= v5 )
    {
      if ( (_UNKNOWN *)ndisGetOidSourceHandle(v1) == &ndisIntReqGeneric )
      {
        if ( *(_QWORD *)a1 == v8
          || (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 52LL) = v6, ndisIovFindVFByVFId(v3, *(_WORD *)(v7 + 4))) )
        {
          v4 = v8;
        }
        else
        {
          *(_DWORD *)(a1 + 40) = -1073741811;
        }
        goto LABEL_15;
      }
      goto LABEL_4;
    }
    *(_DWORD *)(v1 + 56) = v5;
  }
  else
  {
    *(_DWORD *)(v1 + 56) = 20;
  }
  *(_DWORD *)(a1 + 40) = -1073676268;
LABEL_15:
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
  {
    v10 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x42u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, v3, v4, v10);
  }
  return v4;
}
