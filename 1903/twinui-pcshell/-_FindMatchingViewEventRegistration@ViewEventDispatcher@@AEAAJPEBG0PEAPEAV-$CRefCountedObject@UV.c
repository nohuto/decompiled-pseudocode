/*
 * XREFs of ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEBG0PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x180273FC0
 * Callers:
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x180273EE0 (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180129204 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall ViewEventDispatcher::_FindMatchingViewEventRegistration(
        __int64 a1,
        const WCHAR *a2,
        const WCHAR *a3,
        __int64 *a4)
{
  unsigned int v4; // r14d
  __int64 v6; // rbx
  unsigned __int64 v8; // r15
  __int64 v9; // rdi
  UINT32 StringLen; // esi
  const WCHAR *StringRawBuffer; // rax
  __int64 v12; // rdi
  UINT32 v13; // esi
  const WCHAR *v14; // rax
  __int64 *v15; // rdx
  __int64 v16; // rax
  __int64 v18[3]; // [rsp+30h] [rbp-18h] BYREF
  char v19; // [rsp+90h] [rbp+48h]
  __int64 i; // [rsp+A8h] [rbp+60h] BYREF

  v4 = 0;
  *a4 = 0LL;
  v6 = 0LL;
  v18[0] = 0LL;
  v8 = 0LL;
  for ( i = 0LL; v8 < *(_QWORD *)(a1 + 328); ++v8 )
  {
    if ( !WindowsIsStringEmpty(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 320) + 8 * v8) + 8LL)) || v6 )
    {
      v19 = 0;
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 8 * v8);
      StringLen = WindowsGetStringLen(*(HSTRING *)(v9 + 8));
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v9 + 8), 0LL);
      if ( CompareStringOrdinal(StringRawBuffer, StringLen, a2, -1, 1) != 2 )
        continue;
    }
    else
    {
      v19 = 1;
    }
    if ( !WindowsIsStringEmpty(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 320) + 8 * v8) + 16LL)) )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 8 * v8);
      v13 = WindowsGetStringLen(*(HSTRING *)(v12 + 16));
      v14 = WindowsGetStringRawBuffer(*(HSTRING *)(v12 + 16), 0LL);
      if ( CompareStringOrdinal(v14, v13, a3, -1, 0) != 2 )
        continue;
    }
    v15 = (__int64 *)(*(_QWORD *)(a1 + 320) + 8 * v8);
    if ( !v19 )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(&i, v15);
      v16 = i;
      if ( !i )
        break;
LABEL_15:
      i = 0LL;
      *a4 = v16;
      goto LABEL_16;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::operator=(v18, v15);
    v6 = v18[0];
  }
  Microsoft::WRL::ComPtr<IApplicationView>::operator=(&i, v18);
  v16 = i;
  if ( i )
    goto LABEL_15;
  v4 = -2147023728;
LABEL_16:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&i);
  return v4;
}
