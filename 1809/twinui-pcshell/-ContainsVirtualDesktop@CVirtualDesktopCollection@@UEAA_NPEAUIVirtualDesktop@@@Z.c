/*
 * XREFs of ?ContainsVirtualDesktop@CVirtualDesktopCollection@@UEAA_NPEAUIVirtualDesktop@@@Z @ 0x18006E3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CVirtualDesktopCollection::ContainsVirtualDesktop(struct IUnknown **this, struct IUnknown *a2)
{
  char v4; // bl
  char v5; // bp
  __int64 v6; // rdi
  struct IUnknown *v8; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0;
  if ( (unsigned int)SHIsSameObject(a2, this[5]) )
    goto LABEL_7;
  v8 = a2;
  if ( a2 )
    ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
  v5 = 1;
  v6 = 0LL;
  if ( this[7] )
  {
    while ( !(unsigned int)SHIsSameObject((struct IUnknown *)this[6][v6].lpVtbl, a2) )
    {
      if ( ++v6 >= (unsigned __int64)this[7] )
        goto LABEL_8;
    }
    if ( v6 != -1 )
LABEL_7:
      v4 = 1;
  }
LABEL_8:
  if ( (v5 & 1) != 0 )
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  return v4;
}
