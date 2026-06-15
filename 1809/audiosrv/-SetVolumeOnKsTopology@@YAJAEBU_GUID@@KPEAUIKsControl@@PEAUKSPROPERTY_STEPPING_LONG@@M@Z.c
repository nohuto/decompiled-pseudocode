/*
 * XREFs of ?SetVolumeOnKsTopology@@YAJAEBU_GUID@@KPEAUIKsControl@@PEAUKSPROPERTY_STEPPING_LONG@@M@Z @ 0x180147574
 * Callers:
 *     ?SetCellularVolume@TelephonyController@@UEAAJM@Z @ 0x180147530 (-SetCellularVolume@TelephonyController@@UEAAJM@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SetVolumeOnKsTopology(
        const struct _GUID *a1,
        int a2,
        struct IKsControl *a3,
        struct KSPROPERTY_STEPPING_LONG *a4,
        float a5)
{
  unsigned int v5; // ebx
  int v6; // eax
  struct IKsControlVtbl *lpVtbl; // rax
  HRESULT (__stdcall *KsProperty)(IKsControl *, PKSPROPERTY, ULONG, void *, ULONG, ULONG *); // rax
  int v9; // eax
  GUID v11; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+50h] [rbp-18h]
  int v13; // [rsp+54h] [rbp-14h]
  const struct _GUID *v14; // [rsp+70h] [rbp+8h] BYREF
  int v15; // [rsp+78h] [rbp+10h] BYREF

  v15 = a2;
  v14 = a1;
  v5 = 0;
  if ( a3 )
  {
    if ( a4 )
      v6 = (int)((double)(int)((double)(int)(((double)a4->Bounds.SignedMaximum - (double)a4->Bounds.SignedMinimum)
                                           / (double)(int)a4->SteppingDelta)
                             * a5
                             + 0.5)
               * (double)(int)a4->SteppingDelta
               + (double)a4->Bounds.SignedMinimum);
    else
      v6 = (int)(float)(a5 * 65536.0);
    v15 = v6;
    lpVtbl = a3->lpVtbl;
    v12 = 1;
    v13 = 2;
    KsProperty = lpVtbl->KsProperty;
    v11 = GUID_abf25c7e_0e64_4e32_b190_d0f6d7c53e97;
    v9 = ((__int64 (__fastcall *)(struct IKsControl *, GUID *, __int64, int *, int, const struct _GUID **))KsProperty)(
           a3,
           &v11,
           24LL,
           &v15,
           4,
           &v14);
    if ( v9 < 0 )
      return (unsigned int)v9;
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v5;
}
