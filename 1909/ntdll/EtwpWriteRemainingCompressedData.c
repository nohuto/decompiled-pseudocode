/*
 * XREFs of EtwpWriteRemainingCompressedData @ 0x18010E854
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x1800878A0 (EtwpFinalizeLogFileHeader.c)
 * Callees:
 *     NtWriteFile @ 0x18009CF90 (NtWriteFile.c)
 */

__int64 __fastcall EtwpWriteRemainingCompressedData(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  _QWORD *v7; // rbp
  int v8; // edx

  *a2 = 0;
  *a3 = 0;
  if ( !*(_DWORD *)(a1 + 452) )
    return 0LL;
  v7 = (_QWORD *)(a1 + 360);
  v8 = NtWriteFile();
  if ( v8 >= 0 )
  {
    *v7 += *(unsigned int *)(a1 + 452);
    *a2 = *(_DWORD *)(a1 + 456);
  }
  else
  {
    *a3 = *(_DWORD *)(a1 + 456);
  }
  return (unsigned int)v8;
}
