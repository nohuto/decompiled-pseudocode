/*
 * XREFs of ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C0071C18
 * Callers:
 *     GreExtCreateRegion @ 0x1C0043EF0 (GreExtCreateRegion.c)
 * Callees:
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0020670 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0020784 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0020FD0 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00220E8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0022110 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0044A58 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 */

__int64 __fastcall RGNMEMOBJ::iReduce(RGNMEMOBJ *this, struct RGNOBJ *a2)
{
  unsigned int v4; // ebx
  __int64 v6; // r8
  __int64 v7; // [rsp+20h] [rbp-20h] BYREF
  int v8; // [rsp+28h] [rbp-18h]
  struct _RECTL v9; // [rsp+30h] [rbp-10h] BYREF

  v4 = 0;
  v8 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v7, 0xD8u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v7);
  v9.left = -134217728;
  v9.right = 0x7FFFFFF;
  v9.top = -134217728;
  v9.bottom = 0x7FFFFFF;
  if ( v7
    && (RGNOBJ::vSet((RGNOBJ *)&v7, &v9),
        *(_DWORD *)(*(_QWORD *)this + 88LL) = 0x7FFFFFFF,
        *(_DWORD *)(*(_QWORD *)this + 92LL) = 0x7FFFFFFF,
        *(_DWORD *)(*(_QWORD *)this + 96LL) = 0x80000000,
        *(_DWORD *)(*(_QWORD *)this + 100LL) = 0x80000000,
        (unsigned int)RGNOBJ::bMerge(this, (struct RGNOBJ *)&v7, a2, byte_1C019F761)) )
  {
    v4 = RGNOBJ::iComplexity(this);
  }
  else
  {
    v6 = *(_QWORD *)this;
    *(_DWORD *)(v6 + 80) = 120;
    *(_QWORD *)(v6 + 84) = 1LL;
    *(_QWORD *)(v6 + 92) = 0LL;
    *(_DWORD *)(v6 + 100) = 0;
    *(_DWORD *)(v6 + 104) = 0;
    *(_DWORD *)(v6 + 108) = 0x80000000;
    *(_QWORD *)(v6 + 112) = 0x7FFFFFFFLL;
    *(_QWORD *)(v6 + 40) = v6 + 120;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v7);
  return v4;
}
