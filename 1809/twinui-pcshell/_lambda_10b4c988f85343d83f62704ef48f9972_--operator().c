/*
 * XREFs of _lambda_10b4c988f85343d83f62704ef48f9972_::operator() @ 0x180070330
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_10b4c988f85343d83f62704ef48f9972___::operator() @ 0x180070320 (CDelayIAMOperations--CDelayedOperation__lambda_10b4c988f85343d83f62704ef48f9972___--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_10b4c988f85343d83f62704ef48f9972_::operator()(_QWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v5; // [rsp+60h] [rbp+20h] BYREF
  __int64 v6; // [rsp+68h] [rbp+28h] BYREF
  int v7; // [rsp+70h] [rbp+30h] BYREF
  int v8; // [rsp+74h] [rbp+34h]
  __int64 v9; // [rsp+78h] [rbp+38h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = 0LL;
  v2 = a1[1];
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 496LL))(v2, &v6) >= 0
    && (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 24LL))(v6, &v9) >= 0 )
  {
    v5 = 0LL;
    v3 = *(_QWORD *)(*a1 + 560LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
    if ( (*(int (__fastcall **)(__int64, __int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v3 + 88LL))(
           v3,
           v9,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &v5) >= 0 )
    {
      v7 = *(_DWORD *)(*a1 + 952LL);
      v8 = 0;
      (*(void (__fastcall **)(_QWORD, __int64, int *, _QWORD))(*(_QWORD *)a1[1] + 456LL))(a1[1], v5, &v7, 0LL);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
}
