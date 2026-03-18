/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UCpuClipStackState@CScopedClipStack@@$0A@@@QEAAJPEFBUCpuClipStackState@CScopedClipStack@@I@Z @ 0x1800648C0
 * Callers:
 *     ?PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N3@Z @ 0x180037760 (-PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMIL.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CScopedClipStack::CpuClipStackState,0>::AddMultipleAndSet(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  _OWORD *v6; // rcx
  int v8; // eax
  unsigned int v9; // ecx

  v2 = *(unsigned int *)(a1 + 24);
  v4 = v2 + 1;
  v5 = (int)v2 + 1 < (unsigned int)v2 ? 0x80070216 : 0;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v5, 0xB5u);
  }
  else if ( v4 > *(_DWORD *)(a1 + 20) )
  {
    v8 = DynArrayImpl<0>::AddMultipleAndSet(a1, 136, 1, a2);
    v5 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xC0u);
  }
  else
  {
    v6 = (_OWORD *)(*(_QWORD *)a1 + 136 * v2);
    *v6 = *(_OWORD *)a2;
    v6[1] = *(_OWORD *)(a2 + 16);
    v6[2] = *(_OWORD *)(a2 + 32);
    v6[3] = *(_OWORD *)(a2 + 48);
    v6[4] = *(_OWORD *)(a2 + 64);
    v6[5] = *(_OWORD *)(a2 + 80);
    v6[6] = *(_OWORD *)(a2 + 96);
    v6 += 8;
    *(v6 - 1) = *(_OWORD *)(a2 + 112);
    *(_QWORD *)v6 = *(_QWORD *)(a2 + 128);
    *(_DWORD *)(a1 + 24) = v4;
  }
  return v5;
}
