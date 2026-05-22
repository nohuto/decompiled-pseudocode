/*
 * XREFs of ?Reset@HidLampMultiUpdateReportBuilder@@QEAAXXZ @ 0x18007E084
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180074890 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 * Callees:
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 */

void __fastcall HidLampMultiUpdateReportBuilder::Reset(HidLampMultiUpdateReportBuilder *this)
{
  __int64 v1; // r8

  v1 = *((int *)this + 4);
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  memset_0(*((void **)this + 4), 0, 4 * v1);
  memset_0(*((void **)this + 5), 0, *((int *)this + 4));
  memset_0(*((void **)this + 6), 0, *((int *)this + 4));
  memset_0(*((void **)this + 7), 0, *((int *)this + 4));
  memset_0(*((void **)this + 8), 0, *((int *)this + 4));
}
