/*
 * XREFs of ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C0127BC4
 * Callers:
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C012771C (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0127AF4 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C01F6200 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?EnableClockCalibration@DXGGLOBAL@@QEAAXE@Z @ 0x1C0242DA0 (-EnableClockCalibration@DXGGLOBAL@@QEAAXE@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ @ 0x1C000D5A4 (-IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0019778 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::EnableClockCalibration(ADAPTER_RENDER *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  char v6; // al
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( ADAPTER_RENDER::IsClockCalibrationSupported(this) )
  {
    v5 = v4 + 920;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v5, 0LL);
    *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
    v6 = *((_BYTE *)this + 778);
    if ( a2 )
    {
      if ( !v6
        && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x61C8ED7) != 0
        && (*(&DxgkControlGuid_Context + 3) & 0xFFFFFFFFF9E37128uLL) == 0
        && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x4000) != 0 )
      {
        DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
          (DXGAUTOPUSHLOCKSHARED *)v7,
          (struct _KTHREAD **)(*((_QWORD *)this + 2) + 96LL));
        if ( !*(_DWORD *)(*((_QWORD *)this + 2) + 136LL) )
        {
          KeSetTimerEx(
            (PKTIMER)((char *)this + 792),
            *(LARGE_INTEGER *)((char *)this + 784),
            50,
            (PKDPC)((char *)this + 856));
          *((_BYTE *)this + 778) = 1;
        }
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
      }
    }
    else if ( v6 )
    {
      KeCancelTimer((PKTIMER)((char *)this + 792));
      KeFlushQueuedDpcs();
      *((_BYTE *)this + 778) = 0;
    }
    *(_QWORD *)(v5 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
  }
}
