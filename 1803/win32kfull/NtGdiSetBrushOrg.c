/*
 * XREFs of NtGdiSetBrushOrg @ 0x1C00FE7B0
 * Callers:
 *     <none>
 * Callees:
 *     GreSetBrushOrg @ 0x1C009FA48 (GreSetBrushOrg.c)
 */

__int64 __fastcall NtGdiSetBrushOrg(HDC a1, int a2, int a3, _QWORD *a4)
{
  unsigned int v5; // edx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = GreSetBrushOrg(a1, a2, a3, v7);
  if ( v5 && a4 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (_QWORD *)MmUserProbeAddress;
    *a4 = v7[0];
  }
  return v5;
}
