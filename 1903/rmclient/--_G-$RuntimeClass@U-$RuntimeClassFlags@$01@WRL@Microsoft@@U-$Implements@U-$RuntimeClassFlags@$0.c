/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@VFtmBase@23@@23@@WRL@Microsoft@@UAEPAXI@Z @ 0x100104D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIMarshal@@@WRL@Microsoft@@IAEKXZ @ 0x100074B4 (-InternalRelease@-$ComPtr@UIMarshal@@@WRL@Microsoft@@IAEKXZ.c)
 *     ??3@YAXPAX@Z @ 0x1000C461 (--3@YAXPAX@Z.c)
 */

int *__thiscall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::FtmBase>>::`scalar deleting destructor'(
        int *Block,
        char a2)
{
  Block[8] = -1073741823;
  Microsoft::WRL::ComPtr<IMarshal>::InternalRelease(Block + 4);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
