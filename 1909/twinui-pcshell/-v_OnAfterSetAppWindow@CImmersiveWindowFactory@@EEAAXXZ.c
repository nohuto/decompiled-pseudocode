/*
 * XREFs of ?v_OnAfterSetAppWindow@CImmersiveWindowFactory@@EEAAXXZ @ 0x180440F80
 * Callers:
 *     <none>
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18003B250 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x1800548AC (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x180426614 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 */

void __fastcall CImmersiveWindowFactory::v_OnAfterSetAppWindow(CImmersiveWindowFactory *this)
{
  __int64 v2; // rcx
  int CallingProcessHandle; // esi
  DWORD v4; // ebx
  LPVOID v5; // rbx
  DWORD dwProcessId; // [rsp+50h] [rbp+20h] BYREF
  HANDLE Process; // [rsp+58h] [rbp+28h] BYREF
  LPVOID ppv; // [rsp+60h] [rbp+30h] BYREF

  if ( !*((_DWORD *)this + 33) )
  {
    Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&Process);
    CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(v2, 0, &Process);
    v4 = CallingProcessHandle < 0 ? dwProcessId : GetProcessId(Process);
    CAutoHandle<void *>::~CAutoHandle<void *>(&Process);
    if ( CallingProcessHandle >= 0 && GetWindowThreadProcessId(*((HWND *)this + 12), &dwProcessId) && v4 == dwProcessId )
    {
      ppv = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
      if ( CoCreateInstance(
             &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
             0LL,
             0x404u,
             &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
             &ppv) >= 0 )
      {
        Process = 0LL;
        v5 = ppv;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&Process);
        if ( (*(int (__fastcall **)(LPVOID, GUID *, GUID *, HANDLE *))(*(_QWORD *)v5 + 24LL))(
               v5,
               &GUID_203e0af6_3e82_4224_9e81_1cd9a6fe638b,
               &GUID_203e0af6_3e82_4224_9e81_1cd9a6fe638b,
               &Process) >= 0 )
          (*(void (__fastcall **)(HANDLE, _QWORD))(*(_QWORD *)Process + 40LL))(Process, *((_QWORD *)this + 12));
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&Process);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    }
  }
}
