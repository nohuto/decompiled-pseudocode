/*
 * XREFs of NtGdiSetFontXform @ 0x1C01298D0
 * Callers:
 *     <none>
 * Callees:
 *     GreSetFontXform @ 0x1C0129944 (GreSetFontXform.c)
 */

__int64 __fastcall NtGdiSetFontXform(HDC a1, unsigned int a2, unsigned int a3)
{
  unsigned int v5; // ebx
  _DWORD v7[6]; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0;
  v5 = 0;
  if ( (unsigned int)bConvertDwordToFloat(a2, v7) && (unsigned int)bConvertDwordToFloat(a3, &v8) )
    return (unsigned int)GreSetFontXform(a1);
  return v5;
}
