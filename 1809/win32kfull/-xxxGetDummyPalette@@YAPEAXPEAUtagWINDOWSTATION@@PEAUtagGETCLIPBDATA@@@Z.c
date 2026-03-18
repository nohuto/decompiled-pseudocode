/*
 * XREFs of ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F7B30
 * Callers:
 *     xxxGetClipboardData @ 0x1C00DC174 (xxxGetClipboardData.c)
 * Callees:
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     FindClipFormat @ 0x1C00D9E78 (FindClipFormat.c)
 *     xxxGetClipboardData @ 0x1C00DC174 (xxxGetClipboardData.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C00DEAE8 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     CreateDIBPalette @ 0x1C01F7D18 (CreateDIBPalette.c)
 */

__int64 __fastcall xxxGetDummyPalette(struct tagWINDOWSTATION *a1, struct tagGETCLIPBDATA *a2)
{
  unsigned int v2; // ebx
  __int64 ClipFormat; // rax
  __int64 v6; // rax
  void *ClipboardData; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdi
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
  ClipboardData = xxxGetClipboardData(a1, v2, (__int64)a2);
  if ( !ClipboardData )
    return 0LL;
  LOBYTE(v8) = 6;
  v9 = HMValidateHandle((__int64)ClipboardData, v8);
  if ( !v9 )
    return 0LL;
  v10 = v9 + 20;
  v11 = FindClipFormat((__int64)a1, 9u, 1);
  if ( !v11 )
    return 0LL;
  DIBPalette = CreateDIBPalette(v10, *(unsigned int *)(v10 + 32));
  if ( DIBPalette )
  {
    UT_FreeCBFormat((struct tagCLIP *)v11);
    *(_QWORD *)(v11 + 8) = DIBPalette;
    GreSetPaletteOwner(DIBPalette, 0LL);
  }
  return DIBPalette;
}
