/*
 * XREFs of ?GetSiHostProcessHandle@@YAJKPEAPEAX@Z @ 0x180072BB0
 * Callers:
 *     ?SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z @ 0x1800729F8 (-SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180221180 (-v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     ?v_PublishServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18022DA20 (-v_PublishServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     ?IsShellInfraHostRunning@@YA_NXZ @ 0x1802321B8 (-IsShellInfraHostRunning@@YA_NXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IUnknown_GetServerProcessHandle@@YAJPEAUIUnknown@@KPEAPEAX@Z @ 0x180072C4C (-IUnknown_GetServerProcessHandle@@YAJPEAUIUnknown@@KPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetSiHostProcessHandle(unsigned int a1, void **a2)
{
  HRESULT Instance; // eax
  unsigned int v5; // ebx
  __int64 v7; // rdx
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
  v5 = Instance;
  if ( Instance < 0 )
  {
    v7 = 11LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"internal\\shell\\private\\inc\\shellinfrastructurehelpers.h",
      (const char *)(unsigned int)Instance);
    goto LABEL_4;
  }
  Instance = IUnknown_GetServerProcessHandle(ppv, a1, a2);
  v5 = Instance;
  if ( Instance < 0 )
  {
    v7 = 12LL;
    goto LABEL_7;
  }
  v5 = 0;
LABEL_4:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return v5;
}
