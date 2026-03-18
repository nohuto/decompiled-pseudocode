/*
 * XREFs of ?GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C023C930
 * Callers:
 *     ?SwitchGdi@CTDR_GDI_RESET_THREAD@@IEAAJ_N@Z @ 0x1C023CBE0 (-SwitchGdi@CTDR_GDI_RESET_THREAD@@IEAAJ_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D489C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall CTDR_GDI_RESET_THREAD::GdiCalloutLoop(
        CTDR_GDI_RESET_THREAD *this,
        struct _VIDEO_WIN32K_CALLBACKS_PARAMS *a2,
        __int64 a3)
{
  unsigned int v3; // ebx
  bool v4; // zf
  LONG Status; // eax
  enum _NT_PRODUCT_TYPE ProductType[4]; // [rsp+30h] [rbp-19h] BYREF
  _DWORD v10[2]; // [rsp+40h] [rbp-9h] BYREF
  __int64 v11; // [rsp+48h] [rbp-1h]
  __int128 v12; // [rsp+50h] [rbp+7h]
  __int64 v13; // [rsp+60h] [rbp+17h]
  __int64 v14; // [rsp+68h] [rbp+1Fh]
  int v15; // [rsp+70h] [rbp+27h]
  BOOL v16; // [rsp+74h] [rbp+2Bh]
  __int64 v17; // [rsp+78h] [rbp+2Fh]

  v10[0] = 6;
  v3 = 0;
  v11 = 0LL;
  v4 = a2->Param == 0;
  v12 = 0uLL;
  v16 = !v4;
  v14 = 0LL;
  v10[1] = 64;
  v13 = 0LL;
  v15 = 49;
  v17 = 0LL;
  do
  {
    LOBYTE(a3) = 1;
    SMgrGdiCallout(
      a2,
      0x100000000LL,
      a3,
      &CTDR_GDI_RESET_THREAD::IsTdrAdapterUsedInSessionCallback,
      *((_QWORD *)this + 3),
      *(_QWORD *)(*((_QWORD *)this + 3) + 2888LL));
    Status = a2->Status;
    if ( Status != -1073741816 )
      break;
    ZwYieldExecution();
    Status = a2->Status;
  }
  while ( Status == -1073741816 );
  LODWORD(v17) = Status;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v10, 0x100000000LL, a3);
  RtlGetNtProductType(ProductType);
  if ( ProductType[0] != NtProductServer )
    return (unsigned int)a2->Status;
  return v3;
}
