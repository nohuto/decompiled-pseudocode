/*
 * XREFs of ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x180080124
 * Callers:
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x18007F940 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x18006E0A0 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ?Validate@DXGIOutputInfo@@QEBAJXZ @ 0x18007E108 (-Validate@DXGIOutputInfo@@QEBAJXZ.c)
 *     ??0CDisplay@@AEAA@IIPEAVCDXGIAdapterLimited@@AEBUDXGIOutputInfo@@W4_QAI_DRIVERVERSION@@P6AJPEBGPEAUDXGI_MODE_DESC@@@Z@Z @ 0x18007E1A0 (--0CDisplay@@AEAA@IIPEAVCDXGIAdapterLimited@@AEBUDXGIOutputInfo@@W4_QAI_DRIVERVERSION@@P6AJPEBGP.c)
 *     ?IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ @ 0x1800802C4 (-IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ.c)
 *     ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ @ 0x180080C88 (-UpdateDesc@DXGIOutputInfo@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?LoadTSModules@CDisplaySet@@QEAAJXZ @ 0x1800E81D0 (-LoadTSModules@CDisplaySet@@QEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDisplaySet::EnumerateOutputs(CDisplaySet *this)
{
  int v1; // ebx
  __int64 v2; // rbp
  __int64 v4; // rax
  unsigned int v5; // r12d
  __int64 v6; // r15
  __int64 v7; // r14
  int v8; // r13d
  DXGIOutputInfo *v10; // rdi
  int updated; // eax
  __int64 v12; // rcx
  void *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  unsigned int v17; // eax
  int v18; // eax
  int v19; // r9d
  unsigned int v20; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v22; // [rsp+70h] [rbp+8h] BYREF

  v1 = 0;
  v2 = 0LL;
  v22 = 0LL;
  v4 = *((_QWORD *)this + 2);
  if ( *(_DWORD *)(v4 + 88) )
  {
    v5 = v22;
    while ( 1 )
    {
      v6 = 0LL;
      v7 = *(_QWORD *)(*(_QWORD *)(v4 + 64) + 8 * v2);
      v8 = *(_DWORD *)(v7 + 348);
      if ( *(_DWORD *)(v7 + 392) )
        break;
LABEL_4:
      v4 = *((_QWORD *)this + 2);
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *(_DWORD *)(v4 + 88) )
        goto LABEL_5;
    }
    while ( 1 )
    {
      v10 = (DXGIOutputInfo *)(*(_QWORD *)(v7 + 368) + 288 * v6);
      updated = DXGIOutputInfo::UpdateDesc(v10);
      v1 = updated;
      if ( updated < 0 )
        break;
      if ( DXGIOutputInfo::IsAttachedToDesktop(v10) )
      {
        updated = DXGIOutputInfo::Validate(v10);
        v1 = updated;
        if ( updated < 0 )
        {
          v20 = 809;
          goto LABEL_36;
        }
        if ( (*((_BYTE *)v10 + 200) & 2) != 0 )
        {
          updated = CDisplaySet::LoadTSModules(this);
          v1 = updated;
          if ( updated < 0 )
          {
            v20 = 813;
            goto LABEL_36;
          }
        }
        v13 = WPF::ProcessHeapImpl::AllocClear(0x148uLL);
        if ( !v13 )
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        if ( (*((_BYTE *)v10 + 200) & 2) != 0 )
          v16 = *((_QWORD *)this + 67);
        else
          v16 = 0LL;
        v22 = CDisplay::CDisplay((__int64)v13, v14, v15, v7, (__int64)v10, v8, v16);
        if ( !v22 )
        {
          v1 = -2147024882;
          v20 = 825;
          goto LABEL_32;
        }
        v12 = *((unsigned int *)this + 18);
        v17 = v12 + 1;
        if ( (int)v12 + 1 >= (unsigned int)v12 )
          v5 = v12 + 1;
        v1 = v17 < (unsigned int)v12 ? 0x80070216 : 0;
        if ( v17 < (unsigned int)v12 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v1, 0xB5u);
        }
        else if ( v5 > *((_DWORD *)this + 17) )
        {
          v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 48, 8, 1, &v22);
          v1 = v18;
          if ( v18 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v18, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v12) = v22;
          *((_DWORD *)this + 18) = v5;
        }
        if ( v1 < 0 )
        {
          v20 = 827;
LABEL_32:
          v19 = v1;
          goto LABEL_37;
        }
        v22 = 0LL;
      }
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *(_DWORD *)(v7 + 392) )
        goto LABEL_4;
    }
    v20 = 799;
LABEL_36:
    v19 = updated;
LABEL_37:
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v19, v20);
  }
LABEL_5:
  ReleaseInterface<CDisplay>(&v22);
  return (unsigned int)v1;
}
