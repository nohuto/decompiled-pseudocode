/*
 * XREFs of ?StopVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C0248BF8
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C0158820 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x1C0246024 (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?DisableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C02460B0 (-DisableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x1C0247C08 (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x1C0248EDC (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0011B30 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?StopHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C0248B3C (-StopHwVSync@DXGDODPRESENT@@QEAAXXZ.c)
 */

void __fastcall BLTQUEUE::StopVSync(BLTQUEUE *this, int a2)
{
  struct _KTHREAD **v4; // rdx
  _BYTE v5[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  if ( (*((_DWORD *)this + 212) & 2) != 0 )
  {
    if ( *((_BYTE *)this + 316) )
    {
      KeCancelTimer((PKTIMER)((char *)this + 472));
      KeFlushQueuedDpcs();
      DXGDODPRESENT::StopHwVSync(*(struct _KTHREAD ***)this);
    }
    else
    {
      v4 = 0LL;
      if ( !a2 )
        v4 = (struct _KTHREAD **)((char *)this + 248);
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5, v4, 0);
      if ( !a2 )
      {
        DXGPUSHLOCK::AcquireExclusive(v6);
        v7 = 2;
      }
      ExCancelTimer(*((_QWORD *)this + 58), 0LL);
      KeFlushQueuedDpcs();
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5);
    }
    *((_DWORD *)this + 212) &= ~2u;
  }
}
