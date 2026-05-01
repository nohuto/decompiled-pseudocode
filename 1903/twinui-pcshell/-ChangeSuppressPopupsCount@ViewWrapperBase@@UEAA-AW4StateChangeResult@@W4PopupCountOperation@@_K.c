/*
 * XREFs of ?ChangeSuppressPopupsCount@ViewWrapperBase@@UEAA?AW4StateChangeResult@@W4PopupCountOperation@@_K@Z @ 0x1802973E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d064192a2b953b8de01ade2ddfeadb45___ @ 0x1802952A4 (Windows--Internal--ComTaskPool--QueueTask__lambda_d064192a2b953b8de01ade2ddfeadb45___.c)
 *     ?ChangeRefcountedBooleanValue@@YA?AW4StateChangeResult@@AEA_KW4PopupCountOperation@@_K@Z @ 0x1802973A0 (-ChangeRefcountedBooleanValue@@YA-AW4StateChangeResult@@AEA_KW4PopupCountOperation@@_K@Z.c)
 */

__int64 __fastcall ViewWrapperBase::ChangeSuppressPopupsCount(__int64 a1, int a2, unsigned __int64 a3)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 v6; // rcx
  int v7; // eax
  int v9[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = ChangeRefcountedBooleanValue((unsigned __int64 *)(a1 + 304), a2, a3);
  if ( v4 == 1 )
  {
    v5 = a1 - 8;
    v12 = v5;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
    v12 = 0LL;
    *(_QWORD *)v9 = v5;
    v10 = v5;
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_d064192a2b953b8de01ade2ddfeadb45___(v6, v9);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3BB,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  }
  return v4;
}
