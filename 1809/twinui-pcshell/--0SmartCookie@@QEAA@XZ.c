/*
 * XREFs of ??0SmartCookie@@QEAA@XZ @ 0x1800E5568
 * Callers:
 *     ??0TabletModePositionerManager@@QEAA@XZ @ 0x180342608 (--0TabletModePositionerManager@@QEAA@XZ.c)
 *     ??0ScreenManager@@QEAA@XZ @ 0x180353364 (--0ScreenManager@@QEAA@XZ.c)
 *     ??0WindowArrangementView@@QEAA@XZ @ 0x18035AA68 (--0WindowArrangementView@@QEAA@XZ.c)
 *     ??0JointResize@@QEAA@XZ @ 0x180369360 (--0JointResize@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

SmartCookie *__fastcall SmartCookie::SmartCookie(SmartCookie *this)
{
  SmartCookie *result; // rax

  *((_QWORD *)this + 13) = 0LL;
  result = this;
  *((_DWORD *)this + 28) = 0;
  return result;
}
