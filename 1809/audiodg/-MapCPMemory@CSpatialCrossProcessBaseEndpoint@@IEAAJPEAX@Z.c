/*
 * XREFs of ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z @ 0x14005EC04
 * Callers:
 *     ?Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJ_K0@Z @ 0x14005FC60 (-Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJ_K0@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x140011F80 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x14001B8BC (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001B8FC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ??$UnmapMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAXAEAPEAUControlData@CSpatialCrossProcessBaseEndpoint@@I@Z @ 0x140058F60 (--$UnmapMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAXAEAPEAUControlData@CSpatialCr.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x14005AEE4 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005CD58 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??$MakeAtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@UStorage@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@4@@util@@YA?AV?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@PEAUStorage@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@0@@Z @ 0x14005D010 (--$MakeAtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@USto.c)
 *     ??$MapSectionHandleToMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAJAEAPEAUControlData@CSpatialCrossProcessBaseEndpoint@@PEAXI@Z @ 0x14005D158 (--$MapSectionHandleToMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAJAEAPEAUControlDa.c)
 *     ??4?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x14005D488 (--4-$shared_ptr@V-$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolic.c)
 *     ?Initialize@SpatialBlock@@QEAAJPEAEI@Z @ 0x14005E778 (-Initialize@SpatialBlock@@QEAAJPEAEI@Z.c)
 *     ?SetWasapiStreamFormat@CSpatialCrossProcessBaseEndpoint@@IEAAJPEBUtWAVEFORMATEX@@@Z @ 0x14005F2D0 (-SetWasapiStreamFormat@CSpatialCrossProcessBaseEndpoint@@IEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUControlData@1@@Z @ 0x14005F390 (-ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUControlData@1@@Z.c)
 *     ?reset@?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@QEAAXXZ @ 0x14005F70C (-reset@-$shared_ptr@V-$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockP.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSpatialCrossProcessBaseEndpoint::MapCPMemory(CSpatialCrossProcessBaseEndpoint *this, void *a2)
{
  const struct CSpatialCrossProcessBaseEndpoint::ControlData **v4; // rsi
  signed int v5; // ebx
  unsigned int v6; // ebx
  volatile __int32 *v7; // rcx
  _BYTE *v8; // rdx
  __int64 v9; // rax
  const struct CSpatialCrossProcessBaseEndpoint::ControlData *v10; // rdx
  int v11; // eax
  __int64 *v12; // rax
  std::_Ref_count_base *v13; // rbx
  void *v14; // rcx
  SpatialBlock *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  __int64 v21; // [rsp+28h] [rbp-30h] BYREF
  std::_Ref_count_base *v22; // [rsp+30h] [rbp-28h]
  SpatialBlock *v23; // [rsp+60h] [rbp+8h] BYREF

  v4 = (const struct CSpatialCrossProcessBaseEndpoint::ControlData **)((char *)this + 880);
  v5 = MapSectionHandleToMemory<CSpatialCrossProcessBaseEndpoint::ControlData>((_QWORD *)this + 110, a2, 0x326u);
  if ( v5 < 0 )
    goto LABEL_26;
  v5 = CSpatialCrossProcessBaseEndpoint::ValidateControlData(this, *v4);
  if ( v5 < 0 )
    goto LABEL_26;
  v6 = *((_DWORD *)*v4 + 132);
  UnmapMemory<CSpatialCrossProcessBaseEndpoint::ControlData>((void **)v4, 0x326u);
  v5 = MapSectionHandleToMemory<CSpatialCrossProcessBaseEndpoint::ControlData>(v4, a2, v6);
  if ( v5 < 0 )
    goto LABEL_26;
  v7 = (volatile __int32 *)((char *)*v4 + 48);
  *((_QWORD *)this + 38) = v7;
  _InterlockedExchange(v7, 6);
  v5 = CSpatialCrossProcessBaseEndpoint::ValidateControlData(this, *v4);
  if ( v5 < 0 )
    goto LABEL_26;
  v5 = CSpatialCrossProcessBaseEndpoint::SetWasapiStreamFormat(this, (const struct tWAVEFORMATEX *)((char *)*v4 + 532));
  if ( v5 < 0 )
    goto LABEL_26;
  v8 = (char *)*v4 + 388;
  if ( *v4 == (const struct CSpatialCrossProcessBaseEndpoint::ControlData *)-388LL )
  {
    LODWORD(v9) = 0;
  }
  else
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *(_WORD *)&v8[2 * v9] );
  }
  ATL::CSimpleStringT<unsigned short,0>::SetString((void **)this + 20, v8, v9);
  v10 = *v4;
  v11 = *((_DWORD *)*v4 + 129);
  *((_DWORD *)this + 19) = v11;
  *((_DWORD *)this + 37) = 4 * v11;
  v12 = util::MakeAtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy,util::AtomicObjBase<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::Storage>(
          &v21,
          (__int64)v10 + 84);
  std::shared_ptr<util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>>::operator=(
    (_QWORD *)this + 39,
    v12);
  v13 = v22;
  if ( v22 && _InterlockedExchangeAdd((volatile signed __int32 *)v22 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(std::_Ref_count_base *))v13)(v13);
    std::_Ref_count_base::_Decwref(v13);
  }
  if ( !*((_QWORD *)this + 39) )
    goto LABEL_14;
  v14 = (void *)*((_QWORD *)this + 112);
  if ( v14 )
    operator delete(v14);
  *((_QWORD *)this + 112) = 0LL;
  v15 = (SpatialBlock *)operator new(0x38uLL);
  v23 = v15;
  if ( v15 )
  {
    *(_QWORD *)v15 = 0LL;
    v16 = 2LL;
    v17 = (_QWORD *)((char *)v15 + 8);
    do
    {
      *v17 = 0LL;
      v17[1] = 0LL;
      v17[2] = 0LL;
      v17 += 3;
      --v16;
    }
    while ( v16 );
  }
  else
  {
    v15 = 0LL;
  }
  *((_QWORD *)this + 112) = v15;
  if ( !v15 )
  {
LABEL_14:
    v5 = -2147024882;
LABEL_26:
    v18 = (void *)*((_QWORD *)this + 112);
    if ( v18 )
      operator delete(v18);
    *((_QWORD *)this + 112) = 0LL;
    std::shared_ptr<util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>>::reset((char *)this + 312);
    v19 = (void *)*((_QWORD *)this + 19);
    if ( v19 )
    {
      CoTaskMemFree(v19);
      *((_QWORD *)this + 19) = 0LL;
    }
    UnmapMemory<CSpatialCrossProcessBaseEndpoint::ControlData>((void **)v4, 0x326u);
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::MapCPMemory", 195, v5);
    return (unsigned int)v5;
  }
  v5 = SpatialBlock::Initialize(v15, (unsigned __int8 *)*v4 + 832, *((_DWORD *)*v4 + 132) - 832);
  if ( v5 == -2005139387 )
  {
    LODWORD(v23) = 1;
    (**((void (__fastcall ***)(char *, __int64, SpatialBlock **))this + 92))((char *)this + 736, 1LL, &v23);
  }
  if ( v5 < 0 )
    goto LABEL_26;
  return (unsigned int)v5;
}
