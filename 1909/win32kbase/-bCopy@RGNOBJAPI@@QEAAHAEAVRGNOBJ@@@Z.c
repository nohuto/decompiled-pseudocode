/*
 * XREFs of ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C00777D0
 * Callers:
 *     GreCopyVisRgn @ 0x1C0077730 (GreCopyVisRgn.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0015D10 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0016F90 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0016FF0 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0017174 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C00255A0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?bIsResizeRequiredBeforeCopyingRegion@RGNOBJ@@IEAAHAEAV1@PEAK@Z @ 0x1C0077894 (-bIsResizeRequiredBeforeCopyingRegion@RGNOBJ@@IEAAHAEAV1@PEAK@Z.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 */

__int64 __fastcall RGNOBJAPI::bCopy(struct OBJECT **this, struct RGNOBJ *a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  struct OBJECT *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v8 = 0;
  if ( (unsigned int)RGNOBJ::bIsResizeRequiredBeforeCopyingRegion((RGNOBJ *)this, a2, &v8) )
  {
    v7 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v6, v8);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v6);
    if ( v6 )
    {
      RGNOBJ::vCopy((RGNOBJ *)&v6, a2);
      v2 = RGNOBJAPI::bSwap(this, &v6);
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v6);
    return v2;
  }
  else
  {
    memmove((char *)*this + 80, (const void *)(*(_QWORD *)a2 + 80LL), *(unsigned int *)(*(_QWORD *)a2 + 80LL) - 80LL);
    result = 1LL;
    *((_QWORD *)*this + 5) = (char *)*this + *(_DWORD *)(*(_QWORD *)a2 + 40LL) - *(_DWORD *)a2;
  }
  return result;
}
