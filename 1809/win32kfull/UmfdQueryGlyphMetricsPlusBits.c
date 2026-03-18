/*
 * XREFs of UmfdQueryGlyphMetricsPlusBits @ 0x1C0162CE0
 * Callers:
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1C0162AC4 (-QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU.c)
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C00428C0 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C01011A0 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 */

__int64 __fastcall UmfdQueryGlyphMetricsPlusBits(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  int v10; // eax
  unsigned int v11; // ecx
  struct _SLIST_ENTRY v13[2]; // [rsp+28h] [rbp-49h] BYREF
  __int64 v14; // [rsp+50h] [rbp-21h]
  int v15; // [rsp+58h] [rbp-19h]
  int v16; // [rsp+5Ch] [rbp-15h]
  __int64 v17; // [rsp+60h] [rbp-11h]
  __int128 v18; // [rsp+68h] [rbp-9h]
  int v19; // [rsp+78h] [rbp+7h]
  int v20; // [rsp+7Ch] [rbp+Bh]
  __int64 v21; // [rsp+80h] [rbp+Fh]
  __int64 v22; // [rsp+88h] [rbp+17h]
  __int64 v23; // [rsp+90h] [rbp+1Fh]
  __int128 v24; // [rsp+98h] [rbp+27h]
  __int64 v25; // [rsp+A8h] [rbp+37h]

  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v13, 2);
  v23 = 0LL;
  v25 = 0LL;
  v13[0].Next = (struct _SLIST_ENTRY *)&QueryGlyphMetricsPlusBitsRequest::`vftable';
  v21 = a5;
  v14 = a1;
  v22 = a6;
  v24 = 0LL;
  v15 = 1;
  v17 = a2;
  v16 = a3;
  v18 = 0LL;
  v19 = a4;
  v20 = -1;
  v10 = UmfdClientSendAndWaitForCompletion(*(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL), v13);
  v11 = v20;
  if ( v10 < 0 )
    return (unsigned int)-1;
  return v11;
}
