/*
 * XREFs of ?s_IsVisibilityOverrideOn@CImmersiveApp@@SA_NPEAV1@@Z @ 0x180067050
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CImmersiveApp::s_IsVisibilityOverrideOn(struct CImmersiveApp *a1)
{
  struct IUnknown *v1; // rbx
  struct IUnknown *v2; // r13
  PSRWLOCK v3; // rsi
  PVOID Ptr; // r15
  struct IUnknown **v5; // r14
  struct IUnknown **v6; // r12
  bool v7; // zf
  char v8; // bl
  struct IUnknown *v9; // rcx
  bool v11; // di
  struct IUnknown *v12; // [rsp+70h] [rbp+40h] BYREF
  struct IUnknown *v13; // [rsp+78h] [rbp+48h] BYREF
  struct IUnknown **v14; // [rsp+80h] [rbp+50h]

  v13 = 0LL;
  v1 = (struct IUnknown *)((char *)a1 + 112);
  (*(void (__fastcall **)(char *, struct IUnknown **))(*((_QWORD *)a1 + 14) + 464LL))((char *)a1 + 112, &v13);
  v2 = v13;
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
  if ( !v1 )
    goto LABEL_4;
  v5 = (struct IUnknown **)CApplicationManagerUtility::g_pIAMGlobals[7].Ptr;
  v6 = (struct IUnknown **)CApplicationManagerUtility::g_pIAMGlobals[8].Ptr;
  if ( v5 != v6 )
  {
    v14 = &v12;
    do
    {
      v12 = *v5;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
      v11 = (unsigned int)SHIsSameObject(v1, v12) != 0;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
      if ( v11 )
        break;
      ++v5;
    }
    while ( v5 != v6 );
  }
  if ( v5 != v3[8].Ptr )
  {
    v8 = 1;
  }
  else
  {
LABEL_4:
    if ( Ptr )
    {
      v7 = *((_DWORD *)v3[1].Ptr + (_QWORD)Ptr - 1) == 1;
    }
    else if ( LODWORD(v3[5].Ptr) && (unsigned int)SHIsSameObject(v2, (struct IUnknown *)v3[6].Ptr) )
    {
      v7 = LODWORD(v3[5].Ptr) == 1;
    }
    else
    {
      v7 = HIDWORD(v3[5].Ptr) == 1;
    }
    v8 = v7;
  }
  v9 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    ((void (__fastcall *)(struct IUnknown *, struct IUnknownVtbl *))v9->lpVtbl->Release)(v9, v9->lpVtbl);
  }
  return v8;
}
