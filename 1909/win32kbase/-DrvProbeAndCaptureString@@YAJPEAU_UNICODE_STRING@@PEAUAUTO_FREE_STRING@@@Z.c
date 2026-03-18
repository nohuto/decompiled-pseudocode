/*
 * XREFs of ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x1C003AA94
 * Callers:
 *     DrvEnumDisplaySettings @ 0x1C0038F60 (DrvEnumDisplaySettings.c)
 *     DrvEnumDisplayDevices @ 0x1C003B980 (DrvEnumDisplayDevices.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00A0EA8 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0012FFC (PALLOCMEM2.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 */

__int64 __fastcall DrvProbeAndCaptureString(struct _UNICODE_STRING *a1, struct AUTO_FREE_STRING *a2)
{
  unsigned __int16 v4; // bx
  _QWORD *v5; // rax
  ULONG64 v6; // rcx
  __int64 v8; // rax
  struct _UNICODE_STRING Src; // [rsp+20h] [rbp-18h]

  Src = *a1;
  v4 = (unsigned __int16)*a1;
  v5 = PALLOCMEM2((unsigned int)v4 + 18, 0x73726447u, 0);
  *(_QWORD *)a2 = v5;
  if ( v5 )
  {
    v5[1] = v5 + 2;
    **(_WORD **)a2 = v4;
    *(_WORD *)(*(_QWORD *)a2 + 2LL) = v4 + 2;
    if ( v4 )
    {
      v6 = (ULONG64)Src.Buffer + v4;
      if ( v6 > MmUserProbeAddress || (PWSTR)v6 < Src.Buffer )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(*(void **)(*(_QWORD *)a2 + 8LL), Src.Buffer, v4);
    }
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)a2 + 8LL) + 2 * ((unsigned __int64)v4 >> 1)) = 0;
    return 0LL;
  }
  else
  {
    v8 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v8 + 24) = a1;
    *(_QWORD *)(v8 + 32) = v4;
    WdLogEvent5_WdLowResource(v8);
    return 3221225495LL;
  }
}
