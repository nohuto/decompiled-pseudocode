/*
 * XREFs of InitializeShaderLinkingInput @ 0x1800DA3D8
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800E23B0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ??A?$span@$$CBUVertexShaderOutput@@$0?0@gsl@@QEBAAEBUVertexShaderOutput@@_J@Z @ 0x18000BE70 (--A-$span@$$CBUVertexShaderOutput@@$0-0@gsl@@QEBAAEBUVertexShaderOutput@@_J@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ResolveKey@VertexShaderDesc@@QEBA?AW4Enum@VertexShaderKey@@XZ @ 0x1800DA380 (-ResolveKey@VertexShaderDesc@@QEBA-AW4Enum@VertexShaderKey@@XZ.c)
 *     GetHlslNameAndSemantic @ 0x1800DA54C (GetHlslNameAndSemantic.c)
 *     ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@$0?0@gsl@@@Z @ 0x1800DCB08 (-Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUSignaturePa.c)
 */

__int64 __fastcall InitializeShaderLinkingInput(
        struct ID3D11Linker **ppLinker,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // edi
  __int16 v9; // cx
  __int64 v10; // rsi
  SIZE_T v11; // rax
  _DWORD *v12; // rax
  __int64 v13; // rcx
  void *v14; // rdi
  __int64 v15; // rbp
  _DWORD *v16; // rbx
  __int64 v17; // r14
  unsigned __int16 *v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // ebx
  __int128 v23; // [rsp+30h] [rbp-38h] BYREF

  LOBYTE(v6) = VertexShaderDesc::ResolveKey(a3);
  v23 = *((_OWORD *)&unk_180306260 + v6);
  v7 = v23;
  if ( (_DWORD)v23 )
  {
    do
    {
      v8 = v7 - 1;
      v9 = *(_WORD *)gsl::span<VertexShaderOutput const,-1>::operator[]((__int64 *)&v23, v7 - 1);
      if ( (v9 & 0xFF00) != 0x100 )
        break;
      if ( (unsigned __int8)v9 < a4 )
        break;
      --v7;
    }
    while ( v8 );
  }
  v10 = v7;
  v11 = 32LL * v7;
  if ( !is_mul_ok(v7, 0x20uLL) )
    v11 = -1LL;
  if ( !v11 )
    v11 = 1LL;
  v12 = HeapAlloc(WPF::g_processHeap, 0, v11);
  v14 = v12;
  if ( v12 )
  {
    if ( v7 )
    {
      v15 = 0LL;
      v16 = v12 + 7;
      v17 = (unsigned int)v10;
      do
      {
        v18 = (unsigned __int16 *)gsl::span<VertexShaderOutput const,-1>::operator[]((__int64 *)&v23, v15);
        *((_WORD *)v16 - 14) = *v18;
        *(v16 - 1) = *((_DWORD *)v18 + 1);
        *v16 = *((_DWORD *)v18 + 2);
        GetHlslNameAndSemantic(*v18, v16 - 5, v16 - 3);
        ++v15;
        v16 += 8;
        --v17;
      }
      while ( v17 );
    }
    *(_QWORD *)&v23 = v10;
    *((_QWORD *)&v23 + 1) = v14;
    v19 = CShaderLinkingGraphBuilder::Initialize(ppLinker);
    v21 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x1B8u);
    WPF::ProcessHeapImpl::Free(v14);
  }
  else
  {
    v21 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x1ABu);
  }
  return v21;
}
