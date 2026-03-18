/*
 * XREFs of ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C007F24C
 * Callers:
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C005C9F0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0063810 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C007E678 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     GreSetDeviceGammaRamp @ 0x1C007FA68 (GreSetDeviceGammaRamp.c)
 *     GreGetDeviceGammaRamp @ 0x1C01277D4 (GreGetDeviceGammaRamp.c)
 * Callees:
 *     <none>
 */

DEVLOCKOBJ *__fastcall DEVLOCKOBJ::DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  *((_WORD *)this + 24) = 256;
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  return this;
}
