/*
 * XREFs of ??0SmartCookie@@QEAA@XZ @ 0x18012683C
 * Callers:
 *     ??0TabletModePositionerManager@@QEAA@XZ @ 0x1803C76B8 (--0TabletModePositionerManager@@QEAA@XZ.c)
 *     ??0ScreenManager@@QEAA@XZ @ 0x1803D8844 (--0ScreenManager@@QEAA@XZ.c)
 *     ??0WindowArrangementView@@QEAA@XZ @ 0x1803DFDC0 (--0WindowArrangementView@@QEAA@XZ.c)
 *     ??0JointResize@@QEAA@XZ @ 0x1803EE880 (--0JointResize@@QEAA@XZ.c)
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
