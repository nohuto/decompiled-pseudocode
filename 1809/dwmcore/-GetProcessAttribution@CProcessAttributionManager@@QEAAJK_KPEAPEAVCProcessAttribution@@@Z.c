/*
 * XREFs of ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x18009600C
 * Callers:
 *     ?Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z @ 0x180095D68 (-Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z.c)
 *     ?ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_CREATE@@@Z @ 0x180095F04 (-ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_CREATE@@@Z.c)
 * Callees:
 *     ?CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEAPEAVCProcessAttribution@@@Z @ 0x18006D32C (-CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEA.c)
 *     ??$lower_bound@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@std@@_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@0@V10@V10@AEB_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@Z @ 0x180096204 (--$lower_bound@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@PEAURecord@CProcessAttributio.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@?$vector@PEAUProcessAttributionRecord@CProcessAttributionManager@@V?$allocator@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@QEAAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@QEAPEAU23@AEBQEAU23@@Z @ 0x1800E4360 (--$_Emplace_reallocate@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@-$vector@PEA.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 */

__int64 __fastcall CProcessAttributionManager::GetProcessAttribution(
        CProcessAttributionManager *this,
        int a2,
        __int64 a3,
        struct CProcessAttribution **a4)
{
  unsigned int v8; // r14d
  char *v9; // rbx
  __int64 v10; // rsi
  volatile signed __int32 *v11; // rax
  char *v13; // rax
  unsigned int v14; // ecx
  char *v15; // rsi
  __int64 v16; // rcx
  __int128 v17; // xmm1
  int v18; // eax
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  char *v22; // rcx
  int ProcessAttribution; // eax
  unsigned int v24; // ecx
  unsigned int v25; // [rsp+20h] [rbp-69h]
  char *v26; // [rsp+30h] [rbp-59h] BYREF
  __int128 v27; // [rsp+38h] [rbp-51h]
  _OWORD v28[5]; // [rsp+50h] [rbp-39h] BYREF
  int v29; // [rsp+A0h] [rbp+17h]
  void *Src; // [rsp+F0h] [rbp+67h] BYREF
  __int64 v31; // [rsp+100h] [rbp+77h] BYREF

  v31 = a3;
  v8 = 0;
  std::lower_bound<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CProcessAttributionManager::Record *>>>,unsigned __int64,bool (*)(CProcessAttributionManager::ProcessAttributionRecord const *,__int64)>(
    &Src,
    *(_QWORD *)this,
    *((_QWORD *)this + 1),
    &v31);
  v9 = (char *)Src;
  if ( Src == *((void **)this + 1) || (v10 = *(_QWORD *)Src, **(_QWORD **)Src != a3) )
  {
    v13 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x80uLL);
    v15 = v13;
    if ( v13 )
    {
      v16 = *((_QWORD *)this + 4) - *((_QWORD *)this + 3);
      *((_QWORD *)v13 + 14) = 0LL;
      *((_DWORD *)v13 + 31) = v16 >> 3;
      v27 = 0uLL;
      *((_DWORD *)v13 + 30) = a2;
      *(_OWORD *)(v13 + 8) = 0uLL;
      *((_DWORD *)v13 + 6) = 0;
      memset_0(v28, 0, 0x54uLL);
      v17 = v28[1];
      v18 = v29;
      *(_OWORD *)(v15 + 28) = v28[0];
      *(_QWORD *)v15 = a3;
      v19 = v28[2];
      *(_OWORD *)(v15 + 44) = v17;
      v20 = v28[3];
      *(_OWORD *)(v15 + 60) = v19;
      v21 = v28[4];
      *(_OWORD *)(v15 + 76) = v20;
      *(_OWORD *)(v15 + 92) = v21;
      *((_DWORD *)v15 + 27) = v18;
    }
    else
    {
      v15 = 0LL;
    }
    v26 = v15;
    if ( !v15 )
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0xE4u);
      return v8;
    }
    v22 = (char *)*((_QWORD *)this + 1);
    if ( *((char **)this + 2) == v22 )
    {
      std::vector<CProcessAttributionManager::ProcessAttributionRecord *>::_Emplace_reallocate<CProcessAttributionManager::ProcessAttributionRecord * const &>(
        this,
        v9,
        &v26);
    }
    else if ( v9 == v22 )
    {
      *(_QWORD *)v22 = v15;
      *((_QWORD *)this + 1) += 8LL;
    }
    else
    {
      *(_QWORD *)v22 = *((_QWORD *)v22 - 1);
      *((_QWORD *)this + 1) += 8LL;
      memmove_0(v9 + 8, v9, v22 - v9 - 8);
      *(_QWORD *)v9 = v15;
    }
    ProcessAttribution = CProcessAttributionManager::CreateProcessAttribution(
                           this,
                           a2,
                           (const struct CProcessAttributionManager::ProcessAttributionRecord *)v15,
                           1,
                           a4);
    v8 = ProcessAttribution;
    if ( ProcessAttribution >= 0 )
    {
      *((_QWORD *)v15 + 14) = *a4;
      *((_DWORD *)v15 + 31) = (__int64)(*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) >> 3;
      return v8;
    }
    v25 = 235;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, ProcessAttribution, v25);
    return v8;
  }
  v11 = *(volatile signed __int32 **)(v10 + 112);
  if ( !v11 )
  {
    ProcessAttribution = CProcessAttributionManager::CreateProcessAttribution(
                           this,
                           a2,
                           (const struct CProcessAttributionManager::ProcessAttributionRecord *)v10,
                           1,
                           a4);
    v8 = ProcessAttribution;
    if ( ProcessAttribution >= 0 )
    {
      *(_QWORD *)(v10 + 112) = *a4;
      *(_DWORD *)(v10 + 124) = (__int64)(*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) >> 3;
      return v8;
    }
    v25 = 216;
    goto LABEL_22;
  }
  *a4 = (struct CProcessAttribution *)v11;
  _InterlockedIncrement(v11 + 2);
  return v8;
}
