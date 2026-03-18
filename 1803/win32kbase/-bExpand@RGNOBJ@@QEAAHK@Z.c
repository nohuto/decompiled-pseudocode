/*
 * XREFs of ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C0021AF0
 * Callers:
 *     ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x1C0071A40 (-bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z.c)
 *     ?bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z @ 0x1C0071AB4 (-bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z.c)
 * Callees:
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0020670 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0020784 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0021C40 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C0021CA0 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0044A58 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C00689B0 (EngSetLastError.c)
 */

__int64 __fastcall RGNOBJ::bExpand(RGNOBJ *this, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]

  v3 = 0;
  v6 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v5, a2);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v5);
  if ( v5 )
  {
    RGNOBJ::vCopy((RGNOBJ *)&v5, this);
    RGNOBJ::vSwap(this, (struct RGNOBJ *)&v5);
    v3 = 1;
  }
  else
  {
    EngSetLastError(8u);
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v5);
  return v3;
}
