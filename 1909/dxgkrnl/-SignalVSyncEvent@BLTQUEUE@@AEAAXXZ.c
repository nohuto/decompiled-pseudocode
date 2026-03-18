/*
 * XREFs of ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x1C01598CC
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C0145D84 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000C788 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C001B8E0 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     McTemplateK0qqqq @ 0x1C0036DCC (McTemplateK0qqqq.c)
 *     McTemplateK0pqxqqipqx @ 0x1C0047618 (McTemplateK0pqxqqipqx.c)
 *     McTemplateK0qiii @ 0x1C0047730 (McTemplateK0qiii.c)
 */

void __fastcall BLTQUEUE::SignalVSyncEvent(BLTQUEUE *this)
{
  LARGE_INTEGER v2; // rax
  __int64 v3; // r9
  __int64 v4; // r8
  LONGLONG v5; // rax
  __int64 v6; // rcx
  LONGLONG v7; // rdx
  bool v8; // zf
  struct _KEVENT *v9; // rcx
  struct DXGADAPTER *Adapter; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _BYTE v14[8]; // [rsp+60h] [rbp-28h] BYREF
  DXGPUSHLOCK *v15; // [rsp+68h] [rbp-20h]
  int v16; // [rsp+70h] [rbp-18h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+90h] [rbp+8h] BYREF
  union _LARGE_INTEGER v18; // [rsp+98h] [rbp+10h] BYREF

  if ( *((_BYTE *)this + 316) )
    goto LABEL_17;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14, (struct _KTHREAD **)this + 31, 0);
  DXGPUSHLOCK::AcquireExclusive(v15);
  PerformanceFrequency.QuadPart = 0LL;
  v16 = 2;
  v2 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v3 = *((unsigned int *)this + 52);
  v4 = *((unsigned int *)this + 53);
  *((LARGE_INTEGER *)this + 34) = v2;
  v5 = v3 * v2.QuadPart / v4 / PerformanceFrequency.QuadPart;
  *((_QWORD *)this + 35) = v5;
  v6 = (unsigned int)v5;
  v7 = PerformanceFrequency.QuadPart * v4 * (unsigned int)v5 % v3;
  v8 = bTracingEnabled == 0;
  *((_QWORD *)this + 36) = PerformanceFrequency.QuadPart * v4 * (unsigned int)v5 / v3;
  if ( !v8 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqqq((unsigned int)v5, &EventDWMVsyncSignal, (const GUID *)v4, *((_DWORD *)this + 58), v5, 0, 0);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qiii(
        v6,
        v7,
        (const GUID *)v4,
        0,
        *((_QWORD *)this + 35),
        *((_QWORD *)this + 34),
        *((_QWORD *)this + 36));
  }
  if ( *((_DWORD *)this + 59) )
    KePulseEvent(*((PRKEVENT *)this + 27), 0, 0);
  v9 = (struct _KEVENT *)*((_QWORD *)this + 28);
  if ( v9 && *((_DWORD *)this + 58) <= *((_DWORD *)this + 70) )
    KeSetEvent(v9, 0, 0);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  if ( *((_BYTE *)this + 316) )
  {
LABEL_17:
    if ( (*((_DWORD *)this + 212) & 2) != 0 )
      KeSetTimerEx((PKTIMER)((char *)this + 472), (LARGE_INTEGER)(-10000000LL * (unsigned int)dword_1C00A2D6C), 0, 0LL);
  }
  v8 = bTracingEnabled == 0;
  *((_DWORD *)this + 59) = *((_DWORD *)this + 686);
  if ( !v8 )
  {
    if ( *(_QWORD *)this )
    {
      v18.QuadPart = 0LL;
      KeQueryPerformanceCounter(&v18);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          Adapter = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
          McTemplateK0pqxqqipqx(v12, v11, v13, Adapter);
        }
      }
    }
  }
}
