/*
 * XREFs of ??_E?$CIconLoadingNotificationCallback@V_lambda_456e5ff184e6c0b451f61a85fda58e65_@@@@UEAAPEAXI@Z @ 0x1802E5D80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 */

__int64 *__fastcall CIconLoadingNotificationCallback<_lambda_456e5ff184e6c0b451f61a85fda58e65_>::`vector deleting destructor'(
        __int64 *Block,
        char a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(Block + 3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(Block + 2);
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
