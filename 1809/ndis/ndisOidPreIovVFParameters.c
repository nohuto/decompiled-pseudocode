/*
 * XREFs of ndisOidPreIovVFParameters @ 0x1C00FAA20
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisIovFindVFByVFId @ 0x1C00F904C (ndisIovFindVFByVFId.c)
 */

unsigned __int8 __fastcall ndisOidPreIovVFParameters(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbp
  int v4; // ebx
  __int64 v5; // rax
  unsigned __int8 v6; // di
  __int64 v7; // rcx
  __int64 v8; // r10
  __int64 *VFByVFId; // rax
  void *v10; // r10

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_qq(0x27u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, v3, v1);
  if ( *(_DWORD *)(v1 + 4) != 12 )
    goto LABEL_17;
  v4 = 0;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x660u )
  {
    v4 = -1073676268;
LABEL_8:
    *(_DWORD *)(v1 + 68) = 1632;
LABEL_18:
    *(_DWORD *)(a1 + 40) = v4;
    goto LABEL_19;
  }
  if ( *(_DWORD *)(v1 + 52) < 0x660u )
  {
    v4 = -1073676266;
    goto LABEL_8;
  }
  v5 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
  {
    v6 = 0;
    goto LABEL_20;
  }
  v7 = *(_QWORD *)(v5 + 4648);
  if ( !v7 || !*(_QWORD *)(v5 + 3592) || (*(_BYTE *)(v7 + 8) & 3) != 3 )
  {
LABEL_17:
    v4 = -1073741637;
    goto LABEL_18;
  }
  v8 = *(_QWORD *)(v1 + 40);
  *(_DWORD *)(v1 + 64) = 1632;
  VFByVFId = ndisIovFindVFByVFId(v3, *(_WORD *)(v8 + 1626));
  if ( VFByVFId )
  {
    memmove(v10, VFByVFId + 12, 0x660uLL);
    *(_DWORD *)(v1 + 60) = 1632;
    goto LABEL_18;
  }
  *(_DWORD *)(a1 + 40) = -1073741811;
  v4 = -1073741811;
LABEL_19:
  v6 = 1;
LABEL_20:
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_qdD(0x28u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, v3, v6, v4);
  return v6;
}
