/*
 * XREFs of ?Init@CDisplaySet@@AEAAJPEBVCDXGIEnumeration@@@Z @ 0x1800A46DC
 * Callers:
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x1800A4574 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShouldForceRemotingMode@CDisplaySet@@CA_NXZ @ 0x1800A46B8 (-ShouldForceRemotingMode@CDisplaySet@@CA_NXZ.c)
 *     ?ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ @ 0x1800A4C90 (-ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ.c)
 *     ?GetKMTDriverUpdateStatus@CDXGIAdapterLimited@@QEAAJPEAH@Z @ 0x1800A7994 (-GetKMTDriverUpdateStatus@CDXGIAdapterLimited@@QEAAJPEAH@Z.c)
 *     ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x1800A7A84 (-EnumerateOutputs@CDisplaySet@@AEAAJXZ.c)
 *     ?GetAdapterNoRefFromLuid@CDXGIEnumeration@@QEBAJU_LUID@@PEAPEAVCDXGIAdapterLimited@@@Z @ 0x1800A8BEC (-GetAdapterNoRefFromLuid@CDXGIEnumeration@@QEBAJU_LUID@@PEAPEAVCDXGIAdapterLimited@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDisplaySet::Init(CDisplaySet *this, const struct CDXGIEnumeration *a2)
{
  void (__fastcall ***v3)(_QWORD); // rdx
  signed int v4; // eax
  __int64 v5; // rcx
  signed int v6; // edi
  unsigned int i; // r8d
  int v8; // r10d
  unsigned int *v9; // rdx
  int v10; // r9d
  int v11; // eax
  unsigned int j; // ebp
  __int64 v13; // rax
  CDXGIEnumeration *v14; // rcx
  struct _LUID *v15; // r14
  int AdapterNoRefFromLuid; // eax
  struct CDXGIAdapterLimited *v17; // rcx
  __int64 v18; // rax
  CDXGIEnumeration *v19; // rcx
  int v20; // r14d
  struct _LUID *v21; // rdx
  signed int v22; // eax
  __int64 v23; // rcx
  signed int v25; // eax
  signed int v26; // eax
  signed int v27; // eax
  unsigned int v28; // [rsp+20h] [rbp-38h]
  unsigned int v29; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct CDXGIAdapterLimited *v31; // [rsp+60h] [rbp+8h] BYREF
  CDXGIAdapterLimited *v32; // [rsp+68h] [rbp+10h] BYREF

  *((_BYTE *)this + 114) = CDisplaySet::ShouldForceRemotingMode();
  *((_QWORD *)this + 2) = v3;
  if ( v3 )
    (**v3)(v3);
  v4 = CDisplaySet::EnumerateOutputs(this);
  v6 = v4;
  if ( v4 < 0 )
  {
    v29 = 179;
    goto LABEL_47;
  }
  v4 = CDisplaySet::ArrangeCloneDisplays(this);
  v6 = v4;
  if ( v4 < 0 )
  {
    v29 = 181;
LABEL_47:
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802BFEC8, 1u, v4, v29, 0LL);
    return (unsigned int)v6;
  }
  for ( i = 0; i < *((_DWORD *)this + 18); ++i )
  {
    v8 = *((_DWORD *)this + 6);
    v9 = *(unsigned int **)(*((_QWORD *)this + 6) + 8LL * i);
    if ( *((_DWORD *)this + 8) <= v8 || (v10 = 0, *((_DWORD *)this + 9) <= *((_DWORD *)this + 7)) )
      v10 = 1;
    v5 = v9[30];
    if ( (int)v9[32] <= (int)v5 || (v11 = 0, (int)v9[33] <= (int)v9[31]) )
      v11 = 1;
    if ( v10 )
    {
      if ( v11 )
      {
        *((_QWORD *)this + 4) = 0LL;
        *((_QWORD *)this + 3) = 0LL;
      }
      else
      {
        *(_OWORD *)((char *)this + 24) = *(_OWORD *)(v9 + 30);
      }
    }
    else if ( !v11 )
    {
      if ( (int)v5 < v8 )
        *((_DWORD *)this + 6) = v5;
      v25 = v9[31];
      if ( v25 < *((_DWORD *)this + 7) )
        *((_DWORD *)this + 7) = v25;
      v26 = v9[32];
      if ( v26 > *((_DWORD *)this + 8) )
        *((_DWORD *)this + 8) = v26;
      v27 = v9[33];
      if ( v27 > *((_DWORD *)this + 9) )
        *((_DWORD *)this + 9) = v27;
    }
  }
  v6 = 0;
  *((_BYTE *)this + 112) = 0;
  for ( j = 0; j < *((_DWORD *)this + 18); ++j )
  {
    v13 = *((_QWORD *)this + 6);
    v14 = (CDXGIEnumeration *)*((_QWORD *)this + 2);
    v31 = 0LL;
    v15 = *(struct _LUID **)(v13 + 8LL * j);
    AdapterNoRefFromLuid = CDXGIEnumeration::GetAdapterNoRefFromLuid(v14, v15[29], &v31);
    v6 = AdapterNoRefFromLuid;
    if ( AdapterNoRefFromLuid < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C9,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\display.cpp",
        (const char *)(unsigned int)AdapterNoRefFromLuid,
        v28);
    }
    else
    {
      v17 = v31;
      v6 = 0;
      v15[32].LowPart = *((_DWORD *)v31 + 74);
      v15[32].HighPart = *((_DWORD *)v17 + 75);
    }
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v17, 0LL, 0, v6, 0x4FAu, 0LL);
      break;
    }
    v18 = *((_QWORD *)this + 6);
    v19 = (CDXGIEnumeration *)*((_QWORD *)this + 2);
    v20 = 0;
    LODWORD(v31) = 0;
    v32 = 0LL;
    v21 = *(struct _LUID **)(v18 + 8LL * j);
    *((_BYTE *)this + 112) = 0;
    v22 = CDXGIEnumeration::GetAdapterNoRefFromLuid(v19, v21[29], &v32);
    v6 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x95u, 0LL);
    }
    else
    {
      v5 = (__int64)v32;
      if ( !v32 )
        goto LABEL_23;
      CDXGIAdapterLimited::GetKMTDriverUpdateStatus(v32, (int *)&v31);
      v20 = (int)v31;
      *((_BYTE *)this + 112) = (_DWORD)v31 != 0;
    }
    if ( v20 )
      v6 = -2003304307;
LABEL_23:
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v6, 0x4FCu, 0LL);
      break;
    }
  }
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802BFEC8, 1u, v6, 0xB9u, 0LL);
  return (unsigned int)v6;
}
