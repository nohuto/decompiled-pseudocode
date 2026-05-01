/*
 * XREFs of ??0SmartCookie@@QEAA@XZ @ 0x18010782C
 * Callers:
 *     ??0TabletModePositionerManager@@QEAA@XZ @ 0x1803A81A8 (--0TabletModePositionerManager@@QEAA@XZ.c)
 *     ??0ScreenManager@@QEAA@XZ @ 0x1803B9334 (--0ScreenManager@@QEAA@XZ.c)
 *     ??0WindowArrangementView@@QEAA@XZ @ 0x1803C0820 (--0WindowArrangementView@@QEAA@XZ.c)
 *     ??0JointResize@@QEAA@XZ @ 0x1803CF2A0 (--0JointResize@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

SmartCookie *__fastcall SmartCookie::SmartCookie(SmartCookie *this)
{
  SmartCookie *result; // rax

  *((_QWORD *)this + 14) = 0LL;
  result = this;
  *((_DWORD *)this + 30) = 0;
  return result;
}
