/*
 * XREFs of RootHub_Update20HardwareLpmParameters @ 0x1C00227B4
 * Callers:
 *     UsbDevice_UpdateUsbDevice @ 0x1C0038094 (UsbDevice_UpdateUsbDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C001D374 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001D458 (XilRegister_WriteUlong.c)
 *     DynamicLock_Acquire @ 0x1C0041760 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C004195C (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_Update20HardwareLpmParameters(_QWORD *a1, int a2, unsigned int a3, unsigned __int8 a4)
{
  __int64 v7; // r13
  __int64 v8; // r8
  __int64 v9; // r12
  __int64 v10; // r15
  int Ulong; // edi
  int v12; // edi
  __int64 v14; // [rsp+28h] [rbp-30h]
  __int64 v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+28h] [rbp-30h]

  v7 = *(_QWORD *)(a1[1] + 88LL);
  v8 = (unsigned int)(a2 - 1);
  v9 = 10 * v8;
  v10 = a1[5] + 16 * v8;
  DynamicLock_Acquire(*(_QWORD *)(a1[6] + 80 * v8 + 24));
  Ulong = XilRegister_ReadUlong(v7, (unsigned int *)(v10 + 12));
  WPP_RECORDER_SF_d(
    *(_QWORD *)(a1[1] + 72LL),
    4u,
    0xBu,
    0xFBu,
    (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
    Ulong);
  LODWORD(v14) = Ulong & 0xFFFFC000 | (8 * (a3 & 0x780)) | ((a3 & 4 | (a3 >> 7) & 0xFF0) >> 2);
  WPP_RECORDER_SF_d(
    *(_QWORD *)(a1[1] + 72LL),
    4u,
    0xBu,
    0xFCu,
    (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
    v14);
  XilRegister_WriteUlong(
    v7,
    (_DWORD *)(v10 + 12),
    Ulong & 0xFFFFC000 | (8 * (a3 & 0x780)) | ((a3 & 4 | (a3 >> 7) & 0xFF0) >> 2));
  v12 = XilRegister_ReadUlong(v7, (unsigned int *)(v10 + 4));
  LODWORD(v15) = v12;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(a1[1] + 72LL),
    4u,
    0xBu,
    0xFDu,
    (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
    v15);
  *(_BYTE *)(a1[6] + 8 * v9 + 23) = a3 & 1;
  LODWORD(v16) = v12 & 0xFFFE0007 | (2 * (a3 & 0x78 | (2 * (a3 & 2 | ((a4 | ((a3 & 1) << 8)) << 6)))));
  WPP_RECORDER_SF_d(
    *(_QWORD *)(a1[1] + 72LL),
    4u,
    0xBu,
    0xFEu,
    (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
    v16);
  XilRegister_WriteUlong(
    v7,
    (_DWORD *)(v10 + 4),
    v12 & 0xFFFE0007 | (2 * (a3 & 0x78 | (2 * (a3 & 2 | ((a4 | ((a3 & 1) << 8)) << 6))))));
  *(_BYTE *)(a1[6] + 8 * v9 + 20) = 1;
  return DynamicLock_Release(*(_QWORD *)(a1[6] + 8 * v9 + 24));
}
