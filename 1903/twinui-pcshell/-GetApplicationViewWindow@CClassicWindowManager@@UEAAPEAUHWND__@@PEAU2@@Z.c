/*
 * XREFs of ?GetApplicationViewWindow@CClassicWindowManager@@UEAAPEAUHWND__@@PEAU2@@Z @ 0x1800578A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$FindEx@VCClassicWindowFinderByHWND@@@?$CTSimpleFixedArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCClassicWindowFinderByHWND@@AEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180057D40 (--$FindEx@VCClassicWindowFinderByHWND@@@-$CTSimpleFixedArray@V-$ComPtr@UIClassicWindow@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CClassicWindowManager::GetApplicationViewWindow(CClassicWindowManager *this, HWND a2)
{
  HWND Window; // rdi
  __int64 v4; // rsi
  int v5; // ebx
  int (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  _QWORD v8[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v9; // [rsp+78h] [rbp+38h] BYREF
  __int64 v10; // [rsp+80h] [rbp+40h] BYREF
  HWND v11; // [rsp+88h] [rbp+48h] BYREF

  v8[1] = -2LL;
  Window = a2;
  v4 = 0LL;
  while ( Window )
  {
    if ( v4 )
      break;
    v9 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    v9 = 0LL;
    v11 = Window;
    v10 = 0LL;
    v5 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IClassicWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::FindEx<CClassicWindowFinderByHWND>(
           (int)this + 120,
           (unsigned int)&v11,
           (unsigned int)&v10,
           (unsigned int)v8);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    if ( v5 >= 0 )
    {
      v6 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 15) + 8LL * v8[0]);
      if ( (**v6)(v6, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v9) >= 0 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 128LL))(v9) )
          v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9);
      }
    }
    Window = GetWindow(Window, 4u);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  }
  return v4;
}
