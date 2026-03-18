/*
 * XREFs of ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C0278AB8
 * Callers:
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0278F08 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     NtGdiSwapBuffers @ 0x1C02B5450 (NtGdiSwapBuffers.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0036028 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0063160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0279840 (-vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ(DEVLOCKOBJ_WNDOBJ *this)
{
  DEVLOCKOBJ::vDestructorNULL(this);
  if ( *((_DWORD *)this + 22) )
    UserLeaveUserCritSec();
  DEVLOCKOBJ::vDestructor(this);
  if ( *((_QWORD *)this + 4) )
    DLODCOBJ::vUnlock((DEVLOCKOBJ_WNDOBJ *)((char *)this + 32));
}
