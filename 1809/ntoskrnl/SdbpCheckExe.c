/*
 * XREFs of SdbpCheckExe @ 0x140723F58
 * Callers:
 *     SdbpSearchDB @ 0x14067E72C (SdbpSearchDB.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     SdbpCheckForMatch @ 0x140724154 (SdbpCheckForMatch.c)
 */

__int64 __fastcall SdbpCheckExe(int a1, int a2, int a3, unsigned int *a4, __int64 a5, int a6, int *a7, void *a8)
{
  unsigned int v9; // esi
  int v11; // ebx
  unsigned int v12; // edx
  int v13; // eax
  int v15; // [rsp+30h] [rbp-18h] BYREF
  int v16[5]; // [rsp+34h] [rbp-14h] BYREF

  v15 = 2;
  v9 = 0;
  v16[0] = 0;
  if ( (unsigned int)SdbpCheckForMatch(a1, a2, a3, a5, (__int64)&v15, (__int64)v16) )
  {
    v11 = v15;
    if ( (a6 != 1 || v15 == 2) && (a6 != 2 || v15 != 2) )
    {
      if ( v15 == 1 )
      {
        memset(a8, 0, 0x80uLL);
        *a4 = 0;
        v12 = 0;
      }
      else
      {
        v12 = *a4;
        if ( *a4 >= 0x10 )
        {
          AslLogCallPrintf(1LL);
          ++*a4;
          return 0;
        }
      }
      v13 = v16[0];
      *((_DWORD *)a8 + 2 * v12) = a3;
      *((_DWORD *)a8 + 2 * v12 + 1) = v13;
      *a4 = v12 + 1;
      v9 = 1;
      if ( a7 )
        *a7 = v11;
    }
  }
  return v9;
}
