/*
 * XREFs of ndisOidPreIovCaps @ 0x1C00F9770
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 */

unsigned __int8 __fastcall ndisOidPreIovCaps(__int64 a1)
{
  __int64 v1; // r14
  int v2; // ebx
  __int64 v3; // rbp
  unsigned __int8 v4; // di
  __int64 v6; // rax
  __int64 v7; // rcx
  int v9; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)a1;
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_qq(0x17u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, v1, v3);
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v3 + 48) >= 0xCu )
  {
    if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
      goto LABEL_6;
    if ( !v1 )
      goto LABEL_13;
    v6 = *(_DWORD *)(v3 + 32) == 66121 ? *(_QWORD *)(v1 + 4640) : *(_QWORD *)(v1 + 4648);
    if ( !v6 )
    {
LABEL_6:
      v2 = -1073741637;
    }
    else
    {
      v7 = *(_QWORD *)(v3 + 40);
      *(_QWORD *)v7 = *(_QWORD *)v6;
      *(_DWORD *)(v7 + 8) = *(_DWORD *)(v6 + 8);
      *(_DWORD *)(v3 + 52) = 12;
    }
  }
  else
  {
    *(_DWORD *)(v3 + 56) = 12;
    v2 = -1073676268;
  }
  *(_DWORD *)(a1 + 40) = v2;
  v4 = 1;
LABEL_13:
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
  {
    v9 = v2;
    WPP_SF_qdD(0x18u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, v1, v4, v9);
  }
  return v4;
}
