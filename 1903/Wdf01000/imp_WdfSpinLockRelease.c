/*
 * XREFs of imp_WdfSpinLockRelease @ 0x1C0001520
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C0033E3C (WPP_IFR_SF_qqq.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0058664 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B7E4 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfSpinLockRelease(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 SpinLock)
{
  unsigned __int64 v3; // rbx
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *v5; // rsi
  __int16 v6; // cx
  struct _KTHREAD **v7; // rdx
  struct _KTHREAD *_a3; // r8
  struct _KTHREAD *_a2; // rdx
  unsigned __int64 v10; // rdi
  const void *v11; // rax
  const void *v12; // rax
  FxSpinLock *pLock; // [rsp+58h] [rbp+10h] BYREF

  if ( !SpinLock )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1024uLL);
  v3 = ~SpinLock & 0xFFFFFFFFFFFFFFF8uLL;
  LOWORD(Offset) = 0;
  if ( (SpinLock & 1) != 0 )
  {
    Offset = *(unsigned __int16 *)v3;
    v3 -= Offset;
  }
  if ( *(_WORD *)(v3 + 8) == 4132 )
  {
    pLock = (FxSpinLock *)v3;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v3, (void **)&pLock, (void *)SpinLock, 0x1024u, Offset);
    v3 = (unsigned __int64)pLock;
  }
  v5 = *(_FX_DRIVER_GLOBALS **)(v3 + 16);
  if ( *(_BYTE *)(v3 + 121) )
  {
    WPP_IFR_SF_q(v5, 2u, 2u, 0xBu, WPP_FxSpinLockAPI_cpp_Traceguids, (const void *)SpinLock);
    FxVerifierDbgBreakPoint(v5);
  }
  else
  {
    v6 = *(_WORD *)(v3 + 10);
    if ( v6 != 128 )
    {
      v7 = (struct _KTHREAD **)(v3 + 128);
      if ( v3 != -128LL )
      {
        _a3 = *v7;
        if ( *v7 != KeGetCurrentThread() )
        {
          _a2 = KeGetCurrentThread();
          v10 = v3 ^ 0xFFFFFFFFFFFFFFF8uLL;
          if ( _a3 )
          {
            v12 = (const void *)(v3 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v6 )
              v12 = 0LL;
            WPP_IFR_SF_qqq(v5, 2u, 2u, 0xBu, WPP_FxSpinLock_cpp_Traceguids, v12, _a2, _a3);
          }
          else
          {
            v11 = (const void *)(v3 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v6 )
              v11 = 0LL;
            WPP_IFR_SF_qq(v5, 2u, 2u, 0xAu, WPP_FxSpinLock_cpp_Traceguids, v11, _a2);
          }
          if ( !*(_WORD *)(v3 + 10) )
            v10 = 0LL;
          FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(v3 + 16), WDF_INVALID_LOCK_OPERATION, v10, 1uLL);
        }
        *(_QWORD *)(*(_QWORD *)(v3 + 136) + 16LL) = MEMORY[0xFFFFF78000000320]
                                                  - *(_QWORD *)(*(_QWORD *)(v3 + 136) + 8LL);
        *(_QWORD *)(v3 + 136) += 24LL;
        if ( *(_QWORD *)(v3 + 136) >= v3 + 384 )
          *(_QWORD *)(v3 + 136) = v3 + 144;
        *v7 = 0LL;
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 112), *(_BYTE *)(v3 + 120));
  }
}
