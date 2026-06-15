/*
 * XREFs of ?SetActiveEndpoint@PhoneTopology@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x180148AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18003E1F0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180057130 (--2@YAPEAX_K@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180058C3C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ??0SetCellularRoutingWorkItem@@QEAA@AEBU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@@Z @ 0x180146FF0 (--0SetCellularRoutingWorkItem@@QEAA@AEBU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@@Z.c)
 *     ?AddWorkItemToQueue@PhoneTopology@@AEAAJPEAVPhoneTopologyWorkItem@@@Z @ 0x180147184 (-AddWorkItemToQueue@PhoneTopology@@AEAAJPEAVPhoneTopologyWorkItem@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneTopology::SetActiveEndpoint(
        PhoneTopology *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        struct IEndpointDevice *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rbx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  char *v11; // rbp
  __int64 v12; // rcx
  char *v13; // rbp
  SetCellularRoutingWorkItem *v14; // rax
  int v15; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v18; // [rsp+30h] [rbp-28h]
  int v19; // [rsp+60h] [rbp+8h] BYREF
  SetCellularRoutingWorkItem *v20; // [rsp+70h] [rbp+18h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 136));
  v6 = 0;
  if ( !a3 )
  {
    v6 = -2147467261;
    goto LABEL_31;
  }
  v7 = (*(__int64 (__fastcall **)(struct IEndpointDevice *))(*(_QWORD *)a3 + 56LL))(a3);
  v8 = (*(__int64 (__fastcall **)(struct IEndpointDevice *, int *))(*(_QWORD *)a3 + 48LL))(a3, &v19);
  if ( v8 < 0 )
  {
    v6 = v8;
    goto LABEL_31;
  }
  v9 = v19;
  if ( a2 )
  {
    if ( v19 == *((_DWORD *)this + 325) )
    {
      v12 = v7;
      if ( *(_QWORD *)(v7 + 24) >= 8uLL )
        v12 = *(_QWORD *)v7;
      v13 = (char *)this + 780;
      if ( !(unsigned int)_o__wcsnicmp(v12, (char *)this + 780, 260LL) )
        goto LABEL_31;
      v9 = v19;
    }
    else
    {
      v13 = (char *)this + 780;
    }
    *((_DWORD *)this + 325) = v9;
    if ( *(_QWORD *)(v7 + 24) >= 8uLL )
      v7 = *(_QWORD *)v7;
    StringCchCopyW(v13, 260LL, (char *)v7);
    v11 = (char *)this + 256;
    goto LABEL_24;
  }
  if ( v19 != *((_DWORD *)this + 194) )
  {
    v11 = (char *)this + 256;
    goto LABEL_12;
  }
  v10 = v7;
  if ( *(_QWORD *)(v7 + 24) >= 8uLL )
    v10 = *(_QWORD *)v7;
  v11 = (char *)this + 256;
  if ( (unsigned int)_o__wcsnicmp(v10, (char *)this + 256, 260LL) )
  {
    v9 = v19;
LABEL_12:
    *((_DWORD *)this + 194) = v9;
    if ( *(_QWORD *)(v7 + 24) >= 8uLL )
      v7 = *(_QWORD *)v7;
    StringCchCopyW(v11, 260LL, (char *)v7);
LABEL_24:
    if ( *((_QWORD *)this + 3) )
    {
      v14 = (SetCellularRoutingWorkItem *)operator new(0x438uLL);
      v20 = v14;
      if ( v14 )
        v14 = SetCellularRoutingWorkItem::SetCellularRoutingWorkItem(
                v14,
                (const struct _tagKSTOPOLOGY_ENDPOINTIDPAIR *)v11);
      if ( v14 )
      {
        v15 = PhoneTopology::AddWorkItemToQueue(this, v14);
        if ( v15 < 0 )
          v6 = v15;
      }
      else
      {
        v6 = -2147024882;
      }
    }
  }
LABEL_31:
  if ( v18 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
