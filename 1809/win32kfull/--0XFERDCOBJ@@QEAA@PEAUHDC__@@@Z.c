/*
 * XREFs of ??0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025F2C8
 * Callers:
 *     GreExtEscape @ 0x1C0098E04 (GreExtEscape.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015E848 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015E92C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 */

XFERDCOBJ *__fastcall XFERDCOBJ::XFERDCOBJ(XFERDCOBJ *this, HDC a2)
{
  int v4; // eax

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>((char *)this + 16);
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 3) = 1;
  v4 = PushThreadGuardedObject((char *)this + 48, this, XFERDCOBJ::ThreadCleanup);
  *((_DWORD *)this + 20) = v4;
  if ( v4 )
    XDCOBJ::vLock(this, a2);
  return this;
}
