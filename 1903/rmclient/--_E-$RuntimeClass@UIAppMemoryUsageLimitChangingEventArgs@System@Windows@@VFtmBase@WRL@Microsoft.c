/*
 * XREFs of ??_E?$RuntimeClass@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@WRL@Microsoft@@@WRL@Microsoft@@UAEPAXI@Z @ 0x10010570
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPAX@Z @ 0x1000C461 (--3@YAXPAX@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UAE@XZ @ 0x10010428 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitCha.c)
 */

int *__thiscall Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>::`vector deleting destructor'(
        int *Block,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
