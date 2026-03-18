/*
 * XREFs of ?Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIImageSource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@PEAPEAV1@@Z @ 0x180088980
 * Callers:
 *     ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x1800897E0 (-CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 *     ?CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x1801C645C (-CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x180088AF8 (-Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?Initialize@CPrimitiveBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x180088BB4 (-Initialize@CPrimitiveBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??_GCPrimitiveBuffer@@QEAAPEAXI@Z @ 0x180258134 (--_GCPrimitiveBuffer@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::Create(
        struct ID2D1PrivateCompositorBuffer *a1,
        struct ID2D1PrivateCompositorBuffer *a2,
        _OWORD *a3,
        _OWORD *a4,
        _OWORD *a5,
        _QWORD *a6)
{
  CCommandBuffer *v10; // rax
  unsigned int v11; // ecx
  CCommandBuffer *v12; // r14
  CPrimitiveBuffer *v13; // rax
  unsigned int v14; // ecx
  CPrimitiveBuffer *v15; // rsi
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // edi
  void (__fastcall ***v19)(_QWORD); // rax
  unsigned int v20; // ecx
  void (__fastcall ***v21)(_QWORD); // rbx
  unsigned int v23; // edx
  unsigned int v24; // edx
  unsigned int v25; // [rsp+20h] [rbp-38h]

  v10 = (CCommandBuffer *)DefaultHeap::Alloc(0x10uLL);
  v12 = v10;
  if ( v10 )
  {
    *(_QWORD *)v10 = 0LL;
    *((_DWORD *)v10 + 2) = 0;
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 )
  {
    v18 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, 0x87u, 0LL);
    return v18;
  }
  v13 = (CPrimitiveBuffer *)DefaultHeap::Alloc(0x10uLL);
  v15 = v13;
  if ( v13 )
  {
    *(_QWORD *)v13 = 0LL;
    *((_DWORD *)v13 + 2) = 0;
  }
  else
  {
    v15 = 0LL;
  }
  if ( !v15 )
  {
    v18 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x88u, 0LL);
    goto LABEL_23;
  }
  v16 = CCommandBuffer::Initialize(v12, a1);
  v18 = v16;
  if ( v16 < 0 )
  {
    v25 = 138;
    goto LABEL_22;
  }
  v16 = CPrimitiveBuffer::Initialize(v15, a2);
  v18 = v16;
  if ( v16 < 0 )
  {
    v25 = 139;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, v25, 0LL);
    goto LABEL_23;
  }
  v19 = (void (__fastcall ***)(_QWORD))DefaultHeap::Alloc(0x90uLL);
  v21 = v19;
  if ( v19 )
  {
    *((_DWORD *)v19 + 2) = 0;
    *v19 = (void (__fastcall **)(_QWORD))&CPrimitiveGroupDrawListGenerator::`vftable'{for `CMILRefCountBase'};
    v19[2] = (void (__fastcall **)(_QWORD))&CPrimitiveGroupDrawListGenerator::`vftable'{for `IDeviceResourceNotify'};
    v19[3] = (void (__fastcall **)(_QWORD))v12;
    v19[4] = (void (__fastcall **)(_QWORD))v15;
    *((_DWORD *)v19 + 12) = 0;
    *((_OWORD *)v19 + 4) = *a3;
    *((_OWORD *)v19 + 5) = *a4;
    *((_OWORD *)v19 + 6) = *a5;
    v19[14] = 0LL;
    v19[15] = 0LL;
    v19[16] = 0LL;
    v19[17] = 0LL;
    ++dword_18033C84C;
    v19[5] = 0LL;
    v19[6] = 0LL;
    *((_DWORD *)v19 + 14) = 0;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v21 )
  {
    (**v21)(v21);
    *a6 = v21;
    return v18;
  }
  v18 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2147024882, 0x93u, 0LL);
LABEL_23:
  CPrimitiveBuffer::`scalar deleting destructor'(v12, v23);
  if ( v15 )
    CPrimitiveBuffer::`scalar deleting destructor'(v15, v24);
  return v18;
}
