/*
 * XREFs of ??_E?$RuntimeClass@UIProcessMemoryReport@System@Windows@@UIInspectable@@@WRL@Microsoft@@UAEPAXI@Z @ 0x100105A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPAX@Z @ 0x1000C461 (--3@YAXPAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UAGKXZ @ 0x10010DD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

_DWORD *__thiscall Microsoft::WRL::RuntimeClass<Windows::System::IProcessMemoryReport,IInspectable>::`vector deleting destructor'(
        _DWORD *Block,
        char a2)
{
  int v3; // ecx

  v3 = Block[4];
  if ( v3 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(2 * v3);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
