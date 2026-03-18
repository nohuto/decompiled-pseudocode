/*
 * XREFs of ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C016D1D8
 * Callers:
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C016D3CC (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0030D3C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C004196C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C0041A84 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00434E0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z @ 0x1C00A4E80 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C015DB5C (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C0173A3C (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C01748F4 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionIsCompositeAppOrSelfDisabled @ 0x1C019C950 (ApiSetEditionIsCompositeAppOrSelfDisabled.c)
 *     ApiSetEditionPointerActivate @ 0x1C019D288 (ApiSetEditionPointerActivate.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::HandleMTNodeTargetWindow(
        struct _KTHREAD **this,
        struct CPointerInfoNode *a2,
        __int64 a3)
{
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // r8
  __int128 v8; // xmm1
  __int64 v9; // rdx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  bool v15; // zf
  __int64 v16; // rdx
  __int64 v17; // r8
  _BYTE v18[16]; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v19[7]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+B0h] [rbp-50h]
  _BYTE v21[64]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v22[128]; // [rsp+100h] [rbp+0h] BYREF

  if ( this[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( (*((_DWORD *)gptiCurrent + 306) & 0x2000) == 0 )
  {
    v5 = *((_DWORD *)a2 + 1);
    if ( (v5 & 0x200) != 0
      && (*(_DWORD *)a2 & 0x400) != 0
      && (v5 & 0x80u) != 0
      && *((_DWORD *)a2 + 113)
      && CInputDest::IsEqualByWindowHandle((__int64)a2 + 360, *((_QWORD *)a2 + 25), 1) )
    {
      if ( *((_DWORD *)a2 + 113) == 1 )
      {
        if ( (*(_BYTE *)(*((_QWORD *)a2 + 55) + 39LL) & 8) == 0 )
        {
LABEL_12:
          if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate(a2) )
          {
            CThreadLockInputDest::CThreadLockInputDest(
              (CThreadLockInputDest *)v21,
              (struct CPointerInfoNode *)((char *)a2 + 360),
              v6);
            CInpLockGuard::UnLock((CInpLockGuard *)(this + 6));
            v7 = *((_QWORD *)a2 + 2);
            v8 = *(_OWORD *)((char *)a2 + 376);
            v9 = *((unsigned __int16 *)a2 + 76);
            v19[0] = *(_OWORD *)((char *)a2 + 360);
            v10 = *(_OWORD *)((char *)a2 + 392);
            v19[1] = v8;
            v11 = *(_OWORD *)((char *)a2 + 408);
            v19[2] = v10;
            v12 = *(_OWORD *)((char *)a2 + 424);
            v19[3] = v11;
            v13 = *(_OWORD *)((char *)a2 + 440);
            v19[4] = v12;
            v14 = *(_OWORD *)((char *)a2 + 456);
            v19[5] = v13;
            *(_QWORD *)&v13 = *((_QWORD *)a2 + 59);
            v19[6] = v14;
            v20 = v13;
            ApiSetEditionPointerActivate(v19, v9, v7, (char *)a2 + 168);
            CInpLockGuard::LockExclusive((CInpLockGuard *)(this + 6), (struct CLockListEntryStack *)v18);
            CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v21);
          }
          return;
        }
      }
      else if ( *((_DWORD *)a2 + 113) != 2
             || !(unsigned int)ApiSetEditionIsCompositeAppOrSelfDisabled(*((_QWORD *)a2 + 55)) )
      {
        goto LABEL_12;
      }
      v15 = (*((_DWORD *)a2 + 47) & 0x10000) == 0;
      *((_DWORD *)a2 + 38) = -2;
      if ( !v15 )
      {
        CInputDest::CInputDest((CInputDest *)v22, (__int64 **)a2 + 45);
        CTouchProcessor::SetPointerImplicitCapture(
          (CTouchProcessor *)this,
          *((_QWORD *)a2 + 2),
          (const struct CInputDest *)v22,
          -2,
          0);
        CInputDest::SetEmpty((CInputDest *)v22, v16, v17);
      }
    }
  }
}
