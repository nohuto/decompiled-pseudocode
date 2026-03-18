/*
 * XREFs of ?VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR3@@YAEPEAX@Z @ 0x1C002AA10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR3(_DWORD *a1)
{
  a1[530] = ((__int64 (__fastcall *)(_QWORD, _DWORD *))DxgCoreInterface[61])(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 2552LL),
              a1 + 2);
  return 1;
}
