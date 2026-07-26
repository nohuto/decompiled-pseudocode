/*
 * XREFs of ndisOpenIndicatePMCapabilities @ 0x1C0074CF4
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0015988 (ndisIndicateStatusInternal.c)
 * Callees:
 *     memset @ 0x1C0041440 (memset.c)
 *     ndisUpdatePMCurrentParameters @ 0x1C00773CC (ndisUpdatePMCurrentParameters.c)
 */

__int64 __fastcall ndisOpenIndicatePMCapabilities(__int64 a1, __int64 a2)
{
  unsigned int v4; // r8d
  __int64 result; // rax
  unsigned int v6; // edx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int64 v9; // xmm1_8
  int v10; // eax
  _OWORD v11[4]; // [rsp+20h] [rbp-48h] BYREF

  memset((char *)v11 + 1, 0, 0x3BuLL);
  v4 = *(_DWORD *)(a2 + 56);
  result = *(_QWORD *)(a2 + 48);
  if ( v4 >= 0x34 )
  {
    v6 = *(unsigned __int16 *)(result + 2);
    if ( v4 >= v6 )
    {
      v7 = *(_OWORD *)(result + 16);
      v11[0] = *(_OWORD *)result;
      v8 = *(_OWORD *)(result + 32);
      v11[1] = v7;
      v11[2] = v8;
      if ( v6 >= 0x3C )
      {
        v9 = *(_QWORD *)(result + 48);
        v10 = *(_DWORD *)(result + 56);
        *(_QWORD *)&v11[3] = v9;
        DWORD2(v11[3]) = v10;
      }
      else
      {
        LODWORD(v11[3]) = *(_DWORD *)(result + 48);
      }
      return ndisUpdatePMCurrentParameters(v11, a1 + 308);
    }
  }
  return result;
}
