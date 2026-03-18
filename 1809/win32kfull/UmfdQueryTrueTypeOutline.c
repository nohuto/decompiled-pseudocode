/*
 * XREFs of UmfdQueryTrueTypeOutline @ 0x1C0149740
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C00428C0 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C01011A0 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall UmfdQueryTrueTypeOutline(__int64 a1, __int64 a2, int a3, int a4, void *a5, int a6, __int64 a7)
{
  int v11; // eax
  unsigned int v12; // ecx
  struct _SLIST_ENTRY v14[2]; // [rsp+28h] [rbp-51h] BYREF
  __int64 v15; // [rsp+50h] [rbp-29h]
  __int64 v16; // [rsp+58h] [rbp-21h]
  int v17; // [rsp+60h] [rbp-19h]
  int v18; // [rsp+64h] [rbp-15h]
  void *v19; // [rsp+68h] [rbp-11h]
  int v20; // [rsp+70h] [rbp-9h]
  __int64 v21; // [rsp+78h] [rbp-1h]
  int v22; // [rsp+80h] [rbp+7h]
  __int128 v23; // [rsp+88h] [rbp+Fh]
  __int64 v24; // [rsp+98h] [rbp+1Fh]

  if ( a5 )
    memset(a5, 0, 0x40uLL);
  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v14, 11);
  v24 = 0LL;
  v14[0].Next = (struct _SLIST_ENTRY *)&QueryTrueTypeOutlineRequest::`vftable';
  v20 = a6;
  v19 = a5;
  v21 = a7;
  v23 = 0LL;
  v15 = a1;
  v16 = a2;
  v17 = a3;
  v18 = a4;
  v22 = -1;
  v11 = UmfdClientSendAndWaitForCompletion(*(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL), v14);
  v12 = v22;
  if ( v11 < 0 )
    return (unsigned int)-1;
  return v12;
}
