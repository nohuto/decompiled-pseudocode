/*
 * XREFs of ?StartProcessingBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAEPEAPEAUDISPLAY_CALLOUT_ENTRY@@@Z @ 0x1C021214C
 * Callers:
 *     DxgkProcessDisplayCalloutBatch @ 0x1C023B9D0 (DxgkProcessDisplayCalloutBatch.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

bool __fastcall DXGDISPLAYCALLOUTQUEUE::StartProcessingBatch(
        DXGDISPLAYCALLOUTQUEUE *this,
        struct DISPLAY_CALLOUT_ENTRY **a2)
{
  char *v4; // rdx
  struct DISPLAY_CALLOUT_ENTRY *v5; // rax
  __int64 v6; // rcx
  bool v7; // bl
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  if ( *((_QWORD *)this + 7) || (v4 = (char *)this + 40, *(char **)v4 == v4) )
  {
    v7 = 0;
    v5 = 0LL;
  }
  else
  {
    *((_QWORD *)this + 7) = KeGetCurrentThread();
    v5 = *(struct DISPLAY_CALLOUT_ENTRY **)v4;
    if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4
      || (v6 = *(_QWORD *)v5, *(struct DISPLAY_CALLOUT_ENTRY **)(*(_QWORD *)v5 + 8LL) != v5) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    v7 = *(_QWORD *)v4 != (_QWORD)v4;
  }
  *a2 = v5;
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
  return v7;
}
