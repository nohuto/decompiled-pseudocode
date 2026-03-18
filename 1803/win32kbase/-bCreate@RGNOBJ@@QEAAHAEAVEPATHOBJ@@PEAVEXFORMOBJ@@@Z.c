/*
 * XREFs of ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00722B0
 * Callers:
 *     GreExtCreateRegion @ 0x1C0043EF0 (GreExtCreateRegion.c)
 * Callees:
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0020670 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0020784 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0021C40 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0044A58 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C00689B0 (EngSetLastError.c)
 *     ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C0071CF4 (-bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 */

__int64 __fastcall RGNOBJ::bCreate(RGNOBJ *this, struct EPATHOBJ *a2, struct EXFORMOBJ *a3)
{
  unsigned int v5; // ebx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]

  v5 = 0;
  v9 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v8, *(_DWORD *)(*(_QWORD *)this + 80LL));
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v8);
  if ( v8 )
  {
    RGNOBJ::vCopy((RGNOBJ *)&v8, this);
    v5 = RGNOBJ::bOutline((RGNOBJ *)&v8, a2, a3);
  }
  else
  {
    EngSetLastError(8u);
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v8);
  return v5;
}
