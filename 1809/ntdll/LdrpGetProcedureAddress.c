/*
 * XREFs of LdrpGetProcedureAddress @ 0x180009090
 * Callers:
 *     LdrpResolveProcedureAddress @ 0x18000922C (LdrpResolveProcedureAddress.c)
 *     LdrpCorInitialize @ 0x180054948 (LdrpCorInitialize.c)
 *     LdrpBuildImportRedirection @ 0x1800D7534 (LdrpBuildImportRedirection.c)
 *     AvrfMiniLoadDll @ 0x1800DCAA8 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180007BB0 (RtlImageNtHeaderEx.c)
 *     LdrpNameToOrdinal @ 0x180009404 (LdrpNameToOrdinal.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x180009BAC (RtlpImageDirectoryEntryToData32.c)
 *     RtlAddressInSectionTable @ 0x18007AC30 (RtlAddressInSectionTable.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpGetProcedureAddress(unsigned __int64 a1, const char *a2, int a3, unsigned __int64 *a4)
{
  _DWORD *v5; // rbx
  bool v6; // si
  unsigned __int64 v10; // rbp
  int v11; // eax
  int v12; // edx
  __int64 v13; // rax
  unsigned int v14; // r12d
  int v15; // edi
  unsigned __int64 v16; // rcx
  _DWORD *v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF

  v19 = 0LL;
  v5 = 0LL;
  v18 = 0LL;
  v6 = 1;
  v10 = a1;
  if ( (a1 & 3) != 0 )
  {
    v10 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v6 = (a1 & 1) == 0;
  }
  v11 = RtlImageNtHeaderEx(1, v10, 0LL, &v19);
  if ( !v19 )
  {
LABEL_34:
    if ( v11 >= 0 )
    {
      v14 = v19;
      goto LABEL_10;
    }
LABEL_26:
    v14 = v19;
LABEL_27:
    v5 = 0LL;
    goto LABEL_10;
  }
  if ( *(_WORD *)(v19 + 24) == 267 )
  {
    LOBYTE(v12) = v6;
    v11 = RtlpImageDirectoryEntryToData32(v10, v12, 0, (unsigned int)&v19, v19, (__int64)&v18);
    v5 = v18;
    goto LABEL_34;
  }
  if ( *(_WORD *)(v19 + 24) != 523 )
  {
    v11 = -1073741811;
    goto LABEL_34;
  }
  if ( !*(_DWORD *)(v19 + 132) )
    goto LABEL_26;
  v13 = *(unsigned int *)(v19 + 136);
  if ( !(_DWORD)v13 )
    goto LABEL_26;
  v14 = *(_DWORD *)(v19 + 140);
  if ( v6 || (unsigned int)v13 < *(_DWORD *)(v19 + 84) )
  {
    v5 = (_DWORD *)(v13 + v10);
    goto LABEL_10;
  }
  v5 = (_DWORD *)RtlAddressInSectionTable(v19, v10, (unsigned int)v13);
  if ( !v5 )
    goto LABEL_27;
LABEL_10:
  if ( !v5 )
    return 3221225594LL;
  if ( a2 )
  {
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        812,
        (unsigned int)"LdrpGetProcedureAddress",
        2,
        "Locating procedure \"%s\" by name\n",
        a2);
    v15 = LdrpNameToOrdinal((_DWORD)a2, -1, a1, v5[6], a1 + (unsigned int)v5[8], a1 + (unsigned int)v5[9]);
    if ( v15 >= 0 )
      goto LABEL_15;
    return 3221225594LL;
  }
  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
      830,
      (unsigned int)"LdrpGetProcedureAddress",
      2,
      "Loading procedure 0x%lx by ordinal\n",
      a3);
  if ( !a3 )
    return 3221225485LL;
  v15 = a3 - v5[4];
LABEL_15:
  if ( (unsigned int)v15 >= v5[5] )
    return (unsigned int)(a2 != 0LL) - 1073741512;
  v16 = a1 + *(unsigned int *)(a1 + (unsigned int)v5[7] + 4LL * v15);
  *a4 = v16;
  if ( v16 < (unsigned __int64)v5 || v16 >= (unsigned __int64)v5 + v14 )
    return 0LL;
  else
    return 3221226029LL;
}
