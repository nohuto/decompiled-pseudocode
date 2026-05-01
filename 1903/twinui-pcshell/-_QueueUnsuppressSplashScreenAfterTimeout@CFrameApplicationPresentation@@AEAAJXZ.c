/*
 * XREFs of ?_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ @ 0x180053D28
 * Callers:
 *     ?_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ @ 0x18002EB84 (-_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d2fa7908b891c12cbb1669318d2d4613__&___lambda_d2fa7908b891c12cbb1669318d2d4613__&_ @ 0x180053E50 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d2fa7908b891c.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180054460 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::_QueueUnsuppressSplashScreenAfterTimeout(
        CFrameApplicationPresentation *this)
{
  unsigned int v2; // edi
  __int64 *v3; // rax
  __int64 v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi
  int DWORD; // eax
  int v9; // edx
  _QWORD v10[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  CFrameApplicationPresentation *v12; // [rsp+68h] [rbp+10h] BYREF

  if ( dword_180598874 == -1 )
  {
    DWORD = SHRegGetDWORD(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer",
              L"SuppressedSplashScreenTimeout",
              &dword_180598874);
    v9 = dword_180598874;
    if ( DWORD < 0 )
      v9 = 400;
    dword_180598874 = v9;
  }
  v12 = this;
  if ( this )
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
  v10[0] = this;
  if ( this )
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
  v10[1] = this;
  v2 = dword_180598874;
  v3 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d2fa7908b891c12cbb1669318d2d4613______lambda_d2fa7908b891c12cbb1669318d2d4613____(
                    &v11,
                    v10);
  v4 = *v3;
  *v3 = 0LL;
  if ( v11 )
  {
    v11 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
  }
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, v2, v4, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  return v6;
}
