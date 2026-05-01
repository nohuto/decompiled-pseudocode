/*
 * XREFs of ??$MakeAndInitialize@VInputEaterElement@@V1@AEAPEAUIInputEaterElementNotifications@@@Details@WRL@Microsoft@@YAJPEAPEAVInputEaterElement@@AEAPEAUIInputEaterElementNotifications@@@Z @ 0x18037E2A8
 * Callers:
 *     ?InputEaterElement_CreateInstance@@YAJPEAUIInputEaterElementNotifications@@AEBU_GUID@@PEAPEAX@Z @ 0x18037E484 (-InputEaterElement_CreateInstance@@YAJPEAUIInputEaterElementNotifications@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0InputEaterElement@@QEAA@XZ @ 0x18037E37C (--0InputEaterElement@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<InputEaterElement,InputEaterElement,IInputEaterElementNotifications * &>(
        InputEaterElement **a1,
        __int64 *a2)
{
  unsigned int v4; // ebx
  InputEaterElement *v5; // rax
  InputEaterElement *v6; // rax
  __int64 v7; // rsi
  InputEaterElement *v8; // rdi
  __int64 v9; // rcx
  InputEaterElement *v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v5 = (InputEaterElement *)operator new(0xE0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = InputEaterElement::InputEaterElement(v5);
    v7 = *a2;
    v8 = v6;
    v11 = v6;
    v9 = *((_QWORD *)v6 + 27);
    if ( v9 != v7 )
    {
      if ( v7 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        v9 = *((_QWORD *)v8 + 27);
      }
      *((_QWORD *)v8 + 27) = v7;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    if ( v8 )
      (*(void (__fastcall **)(InputEaterElement *))(*(_QWORD *)v8 + 8LL))(v8);
    *a1 = v8;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
