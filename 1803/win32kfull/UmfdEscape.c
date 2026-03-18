/*
 * XREFs of UmfdEscape @ 0x1C02AEF60
 * Callers:
 *     <none>
 * Callees:
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C00815E8 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C0083010 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 */

__int64 __fastcall UmfdEscape(__int64 a1, int a2, int a3, __int64 a4, int a5, __int64 a6)
{
  int v10; // eax
  unsigned int v11; // ecx
  struct _SLIST_ENTRY v13[2]; // [rsp+28h] [rbp-29h] BYREF
  __int64 v14; // [rsp+50h] [rbp-1h]
  int v15; // [rsp+58h] [rbp+7h]
  int v16; // [rsp+5Ch] [rbp+Bh]
  __int64 v17; // [rsp+60h] [rbp+Fh]
  int v18; // [rsp+68h] [rbp+17h]
  __int64 v19; // [rsp+70h] [rbp+1Fh]
  int v20; // [rsp+78h] [rbp+27h]
  __int64 v21; // [rsp+80h] [rbp+2Fh]
  __int64 v22; // [rsp+88h] [rbp+37h]

  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v13, 14);
  v21 = 0LL;
  v22 = 0LL;
  v13[0].Next = (struct _SLIST_ENTRY *)&EscapeRequest::`vftable';
  v18 = a5;
  v14 = a1;
  v19 = a6;
  v15 = a2;
  v16 = a3;
  v17 = a4;
  v20 = -1;
  v10 = UmfdClientSendAndWaitForCompletion(3u, v13);
  v11 = v20;
  if ( v10 < 0 )
    return (unsigned int)-1;
  return v11;
}
