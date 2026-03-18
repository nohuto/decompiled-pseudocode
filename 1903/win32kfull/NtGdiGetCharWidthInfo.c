/*
 * XREFs of NtGdiGetCharWidthInfo @ 0x1C01248D0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetCharWidthInfo @ 0x1C0124934 (GreGetCharWidthInfo.c)
 */

__int64 __fastcall NtGdiGetCharWidthInfo(HDC a1, unsigned __int64 a2)
{
  unsigned int CharWidthInfo; // edx

  CharWidthInfo = GreGetCharWidthInfo(a1);
  if ( CharWidthInfo )
  {
    if ( a2 + 12 > MmUserProbeAddress || a2 + 12 <= a2 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_QWORD *)a2 = 0LL;
    *(_DWORD *)(a2 + 8) = 0;
  }
  return CharWidthInfo;
}
