/*
 * XREFs of AslpFileGetChecksum @ 0x1408ED6A8
 * Callers:
 *     AslpFileGetChecksumAttributes @ 0x1408ED7A0 (AslpFileGetChecksumAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetChecksum(unsigned int *a1, __int64 a2)
{
  unsigned int v3; // r9d
  unsigned int v4; // r10d
  unsigned int v5; // r8d
  unsigned __int64 v6; // rax
  _DWORD *v7; // rdx
  unsigned __int64 i; // rcx
  unsigned int v9; // r8d
  char v10; // al

  v3 = 4096;
  v4 = 512;
  v5 = 0;
  v6 = *(_QWORD *)(a2 + 16);
  if ( v6 >= 0x1000 )
  {
    if ( v6 < 0x1200 )
      v4 = v6 - 4096;
  }
  else
  {
    v4 = 0;
    v3 = *(_QWORD *)(a2 + 16);
  }
  if ( v3 >= 4 )
  {
    v7 = (_DWORD *)(v4 + *(_QWORD *)(a2 + 24));
    for ( i = 0LL; i < (unsigned __int64)v3 >> 2; ++i )
    {
      v9 = *v7++ + v5;
      v10 = v9;
      v5 = v9 >> 1;
      if ( (v10 & 1) != 0 )
        v5 |= 0x80000000;
    }
  }
  *a1 = v5;
  return 0LL;
}
