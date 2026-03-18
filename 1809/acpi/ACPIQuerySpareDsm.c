/*
 * XREFs of ACPIQuerySpareDsm @ 0x1C00AC914
 * Callers:
 *     ACPIInternalSetSpare @ 0x1C00994C8 (ACPIInternalSetSpare.c)
 *     ACPIModuleGetSpareProperties @ 0x1C00AC750 (ACPIModuleGetSpareProperties.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIFreeDataBuffs @ 0x1C001D1E4 (AMLIFreeDataBuffs.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     ACPIEvaluateSpareDsm @ 0x1C00AC57C (ACPIEvaluateSpareDsm.c)
 */

__int64 __fastcall ACPIQuerySpareDsm(__int64 a1, void *a2)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  int v9; // ebx
  size_t v10; // r8
  size_t v12[7]; // [rsp+20h] [rbp-38h] BYREF

  memset(v12, 0, 0x28uLL);
  v4 = AMLIGetNamedChild(*(__int64 **)(a1 + 712), 1297302623);
  v8 = (__int64)v4;
  if ( v4 )
  {
    v9 = ACPIEvaluateSpareDsm((unsigned __int64 *)v4, 0, 0LL, v12);
    AMLIDereferenceHandleEx(v8);
    if ( v9 >= 0 )
    {
      if ( WORD1(v12[0]) == 3 && (v5 = v12[4]) != 0 )
      {
        v10 = 4LL;
        if ( LODWORD(v12[3]) < 4 )
          v10 = LODWORD(v12[3]);
        memmove(a2, (const void *)v12[4], v10);
        v9 = 0;
      }
      else
      {
        v9 = -1073741701;
      }
    }
  }
  else
  {
    v9 = -1073741275;
  }
  AMLIFreeDataBuffs((__int64)v12, v5, v6, v7);
  return (unsigned int)v9;
}
