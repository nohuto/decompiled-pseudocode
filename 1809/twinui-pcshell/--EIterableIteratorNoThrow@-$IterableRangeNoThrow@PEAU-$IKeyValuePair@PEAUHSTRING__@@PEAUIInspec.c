/*
 * XREFs of ??EIterableIteratorNoThrow@?$IterableRangeNoThrow@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@wil@@QEAAAEAV012@XZ @ 0x18032F648
 * Callers:
 *     ?Update@CopyToViewValueSetBase@@UEAAJPEAUIUnknown@@@Z @ 0x180330CC0 (-Update@CopyToViewValueSetBase@@UEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall wil::IterableRangeNoThrow<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>::IterableIteratorNoThrow::operator++(
        _DWORD *a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rdi
  char v5; // [rsp+30h] [rbp+8h] BYREF

  **(_DWORD **)(*(_QWORD *)a1 + 16LL) = (*(__int64 (__fastcall **)(_QWORD, char *))(***(_QWORD ***)a1 + 64LL))(
                                          **(_QWORD **)a1,
                                          &v5);
  v2 = *(__int64 **)a1;
  if ( **(int **)(*(_QWORD *)a1 + 16LL) >= 0
    && v5
    && (v3 = *v2,
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2 + 1),
        **(_DWORD **)(*(_QWORD *)a1 + 16LL) = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 48LL))(
                                                v3,
                                                v2 + 1),
        **(int **)(*(_QWORD *)a1 + 16LL) >= 0) )
  {
    ++a1[2];
  }
  else
  {
    a1[2] = -1;
  }
  return a1;
}
