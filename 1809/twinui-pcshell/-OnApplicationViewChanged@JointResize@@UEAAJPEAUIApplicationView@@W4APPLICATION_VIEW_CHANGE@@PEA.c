/*
 * XREFs of ?OnApplicationViewChanged@JointResize@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18036A4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall JointResize::OnApplicationViewChanged(__int64 a1, struct IUnknown *a2, int a3)
{
  int v5; // r8d
  bool v6; // si
  HWND ForegroundWindow; // rbp
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  struct IUnknown *v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = a3 - 1;
  if ( v5 )
  {
    if ( v5 == 8 && *(_BYTE *)(a1 + 128) && (unsigned int)SHIsSameObject(a2, *(struct IUnknown **)(a1 + 96)) )
    {
      v6 = 1;
      ForegroundWindow = GetForegroundWindow();
      if ( !ForegroundWindow )
        goto LABEL_9;
      v12[0] = 0LL;
      v8 = *(_QWORD *)(a1 + 48);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v12);
      if ( (*(int (__fastcall **)(__int64, HWND, struct IUnknown **))(*(_QWORD *)v8 + 40LL))(v8, ForegroundWindow, v12) >= 0 )
        v6 = (unsigned int)SHIsSameObject(v12[0], *(struct IUnknown **)(a1 + 96)) == 0;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v12);
      if ( v6 )
      {
LABEL_9:
        v9 = a1 - 8;
        v10 = *(_QWORD *)(a1 - 8);
LABEL_13:
        (*(void (__fastcall **)(__int64, _QWORD))(v10 + 64))(v9, 0LL);
      }
    }
  }
  else if ( (unsigned int)SHIsSameObject(a2, *(struct IUnknown **)(a1 + 96))
         || (unsigned int)SHIsSameObject(a2, *(struct IUnknown **)(a1 + 104)) )
  {
    v9 = a1 - 8;
    v10 = *(_QWORD *)(a1 - 8);
    if ( !*(_BYTE *)(a1 + 128) )
    {
      (*(void (**)(void))(v10 + 32))();
      return 0LL;
    }
    goto LABEL_13;
  }
  return 0LL;
}
