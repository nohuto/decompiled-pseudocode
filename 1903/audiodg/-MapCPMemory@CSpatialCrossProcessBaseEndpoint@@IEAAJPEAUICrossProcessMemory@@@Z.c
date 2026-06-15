/*
 * XREFs of ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z @ 0x14005CC34
 * Callers:
 *     ?Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z @ 0x14005DCB0 (-Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x140013A34 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015744 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028234 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x140059014 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@3@@util@@YA?AV?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@PEAUStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@0@@Z @ 0x14005AE88 (--$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@-$AtomicObjBase@UClockingSec.c)
 *     ??$make_unique@VSpatialBlock@@$$V$0A@@std@@YA?AV?$unique_ptr@VSpatialBlock@@U?$default_delete@VSpatialBlock@@@std@@@0@XZ @ 0x14005B060 (--$make_unique@VSpatialBlock@@$$V$0A@@std@@YA-AV-$unique_ptr@VSpatialBlock@@U-$default_delete@VS.c)
 *     ??4?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x14005B3B0 (--4-$shared_ptr@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@$.c)
 *     ??4?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x14005B428 (--4-$shared_ptr@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@A.c)
 *     ?Initialize@SpatialBlock@@QEAAJPEAEI@Z @ 0x14005C7C8 (-Initialize@SpatialBlock@@QEAAJPEAEI@Z.c)
 *     ?SetWasapiStreamFormat@CSpatialCrossProcessBaseEndpoint@@IEAAJPEBUtWAVEFORMATEX@@@Z @ 0x14005D314 (-SetWasapiStreamFormat@CSpatialCrossProcessBaseEndpoint@@IEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUControlData@@@Z @ 0x14005D3D4 (-ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUControlData@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSpatialCrossProcessBaseEndpoint::MapCPMemory(
        CSpatialCrossProcessBaseEndpoint *this,
        struct ICrossProcessMemory *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  struct ControlData *v6; // rbx
  volatile __int32 *v7; // rcx
  int v8; // esi
  __int64 v9; // rdx
  _WORD *v10; // rdx
  __int64 v11; // rax
  int v12; // eax
  __int64 *v13; // rax
  std::_Ref_count_base *v14; // rsi
  void *v15; // rcx
  __int64 v16; // rdx
  SpatialBlock *v17; // rcx
  SpatialBlock *v18; // rax
  std::_Ref_count_base *v19; // rbx
  void *v20; // rcx
  struct ControlData *v21[2]; // [rsp+20h] [rbp-40h] BYREF
  std::_Ref_count_base *v22[2]; // [rsp+30h] [rbp-30h] BYREF
  CSpatialCrossProcessBaseEndpoint *v23; // [rsp+40h] [rbp-20h]
  char v24; // [rsp+48h] [rbp-18h]
  __int64 v25; // [rsp+50h] [rbp-10h] BYREF
  std::_Ref_count_base *v26; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  int v28; // [rsp+98h] [rbp+38h] BYREF
  char v29; // [rsp+A0h] [rbp+40h] BYREF
  SpatialBlock *v30; // [rsp+A8h] [rbp+48h] BYREF

  v21[1] = (struct ControlData *)-2LL;
  v3 = (*(__int64 (__fastcall **)(struct ICrossProcessMemory *, char *, struct ControlData **))(*(_QWORD *)a2 + 32LL))(
         a2,
         &v29,
         v21);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x91,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  v6 = v21[0];
  v7 = (volatile __int32 *)((char *)v21[0] + 48);
  *((_QWORD *)this + 41) = (char *)v21[0] + 48;
  _InterlockedExchange(v7, 6);
  v8 = CSpatialCrossProcessBaseEndpoint::ValidateControlData(this, v6);
  if ( v8 >= 0 )
  {
    v8 = CSpatialCrossProcessBaseEndpoint::SetWasapiStreamFormat(this, (const struct tWAVEFORMATEX *)((char *)v6 + 532));
    if ( v8 < 0 )
    {
      v9 = 154LL;
      goto LABEL_5;
    }
    v23 = this;
    v24 = 1;
    v10 = (_WORD *)((char *)v6 + 388);
    if ( v6 == (struct ControlData *)-388LL )
    {
      LODWORD(v11) = 0;
    }
    else
    {
      v11 = -1LL;
      do
        ++v11;
      while ( v10[v11] );
    }
    ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)this + 23, v10, (unsigned int)v11);
    v12 = *((_DWORD *)v6 + 129);
    *((_DWORD *)this + 25) = v12;
    *((_DWORD *)this + 43) = 4 * v12;
    *(_OWORD *)v22 = 0LL;
    v13 = util::MakeAtomicObj<ClockingSection,util::ReaderLockPolicy,util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::Storage>(
            &v25,
            (__int64)v6 + 84);
    std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::operator=(v22, v13);
    v14 = v26;
    if ( v26 && _InterlockedExchangeAdd((volatile signed __int32 *)v26 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(std::_Ref_count_base *))v14)(v14);
      std::_Ref_count_base::_Decwref(v14);
    }
    if ( !v22[0] )
    {
      v8 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA9,
        (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
        (const char *)0x8007000ELL);
LABEL_29:
      if ( v22[1] && _InterlockedExchangeAdd((volatile signed __int32 *)v22[1] + 2, 0xFFFFFFFF) == 1 )
      {
        v19 = v22[1];
        (**(void (__fastcall ***)(std::_Ref_count_base *))v22[1])(v22[1]);
        std::_Ref_count_base::_Decwref(v19);
      }
      if ( v24 )
      {
        v20 = (void *)*((_QWORD *)this + 22);
        if ( v20 )
        {
          CoTaskMemFree(v20);
          *((_QWORD *)this + 22) = 0LL;
        }
      }
      return (unsigned int)v8;
    }
    v15 = (void *)*((_QWORD *)this + 113);
    if ( v15 )
      operator delete(v15);
    *((_QWORD *)this + 113) = 0LL;
    std::make_unique<SpatialBlock,,0>(&v30);
    if ( v30 )
    {
      v8 = SpatialBlock::Initialize(v30, (unsigned __int8 *)v6 + 832, *((_DWORD *)v6 + 132) - 832);
      if ( v8 == -2005139387 )
      {
        v28 = 1;
        (**((void (__fastcall ***)(char *, __int64, int *))this + 94))((char *)this + 752, 1LL, &v28);
      }
      if ( v8 >= 0 )
      {
        v24 = 0;
        *((_QWORD *)this + 112) = v6;
        std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::operator=((_QWORD *)this + 42, v22);
        v18 = v30;
        v17 = 0LL;
        v30 = 0LL;
        *((_QWORD *)this + 113) = v18;
        v8 = 0;
LABEL_27:
        if ( v17 )
          operator delete(v17);
        goto LABEL_29;
      }
      v16 = 186LL;
    }
    else
    {
      v8 = -2147024882;
      v16 = 174LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
      (const char *)(unsigned int)v8);
    v17 = v30;
    goto LABEL_27;
  }
  v9 = 152LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
    (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}
