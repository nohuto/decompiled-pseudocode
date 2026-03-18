/*
 * XREFs of UmfdQueryFontTree @ 0x1C01010F0
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C00428C0 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C01011A0 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     UmfdDrvFreeInternal @ 0x1C02C0F00 (UmfdDrvFreeInternal.c)
 */

__int64 __fastcall UmfdQueryFontTree(__int64 a1, __int64 a2, int a3, int a4, _QWORD *a5)
{
  __int64 result; // rax
  struct _SLIST_ENTRY v10[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v11; // [rsp+48h] [rbp-38h]
  __int64 v12; // [rsp+50h] [rbp-30h]
  int v13; // [rsp+58h] [rbp-28h]
  int v14; // [rsp+5Ch] [rbp-24h]
  _QWORD *v15; // [rsp+60h] [rbp-20h]
  __int64 v16; // [rsp+68h] [rbp-18h]
  __int128 v17; // [rsp+70h] [rbp-10h]

  *a5 = 0LL;
  FontDriverDdiRequest::FontDriverDdiRequest(v10, 1LL);
  v16 = 0LL;
  v10[0].Next = (struct _SLIST_ENTRY *)&QueryFontTreeRequest::`vftable';
  v17 = 0LL;
  v11 = a1;
  v12 = a2;
  v13 = a3;
  v14 = a4;
  v15 = a5;
  if ( (int)UmfdClientSendAndWaitForCompletion(*(_DWORD *)(a2 + 8), v10) < 0 )
    return 0LL;
  result = v16;
  if ( !v16 )
  {
    if ( *((_QWORD *)&v17 + 1) )
      UmfdDrvFreeInternal(*((_QWORD *)&v17 + 1), *v15, *(unsigned int *)(v12 + 8));
    return 0LL;
  }
  return result;
}
