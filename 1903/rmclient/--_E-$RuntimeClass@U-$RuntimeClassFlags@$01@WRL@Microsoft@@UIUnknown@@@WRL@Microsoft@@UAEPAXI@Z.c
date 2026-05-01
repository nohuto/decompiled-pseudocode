/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@UAEPAXI@Z @ 0x10010500
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPAX@Z @ 0x1000C461 (--3@YAXPAX@Z.c)
 */

_DWORD *__thiscall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vector deleting destructor'(
        _DWORD *Block,
        char a2)
{
  Block[2] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
