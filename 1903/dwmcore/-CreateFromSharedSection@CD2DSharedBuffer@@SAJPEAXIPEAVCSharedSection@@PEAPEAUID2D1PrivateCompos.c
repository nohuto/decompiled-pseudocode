/*
 * XREFs of ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x180089AA0
 * Callers:
 *     ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x1800897E0 (-CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 *     ?CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x1801C5C64 (-CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2.c)
 * Callees:
 *     ??2CD2DSharedBuffer@@KAPEAX_K@Z @ 0x180089A50 (--2CD2DSharedBuffer@@KAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BD110 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 */

__int64 __fastcall CD2DSharedBuffer::CreateFromSharedSection(
        void *a1,
        int a2,
        struct CSharedSection *a3,
        struct ID2D1PrivateCompositorBuffer **a4)
{
  unsigned int v8; // edi
  _DWORD *v9; // rax
  unsigned int v10; // ecx
  _DWORD *v11; // rbx

  v8 = 0;
  v9 = CD2DSharedBuffer::operator new();
  v11 = v9;
  if ( v9 )
  {
    v9[2] = 0;
    *(_QWORD *)v9 = &CD2DSharedBuffer::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v9 + 2) = &CD2DSharedBuffer::`vftable'{for `ID2D1PrivateCompositorBuffer'};
    *((_QWORD *)v9 + 3) = a1;
    v9[8] = a2;
    *((_QWORD *)v9 + 5) = a3;
    if ( a3 )
      CMILCOMBase::InternalAddRef(a3);
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    CMILCOMBase::InternalAddRef((CMILCOMBase *)v11);
    *a4 = (struct ID2D1PrivateCompositorBuffer *)(v11 + 4);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x3Du, 0LL);
  }
  return v8;
}
