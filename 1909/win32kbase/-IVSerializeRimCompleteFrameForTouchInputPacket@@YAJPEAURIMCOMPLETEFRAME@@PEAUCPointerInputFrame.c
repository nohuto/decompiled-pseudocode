/*
 * XREFs of ?IVSerializeRimCompleteFrameForTouchInputPacket@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@HAEAUCIVSerializer@@@Z @ 0x1C0187FD0
 * Callers:
 *     ?ivRootDeliverTouchInput@CHidInput@@MEAAJPEAX@Z @ 0x1C017DE10 (-ivRootDeliverTouchInput@CHidInput@@MEAAJPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x1C0189508 (-Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERINFONODE@@PEAUtagRIMPOINTERINFONODE@@K_K_N@Z @ 0x1C0189690 (-Serialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERINFONODE@@PEAUtagRIMPOINTERINFONODE@@K_K_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@PEAUCPointerRawData@@K_N@Z @ 0x1C0189864 (-Serialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@PEAUCPointerRawData@@K_N@Z.c)
 */

__int64 __fastcall IVSerializeRimCompleteFrameForTouchInputPacket(
        struct RIMCOMPLETEFRAME *a1,
        struct CPointerInputFrame *a2,
        struct _UNICODE_STRING *a3,
        int a4,
        struct CIVSerializer *a5)
{
  struct CPointerInputFrame *v7; // r15
  __int64 v9; // rbx
  int v10; // edx
  int v11; // esi
  bool v13; // [rsp+28h] [rbp-30h]

  v7 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      110,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  }
  v9 = *((_QWORD *)a5 + 2);
  v11 = CIVSerializer::Serialize(a5, (struct _UNICODE_STRING *)v9, a3, 0);
  if ( v11 >= 0 )
  {
    *(_DWORD *)(v9 + 16) = *(_DWORD *)a1;
    *(_DWORD *)(v9 + 20) = *((_DWORD *)a1 + 6);
    *(_DWORD *)(v9 + 24) = *((_DWORD *)a1 + 7);
    *(_OWORD *)(v9 + 32) = *(_OWORD *)((char *)a1 + 40);
    *(_OWORD *)(v9 + 48) = *(_OWORD *)((char *)a1 + 56);
    *(_DWORD *)(v9 + 64) = *((_DWORD *)a1 + 18);
    *(_DWORD *)(v9 + 68) = *((_DWORD *)a1 + 19);
    *(_DWORD *)(v9 + 72) = *((_DWORD *)a1 + 20);
    *(_DWORD *)(v9 + 76) = *((_DWORD *)a1 + 21);
    *(_QWORD *)(v9 + 80) = *((_QWORD *)a1 + 11);
    *(_DWORD *)(v9 + 112) = a4 != 0;
    v11 = CIVSerializer::Serialize(
            a5,
            (struct _IVRIMPOINTERRAWDATA **)(v9 + 96),
            *((struct CPointerRawData **)v7 + 15),
            *((_DWORD *)a1 + 7),
            0);
    if ( v11 >= 0 )
      v11 = CIVSerializer::Serialize(
              a5,
              (struct _IVRIMPOINTERINFONODE **)(v9 + 104),
              *((struct tagRIMPOINTERINFONODE **)a1 + 14),
              *((_DWORD *)a1 + 6),
              176LL * *((unsigned int *)a1 + 6),
              v13);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      12,
      111,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  }
  return (unsigned int)v11;
}
