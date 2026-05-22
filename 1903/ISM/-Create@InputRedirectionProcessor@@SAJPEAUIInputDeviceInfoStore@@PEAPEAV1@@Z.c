/*
 * XREFs of ?Create@InputRedirectionProcessor@@SAJPEAUIInputDeviceInfoStore@@PEAPEAV1@@Z @ 0x180028EFC
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180019EC8 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014F60 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z @ 0x180029008 (-Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputRedirectionProcessor::Create(
        struct IInputDeviceInfoStore *a1,
        struct InputRedirectionProcessor **a2)
{
  void *v4; // rax
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v9; // r9
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF
  void *v13; // [rsp+50h] [rbp+18h]

  v12 = 0LL;
  if ( !a2 )
  {
    v7 = -2147024809;
    v9 = 2147942487LL;
    v10 = 63LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\lib"
               "\\inputredirectionprocessor.cpp",
      (const char *)v9);
    goto LABEL_7;
  }
  v4 = RefCountedObject::operator new(0x68uLL);
  v5 = (__int64)v4;
  v13 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x68uLL);
    *(_QWORD *)(v5 + 24) = &RefCountedObject::`vftable';
    *(_DWORD *)(v5 + 32) = 1;
    *(_QWORD *)v5 = &InputRedirectionProcessor::`vftable'{for `IContextualProcessor'};
    *(_QWORD *)(v5 + 8) = &InputRedirectionProcessor::`vftable'{for `IRemoteInputRedirection'};
    *(_QWORD *)(v5 + 16) = &InputRedirectionProcessor::`vftable'{for `IMessageObjectOwner'};
    *(_QWORD *)(v5 + 24) = &InputRedirectionProcessor::`vftable'{for `RefCountedObject'};
    *(_QWORD *)(v5 + 40) = 0LL;
    *(_QWORD *)(v5 + 48) = 0LL;
    *(_QWORD *)(v5 + 56) = 0LL;
    *(_QWORD *)(v5 + 64) = 0LL;
    *(_QWORD *)(v5 + 80) = 0LL;
    *(_QWORD *)(v5 + 88) = 0LL;
    *(_QWORD *)(v5 + 96) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  v12 = v5;
  if ( !v5 )
  {
    v7 = -2147024882;
    v9 = 2147942414LL;
    v10 = 70LL;
    goto LABEL_12;
  }
  v6 = InputRedirectionProcessor::Initialize((InputRedirectionProcessor *)v5, a1);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = (unsigned int)v6;
    v10 = 73LL;
    goto LABEL_12;
  }
  v12 = 0LL;
  *a2 = (struct InputRedirectionProcessor *)v5;
  v7 = 0;
LABEL_7:
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v12);
  return v7;
}
