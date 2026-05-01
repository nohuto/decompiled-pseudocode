/*
 * XREFs of ??4?$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@QEAAAEAV012@PEAVViewEventDispatcher@@@Z @ 0x180284D60
 * Callers:
 *     ?RuntimeClassInitialize@ViewManagerBridge@@QEAAJPEAVViewEventDispatcher@@@Z @ 0x180289C14 (-RuntimeClassInitialize@ViewManagerBridge@@QEAAJPEAVViewEventDispatcher@@@Z.c)
 *     ?RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z @ 0x180299870 (-RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18026C4DC (-InternalRelease@-$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<ViewEventDispatcher>::operator=(__int64 *a1, __int64 a2)
{
  signed __int64 v3; // rax
  signed __int64 v4; // rtt
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    if ( a2 )
    {
      v3 = *(_QWORD *)(a2 + 256);
      while ( v3 >= 0 )
      {
        v4 = v3;
        v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 256), v3 + 1, v3);
        if ( v4 == v3 )
          goto LABEL_8;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v3 + 16));
    }
LABEL_8:
    v6 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<ViewEventDispatcher>::InternalRelease(&v6);
  }
  return a1;
}
