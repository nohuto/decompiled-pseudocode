/*
 * XREFs of ?Create@CGenericInkTipPointSource@@SAJPEAVCSharedSection@@IIIPEAPEAV1@@Z @ 0x180198B7C
 * Callers:
 *     ?ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_TIPPOINTBUFFER@@@Z @ 0x180199830 (-ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_TIPPOINTBUFFE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x18006DA48 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ?Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSection@@III@Z @ 0x18019936C (-Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSection@@III@Z.c)
 */

__int64 __fastcall CGenericInkTipPointSource::Create(
        struct CSharedSection *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        struct CGenericInkTipPointSource **a5)
{
  void *v9; // rax
  __int64 v10; // rcx
  void *v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi
  CMILRefCountBase *v16; // [rsp+30h] [rbp-18h] BYREF

  v9 = HeapAlloc(WPF::g_processHeap, 0, 0x20uLL);
  v11 = v9;
  if ( v9 )
  {
    memset_0(v9, 0, 0x20uLL);
    *((_DWORD *)v11 + 2) = 0;
    *(_QWORD *)v11 = &CGenericInkTipPointSource::`vftable';
    *((_QWORD *)v11 + 2) = 0LL;
    *((_QWORD *)v11 + 3) = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  v16 = (CMILRefCountBase *)v11;
  if ( v11 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v11 + 2);
    v12 = CGenericInkTipPointSource::Initialize((CGenericInkTipPointSource *)v11, a1, a2, a3, a4);
    v14 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x12u);
    }
    else
    {
      v16 = 0LL;
      *a5 = (struct CGenericInkTipPointSource *)v11;
    }
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x11u);
  }
  Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v16);
  return v14;
}
