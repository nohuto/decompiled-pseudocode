/*
 * XREFs of sub_18010E724 @ 0x18010E724
 * Callers:
 *     sub_180087200 @ 0x180087200 (sub_180087200.c)
 * Callees:
 *     ZwWriteFile @ 0x18009C7E0 (ZwWriteFile.c)
 */

__int64 __fastcall sub_18010E724(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  _QWORD *v7; // rbp
  int v8; // edx

  *a2 = 0;
  *a3 = 0;
  if ( !*(_DWORD *)(a1 + 452) )
    return 0LL;
  v7 = (_QWORD *)(a1 + 360);
  v8 = ZwWriteFile();
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
