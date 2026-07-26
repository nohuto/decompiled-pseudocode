/*
 * XREFs of ndisOidPreGetPciDeviceCustomProperties @ 0x1C00E39E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 */

char __fastcall ndisOidPreGetPciDeviceCustomProperties(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  int v4; // edx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // eax
  int v9; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = 0LL;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(0xC2u, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, 0LL, v1);
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = 0;
    v4 = 52;
    if ( *(_DWORD *)(v1 + 48) >= 0x34u )
    {
      if ( *(_QWORD *)a1 )
      {
        v3 = *(_QWORD *)a1;
      }
      else
      {
        v5 = *(_QWORD *)(a1 + 16);
        if ( v5 )
          v3 = *(_QWORD *)(v5 + 32);
      }
      if ( *(_DWORD *)(v3 + 3744) == 5 )
      {
        v6 = *(_QWORD *)(v1 + 40);
        *(_OWORD *)v6 = *(_OWORD *)(v3 + 3360);
        *(_OWORD *)(v6 + 16) = *(_OWORD *)(v3 + 3376);
        *(_OWORD *)(v6 + 32) = *(_OWORD *)(v3 + 3392);
        *(_DWORD *)(v6 + 48) = *(_DWORD *)(v3 + 3408);
        v7 = 0;
      }
      else
      {
        v4 = 0;
        v7 = -1073741808;
      }
      *(_DWORD *)(a1 + 40) = v7;
      *(_DWORD *)(v1 + 52) = v4;
      *(_DWORD *)(v1 + 56) = 0;
    }
    else
    {
      *(_DWORD *)(v1 + 56) = 52;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
  }
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    v9 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0xC3u, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v3, 1, v9);
  }
  return 1;
}
