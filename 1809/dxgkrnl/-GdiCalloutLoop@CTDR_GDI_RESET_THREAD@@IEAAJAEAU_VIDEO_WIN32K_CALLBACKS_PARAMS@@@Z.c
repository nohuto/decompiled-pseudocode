/*
 * XREFs of ?GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C0209D48
 * Callers:
 *     ?SwitchGdi@CTDR_GDI_RESET_THREAD@@IEAAJ_N@Z @ 0x1C0209FE4 (-SwitchGdi@CTDR_GDI_RESET_THREAD@@IEAAJ_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C7220 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall CTDR_GDI_RESET_THREAD::GdiCalloutLoop(
        CTDR_GDI_RESET_THREAD *this,
        struct _VIDEO_WIN32K_CALLBACKS_PARAMS *a2)
{
  __int64 v4; // r8
  unsigned int v5; // ebx
  LONG Status; // eax
  enum _NT_PRODUCT_TYPE ProductType[4]; // [rsp+30h] [rbp-19h] BYREF
  _QWORD v9[8]; // [rsp+40h] [rbp-9h] BYREF

  memset(v9, 0, sizeof(v9));
  v5 = 0;
  memset(&v9[1], 0, 36);
  HIDWORD(v9[6]) = a2->Param != 0;
  v9[0] = 0x4000000006LL;
  LODWORD(v9[6]) = 49;
  v9[7] = 0LL;
  do
  {
    LOBYTE(v4) = 1;
    SMgrGdiCallout(
      a2,
      0x100000000LL,
      v4,
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
  LODWORD(v9[7]) = Status;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v9);
  RtlGetNtProductType(ProductType);
  if ( ProductType[0] != NtProductServer )
    return (unsigned int)a2->Status;
  return v5;
}
