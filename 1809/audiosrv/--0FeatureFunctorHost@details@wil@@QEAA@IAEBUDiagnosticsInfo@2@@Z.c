/*
 * XREFs of ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x18005F244
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18004C3B0 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180012558 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 */

wil::details::FeatureFunctorHost *__fastcall wil::details::FeatureFunctorHost::FeatureFunctorHost(
        wil::details::FeatureFunctorHost *this,
        int a2,
        const struct DiagnosticsInfo *a3)
{
  wil::details::FeatureFunctorHost *v3; // rbx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  int v7; // ecx
  __int64 v8; // rax
  wil::details::FeatureFunctorHost *result; // rax

  v3 = this;
  *(_QWORD *)this = &wil::details::FeatureFunctorHost::`vftable';
  LOBYTE(this) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(this);
  *((_QWORD *)v3 + 1) = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    *((_DWORD *)v3 + 5) = *((_DWORD *)ThreadLocalDataCache + 4);
    v7 = **((_DWORD **)ThreadLocalDataCache + 1);
    v8 = *((_QWORD *)v3 + 1);
    *((_DWORD *)v3 + 4) = v7;
    *(_DWORD *)(v8 + 16) = v7;
  }
  *((_DWORD *)v3 + 8) = a2;
  result = v3;
  *((_QWORD *)v3 + 3) = a3;
  return result;
}
