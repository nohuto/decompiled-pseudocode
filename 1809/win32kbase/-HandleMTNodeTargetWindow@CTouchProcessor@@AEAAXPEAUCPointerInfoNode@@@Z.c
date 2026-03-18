/*
 * XREFs of ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C013E678
 * Callers:
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C013E8A4 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C006F344 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C006F44C (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00703C0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD29C (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C0131014 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C0132FA0 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C0144B2C (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C0145968 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionIsCompositeAppOrSelfDisabled @ 0x1C0162180 (ApiSetEditionIsCompositeAppOrSelfDisabled.c)
 *     ApiSetEditionPointerActivate @ 0x1C01628D4 (ApiSetEditionPointerActivate.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  bool v18; // zf
  CInpLockGuard *v19[6]; // [rsp+30h] [rbp-1F8h] BYREF
  _BYTE v20[64]; // [rsp+60h] [rbp-1C8h] BYREF
  _OWORD v21[11]; // [rsp+A0h] [rbp-188h] BYREF
  _BYTE v22[192]; // [rsp+150h] [rbp-D8h] BYREF

  if ( this[8] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( (*((_DWORD *)gptiCurrent + 302) & 0x2000) == 0 )
  {
    v5 = *((_DWORD *)a2 + 1);
    if ( (v5 & 0x200) != 0
      && (*(_DWORD *)a2 & 0x400) != 0
      && (v5 & 0x80u) != 0
      && *((_DWORD *)a2 + 119)
      && CInputDest::IsEqualByWindowHandle((__int64)a2 + 392, *((void **)a2 + 32), 1) )
    {
      if ( *((_DWORD *)a2 + 119) == 1 )
      {
        if ( (*(_BYTE *)(*((_QWORD *)a2 + 58) + 39LL) & 8) == 0 )
        {
LABEL_12:
          if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate(a2) )
          {
            CThreadLockInputDest::CThreadLockInputDest(
              (CThreadLockInputDest *)v20,
              (struct CPointerInfoNode *)((char *)a2 + 392),
              v6);
            CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
              (CInpUnlockGuardExclusive *)v19,
              (struct CInpLockGuard *)(this + 7),
              *((void **)a2 + 2));
            v7 = *((_QWORD *)a2 + 2);
            v8 = *(_OWORD *)((char *)a2 + 408);
            v9 = *((unsigned __int16 *)a2 + 104);
            v21[0] = *(_OWORD *)((char *)a2 + 392);
            v10 = *(_OWORD *)((char *)a2 + 424);
            v21[1] = v8;
            v11 = *(_OWORD *)((char *)a2 + 440);
            v21[2] = v10;
            v12 = *(_OWORD *)((char *)a2 + 456);
            v21[3] = v11;
            v13 = *(_OWORD *)((char *)a2 + 472);
            v21[4] = v12;
            v14 = *(_OWORD *)((char *)a2 + 488);
            v21[5] = v13;
            v15 = *(_OWORD *)((char *)a2 + 520);
            v21[6] = v14;
            v21[7] = *(_OWORD *)((char *)a2 + 504);
            v16 = *(_OWORD *)((char *)a2 + 536);
            v21[8] = v15;
            v17 = *(_OWORD *)((char *)a2 + 552);
            v21[9] = v16;
            v21[10] = v17;
            ApiSetEditionPointerActivate(v21, v9, v7, (char *)a2 + 224);
            CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v19);
            CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v20);
          }
          return;
        }
      }
      else if ( *((_DWORD *)a2 + 119) != 2
             || !(unsigned int)ApiSetEditionIsCompositeAppOrSelfDisabled(*((_QWORD *)a2 + 58)) )
      {
        goto LABEL_12;
      }
      v18 = (*((_DWORD *)a2 + 61) & 0x10000) == 0;
      *((_DWORD *)a2 + 52) = -2;
      if ( !v18 )
      {
        CInputDest::CInputDest((CInputDest *)v22, (struct CPointerInfoNode *)((char *)a2 + 392));
        CTouchProcessor::SetPointerImplicitCapture(
          (CTouchProcessor *)this,
          *((_QWORD *)a2 + 2),
          (const struct CInputDest *)v22,
          -2,
          0);
        CInputDest::SetEmpty((CInputDest *)v22);
      }
    }
  }
}
