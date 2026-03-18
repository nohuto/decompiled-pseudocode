/*
 * XREFs of ACPIModuleGetSpareProperties @ 0x1C00AC750
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIFreeDataBuffs @ 0x1C001D1E4 (AMLIFreeDataBuffs.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     ACPIEvaluateSpareDsm @ 0x1C00AC57C (ACPIEvaluateSpareDsm.c)
 *     ACPIQuerySpareDsm @ 0x1C00AC914 (ACPIQuerySpareDsm.c)
 */

__int64 __fastcall ACPIModuleGetSpareProperties(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rdx
  __int64 *v5; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  _WORD v10[28]; // [rsp+20h] [rbp-38h] BYREF
  char v11; // [rsp+60h] [rbp+8h] BYREF

  *a2 = 0;
  memset(v10, 0, 0x28uLL);
  v5 = AMLIGetNamedChild(*(__int64 **)(a1 + 712), 1297302623);
  if ( v5 )
  {
    if ( (int)ACPIQuerySpareDsm(a1, &v11) >= 0 && (v11 & 4) != 0 )
    {
      v8 = ACPIEvaluateSpareDsm((unsigned __int64 *)v5, 2u, 0LL, v10);
      AMLIDereferenceHandleEx((__int64)v5);
      if ( v8 >= 0 )
      {
        if ( v10[1] == 1 )
        {
          if ( (v10[8] & 1) != 0 )
            *a2 |= 1u;
          if ( (v10[8] & 2) != 0 )
            *a2 |= 4u;
          v8 = 0;
        }
        else
        {
          v8 = -1073741811;
        }
      }
    }
    else
    {
      v8 = -1073741637;
    }
  }
  else
  {
    v8 = -1073741275;
  }
  AMLIFreeDataBuffs((__int64)v10, v4, v6, v7);
  return (unsigned int)v8;
}
