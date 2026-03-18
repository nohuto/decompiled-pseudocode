/*
 * XREFs of ?StartVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C0248A2C
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C0158820 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x1C0246024 (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C0246284 (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x1C0248EDC (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0011B30 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?StartHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C024896C (-StartHwVSync@DXGDODPRESENT@@QEAAXXZ.c)
 */

void __fastcall BLTQUEUE::StartVSync(BLTQUEUE *this, int a2)
{
  int v2; // eax
  __int64 v5; // rdi
  struct _KTHREAD **v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  v2 = *((_DWORD *)this + 212);
  if ( (v2 & 8) != 0 && (v2 & 2) == 0 )
  {
    v5 = 0LL;
    if ( *((_BYTE *)this + 316) )
    {
      KeSetTimerEx((PKTIMER)((char *)this + 472), (LARGE_INTEGER)(-10000000LL * (unsigned int)dword_1C008ED6C), 0, 0LL);
      DXGDODPRESENT::StartHwVSync(*(struct _KTHREAD ***)this);
    }
    else
    {
      v6 = 0LL;
      if ( !a2 )
        v6 = (struct _KTHREAD **)((char *)this + 248);
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v9, v6, 0);
      if ( !a2 )
      {
        DXGPUSHLOCK::AcquireExclusive(v10);
        v11 = 2;
      }
      v7 = *((unsigned int *)this + 53);
      v8 = *((unsigned int *)this + 52);
      if ( !*((_BYTE *)this + 317) )
        v5 = 10000000 * (int)v7 / (unsigned int)v8;
      ExSetTimer(*((_QWORD *)this + 58), -10000000 * v7 / v8, v5, 0LL, v9, v10);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)&v9);
    }
    *((_DWORD *)this + 212) |= 2u;
  }
}
