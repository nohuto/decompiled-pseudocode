/*
 * XREFs of ??0?$IterableRangeNoThrow@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@wil@@QEAA@PEAU?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@PEAJ@Z @ 0x18032F23C
 * Callers:
 *     ?Update@CopyToViewValueSetBase@@UEAAJPEAUIUnknown@@@Z @ 0x180330CC0 (-Update@CopyToViewValueSetBase@@UEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall wil::IterableRangeNoThrow<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>::IterableRangeNoThrow<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 *v5; // rsi
  __int64 v6; // rbx
  char v8; // [rsp+48h] [rbp+10h] BYREF

  *a1 = 0LL;
  v5 = a1 + 1;
  a1[1] = 0LL;
  if ( !a3 )
    a3 = a1 + 3;
  a1[2] = a3;
  *((_DWORD *)a1 + 6) = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
  *(_DWORD *)a1[2] = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a2 + 48LL))(a2, a1);
  if ( *(int *)a1[2] >= 0 )
  {
    *(_DWORD *)a1[2] = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*a1 + 56LL))(*a1, &v8);
    if ( *(int *)a1[2] < 0
      || !v8
      || (v6 = *a1,
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v5),
          *(_DWORD *)a1[2] = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 48LL))(v6, v5),
          *(int *)a1[2] < 0) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
    }
  }
  return a1;
}
