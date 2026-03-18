/*
 * XREFs of ?EnsureItem@CDataStreamWriter@@QEAAJI@Z @ 0x180099C40
 * Callers:
 *     ?WindowNodeSetSourceModifications@CChannel@@UEAAJIU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@KKH@Z @ 0x180099980 (-WindowNodeSetSourceModifications@CChannel@@UEAAJIU-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifica.c)
 *     ?WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x180099A80 (-WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z.c)
 *     ?WindowNodeSetSpriteClip@CChannel@@UEAAJIHI@Z @ 0x180099B60 (-WindowNodeSetSpriteClip@CChannel@@UEAAJIHI@Z.c)
 * Callees:
 *     ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x18009B7F0 (-AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDataStreamWriter::EnsureItem(CDataStreamWriter *this, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r15d
  unsigned int v4; // r8d
  int v6; // edi
  unsigned int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // r14
  int v11; // ebx
  int v12; // eax
  int v14; // ebx
  unsigned int v15; // eax
  int NewBlock; // eax
  unsigned int v17; // [rsp+20h] [rbp-28h]

  v2 = a2 + 4;
  v3 = -1;
  v4 = -1;
  if ( a2 + 4 >= a2 )
    v4 = a2 + 4;
  v6 = v2 < a2 ? 0x80070216 : 0;
  if ( v2 < a2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v6, 0x157u);
    return (unsigned int)v6;
  }
  v7 = 0;
  v8 = (v4 + 3) & 0xFFFFFFFC;
  v9 = v8;
  if ( v8 < v4 )
    v9 = v4;
  v6 = v8 < v4 ? 0x80070216 : 0;
  if ( v8 < v4 )
  {
    v17 = 367;
LABEL_25:
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, v17);
    goto LABEL_10;
  }
  v10 = *((_QWORD *)this + 2);
  if ( !v10
    || (v11 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*((_QWORD *)this + 2)),
        v12 = (**(__int64 (__fastcall ***)(__int64))v10)(v10),
        v10 = *((_QWORD *)this + 2),
        v7 = v12 - v11,
        !v10)
    || v7 < v9 )
  {
    v14 = 0x10000;
    if ( *((_DWORD *)this + 6) < 0x10000u )
      v14 = *((_DWORD *)this + 6);
    if ( v10 && !*(_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10) )
    {
      WPF::ProcessHeapImpl::Free(*((void **)this + 2));
      *((_QWORD *)this + 2) = 0LL;
    }
    v15 = v9 + v14;
    if ( v9 + v14 >= v9 )
      v3 = v9 + v14;
    v6 = v15 < v9 ? 0x80070216 : 0;
    if ( v15 >= v9 )
    {
      NewBlock = CDataStreamWriter::AllocateNewBlock(this, v3);
      v6 = NewBlock;
      if ( NewBlock < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, NewBlock, 0x1BBu);
      goto LABEL_10;
    }
    v17 = 441;
    goto LABEL_25;
  }
LABEL_10:
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x159u);
  return (unsigned int)v6;
}
