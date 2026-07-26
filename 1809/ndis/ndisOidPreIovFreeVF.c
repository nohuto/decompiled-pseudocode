/*
 * XREFs of ndisOidPreIovFreeVF @ 0x1C00F9DC0
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0014FD0 (ndisGetOidSourceHandle.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisIovFindVFByVFId @ 0x1C00F904C (ndisIovFindVFByVFId.c)
 */

unsigned __int8 __fastcall ndisOidPreIovFreeVF(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  unsigned __int8 v4; // bl
  int v5; // r11d
  __int64 v6; // rax
  _BYTE *OidSourceHandle; // rax
  __int64 *VFByVFId; // rax
  __int64 v9; // r10
  int v11; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_qq(0x23u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, v3, v1);
  v4 = 1;
  if ( *(_DWORD *)(v1 + 4) != 1 )
    goto LABEL_18;
  LOBYTE(v5) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0xAu )
  {
    *(_DWORD *)(v1 + 56) = 10;
    *(_DWORD *)(a1 + 40) = -1073676268;
    goto LABEL_19;
  }
  if ( !*(_QWORD *)a1 )
    goto LABEL_7;
  v6 = *(_QWORD *)(v3 + 4648);
  if ( v6
    && *(_QWORD *)(v3 + 3592)
    && (*(_BYTE *)(v6 + 8) & 3) == 3
    && (OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v1)) != 0LL
    && *OidSourceHandle == 18 )
  {
    VFByVFId = ndisIovFindVFByVFId(v3, *(_WORD *)(*(_QWORD *)(v1 + 40) + 8LL));
    if ( VFByVFId && VFByVFId[7] == v9 && *((_DWORD *)VFByVFId + 19) == v5 )
    {
      *(_QWORD *)(v1 + 144) = VFByVFId;
LABEL_7:
      v4 = v5;
      goto LABEL_19;
    }
    *(_DWORD *)(a1 + 40) = -1073741811;
  }
  else
  {
LABEL_18:
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
LABEL_19:
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
  {
    v11 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x24u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, v3, v4, v11);
  }
  return v4;
}
