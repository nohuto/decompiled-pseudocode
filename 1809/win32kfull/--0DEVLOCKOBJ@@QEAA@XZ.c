/*
 * XREFs of ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C0099DC4
 * Callers:
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C005604C (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0057DD0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     GreGetDeviceGammaRamp @ 0x1C0094D9C (GreGetDeviceGammaRamp.c)
 *     GreSetDeviceGammaRamp @ 0x1C0097500 (GreSetDeviceGammaRamp.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0098F00 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     GreExtTextOutRect @ 0x1C0099CF4 (GreExtTextOutRect.c)
 *     GreGetDIBColorTable @ 0x1C009B840 (GreGetDIBColorTable.c)
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C025F28C (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C02998A0 (-GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 *     GreSetDIBColorTable @ 0x1C029B5C0 (GreSetDIBColorTable.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137840 (--0DCOBJ@@QEAA@XZ.c)
 */

DEVLOCKOBJ *__fastcall DEVLOCKOBJ::DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  DCOBJ::DCOBJ((DEVLOCKOBJ *)((char *)this + 32));
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  return this;
}
