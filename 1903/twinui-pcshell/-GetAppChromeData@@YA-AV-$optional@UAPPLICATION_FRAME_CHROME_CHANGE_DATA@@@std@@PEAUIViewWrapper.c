/*
 * XREFs of ?GetAppChromeData@@YA?AV?$optional@UAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@std@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18008D364
 * Callers:
 *     _lambda_6c7f1af74cf45db94091666f28e782cd_::operator() @ 0x18005B560 (_lambda_6c7f1af74cf45db94091666f28e782cd_--operator().c)
 *     ?_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18011D814 (-_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerIntero.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800402F0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0APPLICATION_FRAME_CHROME_CHANGE_DATA@@QEAA@AEBU0@@Z @ 0x18010D5E8 (--0APPLICATION_FRAME_CHROME_CHANGE_DATA@@QEAA@AEBU0@@Z.c)
 */

// Hidden C++ exception states: #wind=1
APPLICATION_FRAME_CHROME_CHANGE_DATA *__fastcall GetAppChromeData(
        APPLICATION_FRAME_CHROME_CHANGE_DATA *this,
        __int64 a2)
{
  int (__fastcall *v4)(__int64, PVOID, _QWORD *); // rbx
  HSTRING_HEADER *v5; // rax
  _QWORD v7[2]; // [rsp+20h] [rbp-40h] BYREF
  HSTRING_HEADER v8; // [rsp+30h] [rbp-30h] BYREF
  __int64 v9; // [rsp+48h] [rbp-18h]
  __int16 v10; // [rsp+50h] [rbp-10h]

  v7[1] = -2LL;
  v7[0] = this;
  v4 = *(int (__fastcall **)(__int64, PVOID, _QWORD *))(*(_QWORD *)a2 + 408LL);
  v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v8, (const WCHAR **)off_180431408);
  if ( v4(a2, v5[1].Reserved.Reserved1, v7) < 0 )
  {
    memset_0(this, 0, 0x30uLL);
    *(_BYTE *)this = 0;
    *((_BYTE *)this + 40) = 0;
  }
  else
  {
    *(_OWORD *)&v8.Reserved.Reserved2[8] = 0uLL;
    v9 = 0LL;
    v10 = 0;
    LODWORD(v8.Reserved.Reserved1) = LODWORD(v7[0]) == 1 ? 0x101 : 0;
    *(_DWORD *)&v8.Reserved.Reserved2[4] = 256;
    APPLICATION_FRAME_CHROME_CHANGE_DATA::APPLICATION_FRAME_CHROME_CHANGE_DATA(
      this,
      (const struct APPLICATION_FRAME_CHROME_CHANGE_DATA *)&v8);
    *((_BYTE *)this + 40) = 1;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8.Reserved.Reserved2[8]);
  }
  return this;
}
