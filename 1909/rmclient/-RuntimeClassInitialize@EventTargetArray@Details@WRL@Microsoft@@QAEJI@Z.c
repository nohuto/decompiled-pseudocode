/*
 * XREFs of ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QAEJI@Z @ 0x10009D20
 * Callers:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@I@Details@WRL@Microsoft@@YGJPAPAVEventTargetArray@012@$$QAI@Z @ 0x10008C90 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@I@Details@WRL@Microsoft@@YGJ.c)
 *     ?AddInternal@?$EventSource@U?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AAEJPAU?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PAXPAUEventRegistrationToken@@@Z @ 0x100092E0 (-AddInternal@-$EventSource@U-$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windo.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AAI@Details@WRL@Microsoft@@YGJPAPAVEventTargetArray@012@AAI@Z @ 0x100102FE (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AAI@Details@WRL@Microsoft@@Y.c)
 * Callees:
 *     ??3@YAXPAX@Z @ 0x1000C461 (--3@YAXPAX@Z.c)
 *     ??_U@YAPAXIABUnothrow_t@std@@@Z @ 0x1000D00B (--_U@YAPAXIABUnothrow_t@std@@@Z.c)
 *     ??_E?$ComPtr@UIUnknown@@@WRL@Microsoft@@QAEPAXI@Z @ 0x1000EFC4 (--_E-$ComPtr@UIUnknown@@@WRL@Microsoft@@QAEPAXI@Z.c)
 */

int __thiscall Microsoft::WRL::Details::EventTargetArray::RuntimeClassInitialize(
        Microsoft::WRL::Details::EventTargetArray *this,
        unsigned int a2)
{
  unsigned int v3; // ecx
  _DWORD *v4; // eax
  void *v5; // edx
  void *v6; // eax
  int v7; // ecx

  v3 = (unsigned __int64)a2 >> 30 != 0 ? -1 : 4 * a2;
  v4 = operator new[](__CFADD__(v3, 4) ? -1 : v3 + 4, (const struct std::nothrow_t *)std::nothrow);
  if ( v4 )
  {
    *v4 = a2;
    v5 = v4 + 1;
    if ( a2 )
      memset(v5, 0, 4 * a2);
  }
  else
  {
    v5 = 0;
  }
  *((_DWORD *)this + 3) = v5;
  v6 = operator new[]((unsigned __int64)a2 >> 30 != 0 ? -1 : 4 * a2, (const struct std::nothrow_t *)std::nothrow);
  v7 = *((_DWORD *)this + 3);
  *((_DWORD *)this + 5) = v6;
  if ( v7 )
  {
    if ( v6 )
    {
      *((_DWORD *)this + 4) = v7;
      return 0;
    }
    Microsoft::WRL::ComPtr<IUnknown>::`vector deleting destructor'(v7);
  }
  operator delete(*((void **)this + 5));
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 5) = 0;
  return -2147024882;
}
