/*
 * XREFs of ?IVSerializeRimCompleteFrameForTouchInputPacket@@YAHPEAURIMCOMPLETEFRAME@@U_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C0154738
 * Callers:
 *     ?ivRootDeliverTouchInput@CHidInput@@MEAAJPEAX@Z @ 0x1C014DC80 (-ivRootDeliverTouchInput@CHidInput@@MEAAJPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@0_N@Z @ 0x1C0155974 (-Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@0_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERINFONODE@@PEAUtagRIMPOINTERINFONODE@@K_K_N@Z @ 0x1C0155A10 (-Serialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERINFONODE@@PEAUtagRIMPOINTERINFONODE@@K_K_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@PEAUtagRIMPOINTERRAWDATA@@K_N@Z @ 0x1C0155B58 (-Serialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@PEAUtagRIMPOINTERRAWDATA@@K_N@Z.c)
 */

__int64 __fastcall IVSerializeRimCompleteFrameForTouchInputPacket(
        struct RIMCOMPLETEFRAME *a1,
        struct _UNICODE_STRING *a2,
        struct _UNICODE_STRING **a3)
{
  struct _UNICODE_STRING *v6; // rbx
  struct _UNICODE_STRING *v7; // rdx
  int v8; // esi
  bool v10; // [rsp+28h] [rbp-20h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x4Eu,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  v6 = *a3;
  v7 = *a3 + 1;
  *(_DWORD *)(&v6->MaximumLength + 1) = 1;
  v6->Buffer = (PWSTR)8;
  v8 = CIVSerializer::Serialize((CIVSerializer *)a3, v7, a2, 0);
  if ( v8 >= 0 )
  {
    *(_DWORD *)&v6[2].Length = *(_DWORD *)a1;
    *(_DWORD *)(&v6[2].MaximumLength + 1) = *((_DWORD *)a1 + 6);
    LODWORD(v6[2].Buffer) = *((_DWORD *)a1 + 7);
    *(_QWORD *)&v6[3].Length = *((_QWORD *)a1 + 5);
    LODWORD(v6[3].Buffer) = *((_DWORD *)a1 + 12);
    HIDWORD(v6[3].Buffer) = *((_DWORD *)a1 + 13);
    *(_DWORD *)&v6[4].Length = *((_DWORD *)a1 + 14);
    *(_DWORD *)(&v6[4].MaximumLength + 1) = *((_DWORD *)a1 + 15);
    v6[4].Buffer = (PWSTR)*((_QWORD *)a1 + 8);
    v8 = CIVSerializer::Serialize(
           (CIVSerializer *)a3,
           (struct _IVRIMPOINTERRAWDATA **)&v6[5].Buffer,
           *((struct tagRIMPOINTERRAWDATA **)a1 + 10),
           *((_DWORD *)a1 + 7),
           0);
    if ( v8 >= 0 )
      v8 = CIVSerializer::Serialize(
             (CIVSerializer *)a3,
             (struct _IVRIMPOINTERINFONODE **)&v6[6],
             *((struct tagRIMPOINTERINFONODE **)a1 + 11),
             *((_DWORD *)a1 + 6),
             160LL * *((unsigned int *)a1 + 6),
             v10);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x4Fu,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  return (unsigned int)v8;
}
