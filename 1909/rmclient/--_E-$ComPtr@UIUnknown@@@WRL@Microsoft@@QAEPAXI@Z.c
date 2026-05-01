/*
 * XREFs of ??_E?$ComPtr@UIUnknown@@@WRL@Microsoft@@QAEPAXI@Z @ 0x1000EFC4
 * Callers:
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QAEJI@Z @ 0x10009D20 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QAEJI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IAEKXZ @ 0x1000B7F0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IAEKXZ.c)
 *     ??3@YAXPAX@Z @ 0x1000C461 (--3@YAXPAX@Z.c)
 */

char *__thiscall Microsoft::WRL::ComPtr<IUnknown>::`vector deleting destructor'(_DWORD *this, int a2)
{
  char *v2; // edi
  int v3; // esi
  volatile signed __int32 **i; // ebx

  v2 = (char *)(this - 1);
  v3 = *(this - 1);
  for ( i = (volatile signed __int32 **)&this[v3]; v3; --v3 )
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(--i);
  operator delete(v2);
  return v2;
}
