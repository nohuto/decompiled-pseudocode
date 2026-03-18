/*
 * XREFs of ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x18009AD64
 * Callers:
 *     ?WindowNodeSetSourceModifications@CChannel@@UEAAJIU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@KKH@Z @ 0x180099980 (-WindowNodeSetSourceModifications@CChannel@@UEAAJIU-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifica.c)
 *     ?WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x180099A80 (-WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z.c)
 *     ?WindowNodeSetSpriteClip@CChannel@@UEAAJIHI@Z @ 0x180099B60 (-WindowNodeSetSpriteClip@CChannel@@UEAAJIHI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18009A7C8 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?VisualSetOffset@CChannel@@UEAAJINNN@Z @ 0x18009AA40 (-VisualSetOffset@CChannel@@UEAAJINNN@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18009ABB0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x180145984 (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CCommandBatch::Create(__int64 a1, struct CCommandBatch **a2)
{
  void *v3; // rax
  void *v4; // rbx
  _QWORD *v5; // rax
  void **v6; // rcx
  void *v7; // rsi
  unsigned int v8; // ebp
  int v9; // eax
  unsigned int v10; // r14d
  unsigned int v11; // edi
  __int64 v12; // rax
  unsigned int v14; // ecx
  unsigned int v15; // edx
  _QWORD *v16; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = HeapAlloc(WPF::g_processHeap, 0, 0x38uLL);
  v4 = v3;
  if ( !v3 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  memset_0(v3, 0, 0x38uLL);
  *((_QWORD *)v4 + 1) = v4;
  *(_QWORD *)v4 = v4;
  *((_QWORD *)v4 + 2) = 0LL;
  *((_DWORD *)v4 + 6) = 0;
  *((_DWORD *)v4 + 7) = 0;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_DWORD *)v4 + 10) = 0;
  *((_DWORD *)v4 + 12) = 8;
  v5 = HeapAlloc(WPF::g_processHeap, 0, 0x1024uLL);
  v7 = v5;
  if ( v5 )
  {
    v5[1] = 0LL;
    v5[2] = 0LL;
    *((_DWORD *)v5 + 7) = 0;
    *v5 = &CDataStreamBlock::`vftable';
    *((_DWORD *)v5 + 6) = 4096;
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v6, 0LL, 0, -2147024882, 0x1ECu);
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v6, 0LL, 0, v11, 0x142u);
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v11, 0x28u);
    CCommandBatch::`scalar deleting destructor'((CCommandBatch *)v4, v15);
    return v11;
  }
  v8 = *((_DWORD *)v4 + 6);
  v9 = -1;
  v10 = v8 + 4132;
  if ( v8 + 4132 >= v8 )
    v9 = v8 + 4132;
  v11 = v10 < v8 ? 0x80070216 : 0;
  *((_DWORD *)v4 + 6) = v9;
  if ( v10 < v8 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v6, 0LL, 0, v11, 0x1EFu);
    HeapFree(WPF::g_processHeap, 0, v7);
  }
  else
  {
    v12 = *((_QWORD *)v4 + 2);
    if ( v12 )
    {
      v6 = (void **)*((_QWORD *)v4 + 1);
      v16 = (_QWORD *)(v12 + 8);
      if ( *v6 != v4 )
        __fastfail(3u);
      *v16 = v4;
      v16[1] = v6;
      *v6 = v16;
      *((_QWORD *)v4 + 1) = v16;
    }
    *((_QWORD *)v4 + 2) = v7;
  }
  if ( v10 < v8 )
    goto LABEL_15;
  *a2 = (struct CCommandBatch *)v4;
  return v11;
}
