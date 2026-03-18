/*
 * XREFs of ??1MLOCKFAST@@QEAA@XZ @ 0x1C0251A18
 * Callers:
 *     NtGdiMakeObjectUnXferable @ 0x1C011DDF0 (NtGdiMakeObjectUnXferable.c)
 * Callees:
 *     <none>
 */

void __fastcall MLOCKFAST::~MLOCKFAST(MLOCKFAST *this, __int64 a2)
{
  GreReleaseHmgrSemaphore(this, a2);
}
