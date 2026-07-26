/*
 * XREFs of ndisOidPreIovGetVFVendorDeviceId @ 0x1C00F9EF0
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0014FD0 (ndisGetOidSourceHandle.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisIovFindVFByVFId @ 0x1C00F904C (ndisIovFindVFByVFId.c)
 */

unsigned __int8 __fastcall ndisOidPreIovGetVFVendorDeviceId(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  unsigned __int8 v4; // bl
  int v5; // eax
  int v6; // r8d
  int v8; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_qq(0x47u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, v3, v1);
  if ( *(_DWORD *)(v1 + 4) != 12 )
    goto LABEL_4;
  v4 = 0;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0xAu )
  {
    v5 = -1073676268;
LABEL_9:
    *(_DWORD *)(v1 + 68) = 10;
    *(_DWORD *)(a1 + 40) = v5;
    goto LABEL_14;
  }
  if ( *(_DWORD *)(v1 + 52) < 0xAu )
  {
    v5 = -1073676266;
    goto LABEL_9;
  }
  if ( (_UNKNOWN *)ndisGetOidSourceHandle(v1) != &ndisIntReqGeneric )
  {
LABEL_4:
    *(_DWORD *)(a1 + 40) = -1073741637;
LABEL_14:
    v4 = 1;
    goto LABEL_15;
  }
  if ( *(_QWORD *)a1 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 64LL) = v6;
    if ( !ndisIovFindVFByVFId(v3, *(_WORD *)(*(_QWORD *)(v1 + 40) + 4LL)) )
    {
      *(_DWORD *)(a1 + 40) = -1073741811;
      goto LABEL_14;
    }
  }
LABEL_15:
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
  {
    v8 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x48u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, v3, v4, v8);
  }
  return v4;
}
