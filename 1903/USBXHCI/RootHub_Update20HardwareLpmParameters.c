/*
 * XREFs of RootHub_Update20HardwareLpmParameters @ 0x1C0026C58
 * Callers:
 *     UsbDevice_UpdateUsbDevice @ 0x1C003D3DC (UsbDevice_UpdateUsbDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0020E08 (XilRegister_WriteUlong.c)
 *     DynamicLock_Acquire @ 0x1C0046FAC (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C00471B4 (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_Update20HardwareLpmParameters(_QWORD *a1, int a2, unsigned int a3, unsigned __int8 a4)
{
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // r12
  int Ulong; // edi
  unsigned int v10; // edi
  int v11; // edi
  __int64 v13; // [rsp+28h] [rbp-30h]

  v6 = *(_QWORD *)(a1[1] + 88LL);
  v7 = 88LL * (unsigned int)(a2 - 1);
  v8 = a1[5] + 16LL * (unsigned int)(a2 - 1);
  DynamicLock_Acquire(*(_QWORD *)(v7 + a1[6] + 24));
  Ulong = XilRegister_ReadUlong(v6, (unsigned int *)(v8 + 12));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xFBu,
      (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
      Ulong);
  v10 = Ulong & 0xFFFFC000;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v13) = v10 | (8 * (a3 & 0x780)) | ((a3 & 4 | (a3 >> 7) & 0xFF0) >> 2);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xFCu,
      (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
      v13);
  }
  XilRegister_WriteUlong(v6, (_DWORD *)(v8 + 12), v10 | (8 * (a3 & 0x780)) | ((a3 & 4 | (a3 >> 7) & 0xFF0) >> 2));
  v11 = XilRegister_ReadUlong(v6, (unsigned int *)(v8 + 4));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v13) = v11;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xFDu,
      (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
      v13);
  }
  *(_BYTE *)(v7 + a1[6] + 23) = a3 & 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v13) = v11 & 0xFFFE0007 | (2 * (a3 & 0x78 | (2 * (a3 & 2 | ((a4 | ((a3 & 1) << 8)) << 6)))));
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xFEu,
      (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
      v13);
  }
  XilRegister_WriteUlong(
    v6,
    (_DWORD *)(v8 + 4),
    v11 & 0xFFFE0007 | (2 * (a3 & 0x78 | (2 * (a3 & 2 | ((a4 | ((a3 & 1) << 8)) << 6))))));
  *(_BYTE *)(v7 + a1[6] + 20) = 1;
  return DynamicLock_Release(*(_QWORD *)(v7 + a1[6] + 24));
}
