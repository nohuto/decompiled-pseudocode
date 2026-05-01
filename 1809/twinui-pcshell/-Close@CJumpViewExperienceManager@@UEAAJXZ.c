/*
 * XREFs of ?Close@CJumpViewExperienceManager@@UEAAJXZ @ 0x18016D090
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CJumpViewExperienceManager::Close(CJumpViewExperienceManager *this)
{
  __int64 v2; // rbx
  __int64 v4; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 94) )
  {
    v2 = *((_QWORD *)this + 41);
    if ( v2 )
    {
      v4 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
      if ( (*(int (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL))(
             v2,
             &IID_IActiveZBandNotificationForMonitorService,
             &GUID_0f019ffe_0388_4dcf_a2e2_f059a60a5704,
             &v4) >= 0 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 32LL))(v4, *((unsigned int *)this + 94));
      *((_DWORD *)this + 94) = 0;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
    }
  }
  if ( *((_DWORD *)this + 92) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 44) + 32LL))(*((_QWORD *)this + 44));
    *((_DWORD *)this + 92) = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 44);
  }
  if ( *((_DWORD *)this + 93) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 45) + 32LL))(*((_QWORD *)this + 45));
    *((_DWORD *)this + 93) = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 45);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 42);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 41);
  return 0LL;
}
