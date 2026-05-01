/*
 * XREFs of ?GetEventRegistration@WindowEventDispatcher@@AEAA?AV?$shared_ptr@UViewEventRegistration@@@std@@PEBG0@Z @ 0x18001F148
 * Callers:
 *     ?WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180018C20 (-WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@.c)
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18001F810 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 * Callees:
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001F104 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall WindowEventDispatcher::GetEventRegistration(
        __int64 a1,
        _QWORD *a2,
        const WCHAR *a3,
        const WCHAR *a4)
{
  __int64 v5; // rsi
  __int64 v6; // r13
  std::_Ref_count_base *v7; // rbp
  HSTRING *v8; // r15
  HSTRING *v9; // rbx
  char v10; // r12
  UINT32 StringLen; // edi
  const WCHAR *StringRawBuffer; // rax
  HSTRING *v14; // rbx
  UINT32 v15; // edi
  const WCHAR *v16; // rax
  volatile signed __int32 *v17; // rax
  std::_Ref_count_base *v18; // rcx
  __int128 v19; // [rsp+30h] [rbp-48h] BYREF

  *a2 = 0LL;
  a2[1] = 0LL;
  v5 = *(_QWORD *)(a1 + 408);
  v6 = *(_QWORD *)(a1 + 416);
  v19 = 0LL;
  v7 = 0LL;
  if ( v5 != v6 )
  {
    v8 = (HSTRING *)v19;
    do
    {
      if ( !WindowsIsStringEmpty(**(HSTRING **)v5) || v8 )
      {
        v9 = *(HSTRING **)v5;
        v10 = 0;
        StringLen = WindowsGetStringLen(**(HSTRING **)v5);
        StringRawBuffer = WindowsGetStringRawBuffer(*v9, 0LL);
        if ( CompareStringOrdinal(StringRawBuffer, StringLen, a3, -1, 1) != 2 )
          goto LABEL_5;
      }
      else
      {
        v10 = 1;
      }
      if ( WindowsIsStringEmpty(*(HSTRING *)(*(_QWORD *)v5 + 8LL))
        || (v14 = *(HSTRING **)v5,
            v15 = WindowsGetStringLen(*(HSTRING *)(*(_QWORD *)v5 + 8LL)),
            v16 = WindowsGetStringRawBuffer(v14[1], 0LL),
            CompareStringOrdinal(v16, v15, a4, -1, 0) == 2) )
      {
        if ( !v10 )
        {
          std::shared_ptr<ViewEventRegistration>::operator=(a2, (_QWORD *)v5);
          break;
        }
        v17 = *(volatile signed __int32 **)(v5 + 8);
        if ( v17 )
        {
          _InterlockedIncrement(v17 + 2);
          v17 = *(volatile signed __int32 **)(v5 + 8);
          v7 = (std::_Ref_count_base *)*((_QWORD *)&v19 + 1);
        }
        v8 = *(HSTRING **)v5;
        v18 = v7;
        *(_QWORD *)&v19 = *(_QWORD *)v5;
        v7 = (std::_Ref_count_base *)v17;
        *((_QWORD *)&v19 + 1) = v17;
        if ( v18 )
          std::_Ref_count_base::_Decref(v18);
      }
LABEL_5:
      v5 += 16LL;
    }
    while ( v5 != v6 );
  }
  if ( !*a2 )
    std::shared_ptr<ViewEventRegistration>::operator=(a2, &v19);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  return a2;
}
