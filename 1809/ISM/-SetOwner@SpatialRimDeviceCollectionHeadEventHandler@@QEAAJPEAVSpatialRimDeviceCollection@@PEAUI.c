/*
 * XREFs of ?SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUIMessageSession@@@Z @ 0x180061310
 * Callers:
 *     ?DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ @ 0x1800615FC (-DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ.c)
 *     ?AcquireInterestInHeadEvent@SpatialRimDeviceCollection@@UEAAJXZ @ 0x180061720 (-AcquireInterestInHeadEvent@SpatialRimDeviceCollection@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x18005ABA0 (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 *     ?AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAXPEAUIHeadEventHandler@@PEA_K@Z @ 0x18005B14C (-AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAXPEAUIHeadEventHandler@@PEA_K@Z.c)
 *     ?RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAX_K@Z @ 0x18005B2E0 (-RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialRimDeviceCollectionHeadEventHandler::SetOwner(
        SpatialRimDeviceCollectionHeadEventHandler *this,
        struct SpatialRimDeviceCollection *a2,
        struct IMessageSession *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbp
  unsigned int v7; // ebx
  struct IMessageSession *v8; // rcx
  __int64 v9; // rdi
  MPCHeadUpdateListener *Instance; // rax
  MPCHeadUpdateListener *v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( a2 && *((_QWORD *)this + 3) )
  {
    v7 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)0x8000FFFFLL);
  }
  else
  {
    v8 = (struct IMessageSession *)*((_QWORD *)this + 9);
    if ( v8 != a3 )
    {
      if ( a3 )
      {
        (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)a3 + 8LL))(a3);
        v8 = (struct IMessageSession *)*((_QWORD *)this + 9);
      }
      *((_QWORD *)this + 9) = a3;
      if ( v8 )
        (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    *((_QWORD *)this + 3) = a2;
    v9 = *((_QWORD *)this + 2);
    if ( a2 )
    {
      if ( !v9 )
      {
        Instance = MPCHeadUpdateListener::GetInstance();
        MPCHeadUpdateListener::AddHeadEventOccurred(Instance, this, (unsigned __int64 *)this + 2);
      }
    }
    else if ( v9 )
    {
      v11 = MPCHeadUpdateListener::GetInstance();
      MPCHeadUpdateListener::RemoveHeadEventOccurred(v11, v9);
      *((_QWORD *)this + 2) = 0LL;
    }
    v7 = 0;
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return v7;
}
