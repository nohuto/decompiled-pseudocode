/*
 * XREFs of SdbpBinarySearchUnique @ 0x14067F8FC
 * Callers:
 *     SdbpGetFirstIndexedRecord @ 0x14067DE70 (SdbpGetFirstIndexedRecord.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 __fastcall SdbpBinarySearchUnique(__int64 a1, unsigned int a2, unsigned __int64 a3, int *a4)
{
  int v4; // r14d
  unsigned int v5; // esi
  int v6; // ebx
  int v11; // edi
  int v12; // eax
  int v13; // edi
  unsigned __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  *a4 = -1;
  v4 = a2 - 1;
  v5 = 0;
  v6 = -1;
  v11 = 0;
  if ( (int)(a2 - 1) < 0 )
  {
LABEL_7:
    v13 = v11 - v4;
    if ( v13 > 1 )
      *a4 = v6;
    LOBYTE(v5) = v13 > 1;
    return v5;
  }
  else
  {
    while ( 1 )
    {
      v12 = (v4 + v11) / 2;
      v6 = v12;
      if ( v12 < 0 || v12 >= a2 )
        return 0LL;
      memmove(&v15, (const void *)(a1 + 12LL * v12), 8uLL);
      if ( a3 > v15 || (v4 = v6 - 1, a3 >= v15) )
        v11 = v6 + 1;
      if ( v4 < v11 )
        goto LABEL_7;
    }
  }
}
