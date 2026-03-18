/*
 * XREFs of RootHub_DisableLPMForSlot @ 0x1C001DB74
 * Callers:
 *     UsbDevice_UcxEvtDisable @ 0x1C00372B0 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C001D374 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001D458 (XilRegister_WriteUlong.c)
 *     DynamicLock_Acquire @ 0x1C0041760 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C004195C (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_DisableLPMForSlot(_QWORD *a1, int a2, int a3)
{
  __int64 v5; // rbp
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned int *v9; // r14
  __int64 v10; // r12
  int Ulong; // ebx
  unsigned int v12; // ebx
  int v13; // ebx
  __int64 v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+28h] [rbp-30h]
  __int64 v17; // [rsp+28h] [rbp-30h]

  v5 = *(_QWORD *)(a1[1] + 88LL);
  v6 = (unsigned int)(a2 - 1);
  v7 = a1[5];
  v8 = 10 * v6;
  v9 = (unsigned int *)(16 * v6 + v7 + 4);
  v10 = 16 * v6 + v7;
  DynamicLock_Acquire(*(_QWORD *)(a1[6] + 80 * v6 + 24));
  if ( *(_BYTE *)(a1[6] + 8 * v8 + 20) )
  {
    Ulong = XilRegister_ReadUlong(v5, v9);
    if ( BYTE1(Ulong) == a3 )
    {
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xFFu,
        (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
        Ulong);
      v12 = Ulong & 0xFFFE0007;
      LODWORD(v15) = v12;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0x100u,
        (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
        v15);
      XilRegister_WriteUlong(v5, v9, v12);
      v13 = XilRegister_ReadUlong(v5, (unsigned int *)(v10 + 12));
      LODWORD(v16) = v13;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0x101u,
        (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
        v16);
      v13 &= 0xFFFFC000;
      LODWORD(v17) = v13;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0x102u,
        (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
        v17);
      XilRegister_WriteUlong(v5, (_DWORD *)(v10 + 12), v13);
      XilRegister_ReadUlong(v5, v9);
      *(_BYTE *)(a1[6] + 8 * v8 + 20) = 0;
    }
  }
  return DynamicLock_Release(*(_QWORD *)(a1[6] + 8 * v8 + 24));
}
