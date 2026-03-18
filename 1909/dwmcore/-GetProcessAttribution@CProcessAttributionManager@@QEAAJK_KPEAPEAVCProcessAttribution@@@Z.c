/*
 * XREFs of ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x18004CF4C
 * Callers:
 *     ?Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z @ 0x18004C6C0 (-Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z.c)
 *     ?ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_CREATE@@@Z @ 0x18004CE3C (-ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_CREATE@@@Z.c)
 * Callees:
 *     ??$lower_bound@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@std@@_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@0@V10@V10@AEB_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@Z @ 0x18004D0DC (--$lower_bound@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@PEAURecord@CProcessAttributio.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEAPEAVCProcessAttribution@@@Z @ 0x1800C952C (-CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEA.c)
 *     ??$_Emplace_reallocate@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@?$vector@PEAUProcessAttributionRecord@CProcessAttributionManager@@V?$allocator@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@QEAAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@QEAPEAU23@AEBQEAU23@@Z @ 0x1800CDCE0 (--$_Emplace_reallocate@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@-$vector@PEA.c)
 *     ??0Record@CProcessAttributionManager@@QEAA@K_KH@Z @ 0x1800D4134 (--0Record@CProcessAttributionManager@@QEAA@K_KH@Z.c)
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 */

__int64 __fastcall CProcessAttributionManager::GetProcessAttribution(
        CProcessAttributionManager *this,
        unsigned int a2,
        unsigned __int64 a3,
        struct CProcessAttribution **a4)
{
  unsigned int v8; // esi
  __int64 *v9; // rbx
  __int64 v10; // rbp
  volatile signed __int32 *v11; // rax
  CProcessAttributionManager::Record *v13; // rax
  unsigned int v14; // ecx
  __int64 v15; // rbp
  __int64 *v16; // rcx
  int ProcessAttribution; // eax
  unsigned int v18; // ecx
  unsigned int v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+30h] [rbp-38h] BYREF
  void *Src; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v22; // [rsp+80h] [rbp+18h] BYREF

  v22 = a3;
  v8 = 0;
  std::lower_bound<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CProcessAttributionManager::Record *>>>,unsigned __int64,bool (*)(CProcessAttributionManager::ProcessAttributionRecord const *,__int64)>(
    &Src,
    *(_QWORD *)this,
    *((_QWORD *)this + 1),
    &v22);
  v9 = (__int64 *)Src;
  if ( Src == *((void **)this + 1) || (v10 = *(_QWORD *)Src, **(_QWORD **)Src != a3) )
  {
    v13 = (CProcessAttributionManager::Record *)DefaultHeap::Alloc(0xA8uLL);
    if ( v13 )
      v15 = CProcessAttributionManager::Record::Record(
              v13,
              a2,
              a3,
              (__int64)(*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) >> 3);
    else
      v15 = 0LL;
    v20 = v15;
    if ( !v15 )
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0xE5u, 0LL);
      return v8;
    }
    v16 = (__int64 *)*((_QWORD *)this + 1);
    if ( *((__int64 **)this + 2) == v16 )
    {
      std::vector<CProcessAttributionManager::ProcessAttributionRecord *>::_Emplace_reallocate<CProcessAttributionManager::ProcessAttributionRecord * const &>(
        this,
        v9,
        &v20);
    }
    else if ( v9 == v16 )
    {
      *v16 = v15;
      *((_QWORD *)this + 1) += 8LL;
    }
    else
    {
      *v16 = *(v16 - 1);
      *((_QWORD *)this + 1) += 8LL;
      memmove_0(v9 + 1, v9, (char *)v16 - (char *)v9 - 8);
      *v9 = v15;
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
      *(_QWORD *)(v15 + 112) = *a4;
      *(_DWORD *)(v15 + 160) = (__int64)(*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) >> 3;
      return v8;
    }
    v19 = 236;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, ProcessAttribution, v19, 0LL);
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
      *(_DWORD *)(v10 + 160) = (__int64)(*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) >> 3;
      return v8;
    }
    v19 = 217;
    goto LABEL_22;
  }
  *a4 = (struct CProcessAttribution *)v11;
  _InterlockedIncrement(v11 + 2);
  return v8;
}
