/*
 * XREFs of ?QueryService@CLaunchToMonitor@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1803AD9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x1800E72E8 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 */

__int64 __fastcall CLaunchToMonitor::QueryService(
        unsigned int (__fastcall ***this)(char *, const struct _GUID *, void **),
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v6; // rax
  unsigned int Service; // ebx
  __int64 *v9; // rax
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  *a4 = 0LL;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_8d547fa1_cc45_40c8_b7c1_d48c183f13f3.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_8d547fa1_cc45_40c8_b7c1_d48c183f13f3.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_8d547fa1_cc45_40c8_b7c1_d48c183f13f3.Data4;
  if ( v6 )
  {
    v9 = CWRLObjectWithGITSite::SiteUnk((__int64)(this + 1), &v11);
    Service = IUnknown_QueryService((IUnknown *)*v9, a2, a3, a4);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  }
  else
  {
    return (**(this - 1))((char *)this - 8, a3, a4);
  }
  return Service;
}
