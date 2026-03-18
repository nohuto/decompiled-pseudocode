/*
 * XREFs of ACPIQuerySpareDsm @ 0x1C00B0034
 * Callers:
 *     ACPIInternalSetSpare @ 0x1C009580C (ACPIInternalSetSpare.c)
 *     ACPIModuleGetSpareProperties @ 0x1C00AFE70 (ACPIModuleGetSpareProperties.c)
 * Callees:
 *     AMLIFreeDataBuffs @ 0x1C000A45C (AMLIFreeDataBuffs.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0015140 (AMLIGetNamedChild.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ACPIEvaluateSpareDsm @ 0x1C00AFC80 (ACPIEvaluateSpareDsm.c)
 */

__int64 __fastcall ACPIQuerySpareDsm(__int64 a1, void *a2)
{
  __int64 *v4; // rax
  volatile signed __int32 *v5; // rdi
  int v6; // ebx
  size_t v7; // r8
  size_t v9[7]; // [rsp+20h] [rbp-38h] BYREF

  memset(v9, 0, 0x28uLL);
  v4 = AMLIGetNamedChild(*(__int64 **)(a1 + 712), 1297302623);
  v5 = (volatile signed __int32 *)v4;
  if ( v4 )
  {
    v6 = ACPIEvaluateSpareDsm(v4, 0, 0LL, v9);
    AMLIDereferenceHandleEx(v5);
    if ( v6 >= 0 )
    {
      if ( WORD1(v9[0]) == 3 && v9[4] )
      {
        v7 = 4LL;
        if ( LODWORD(v9[3]) < 4 )
          v7 = LODWORD(v9[3]);
        memmove(a2, (const void *)v9[4], v7);
        v6 = 0;
      }
      else
      {
        v6 = -1073741701;
      }
    }
  }
  else
  {
    v6 = -1073741275;
  }
  AMLIFreeDataBuffs(v9);
  return (unsigned int)v6;
}
