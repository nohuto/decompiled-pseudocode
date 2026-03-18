/*
 * XREFs of ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01D3110
 * Callers:
 *     xxxGetClipboardData @ 0x1C00B5E78 (xxxGetClipboardData.c)
 * Callees:
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     xxxGetClipboardData @ 0x1C00B5E78 (xxxGetClipboardData.c)
 *     FindClipFormat @ 0x1C00B6948 (FindClipFormat.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C013102C (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     CreateDIBPalette @ 0x1C01D3448 (CreateDIBPalette.c)
 */

__int64 __fastcall xxxGetDummyPalette(struct tagWINDOWSTATION *a1, struct tagGETCLIPBDATA *a2)
{
  unsigned int v2; // ebx
  __int64 ClipFormat; // rax
  __int64 v6; // rax
  void *ClipboardData; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 DIBPalette; // rbx

  v2 = 17;
  ClipFormat = FindClipFormat((__int64)a1, 0x11u, 1);
  if ( ClipFormat )
  {
    if ( *(_QWORD *)(ClipFormat + 8) == 2LL )
    {
      v2 = 8;
      v6 = FindClipFormat((__int64)a1, 8u, 1);
      if ( !v6 || *(_QWORD *)(v6 + 8) == 2LL )
        return 0LL;
    }
  }
  ClipboardData = xxxGetClipboardData(a1, v2, a2);
  if ( !ClipboardData )
    return 0LL;
  v8 = HMValidateHandle((__int64)ClipboardData, 6);
  if ( !v8 )
    return 0LL;
  v9 = v8 + 20;
  v10 = FindClipFormat((__int64)a1, 9u, 1);
  if ( !v10 )
    return 0LL;
  DIBPalette = CreateDIBPalette(v9, *(unsigned int *)(v9 + 32));
  if ( DIBPalette )
  {
    UT_FreeCBFormat((struct tagCLIP *)v10);
    *(_QWORD *)(v10 + 8) = DIBPalette;
    GreSetPaletteOwner(DIBPalette, 0LL);
  }
  return DIBPalette;
}
