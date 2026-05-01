/*
 * XREFs of ?_DestroyFrameIfPossible@CFrameApplicationPresentation@@AEAAXXZ @ 0x180128C54
 * Callers:
 *     _lambda_c95d809369eb2a01accf8ae73ccd45ab_::operator() @ 0x180127270 (_lambda_c95d809369eb2a01accf8ae73ccd45ab_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2647a080773a9fa4ef6a91f024d7dfff___::Run @ 0x180127D70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2647a080773a9fa4ef6a91f024d7dfff___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
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
  v4 = *((_QWORD *)this + 74);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v4);
  if ( v2 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 15);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 74);
    *((_DWORD *)this + 14) = 2;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 248LL))(v3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
}
