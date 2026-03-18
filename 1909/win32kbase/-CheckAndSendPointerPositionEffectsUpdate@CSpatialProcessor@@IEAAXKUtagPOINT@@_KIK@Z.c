/*
 * XREFs of ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C00494FC
 * Callers:
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTATTRIBUTES@@KW4MouseHitTestOptions@@PEAI@Z @ 0x1C0030950 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTA.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C0173DD8 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 * Callees:
 *     ?CheckAndUpdateLastPointerPositionEffectsTimestamp@CSpatialProcessor@@AEAA_N_K@Z @ 0x1C004960C (-CheckAndUpdateLastPointerPositionEffectsTimestamp@CSpatialProcessor@@AEAA_N_K@Z.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C004B0F0 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

void __fastcall CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate(
        CSpatialProcessor *this,
        int a2,
        struct tagPOINT a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  CInputThread *v6; // rsi
  int v11; // edi
  int v12; // eax
  __int64 v14; // rcx
  _QWORD v15[36]; // [rsp+20h] [rbp-138h] BYREF

  v6 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v6, 0LL);
  v11 = *((_DWORD *)v6 + 4);
  ExReleasePushLockSharedEx(v6, 0LL);
  KeLeaveCriticalRegion();
  if ( v11 == 2 )
  {
    v12 = *((_DWORD *)this + 10);
    if ( v12 == a2
      && (v12 != 2 || *((_DWORD *)this + 11) == a5)
      && CSpatialProcessor::CheckAndUpdateLastPointerPositionEffectsTimestamp(this, a4) )
    {
      memset(v15, 0, sizeof(v15));
      v15[2] = *((_QWORD *)this + 2);
      LODWORD(v15[0]) = 1;
      LODWORD(v15[1]) = a2;
      v15[3] = a3;
      v15[4] = __PAIR64__(a6, a5);
      ((void (__fastcall *)(__int64, __int64, _QWORD *, __int64))InputExtensibilityCallout::CoreMsgSendMessage)(
        v14,
        5LL,
        v15,
        288LL);
    }
  }
}
