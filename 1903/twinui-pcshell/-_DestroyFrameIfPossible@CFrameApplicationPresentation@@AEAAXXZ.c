/*
 * XREFs of ?_DestroyFrameIfPossible@CFrameApplicationPresentation@@AEAAXXZ @ 0x180152384
 * Callers:
 *     _lambda_c33ccc33460f714f139ac7c6d94dc43a_::operator() @ 0x180150844 (_lambda_c33ccc33460f714f139ac7c6d94dc43a_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2647a080773a9fa4ef6a91f024d7dfff___::Run @ 0x180151250 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2647a080773a9fa4ef6a91f024d7dfff___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CFrameApplicationPresentation::_DestroyFrameIfPossible(CFrameApplicationPresentation *this)
{
  char v2; // di
  __int64 v3; // rsi
  __int64 v4; // [rsp+50h] [rbp+8h] BYREF
  __int64 v5; // [rsp+58h] [rbp+10h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = 1;
  if ( *((_DWORD *)this + 14) != 1 || **((_QWORD **)this + 13) )
    v2 = 0;
  v3 = *((_QWORD *)this + 15);
  v5 = v3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v5);
  v4 = *((_QWORD *)this + 87);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v4);
  if ( v2 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 15);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 87);
    *((_DWORD *)this + 14) = 2;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 248LL))(v3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
}
