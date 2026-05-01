/*
 * XREFs of ?HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@_N@Z @ 0x180051BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z @ 0x180051CB8 (-_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z.c)
 *     ?s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CLASSIC_WINDOW_STATE@@PEAPEAU3@@Z @ 0x180052210 (-s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CL.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180076FD0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CClassicWindowManager::HandleActivation(CClassicWindowManager *this, HWND a2, char a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  int v7; // r14d
  int v8; // ebx
  __int64 v10; // [rsp+70h] [rbp+8h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 64) & -(__int64)(this != (CClassicWindowManager *)72));
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v6, 1LL);
  v10 = 0LL;
  if ( !a3
    || GetShellWindow() == a2
    && (*(unsigned __int8 (__fastcall **)(_QWORD, HWND))(***((_QWORD ***)this + 15) + 192LL))(
         **((_QWORD **)this + 15),
         a2)
    || (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10),
        v8 = CClassicWindow::s_CreateInstance(a2, 0LL, 0LL, 0LL, &v10),
        v8 >= 0)
    && (v8 = (*(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)this + 14) + 8LL))((char *)this + 112, &v10),
        v8 >= 0) )
  {
    v8 = CClassicWindowManager::_HandleActivation((CClassicWindowManager *)((char *)this - 72), a2);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  if ( v7 >= 0 )
    LeaveCriticalSection(v6);
  return (unsigned int)v8;
}
