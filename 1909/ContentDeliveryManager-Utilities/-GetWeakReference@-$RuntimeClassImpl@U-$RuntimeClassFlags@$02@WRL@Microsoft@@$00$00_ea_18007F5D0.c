/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x18007F5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z @ 0x180004B88 (-CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase>::GetWeakReference(
        __int64 a1,
        struct IUnknown *a2)
{
  __int64 v2; // rax
  signed __int64 v5; // rdi
  __int64 v6; // r8
  signed __int32 v7; // eax
  __int64 WeakReference; // rax
  struct IUnknownVtbl *v9; // rdx
  unsigned __int64 v11; // r8
  bool i; // zf
  signed __int64 v13; // rax
  signed __int64 v14; // rdi
  signed __int32 v15; // eax

  v2 = *(_QWORD *)(a1 + 16);
  a2->lpVtbl = 0LL;
  v5 = v2;
  if ( v2 >= 0 )
  {
    WeakReference = (__int64)Microsoft::WRL::Details::CreateWeakReference((Microsoft::WRL::Details *)(a1 - 40), a2);
    v9 = (struct IUnknownVtbl *)WeakReference;
    if ( !WeakReference )
      return 2147942414LL;
    *(_DWORD *)(WeakReference + 16) = v5;
    v11 = (WeakReference >> 1) | 0x8000000000000000uLL;
    v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v11, v5);
    for ( i = v5 == v13; ; i = v13 == v14 )
    {
      v14 = v13;
      if ( i )
      {
        a2->lpVtbl = v9;
        return 0LL;
      }
      if ( v13 < 0 )
        break;
      LODWORD(v9->Release) = v13;
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v11, v13);
    }
    v9->QueryInterface = (HRESULT (__stdcall *)(IUnknown *, const IID *const, void **))&Microsoft::WRL::Details::WeakReferenceImpl::`vftable';
    LODWORD(v9->Release) = -1073741823;
    HIDWORD(v9->AddRef) = -1073741823;
    operator delete(v9);
    v6 = 2 * v14;
    do
      v15 = *(_DWORD *)(2 * v14 + 0xC);
    while ( v15 != 0x7FFFFFFF && v15 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 12), v15 + 1, v15) );
  }
  else
  {
    v6 = 2 * v2;
    do
      v7 = *(_DWORD *)(v6 + 12);
    while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 12), v7 + 1, v7) );
  }
  a2->lpVtbl = (struct IUnknownVtbl *)v6;
  return 0LL;
}
