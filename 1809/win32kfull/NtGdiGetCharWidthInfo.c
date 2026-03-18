/*
 * XREFs of NtGdiGetCharWidthInfo @ 0x1C011DAB0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetCharWidthInfo @ 0x1C011DB08 (GreGetCharWidthInfo.c)
 */

__int64 __fastcall NtGdiGetCharWidthInfo(HDC a1, unsigned __int64 a2)
{
  unsigned int CharWidthInfo; // edx
  __int64 v5; // [rsp+20h] [rbp-18h]
  int v6; // [rsp+28h] [rbp-10h]

  CharWidthInfo = GreGetCharWidthInfo(a1);
  if ( CharWidthInfo )
  {
    if ( a2 + 12 > MmUserProbeAddress || a2 + 12 <= a2 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_QWORD *)a2 = v5;
    *(_DWORD *)(a2 + 8) = v6;
  }
  return CharWidthInfo;
}
