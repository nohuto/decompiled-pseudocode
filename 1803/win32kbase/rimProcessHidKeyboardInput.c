/*
 * XREFs of rimProcessHidKeyboardInput @ 0x1C010422C
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00FEE14 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     rimHidP_GetUsages @ 0x1C00F0E7C (rimHidP_GetUsages.c)
 *     rimInvalidateHidKeyboardDeviceKeys @ 0x1C01040A8 (rimInvalidateHidKeyboardDeviceKeys.c)
 *     rimReportHidKeyboardInputData @ 0x1C0104420 (rimReportHidKeyboardInputData.c)
 */

void __fastcall rimProcessHidKeyboardInput(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int Usages; // eax
  int v6; // edi
  unsigned __int16 v7; // r9
  __int64 v8; // [rsp+28h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 488);
  if ( *(_DWORD *)(v2 + 356) )
  {
    PoLatencySensitivityHint(1LL, a2);
    *(_DWORD *)(v2 + 356) = 0;
  }
  memset((void *)v2, 0, 0x28uLL);
  memset((void *)(v2 + 44), 0, 0x28uLL);
  memset((void *)(v2 + 84), 0, 0x28uLL);
  *(_BYTE *)(a1 + 568) = 1;
  *(_DWORD *)(v2 + 40) = 20;
  Usages = rimHidP_GetUsages(
             HidP_Input,
             7u,
             0,
             (unsigned __int16 *)v2,
             (unsigned int *)(v2 + 40),
             *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 464) + 16LL),
             *(char **)(*(_QWORD *)(a2 + 464) + 24LL),
             *(_DWORD *)(a2 + 264));
  v6 = Usages;
  if ( Usages < 0 )
  {
    v7 = 15;
    LODWORD(v8) = Usages;
  }
  else
  {
    if ( gpfnHidP_UsageListDifference )
      v6 = gpfnHidP_UsageListDifference(
             *(unsigned __int16 **)(v2 + 344),
             (unsigned __int16 *)v2,
             (unsigned __int16 *)(v2 + 84),
             (unsigned __int16 *)(v2 + 44),
             *(_DWORD *)(v2 + 352));
    else
      v6 = -1073741637;
    if ( v6 >= 0 )
    {
      rimReportHidKeyboardInputData(a1, a2, v2);
      goto LABEL_12;
    }
    v7 = 14;
    LODWORD(v8) = v6;
  }
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    v7,
    (__int64)&WPP_4f47d605a3be32813e6cdb6a74498525_Traceguids,
    v8);
LABEL_12:
  if ( v6 < 0 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x12u,
      0x10u,
      (__int64)&WPP_4f47d605a3be32813e6cdb6a74498525_Traceguids);
    rimInvalidateHidKeyboardDeviceKeys(a1, a2, v2, 1);
  }
}
