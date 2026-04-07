/*
 * XREFs of ?Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x180004BC8
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800048A8 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x180004CF0 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CTransitionWindowSnapshot@@IEAA@XZ @ 0x18003C2B4 (--0CTransitionWindowSnapshot@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18004E35C (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18004E3CC (_Init_thread_header.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::Create(
        struct CTopLevelWindow *a1,
        struct CVisual *a2,
        const struct tagRECT *a3,
        struct CTransitionWindowSnapshot **a4)
{
  CTransitionWindowSnapshot *v8; // rax
  volatile signed __int32 *v9; // rbx
  struct tagRECT *v10; // rax
  int v11; // eax
  unsigned int v12; // edi
  void *v14; // [rsp+28h] [rbp-50h]
  struct tagRECT rc; // [rsp+30h] [rbp-48h] BYREF

  if ( dword_1800DEA60 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800DEA60);
    if ( dword_1800DEA60 == -1 )
    {
      dword_1800DBEA8 = -2147023434;
      Init_thread_footer(&dword_1800DEA60);
    }
  }
  *a4 = 0LL;
  v8 = (CTransitionWindowSnapshot *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 16LL))(
                                      WPF::g_pProcessHeap,
                                      360LL);
  if ( v8 )
    v9 = (volatile signed __int32 *)CTransitionWindowSnapshot::CTransitionWindowSnapshot(v8);
  else
    v9 = 0LL;
  if ( v9 )
  {
    v10 = (struct tagRECT *)*((_QWORD *)a1 + 90);
    if ( a3 )
    {
      rc = *a3;
      OffsetRect(&rc, v10[3].left, v10[3].top);
    }
    else
    {
      rc = v10[3];
    }
    v11 = CTransitionWindowSnapshot::Initialize((CTransitionWindowSnapshot *)v9, a1, a2, &rc);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DBEA8, 1u, v11, 0x30u, v14);
    }
    else
    {
      *a4 = (struct CTransitionWindowSnapshot *)v9;
      _InterlockedIncrement(v9 + 2);
    }
    CBaseObject::Release((CBaseObject *)v9);
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DBEA8, 1u, -2147024882, 0x22u, v14);
  }
  return v12;
}
