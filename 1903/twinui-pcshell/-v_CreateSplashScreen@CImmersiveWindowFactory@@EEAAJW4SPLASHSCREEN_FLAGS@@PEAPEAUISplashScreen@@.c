/*
 * XREFs of ?v_CreateSplashScreen@CImmersiveWindowFactory@@EEAAJW4SPLASHSCREEN_FLAGS@@PEAPEAUISplashScreen@@@Z @ 0x180421710
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveWindowFactory::v_CreateSplashScreen(__int64 a1, char a2, IUnknown **a3)
{
  HRESULT Instance; // ebx
  IUnknown *v7; // rbx
  IUnknown *v8; // rcx
  IUnknown *v9; // rcx
  IUnknown *pUnk; // [rsp+50h] [rbp+20h] BYREF
  __int64 v12; // [rsp+60h] [rbp+30h] BYREF

  *a3 = 0LL;
  Instance = -2147024891;
  if ( !*(_BYTE *)(a1 + 104) )
    return (unsigned int)Instance;
  pUnk = 0LL;
  v7 = *(IUnknown **)(a1 + 160);
  if ( v7 )
  {
    v12 = *(_QWORD *)(a1 + 160);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
    v8 = pUnk;
    pUnk = v7;
    if ( v8 )
      ((void (__fastcall *)(IUnknown *))v8->lpVtbl->Release)(v8);
  }
  else
  {
    Instance = CoCreateInstance(
                 &GUID_329b80ec_2230_47b8_905d_a2dcf5171c6f,
                 0LL,
                 4u,
                 &GUID_0e0da070_2224_4934_8090_041f7ff223eb,
                 (LPVOID *)&pUnk);
    if ( Instance < 0 )
      goto LABEL_9;
    Instance = ((__int64 (__fastcall *)(IUnknown *, _QWORD, __int64))pUnk->lpVtbl[1].QueryInterface)(
                 pUnk,
                 *(_QWORD *)(a1 + 136),
                 a1 + 116);
    if ( Instance < 0 )
      goto LABEL_9;
  }
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&pUnk);
  v9 = pUnk;
  Instance = 0;
  *a3 = pUnk;
  if ( (a2 & 0x20) != 0 )
    goto LABEL_10;
  CoAllowSetForegroundWindow(v9, 0LL);
LABEL_9:
  v9 = pUnk;
LABEL_10:
  if ( v9 )
  {
    pUnk = 0LL;
    ((void (__fastcall *)(IUnknown *))v9->lpVtbl->Release)(v9);
  }
  return (unsigned int)Instance;
}
