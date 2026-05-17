/*
 * XREFs of LdrpNameToOrdinal @ 0x180009404
 * Callers:
 *     LdrpGetProcedureAddress @ 0x180009090 (LdrpGetProcedureAddress.c)
 * Callees:
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpNameToOrdinal(
        const char *a1,
        unsigned int a2,
        _BYTE *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  int v6; // esi
  int v7; // r11d
  int v8; // r10d
  const char *v10; // rcx
  signed __int64 v11; // rdx
  char v12; // al
  int v13; // ecx
  int v14; // eax
  char v15; // al

  v6 = 0;
  v7 = a4 - 1;
  v8 = a2;
  if ( a2 >= a4 )
    v8 = v7 / 2;
  if ( v7 < 0 )
  {
LABEL_14:
    v15 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        1559,
        (unsigned int)"LdrpNameToOrdinal",
        1,
        "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
        a1,
        a3);
      v15 = LdrpDebugFlags;
    }
    if ( (v15 & 0x40) != 0 )
      __debugbreak();
    return 0xFFFFFFFFLL;
  }
  else
  {
    while ( 1 )
    {
      v10 = a1;
      v11 = &a3[*(unsigned int *)(a5 + 4LL * v8)] - a1;
      while ( 1 )
      {
        v12 = *v10;
        if ( *v10 != v10[v11] )
          break;
        ++v10;
        if ( !v12 )
        {
          v13 = 0;
          goto LABEL_8;
        }
      }
      v13 = *v10 < (unsigned int)v10[v11] ? -1 : 1;
LABEL_8:
      if ( !v13 )
        return *(unsigned __int16 *)(a6 + 2LL * v8);
      v14 = v8 - 1;
      if ( v13 >= 0 )
        v14 = v7;
      v7 = v14;
      if ( v13 >= 0 )
        v6 = v8 + 1;
      v8 = (v6 + v14) / 2;
      if ( v14 < v6 )
        goto LABEL_14;
    }
  }
}
