/*
 * XREFs of ?LaunchCortanaApp@@YAJPEBGW4CortanaAppLaunchType@@_N@Z @ 0x180433C08
 * Callers:
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1801EFA80 (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 LaunchCortanaApp()
{
  HRESULT v0; // ebx
  OLECHAR *v1; // rdi
  LPVOID ppv; // [rsp+40h] [rbp+8h] BYREF

  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v0 = CoCreateInstance(
         &GUID_24ac8f2b_4d4a_4c17_9607_6a4b14068f97,
         0LL,
         0x404u,
         &GUID_37c30b2c_2c34_45bc_bb87_62126979a511,
         &ppv);
  if ( v0 >= 0 )
  {
    v1 = SysAllocString(L"StartMode=Attract&QuerySource=AttractAboveLock");
    if ( v1 )
    {
      v0 = (*(__int64 (__fastcall **)(LPVOID, OLECHAR *))(*(_QWORD *)ppv + 24LL))(ppv, v1);
      SysFreeString(v1);
    }
    else
    {
      v0 = -2147024882;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return (unsigned int)v0;
}
