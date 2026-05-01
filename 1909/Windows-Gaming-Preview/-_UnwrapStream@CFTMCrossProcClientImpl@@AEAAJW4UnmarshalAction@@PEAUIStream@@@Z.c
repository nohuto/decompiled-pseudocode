/*
 * XREFs of ?_UnwrapStream@CFTMCrossProcClientImpl@@AEAAJW4UnmarshalAction@@PEAUIStream@@@Z @ 0x180042220
 * Callers:
 *     ?UnmarshalInterface@CFTMCrossProcClientImpl@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z @ 0x180042080 (-UnmarshalInterface@CFTMCrossProcClientImpl@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?ReleaseMarshalData@CFTMCrossProcClientImpl@@UEAAJPEAUIStream@@@Z @ 0x1800420E0 (-ReleaseMarshalData@CFTMCrossProcClientImpl@@UEAAJPEAUIStream@@@Z.c)
 * Callees:
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180007A70 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0AgileRef@WRL@Microsoft@@QEAA@XZ @ 0x18000A050 (--0AgileRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIAgileReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180025DF8 (--4-$ComPtr@UIAgileReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x180025E3C (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18003D080 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     CoTaskMemFree_0 @ 0x180043CDA (CoTaskMemFree_0.c)
 *     RoGetAgileReference_0 @ 0x180043CFE (RoGetAgileReference_0.c)
 *     CoReleaseMarshalData_0 @ 0x180043D0A (CoReleaseMarshalData_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800443E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFTMCrossProcClientImpl::_UnwrapStream(__int64 *a1, unsigned int a2, IStream *a3)
{
  HRESULT AgileReference_0; // edi
  LPVOID v7; // rsi
  __int64 *v8; // rax
  __int64 *v9; // rbx
  __int64 v10; // rcx
  LPVOID v11; // rcx
  ULONG *v12; // rsi
  SIZE_T v13; // rcx
  BYTE *v14; // rbx
  int v15; // eax
  IStream *v16; // rax
  __int64 v17; // rcx
  IStream *v18; // rsi
  __int64 *v20[2]; // [rsp+20h] [rbp-10h] BYREF
  LPVOID ppv; // [rsp+78h] [rbp+48h] BYREF

  if ( a2 )
  {
    AgileReference_0 = CoReleaseMarshalData_0(a3);
  }
  else
  {
    ppv = 0LL;
    AgileReference_0 = CoUnmarshalInterface(a3, &GUID_00000000_0000_0000_c000_000000000046, &ppv);
    if ( AgileReference_0 >= 0 )
    {
      v7 = ppv;
      v20[0] = a1 + 9;
      v8 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(v20);
      AgileReference_0 = 0;
      v9 = v8;
      if ( v7 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          *v8 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        AgileReference_0 = RoGetAgileReference_0(0LL, &GUID_00000000_0000_0000_c000_000000000046, v7, v9);
      }
      else
      {
        Microsoft::WRL::AgileRef::AgileRef((Microsoft::WRL::AgileRef *)v20);
        Microsoft::WRL::ComPtr<IAgileReference>::operator=(v9, (char *)v20);
        Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)v20);
      }
    }
    v11 = ppv;
    if ( ppv )
    {
      ppv = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  if ( AgileReference_0 >= 0 )
  {
    v12 = (ULONG *)(a1 + 4);
    AgileReference_0 = IStream_Read(a3, a1 + 4, 4u);
    if ( AgileReference_0 >= 0 )
    {
      v13 = *v12;
      v14 = 0LL;
      ppv = 0LL;
      if ( is_mul_ok(v13, 1uLL) )
      {
        v15 = CTCoAllocPolicy::Alloc((IMalloc *)v13, (v13 * (unsigned __int128)1uLL) >> 64, v13, &ppv);
        v14 = (BYTE *)ppv;
        AgileReference_0 = v15;
        if ( v15 >= 0 )
        {
          if ( *v12 )
            AgileReference_0 = IStream_Read(a3, ppv, *v12);
          if ( AgileReference_0 >= 0 )
          {
            v16 = SHCreateMemStream(v14, *v12);
            v17 = a1[10];
            v18 = v16;
            if ( v17 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
            a1[10] = (__int64)v18;
            AgileReference_0 = v18 == 0LL ? 0x8007000E : 0;
            if ( v18 )
              AgileReference_0 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, IStream *))(*a1 + 96))(a1, a2, v18);
          }
        }
      }
      else
      {
        AgileReference_0 = -2147024362;
      }
      CoTaskMemFree_0(v14);
    }
  }
  return (unsigned int)AgileReference_0;
}
