/*
 * XREFs of ?IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C0189AE0
 * Callers:
 *     ?ivRootDeliverTouchInput@CHidInput@@MEAAJPEAX@Z @ 0x1C0180000 (-ivRootDeliverTouchInput@CHidInput@@MEAAJPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x1C018B6F8 (-Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@PEAUCPointerRawData@@K_N@Z @ 0x1C018BA54 (-Serialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@PEAUCPointerRawData@@K_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z @ 0x1C018BD14 (-Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z.c)
 */

__int64 __fastcall IVMeasureRimCompleteFrame(
        struct RIMCOMPLETEFRAME *a1,
        struct CPointerInputFrame *a2,
        struct _UNICODE_STRING *a3,
        struct CIVSerializer *a4)
{
  struct CPointerInputFrame *v6; // r14
  __int64 v8; // rsi
  int v9; // edx
  int v10; // ebx

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      108,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  }
  v8 = *((_QWORD *)a4 + 2);
  v10 = CIVSerializer::Serialize(a4, (struct _UNICODE_STRING *)v8, a3, 1);
  if ( v10 >= 0 )
  {
    v10 = CIVSerializer::Serialize(
            a4,
            (struct _IVRIMPOINTERRAWDATA **)(v8 + 96),
            *((struct CPointerRawData **)v6 + 15),
            *((_DWORD *)a1 + 7),
            1);
    if ( v10 >= 0 )
      v10 = CIVSerializer::Serialize(a4, (void **)(v8 + 104), *((void **)a1 + 14), 176LL * *((unsigned int *)a1 + 6), 1);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      12,
      109,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  }
  return (unsigned int)v10;
}
