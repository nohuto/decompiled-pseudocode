/*
 * XREFs of ??0PUBLIC_PFTOBJ@@QEAA@XZ @ 0x1C01649B0
 * Callers:
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C027A150 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C02872C0 (NtGdiAddRemoteFontToDC.c)
 * Callees:
 *     <none>
 */

PUBLIC_PFTOBJ *__fastcall PUBLIC_PFTOBJ::PUBLIC_PFTOBJ(PUBLIC_PFTOBJ *this)
{
  *(_QWORD *)this = gpPFTPublic;
  return this;
}
