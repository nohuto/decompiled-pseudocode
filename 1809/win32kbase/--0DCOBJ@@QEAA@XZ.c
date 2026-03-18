/*
 * XREFs of ??0DCOBJ@@QEAA@XZ @ 0x1C001DE64
 * Callers:
 *     GreGetClipBox @ 0x1C001C680 (GreGetClipBox.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C001DDF0 (--1DCMEMOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C002AB38 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C00A0594 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     GreRestoreDCInternal @ 0x1C00ACC60 (GreRestoreDCInternal.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C00A9798 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 */

DCOBJ *__fastcall DCOBJ::DCOBJ(DCOBJ *this)
{
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>((char *)this + 16);
  *(_QWORD *)this = 0LL;
  return this;
}
