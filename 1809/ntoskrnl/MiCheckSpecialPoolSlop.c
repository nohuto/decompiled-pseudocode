/*
 * XREFs of MiCheckSpecialPoolSlop @ 0x1402AC36C
 * Callers:
 *     MmFreeSpecialPool @ 0x1402AD368 (MmFreeSpecialPool.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiCheckSpecialPoolSlop(_BYTE *BugCheckParameter2, ULONG_PTR a2, unsigned int *a3)
{
  unsigned __int8 v3; // r10
  unsigned __int64 result; // rax
  int v6; // eax
  _BYTE *v7; // r8

  v3 = *((_BYTE *)a3 + 2);
  result = (((((unsigned __int64)v3 << 8) | v3) << 16) | ((unsigned __int64)v3 << 8) | v3) << 32;
  while ( (unsigned __int64)BugCheckParameter2 < a2 )
  {
    if ( *(_QWORD *)BugCheckParameter2 != (result | ((((unsigned __int64)*((unsigned __int8 *)a3 + 2) << 8) | *((unsigned __int8 *)a3 + 2)) << 16) | ((unsigned __int64)*((unsigned __int8 *)a3 + 2) << 8) | *((unsigned __int8 *)a3 + 2)) )
    {
      v6 = 0;
      v7 = 0LL;
      if ( (unsigned __int64)BugCheckParameter2 < a2 )
      {
        do
        {
          if ( *BugCheckParameter2 != v3 )
          {
            if ( ++v6 != 1 )
              goto LABEL_14;
            v7 = BugCheckParameter2;
          }
          ++BugCheckParameter2;
        }
        while ( (unsigned __int64)BugCheckParameter2 < a2 );
        if ( v6 == 1 && ((unsigned __int8)((*v7 ^ v3) - 1) & (unsigned __int8)(*v7 ^ v3)) == 0 )
          KeBugCheckEx(0xC1u, a2, (ULONG_PTR)v7, *a3, 0x32uLL);
      }
LABEL_14:
      KeBugCheckEx(0xC1u, a2, (ULONG_PTR)v7, *a3, 0x23uLL);
    }
    BugCheckParameter2 += 8;
  }
  return result;
}
