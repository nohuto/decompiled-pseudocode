/*
 * XREFs of ?PageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x1C00AE110
 * Callers:
 *     ?VidMmPageInDevice@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@@Z @ 0x1C0024530 (-VidMmPageInDevice@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@@Z.c)
 * Callees:
 *     memset @ 0x1C0018980 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00813B8 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PageInDevice(VIDMM_GLOBAL *this, struct VIDMM_DEVICE *a2)
{
  _QWORD v5[13]; // [rsp+20h] [rbp-68h] BYREF

  if ( *((_QWORD *)a2 + 22) )
    return 0LL;
  memset(v5, 0, 0x58uLL);
  v5[3] = a2;
  v5[0] = -4294967180LL;
  return VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v5, 1);
}
