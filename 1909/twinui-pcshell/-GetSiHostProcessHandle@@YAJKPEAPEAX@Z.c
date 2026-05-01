/*
 * XREFs of ?GetSiHostProcessHandle@@YAJKPEAPEAX@Z @ 0x180082D38
 * Callers:
 *     ?SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z @ 0x180049090 (-SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180295A30 (-v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     ?v_PublishServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1802A2130 (-v_PublishServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     ?IsShellInfraHostRunning@@YA_NXZ @ 0x1802A69F8 (-IsShellInfraHostRunning@@YA_NXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IUnknown_GetServerProcessHandle@@YAJPEAUIUnknown@@KPEAPEAX@Z @ 0x180082DD0 (-IUnknown_GetServerProcessHandle@@YAJPEAUIUnknown@@KPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetSiHostProcessHandle(unsigned int a1, void **a2)
{
  HRESULT Instance; // ebx
  int ServerProcessHandle; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IUnknown *ppv; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  Instance = CoCreateInstance(
               &GUID_6b3b8d23_fa8d_40b9_8dbd_b950333e2c52,
               0LL,
               0x404u,
               &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
               (LPVOID *)&ppv);
  if ( Instance >= 0 )
  {
    ServerProcessHandle = IUnknown_GetServerProcessHandle(ppv, a1, a2);
    Instance = ServerProcessHandle;
    if ( ServerProcessHandle < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE,
        (__int64)"internal\\shell\\private\\inc\\shellinfrastructurehelpers.h",
        (const char *)(unsigned int)ServerProcessHandle);
    else
      Instance = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return (unsigned int)Instance;
}
