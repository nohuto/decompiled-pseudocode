/*
 * XREFs of ?SetSite@CWRLObjectWithGITSite@@UEAAJPEAUIUnknown@@@Z @ 0x18006FA50
 * Callers:
 *     ?SetSite@DesktopBlueLightReductionManager@@UEAAJPEAUIUnknown@@@Z @ 0x180160A00 (-SetSite@DesktopBlueLightReductionManager@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?SetSite@TabletModeCoverWindow@@UEAAJPEAUIUnknown@@@Z @ 0x1803C9510 (-SetSite@TabletModeCoverWindow@@UEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsAgile@@YA_NPEAUIUnknown@@@Z @ 0x18006FAF4 (-IsAgile@@YA_NPEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAXPEAUIObjectArray@@@Z @ 0x18010829C (-Attach@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAXPEAUIObjectArray@@@Z.c)
 *     ?Marshal@GlobalInterfaceTable@@SAJPEAUIUnknown@@AEBU_GUID@@PEAK@Z @ 0x180108774 (-Marshal@GlobalInterfaceTable@@SAJPEAUIUnknown@@AEBU_GUID@@PEAK@Z.c)
 *     ?Revoke@GlobalInterfaceTable@@SAXK@Z @ 0x1801091C4 (-Revoke@GlobalInterfaceTable@@SAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWRLObjectWithGITSite::SetSite(RTL_SRWLOCK *this, struct IUnknown *a2)
{
  int v4; // esi
  PVOID v6; // rdx
  unsigned int v7; // esi
  unsigned int Ptr; // ebp
  PVOID v9; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    if ( IsAgile((struct IUnknown *)this) && !IsAgile(a2) )
    {
      LODWORD(v9) = 0;
      v4 = GlobalInterfaceTable::Marshal(a2, &GUID_00000000_0000_0000_c000_000000000046, (unsigned int *)&v9);
      if ( v4 >= 0 )
      {
        AcquireSRWLockExclusive(this + 2);
        Ptr = (unsigned int)this[3].Ptr;
        LODWORD(this[3].Ptr) = (_DWORD)v9;
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
        v9 = this[4].Ptr;
        this[4].Ptr = a2;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
      }
      ReleaseSRWLockExclusive(this + 2);
      return 0;
    }
  }
  else
  {
    AcquireSRWLockExclusive(this + 2);
    v9 = 0LL;
    v6 = this[4].Ptr;
    this[4].Ptr = 0LL;
    Microsoft::WRL::ComPtr<IObjectArray>::Attach(&v9, v6);
    v7 = (unsigned int)this[3].Ptr;
    LODWORD(this[3].Ptr) = 0;
    ReleaseSRWLockExclusive(this + 2);
    if ( v7 )
      GlobalInterfaceTable::Revoke(v7);
    else
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
    v4 = 0;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
  }
  return (unsigned int)v4;
}
