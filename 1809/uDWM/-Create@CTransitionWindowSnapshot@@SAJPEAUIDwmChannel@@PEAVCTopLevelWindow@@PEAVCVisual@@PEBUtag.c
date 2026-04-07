/*
 * XREFs of ?Create@CTransitionWindowSnapshot@@SAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x18000AA20
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000A6D4 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x18000AB60 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@P.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CTransitionWindowSnapshot@@IEAA@XZ @ 0x18003A854 (--0CTransitionWindowSnapshot@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18004C1BC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18004C22C (_Init_thread_header.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::Create(
        struct IDwmChannel *a1,
        struct CTopLevelWindow *a2,
        struct CVisual *a3,
        const struct tagRECT *a4,
        struct CTransitionWindowSnapshot **a5)
{
  CTransitionWindowSnapshot *v9; // rax
  volatile signed __int32 *v10; // rbx
  struct tagRECT *v11; // rax
  int v12; // eax
  unsigned int v13; // edi
  struct tagRECT rc; // [rsp+30h] [rbp-58h] BYREF

  if ( dword_1800D7A50 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800D7A50);
    if ( dword_1800D7A50 == -1 )
    {
      dword_1800D4E98 = -2147023434;
      Init_thread_footer(&dword_1800D7A50);
    }
  }
  *a5 = 0LL;
  v9 = (CTransitionWindowSnapshot *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 16LL))(
                                      WPF::g_pProcessHeap,
                                      360LL);
  if ( v9 )
    v10 = (volatile signed __int32 *)CTransitionWindowSnapshot::CTransitionWindowSnapshot(v9);
  else
    v10 = 0LL;
  if ( v10 )
  {
    v11 = (struct tagRECT *)*((_QWORD *)a2 + 90);
    if ( a4 )
    {
      rc = *a4;
      OffsetRect(&rc, v11[3].left, v11[3].top);
    }
    else
    {
      rc = v11[3];
    }
    v12 = CTransitionWindowSnapshot::Initialize((CTransitionWindowSnapshot *)v10, a1, a2, a3, &rc);
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800D4E98, 1u, v12, 0x30u);
    }
    else
    {
      *a5 = (struct CTransitionWindowSnapshot *)v10;
      _InterlockedIncrement(v10 + 2);
    }
    CBaseObject::Release((CBaseObject *)v10);
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800D4E98, 1u, -2147024882, 0x22u);
  }
  return v13;
}
