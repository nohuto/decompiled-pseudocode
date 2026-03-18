/*
 * XREFs of ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C001E4E0
 * Callers:
 *     GreCombineRgn @ 0x1C003A8B0 (GreCombineRgn.c)
 *     GreCopyVisRgn @ 0x1C009D9C0 (GreCopyVisRgn.c)
 * Callees:
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C001FAB0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?bIsResizeRequiredBeforeCopyingRegion@RGNOBJ@@IEAAHAEAV1@PEAK@Z @ 0x1C001FB08 (-bIsResizeRequiredBeforeCopyingRegion@RGNOBJ@@IEAAHAEAV1@PEAK@Z.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0023D60 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0023FE8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C00244A0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0025478 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 */

__int64 __fastcall RGNOBJAPI::bCopy(RGNOBJAPI *this, struct RGNOBJ *a2)
{
  unsigned int v2; // ebx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v8 = 0;
  if ( (unsigned int)RGNOBJ::bIsResizeRequiredBeforeCopyingRegion(this, a2, &v8) )
  {
    v6 = 0LL;
    v7 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v6, v8);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v6);
    if ( v6 )
    {
      RGNOBJ::vCopy((RGNOBJ *)&v6, a2);
      v2 = RGNOBJAPI::bSwap(this, (struct RGNOBJ *)&v6);
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v6);
    return v2;
  }
  else
  {
    RGNOBJ::vCopy(this, a2);
    return 1LL;
  }
}
