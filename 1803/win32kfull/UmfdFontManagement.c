/*
 * XREFs of UmfdFontManagement @ 0x1C02AF010
 * Callers:
 *     AtmDrvFontManagementRedirector @ 0x1C0270A40 (AtmDrvFontManagementRedirector.c)
 * Callees:
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C00815E8 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C0083010 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ?GetDrvType@FontManagementRequest@@UEBA?AW4FontDriverType@@XZ @ 0x1C02AEE50 (-GetDrvType@FontManagementRequest@@UEBA-AW4FontDriverType@@XZ.c)
 */

__int64 __fastcall UmfdFontManagement(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6, __int64 a7)
{
  unsigned int DrvType; // eax
  int v12; // eax
  unsigned int v13; // ecx
  struct _SLIST_ENTRY v15[2]; // [rsp+28h] [rbp-41h] BYREF
  __int64 v16; // [rsp+50h] [rbp-19h]
  __int64 v17; // [rsp+58h] [rbp-11h]
  int v18; // [rsp+60h] [rbp-9h]
  int v19; // [rsp+64h] [rbp-5h]
  __int64 v20; // [rsp+68h] [rbp-1h]
  int v21; // [rsp+70h] [rbp+7h]
  __int64 v22; // [rsp+78h] [rbp+Fh]
  int v23; // [rsp+80h] [rbp+17h]
  __int128 v24; // [rsp+88h] [rbp+1Fh]
  __int64 v25; // [rsp+98h] [rbp+2Fh]

  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v15, 13);
  v25 = 0LL;
  v15[0].Next = (struct _SLIST_ENTRY *)&FontManagementRequest::`vftable';
  v20 = a5;
  v21 = a6;
  v16 = a1;
  v22 = a7;
  v24 = 0LL;
  v17 = a2;
  v18 = a3;
  v19 = a4;
  v23 = -1;
  DrvType = FontManagementRequest::GetDrvType((__int64)v15);
  v12 = UmfdClientSendAndWaitForCompletion(DrvType, v15);
  v13 = v23;
  if ( v12 < 0 )
    return (unsigned int)-1;
  return v13;
}
