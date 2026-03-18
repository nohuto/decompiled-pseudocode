/*
 * XREFs of ?AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x180160F2C
 * Callers:
 *     ?ProcessLegacyTokens@CSurfaceManager@@QEAAJ_K@Z @ 0x1800CE828 (-ProcessLegacyTokens@CSurfaceManager@@QEAAJ_K@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 */

__int64 __fastcall CLegacySurfaceManager::AddUnclaimedToken(
        CLegacySurfaceManager *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  void *v3; // rdi
  int v5; // ebx
  _QWORD *v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // edx
  int v9; // eax
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  v11 = 0uLL;
  v3 = 0LL;
  v5 = 0;
  if ( *((_DWORD *)a2 + 1) )
  {
    v3 = HeapAlloc(WPF::g_processHeap, 0, *((unsigned int *)a2 + 1));
    if ( !v3 )
      v5 = -2147024882;
  }
  else
  {
    v5 = -2147024809;
  }
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v5, 0x36u);
LABEL_15:
    if ( v3 )
      WPF::ProcessHeapImpl::Free(v3);
    return (unsigned int)v5;
  }
  memcpy_0(v3, a2, *((unsigned int *)a2 + 1));
  v6 = (_QWORD *)((char *)this + 104);
  *((_QWORD *)&v11 + 1) = v3;
  v7 = *((unsigned int *)this + 32);
  v8 = v7 + 1;
  v5 = (int)v7 + 1 < (unsigned int)v7 ? 0x80070216 : 0;
  if ( (int)v7 + 1 < (unsigned int)v7 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v6, 0LL, 0, v5, 0xB5u);
  }
  else if ( v8 > *((_DWORD *)this + 31) )
  {
    v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v6, 16, 1, &v11);
    v5 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v6, 0LL, 0, v9, 0xC0u);
  }
  else
  {
    *(_OWORD *)(*v6 + 16 * v7) = v11;
    *((_DWORD *)this + 32) = v8;
  }
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v6, 0LL, 0, v5, 0x3Bu);
    goto LABEL_15;
  }
  return (unsigned int)v5;
}
