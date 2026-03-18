/*
 * XREFs of ?IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@U_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C0154464
 * Callers:
 *     ?ivRootDeliverTouchInput@CHidInput@@MEAAJPEAX@Z @ 0x1C014DC80 (-ivRootDeliverTouchInput@CHidInput@@MEAAJPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@0_N@Z @ 0x1C0155974 (-Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@0_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@PEAUtagRIMPOINTERRAWDATA@@K_N@Z @ 0x1C0155B58 (-Serialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@PEAUtagRIMPOINTERRAWDATA@@K_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z @ 0x1C0155E20 (-Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z.c)
 */

__int64 __fastcall IVMeasureRimCompleteFrame(
        struct RIMCOMPLETEFRAME *a1,
        struct _UNICODE_STRING *a2,
        struct CIVSerializer *a3)
{
  __int64 v6; // rbp
  int v7; // ebx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x4Cu,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  v6 = *(_QWORD *)a3;
  v7 = CIVSerializer::Serialize(a3, (struct _UNICODE_STRING *)(*(_QWORD *)a3 + 16LL), a2, 1);
  if ( v7 >= 0 )
  {
    v7 = CIVSerializer::Serialize(
           a3,
           (struct _IVRIMPOINTERRAWDATA **)(v6 + 88),
           *((struct tagRIMPOINTERRAWDATA **)a1 + 10),
           *((_DWORD *)a1 + 7),
           1);
    if ( v7 >= 0 )
      v7 = CIVSerializer::Serialize(a3, (void **)(v6 + 96), *((void **)a1 + 11), 160LL * *((unsigned int *)a1 + 6), 1);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x4Du,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  return (unsigned int)v7;
}
