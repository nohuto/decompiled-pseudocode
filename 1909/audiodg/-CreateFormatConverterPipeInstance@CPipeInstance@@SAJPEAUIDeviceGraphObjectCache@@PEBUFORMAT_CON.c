/*
 * XREFs of ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140034F74
 * Callers:
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x14003E5CC (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x140003980 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x140004614 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x140005690 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x140006F04 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x140007170 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x1400074B0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x140009B10 (-AddHeadList@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXP.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140009D34 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x14000B604 (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14000DE34 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x140015B14 (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1400181D7 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x14002BE40 (WPP_SF_.c)
 *     WPP_SF_D @ 0x14002BE64 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CAE8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CPipeInstance::CreateFormatConverterPipeInstance(
        struct IUnknown *a1,
        const struct tWAVEFORMATEX **a2,
        struct CPipeInstance **a3)
{
  BOOL v5; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned __int16 *v9; // rbx
  struct IAudioMediaType *v10; // rdi
  int v11; // eax
  unsigned __int16 *v12; // rax
  CPipeInstance *v13; // rdi
  unsigned __int16 *v14; // rax
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // r15
  int v17; // ebx
  char *v18; // rax
  unsigned int v19; // edx
  _UNKNOWN **v20; // rcx
  __int64 v22; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-D8h] BYREF
  int pExceptionObject; // [rsp+58h] [rbp-D0h] BYREF
  int v25; // [rsp+5Ch] [rbp-CCh] BYREF
  int v26; // [rsp+60h] [rbp-C8h] BYREF
  int v27; // [rsp+64h] [rbp-C4h] BYREF
  int v28; // [rsp+68h] [rbp-C0h] BYREF
  int v29; // [rsp+6Ch] [rbp-BCh] BYREF
  struct IAudioMediaType *v30; // [rsp+70h] [rbp-B8h] BYREF
  CPipeInstance *v31; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+80h] [rbp-A8h] BYREF
  unsigned __int16 *v33; // [rsp+88h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+90h] [rbp-98h] BYREF
  __int128 v35; // [rsp+98h] [rbp-90h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-80h]
  __int128 v37; // [rsp+B0h] [rbp-78h]
  int v38; // [rsp+C0h] [rbp-68h]
  __int64 v39; // [rsp+C8h] [rbp-60h]
  long *v40; // [rsp+D0h] [rbp-58h] BYREF
  ATL::CAtlException *v41; // [rsp+D8h] [rbp-50h] BYREF
  GUID v42; // [rsp+E0h] [rbp-48h] BYREF
  BOOL v44; // [rsp+138h] [rbp+10h]
  unsigned __int16 *v46; // [rsp+148h] [rbp+20h] BYREF

  v39 = -2LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 10;
  v5 = *(_DWORD *)a2 != 0;
  v44 = v5;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x10u, (__int64)&WPP_d4b18a9a07fa3bd0098f681e5ce2fb5d_Traceguids);
  }
  *a3 = 0LL;
  try
  {
    v23 = 0LL;
    v6 = CProcessNode::CreateDummyProcessNode(v5, a2[1], &v23);
    if ( v6 < 0 )
    {
      pExceptionObject = v6;
      throw (long *)&pExceptionObject;
    }
    v32 = v23;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64)&v35, &v32);
    v23 = 0LL;
    if ( *(_DWORD *)a2 )
    {
      v22 = 0LL;
      v11 = CProcessNode::CreateDummyProcessNode(v5, a2[2], &v22);
      if ( v11 < 0 )
      {
        v27 = v11;
        throw (long *)&v27;
      }
      v34 = v22;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64)&v35, &v34);
      v22 = 0LL;
    }
    else
    {
      v30 = 0LL;
      v7 = CAudioMediaType::Create(a2[2], (unsigned int)a2[2]->cbSize + 18, &v30, 0.0, 0);
      if ( v7 < 0 )
      {
        v25 = v7;
        throw (long *)&v25;
      }
      v46 = 0LL;
      v42 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v8 = CAPOProcessNode::CreateAPOProcessNode(
             &GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a,
             0LL,
             v5,
             1,
             0,
             &v42,
             (HKEY *)&v46);
      if ( v8 < 0 )
      {
        v26 = v8;
        throw (long *)&v26;
      }
      v9 = v46;
      v10 = v30;
      (*(void (__fastcall **)(unsigned __int16 *, struct IAudioMediaType *))(*(_QWORD *)v46 + 24LL))(v46, v30);
      (*(void (__fastcall **)(unsigned __int16 *, struct IAudioMediaType *))(*(_QWORD *)v9 + 32LL))(v9, v10);
      v33 = v9;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64)&v35, &v33);
      v46 = 0LL;
      if ( v10 )
        ((void (__fastcall *)(struct IAudioMediaType *))v10->lpVtbl->Release)(v10);
    }
    v12 = (unsigned __int16 *)operator new(0x140uLL);
    v46 = v12;
    if ( v12 )
      v13 = CPipeInstance::CPipeInstance((CPipeInstance *)v12, (enum PIPE_TYPE)4);
    else
      v13 = 0LL;
    v31 = v13;
    if ( !v13 )
    {
      v28 = -2147024882;
      throw (long *)&v28;
    }
    v14 = (unsigned __int16 *)a2[4];
    v46 = v14;
    v15 = -1LL;
    v16 = -1LL;
    do
      ++v16;
    while ( v14[v16] );
    *((_QWORD *)v13 + 24) = 0LL;
    if ( v16 + 1 >= v16 )
      v15 = v16 + 1;
    v17 = v16 + 1 < v16 ? 0x80070216 : 0;
    if ( v16 + 1 >= v16 )
    {
      if ( is_mul_ok(v15, 2uLL) )
      {
        v18 = (char *)CoTaskMemAlloc(2 * v15);
        *((_QWORD *)v13 + 24) = v18;
        if ( !v18 )
        {
          v17 = -2147024882;
LABEL_32:
          v29 = v17;
          throw (long *)&v29;
        }
        v17 = 0;
        StringCchCopyNExW(v18, v15, v46, v16);
      }
      else
      {
        v17 = -2147024362;
      }
    }
    if ( v17 < 0 )
      goto LABEL_32;
    *((_DWORD *)v13 + 30) = *(_DWORD *)a2 == 2;
    *((_DWORD *)v13 + 3) = v44;
    *((_DWORD *)v13 + 33) = 0;
    if ( *((_QWORD *)v13 + 19) )
      ATL::AtlComPtrAssign((struct IUnknown **)v13 + 19, 0LL);
    if ( *((struct IUnknown **)v13 + 30) != a1 )
      ATL::AtlComPtrAssign((struct IUnknown **)v13 + 30, a1);
    *(_QWORD *)v13 = 0LL;
    *((_DWORD *)v13 + 2) = 1;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList((__int64)v13 + 16, (__int64)&v35);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v35);
    *((_DWORD *)v13 + 36) = (int)((float)((float)(int)a2[2]->nAvgBytesPerSec / (float)a2[2]->nBlockAlign)
                                * (double)(int)a2[3]
                                / 10000000.0
                                + 0.5);
    *((_DWORD *)v13 + 34) = 14;
    *((_DWORD *)v13 + 53) = 0;
    *(GUID *)((char *)v13 + 216) = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v31 = 0LL;
    *a3 = v13;
    ATL::CAutoPtr<CPipeInstance>::Free(&v31, v19);
    v23 = 0LL;
  }
  catch ( long *v40 )
  {
    v17 = *(_DWORD *)v40;
  }
  catch ( ATL::CAtlException *v41 )
  {
    v17 = *(_DWORD *)v41;
  }
  v20 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, (__int64)&WPP_d4b18a9a07fa3bd0098f681e5ce2fb5d_Traceguids, v17);
    v20 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( v17 < 0 )
  {
    if ( v20 != &WPP_GLOBAL_Control && (*((_DWORD *)v20 + 7) & 0x20000) != 0 && *((_BYTE *)v20 + 25) >= 2u )
      WPP_SF_D((__int64)v20[2], 0x12u, (__int64)&WPP_d4b18a9a07fa3bd0098f681e5ce2fb5d_Traceguids, v17);
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateFormatConverterPipeInstance", 0x24Au, v17);
  }
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v35);
  return (unsigned int)v17;
}
