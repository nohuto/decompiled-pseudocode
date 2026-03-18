/*
 * XREFs of VidSchiExecuteMmIoFlipAtISR @ 0x1C0013820
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiUpdateCurrentIsrFrameTime @ 0x1C0016C58 (VidSchiUpdateCurrentIsrFrameTime.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 */

char __fastcall VidSchiExecuteMmIoFlipAtISR(_QWORD *a1)
{
  unsigned int *v2; // rdi
  __int64 v4; // r8
  __int64 v5; // rdx

  v2 = (unsigned int *)(a1 + 1);
  *((_DWORD *)a1 + 530) = ((__int64 (__fastcall *)(_QWORD, _QWORD *))DxgCoreInterface[28])(
                            *(_QWORD *)(*(_QWORD *)(*a1 + 16LL) + 2552LL),
                            a1 + 1);
  if ( (a1[70] & 2) != 0 )
  {
    VidSchiUpdateCurrentIsrFrameTime(*a1, *(_QWORD *)(*a1 + 8LL * *v2 + 2576), 0LL);
    v4 = *v2;
    v5 = *a1;
    a1[266] = *(_QWORD *)(*(_QWORD *)(*a1 + 8 * v4 + 2576) + 33160LL);
    *((_DWORD *)a1 + 531) = *(_DWORD *)(*(_QWORD *)(v5 + 8 * v4 + 2576) + 33168LL);
  }
  return 1;
}
