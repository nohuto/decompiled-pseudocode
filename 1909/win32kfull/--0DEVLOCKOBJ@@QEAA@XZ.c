/*
 * XREFs of ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C0125A4C
 * Callers:
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C00A6150 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C00AD7B0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     GreGetDeviceGammaRamp @ 0x1C0101FA4 (GreGetDeviceGammaRamp.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0123D78 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     GreSetDeviceGammaRamp @ 0x1C0127F88 (GreSetDeviceGammaRamp.c)
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
