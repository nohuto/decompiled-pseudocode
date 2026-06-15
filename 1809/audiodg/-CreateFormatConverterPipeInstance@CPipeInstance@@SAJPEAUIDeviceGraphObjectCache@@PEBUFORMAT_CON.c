/*
 * XREFs of ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14003A344
 * Callers:
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x14004192C (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400084D8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x14000A130 (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000D280 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000D330 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14000D730 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000E6B0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14001ADB8 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ??2@YAPEAX_K@Z @ 0x14001B8BC (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x14001D997 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x140031C94 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     WPP_SF_ @ 0x140032818 (WPP_SF_.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x140039A28 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x140039D54 (-AddHeadList@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXP.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400405A8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CPipeInstance::CreateFormatConverterPipeInstance(
        struct IUnknown *a1,
        const struct tWAVEFORMATEX **a2,
        struct CPipeInstance **a3)
{
  BOOL v6; // r12d
  int v7; // eax
  int v8; // eax
  int v9; // eax
  HKEY v10; // rbx
  struct IAudioMediaType *v11; // rdi
  int v12; // eax
  CPipeInstance *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  CPipeInstance *v16; // rdi
  const unsigned __int16 *v17; // r8
  unsigned __int64 v18; // r9
  int v19; // eax
  int v20; // ebx
  _UNKNOWN **v21; // rcx
  __int64 v23; // [rsp+20h] [rbp-108h]
  __int64 v24; // [rsp+48h] [rbp-E0h] BYREF
  int pExceptionObject; // [rsp+50h] [rbp-D8h] BYREF
  int v26; // [rsp+54h] [rbp-D4h] BYREF
  int v27; // [rsp+58h] [rbp-D0h] BYREF
  int v28; // [rsp+5Ch] [rbp-CCh] BYREF
  int v29; // [rsp+60h] [rbp-C8h] BYREF
  int v30; // [rsp+64h] [rbp-C4h] BYREF
  struct IAudioMediaType *v31; // [rsp+68h] [rbp-C0h] BYREF
  LPVOID *v32; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+78h] [rbp-B0h] BYREF
  HKEY v34; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+88h] [rbp-A0h] BYREF
  __int128 v36; // [rsp+90h] [rbp-98h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-88h]
  __int128 v38; // [rsp+A8h] [rbp-80h]
  int v39; // [rsp+B8h] [rbp-70h]
  __int64 v40; // [rsp+C0h] [rbp-68h]
  long *v41; // [rsp+C8h] [rbp-60h] BYREF
  ATL::CAtlException *v42; // [rsp+D0h] [rbp-58h] BYREF
  GUID v43; // [rsp+E0h] [rbp-48h] BYREF
  HKEY v44; // [rsp+138h] [rbp+10h] BYREF
  struct CPipeInstance **v45; // [rsp+140h] [rbp+18h]
  __int64 v46; // [rsp+148h] [rbp+20h] BYREF

  v45 = a3;
  v40 = -2LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 10;
  v6 = *(_DWORD *)a2 != 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x10u, (__int64)&WPP_48d0519fd63337424d216177f8c49edf_Traceguids);
  }
  *a3 = 0LL;
  try
  {
    v24 = 0LL;
    v7 = CProcessNode::CreateDummyProcessNode(v6, a2[1], &v24);
    if ( v7 < 0 )
    {
      pExceptionObject = v7;
      throw (long *)&pExceptionObject;
    }
    v33 = v24;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 *)&v36, (__int64)&v33);
    v24 = 0LL;
    if ( *(_DWORD *)a2 )
    {
      v46 = 0LL;
      v12 = CProcessNode::CreateDummyProcessNode(v6, a2[2], &v46);
      if ( v12 < 0 )
      {
        v28 = v12;
        throw (long *)&v28;
      }
      v35 = v46;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 *)&v36, (__int64)&v35);
      v46 = 0LL;
    }
    else
    {
      v31 = 0LL;
      v8 = CAudioMediaType::Create(a2[2], (unsigned int)a2[2]->cbSize + 18, &v31, 0.0, 0);
      if ( v8 < 0 )
      {
        v26 = v8;
        throw (long *)&v26;
      }
      v44 = 0LL;
      v43 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v9 = CAPOProcessNode::CreateAPOProcessNode(
             &GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a,
             0LL,
             v6,
             1,
             0,
             (__int128 *)&v43,
             &v44);
      if ( v9 < 0 )
      {
        v27 = v9;
        throw (long *)&v27;
      }
      v10 = v44;
      v11 = v31;
      (*(void (__fastcall **)(HKEY, struct IAudioMediaType *))(*(_QWORD *)v44 + 24LL))(v44, v31);
      (*(void (__fastcall **)(HKEY, struct IAudioMediaType *))(*(_QWORD *)v10 + 32LL))(v10, v11);
      v34 = v10;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 *)&v36, (__int64)&v34);
      v44 = 0LL;
      if ( v11 )
        ((void (__fastcall *)(struct IAudioMediaType *))v11->lpVtbl->Release)(v11);
    }
    v13 = (CPipeInstance *)operator new(0x138uLL);
    v44 = (HKEY)v13;
    if ( v13 )
      v16 = CPipeInstance::CPipeInstance(v13, (enum PIPE_TYPE)4);
    else
      v16 = 0LL;
    v32 = (LPVOID *)v16;
    if ( !v16 )
    {
      v29 = -2147024882;
      throw (long *)&v29;
    }
    v17 = (const unsigned __int16 *)a2[4];
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    v19 = _AllocStringWorker<CTCoAllocPolicy>(v15, v14, v17, v18, v23, (char **)v16 + 23);
    v20 = v19;
    if ( v19 < 0 )
    {
      v30 = v19;
      throw (long *)&v30;
    }
    *((_DWORD *)v16 + 30) = *(_DWORD *)a2 == 2;
    *((_DWORD *)v16 + 3) = v6;
    *((_DWORD *)v16 + 32) = 0;
    if ( *((_QWORD *)v16 + 18) )
      ATL::AtlComPtrAssign((struct IUnknown **)v16 + 18, 0LL);
    if ( *((struct IUnknown **)v16 + 29) != a1 )
      ATL::AtlComPtrAssign((struct IUnknown **)v16 + 29, a1);
    *(_QWORD *)v16 = 0LL;
    *((_DWORD *)v16 + 2) = 1;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList((__int64 *)v16 + 2, (__int64)&v36);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v36);
    *((_DWORD *)v16 + 35) = (int)((float)((float)(int)a2[2]->nAvgBytesPerSec / (float)a2[2]->nBlockAlign)
                                * (double)(int)a2[3]
                                / 10000000.0
                                + 0.5);
    *((_DWORD *)v16 + 33) = 14;
    *((_DWORD *)v16 + 51) = 0;
    *((GUID *)v16 + 13) = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v32 = 0LL;
    *v45 = v16;
    ATL::CAutoPtr<CPipeInstance>::Free(&v32);
    v24 = 0LL;
  }
  catch ( long *v41 )
  {
    v20 = *(_DWORD *)v41;
  }
  catch ( ATL::CAtlException *v42 )
  {
    v20 = *(_DWORD *)v42;
  }
  v21 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, (__int64)&WPP_48d0519fd63337424d216177f8c49edf_Traceguids, v20);
    v21 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( v20 < 0 )
  {
    if ( v21 != &WPP_GLOBAL_Control && (*((_DWORD *)v21 + 7) & 0x20000) != 0 && *((_BYTE *)v21 + 25) >= 2u )
      WPP_SF_D((__int64)v21[2], 0x12u, (__int64)&WPP_48d0519fd63337424d216177f8c49edf_Traceguids, v20);
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateFormatConverterPipeInstance", 0x249u, v20);
  }
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v36);
  return (unsigned int)v20;
}
