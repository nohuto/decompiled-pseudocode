/*
 * XREFs of ?Create@CTransitionWindowSnapshot@@SAJPEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z @ 0x1800457D8
 * Callers:
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x1800455B8 (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CTransitionWindowSnapshot@@IEAA@XZ @ 0x18003C2B4 (--0CTransitionWindowSnapshot@@IEAA@XZ.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z @ 0x180045880 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::Create(
        const struct tagRECT *a1,
        struct CVisual *a2,
        struct CTransitionWindowSnapshot **a3)
{
  CTransitionWindowSnapshot *v6; // rax
  volatile signed __int32 *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  void *v11; // [rsp+28h] [rbp-10h]

  *a3 = 0LL;
  v6 = (CTransitionWindowSnapshot *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 16LL))(
                                      WPF::g_pProcessHeap,
                                      360LL);
  if ( v6 )
    v7 = (volatile signed __int32 *)CTransitionWindowSnapshot::CTransitionWindowSnapshot(v6);
  else
    v7 = 0LL;
  if ( v7 )
  {
    v8 = CTransitionWindowSnapshot::Initialize((CTransitionWindowSnapshot *)v7, a1, a2);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x43u, v11);
    }
    else
    {
      *a3 = (struct CTransitionWindowSnapshot *)v7;
      _InterlockedIncrement(v7 + 2);
    }
    CBaseObject::Release((CBaseObject *)v7);
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x41u, v11);
  }
  return v9;
}
