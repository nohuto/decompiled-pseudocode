/*
 * XREFs of UmfdQueryFontFile @ 0x1C00F9F20
 * Callers:
 *     <none>
 * Callees:
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C00815E8 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C0083010 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 */

__int64 __fastcall UmfdQueryFontFile(__int64 a1, int a2, int a3, __int64 a4)
{
  int v8; // eax
  unsigned int v9; // ecx
  struct _SLIST_ENTRY v11[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v12; // [rsp+48h] [rbp-30h]
  int v13; // [rsp+50h] [rbp-28h]
  int v14; // [rsp+54h] [rbp-24h]
  __int64 v15; // [rsp+58h] [rbp-20h]
  int v16; // [rsp+60h] [rbp-18h]
  __int64 v17; // [rsp+68h] [rbp-10h]

  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v11, 6);
  v17 = 0LL;
  v13 = a2;
  v11[0].Next = (struct _SLIST_ENTRY *)&QueryFontFileRequest::`vftable';
  v16 = -1;
  v12 = a1;
  v14 = a3;
  v15 = a4;
  v8 = UmfdClientSendAndWaitForCompletion(*(_DWORD *)(a1 + 8), v11);
  v9 = v16;
  if ( v8 < 0 )
    return (unsigned int)-1;
  return v9;
}
