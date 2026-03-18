/*
 * XREFs of UmfdQueryFont @ 0x1C0123040
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C0072960 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C0072FE8 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     UmfdDrvFreeInternal @ 0x1C02D4010 (UmfdDrvFreeInternal.c)
 */

__int64 __fastcall UmfdQueryFont(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 result; // rax
  _QWORD v9[6]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v10; // [rsp+50h] [rbp-30h]
  int v11; // [rsp+58h] [rbp-28h]
  _QWORD *v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]
  __int128 v14; // [rsp+70h] [rbp-10h]

  *a4 = 0LL;
  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v9, 0);
  v13 = 0LL;
  v9[0] = &QueryFontRequest::`vftable';
  v14 = 0LL;
  v9[5] = a1;
  v10 = a2;
  v11 = a3;
  v12 = a4;
  if ( (int)UmfdClientSendAndWaitForCompletion(*(_DWORD *)(a2 + 8), (__int64)v9) < 0 )
    return 0LL;
  result = v13;
  if ( !v13 )
  {
    if ( *((_QWORD *)&v14 + 1) )
      UmfdDrvFreeInternal(*((_QWORD *)&v14 + 1), *v12, *(unsigned int *)(v10 + 8));
    return 0LL;
  }
  return result;
}
