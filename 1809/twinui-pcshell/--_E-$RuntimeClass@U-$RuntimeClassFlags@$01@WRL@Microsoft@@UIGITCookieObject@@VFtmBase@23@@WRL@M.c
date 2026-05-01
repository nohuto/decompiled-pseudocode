/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIGITCookieObject@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1803B1770
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180062770 (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VFtmBase@WR.c)
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IGITCookieObject,Microsoft::WRL::FtmBase>::`vector deleting destructor'(
        _DWORD *Block,
        char a2)
{
  Block[11] = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>((__int64)(Block + 2));
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
