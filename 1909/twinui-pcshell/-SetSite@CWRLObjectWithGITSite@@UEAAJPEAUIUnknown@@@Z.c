/*
 * XREFs of ?SetSite@CWRLObjectWithGITSite@@UEAAJPEAUIUnknown@@@Z @ 0x1800725A0
 * Callers:
 *     ?SetSite@DesktopBlueLightReductionManager@@UEAAJPEAUIUnknown@@@Z @ 0x18017FD10 (-SetSite@DesktopBlueLightReductionManager@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?SetSite@TabletModeCoverWindow@@UEAAJPEAUIUnknown@@@Z @ 0x1803E8AA0 (-SetSite@TabletModeCoverWindow@@UEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsAgile@@YA_NPEAUIUnknown@@@Z @ 0x180072644 (-IsAgile@@YA_NPEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAXPEAUIObjectArray@@@Z @ 0x1801272CC (-Attach@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAXPEAUIObjectArray@@@Z.c)
 *     ?Marshal@GlobalInterfaceTable@@SAJPEAUIUnknown@@AEBU_GUID@@PEAK@Z @ 0x1801277B8 (-Marshal@GlobalInterfaceTable@@SAJPEAUIUnknown@@AEBU_GUID@@PEAK@Z.c)
 *     ?Revoke@GlobalInterfaceTable@@SAXK@Z @ 0x18012821C (-Revoke@GlobalInterfaceTable@@SAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWRLObjectWithGITSite::SetSite(RTL_SRWLOCK *this, struct IUnknown *a2)
{
  int v4; // esi
  unsigned int v6; // esi
  unsigned int Ptr; // ebp
  PVOID v8; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    if ( IsAgile((struct IUnknown *)this) && !IsAgile(a2) )
    {
      LODWORD(v8) = 0;
      v4 = GlobalInterfaceTable::Marshal(a2, &GUID_00000000_0000_0000_c000_000000000046, (unsigned int *)&v8);
      if ( v4 >= 0 )
      {
        AcquireSRWLockExclusive(this + 2);
        Ptr = (unsigned int)this[3].Ptr;
        LODWORD(this[3].Ptr) = (_DWORD)v8;
        ReleaseSRWLockExclusive(this + 2);
        if ( Ptr )
          GlobalInterfaceTable::Revoke(Ptr);
      }
    }
    else
    {
      AcquireSRWLockExclusive(this + 2);
      if ( this[4].Ptr != a2 )
      {
        ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
        v8 = this[4].Ptr;
        this[4].Ptr = a2;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
      }
      ReleaseSRWLockExclusive(this + 2);
      return 0;
    }
  }
  else
  {
    AcquireSRWLockExclusive(this + 2);
    v8 = 0LL;
    this[4].Ptr = 0LL;
    Microsoft::WRL::ComPtr<IObjectArray>::Attach(&v8);
    v6 = (unsigned int)this[3].Ptr;
    LODWORD(this[3].Ptr) = 0;
    ReleaseSRWLockExclusive(this + 2);
    if ( v6 )
      GlobalInterfaceTable::Revoke(v6);
    else
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
    v4 = 0;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
  }
  return (unsigned int)v4;
}
