/*
 * XREFs of ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x1800268E4
 * Callers:
 *     ?Init@CDisplaySet@@AEAAJPEBVCDXGIEnumeration@@@Z @ 0x180025D04 (-Init@CDisplaySet@@AEAAJPEBVCDXGIEnumeration@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x180025538 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ?IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ @ 0x180026A44 (-IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ.c)
 *     ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ @ 0x180027494 (-UpdateDesc@DXGIOutputInfo@@QEAAJXZ.c)
 *     ??0CDisplay@@AEAA@IIPEAVCDXGIAdapterLimited@@AEBUDXGIOutputInfo@@W4_QAI_DRIVERVERSION@@_N@Z @ 0x180027C90 (--0CDisplay@@AEAA@IIPEAVCDXGIAdapterLimited@@AEBUDXGIOutputInfo@@W4_QAI_DRIVERVERSION@@_N@Z.c)
 *     ?Validate@DXGIOutputInfo@@QEBAJXZ @ 0x180028070 (-Validate@DXGIOutputInfo@@QEBAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDisplaySet::EnumerateOutputs(CDisplaySet *this)
{
  __int64 v1; // rax
  int v2; // ebx
  __int64 v3; // rbp
  __int64 v5; // r15
  __int64 v6; // r14
  int v7; // r12d
  char *v9; // rdi
  int updated; // eax
  unsigned int v11; // ecx
  void *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // eax
  unsigned int v16; // edx
  int v17; // eax
  int v18; // r9d
  unsigned int v19; // [rsp+20h] [rbp-48h]
  int v20; // [rsp+30h] [rbp-38h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v22; // [rsp+70h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 2);
  v2 = 0;
  v22 = 0LL;
  v3 = 0LL;
  *((_BYTE *)this + 115) = 0;
  if ( !*(_DWORD *)(v1 + 88) )
    goto LABEL_4;
  while ( 1 )
  {
    v5 = 0LL;
    v6 = *(_QWORD *)(*(_QWORD *)(v1 + 64) + 8 * v3);
    v7 = *(_DWORD *)(v6 + 348);
    if ( *(_DWORD *)(v6 + 392) )
      break;
LABEL_3:
    v1 = *((_QWORD *)this + 2);
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= *(_DWORD *)(v1 + 88) )
      goto LABEL_4;
  }
  while ( 1 )
  {
    v9 = (char *)(*(_QWORD *)(v6 + 368) + 288 * v5);
    updated = DXGIOutputInfo::UpdateDesc((DXGIOutputInfo *)v9);
    v2 = updated;
    if ( updated < 0 )
      break;
    if ( !DXGIOutputInfo::IsAttachedToDesktop((DXGIOutputInfo *)v9) || v9[200] < 0 )
      goto LABEL_7;
    updated = DXGIOutputInfo::Validate((DXGIOutputInfo *)v9);
    v2 = updated;
    if ( updated < 0 )
    {
      v19 = 783;
      goto LABEL_29;
    }
    v12 = DefaultHeap::AllocClear(0x148uLL);
    if ( !v12 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr, v14);
    LOBYTE(v20) = *((_BYTE *)this + 114);
    v22 = CDisplay::CDisplay(v12, v13, v14, v6, v9, v7, v20);
    if ( !v22 )
    {
      v2 = -2147024882;
      v19 = 794;
      goto LABEL_25;
    }
    if ( (v9[200] & 2) == 0 )
      *((_BYTE *)this + 115) = 1;
    v15 = *((_DWORD *)this + 18);
    v16 = v15 + 1;
    if ( v15 + 1 < v15 )
    {
      v2 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024362, 0xB8u, 0LL);
      goto LABEL_5;
    }
    if ( v16 > *((_DWORD *)this + 17) )
    {
      v17 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 48, 8LL, 1LL, &v22);
      v2 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v17, 0xC3u, 0LL);
LABEL_5:
      if ( v2 < 0 )
      {
        v19 = 807;
LABEL_25:
        v18 = v2;
        goto LABEL_30;
      }
      goto LABEL_6;
    }
    v2 = 0;
    *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * v15) = v22;
    *((_DWORD *)this + 18) = v16;
LABEL_6:
    v22 = 0LL;
LABEL_7:
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= *(_DWORD *)(v6 + 392) )
      goto LABEL_3;
  }
  v19 = 767;
LABEL_29:
  v18 = updated;
LABEL_30:
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v18, v19, 0LL);
LABEL_4:
  ReleaseInterface<CDisplay>(&v22);
  return (unsigned int)v2;
}
