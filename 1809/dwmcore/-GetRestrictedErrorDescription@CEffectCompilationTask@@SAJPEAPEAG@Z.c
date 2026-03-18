/*
 * XREFs of ?GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z @ 0x180172BA8
 * Callers:
 *     ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x180076BE8 (-Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ.c)
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x18009D5B8 (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectCompilationTask::GetRestrictedErrorDescription(unsigned __int16 **a1)
{
  int RestrictedErrorInfo; // eax
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 v5; // rbx
  OLECHAR *v6; // rsi
  DWORD LastError; // edi
  OLECHAR *v8; // rsi
  DWORD v9; // edi
  int v10; // eax
  __int64 v11; // rcx
  char v13; // [rsp+60h] [rbp+30h] BYREF
  BSTR bstrString; // [rsp+68h] [rbp+38h] BYREF
  BSTR v15; // [rsp+70h] [rbp+40h] BYREF
  __int64 v16; // [rsp+78h] [rbp+48h] BYREF

  *a1 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  bstrString = 0LL;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v16);
  RestrictedErrorInfo = GetRestrictedErrorInfo(&v16);
  v4 = RestrictedErrorInfo;
  if ( RestrictedErrorInfo < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, RestrictedErrorInfo, 0x9Au);
  }
  else
  {
    v5 = v16;
    if ( v16 )
    {
      v6 = bstrString;
      if ( bstrString )
      {
        LastError = GetLastError();
        SysFreeString(v6);
        SetLastError(LastError);
      }
      bstrString = 0LL;
      v8 = v15;
      if ( v15 )
      {
        v9 = GetLastError();
        SysFreeString(v8);
        SetLastError(v9);
      }
      v15 = 0LL;
      v10 = (*(__int64 (__fastcall **)(__int64, BSTR *, char *, unsigned __int16 **, BSTR *))(*(_QWORD *)v5 + 24LL))(
              v5,
              &v15,
              &v13,
              a1,
              &bstrString);
      v4 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x9Du);
    }
  }
  if ( bstrString )
    SysFreeString(bstrString);
  if ( v15 )
    SysFreeString(v15);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v16);
  return v4;
}
