/*
 * XREFs of ??0PUBLIC_PFTOBJ@@QEAA@XZ @ 0x1C0165F50
 * Callers:
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C0279A90 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C0286C00 (NtGdiAddRemoteFontToDC.c)
 * Callees:
 *     <none>
 */

PUBLIC_PFTOBJ *__fastcall PUBLIC_PFTOBJ::PUBLIC_PFTOBJ(PUBLIC_PFTOBJ *this)
{
  *(_QWORD *)this = gpPFTPublic;
  return this;
}
