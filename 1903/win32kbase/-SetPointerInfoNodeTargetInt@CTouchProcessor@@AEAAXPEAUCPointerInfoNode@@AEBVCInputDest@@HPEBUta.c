/*
 * XREFs of ?SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C017422C
 * Callers:
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C0174124 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHH@Z @ 0x1C0175E68 (-UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEB.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0030D3C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0042FD4 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C0043954 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C015DC74 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016E13C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::SetPointerInfoNodeTargetInt(
        CTouchProcessor *this,
        struct CPointerInfoNode *a2,
        const struct CInputDest *a3,
        int a4,
        const struct tagPOINT *a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  HWND WindowHandle; // rax
  __int64 v16; // rdx
  CInputDest *v17; // rcx
  __int64 v18; // r8
  bool v19; // zf
  HWND v20; // rsi
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  int v25; // edx
  int v26; // eax
  __int64 v27[15]; // [rsp+20h] [rbp-A8h] BYREF
  char v28; // [rsp+98h] [rbp-30h]

  if ( !(unsigned int)CPointerInfoNode::IsValid(a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
  *((_DWORD *)a2 + 1) &= ~0x100u;
  WindowHandle = CInputDest::GetWindowHandle(a3);
  v19 = *((_DWORD *)a2 + 113) == 0;
  *((_QWORD *)a2 + 25) = WindowHandle;
  if ( !v19 )
  {
    v20 = CInputDest::GetWindowHandle(v17);
    if ( CInputDest::GetWindowHandle((struct CPointerInfoNode *)((char *)a2 + 360)) != v20 )
    {
      memset(v27, 0, sizeof(v27));
      v28 = 0;
      CInputDest::SetupFromInputDestAndWindow(v27, (__int64)a2 + 360, v20, 1);
      CInputDest::operator=((__int64)a2 + 360, (__int64)v27, v21);
      CInputDest::SetEmpty((CInputDest *)v27, v22, v23);
    }
  }
  v24 = *(unsigned int *)a2;
  LODWORD(v24) = v24 | 0x100;
  *((_DWORD *)a2 + 38) = a4;
  *(_DWORD *)a2 = v24;
  if ( a9 )
  {
    LODWORD(v24) = v24 | 0x200;
    *(_DWORD *)a2 = v24;
  }
  if ( !a8 )
  {
    if ( a9 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v16, v18);
      LODWORD(v24) = *(_DWORD *)a2;
    }
    LODWORD(v24) = v24 & 0xFFFFFDFF;
    *(_DWORD *)a2 = v24;
  }
  if ( a7 )
  {
    LODWORD(v24) = v24 & 0xFFFFF3FF | 0x400;
    *(_DWORD *)a2 = v24;
  }
  if ( a5 )
    *(struct tagPOINT *)((char *)a2 + 156) = *a5;
  if ( a8 )
  {
    v25 = 0x40000;
    if ( (v24 & 0x40000) != 0 )
      return;
    v26 = a6 << 18;
  }
  else
  {
    v25 = 0x20000;
    if ( (v24 & 0x20000) != 0 )
      return;
    v26 = a6 << 17;
  }
  *(_DWORD *)a2 = v24 ^ v25 & (v24 ^ v26);
}
