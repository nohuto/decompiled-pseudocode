/*
 * XREFs of ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C023DB30
 * Callers:
 *     ?PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z @ 0x1C01EE0D0 (-PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z.c)
 *     ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1C023E3F0 (-TdrResetFromTimeoutWorkItem@@YAXPEAX@Z.c)
 * Callees:
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C000D5C8 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000E028 (-IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C023DE20 (-TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C023E590 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 */

void __fastcall TdrCompleteRecoveryContext(struct _TDR_RECOVERY_CONTEXT *a1, struct _LUID *a2, bool a3)
{
  __int64 v4; // rcx
  char v6; // si
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // r10d
  unsigned __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 )
  {
    v4 = *((_QWORD *)a1 + 6);
    v6 = (char)a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 2560LL) + 520LL)
                                                          + 8LL)
                                              + 472LL))(
        v4,
        0LL);
    if ( *((_DWORD *)a1 + 4) != 6 )
    {
      a2 = (struct _LUID *)&g_TdrHistory;
      v7 = 5LL * (((unsigned __int8)_InterlockedExchangeAdd(dword_1C00A2FD4, 1u) + 1) & 0x3F);
      *((_QWORD *)&g_TdrHistory + v7 + 3) = *((_QWORD *)a1 + 15);
      *((_DWORD *)&g_TdrHistory + 2 * v7 + 8) = *((_DWORD *)a1 + 4);
      *(UUID *)((char *)&g_TdrHistory + 8 * v7 + 40) = *(UUID *)((char *)a1 + 56);
      *((_QWORD *)&g_TdrHistory + v7 + 7) = *((_QWORD *)a1 + 9);
    }
    DXGADAPTER::IsAddapterSessionized(*((DXGADAPTER **)a1 + 4), a2, 0LL, &v10);
    DxgkLogCodePointPacketForSession(0x18u, v10, *((_DWORD *)a1 + 4), v9, *((_DWORD *)a1 + 20), *(_QWORD *)(v8 + 276));
    _InterlockedCompareExchange64((volatile signed __int64 *)&g_TdrRecoveryInProgress, 0LL, (signed __int64)a1);
    if ( v6 )
    {
      *((_DWORD *)a1 + 29) &= ~1u;
      TdrUpdateDbgReport(a1, 0);
    }
    TdrDereferenceRecoveryContext(a1, a3);
  }
}
