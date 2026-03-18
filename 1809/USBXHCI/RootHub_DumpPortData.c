/*
 * XREFs of RootHub_DumpPortData @ 0x1C001DD08
 * Callers:
 *     RootHub_D0Exit @ 0x1C001D69C (RootHub_D0Exit.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C001E48C (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_PrepareHardware @ 0x1C0060A08 (RootHub_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001C480 (WPP_RECORDER_SF_qD.c)
 *     XilRegister_ReadUlong @ 0x1C001D374 (XilRegister_ReadUlong.c)
 */

__int64 __fastcall RootHub_DumpPortData(unsigned int *a1, __int64 a2)
{
  unsigned int Ulong; // ebx
  __int64 v5; // rdx
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-18h]
  __int64 v15; // [rsp+30h] [rbp-18h]
  __int64 v16; // [rsp+30h] [rbp-18h]
  __int64 v17; // [rsp+30h] [rbp-18h]
  __int64 v18; // [rsp+30h] [rbp-18h]
  __int64 v19; // [rsp+30h] [rbp-18h]
  __int64 v20; // [rsp+30h] [rbp-18h]
  __int64 v21; // [rsp+38h] [rbp-10h]
  __int64 v22; // [rsp+38h] [rbp-10h]
  __int64 v23; // [rsp+38h] [rbp-10h]
  __int64 v24; // [rsp+38h] [rbp-10h]
  __int64 v25; // [rsp+38h] [rbp-10h]
  __int64 v26; // [rsp+38h] [rbp-10h]

  Ulong = XilRegister_ReadUlong(*(_QWORD *)(a2 + 88), a1);
  WPP_RECORDER_SF_qD(
    *(_QWORD *)(a2 + 72),
    v5,
    0xBu,
    0xCu,
    (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
    a1,
    Ulong);
  LODWORD(v14) = (Ulong >> 1) & 1;
  LODWORD(v7) = Ulong & 1;
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(a2 + 72),
    4u,
    0xBu,
    0xDu,
    (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
    v7,
    v14,
    (Ulong >> 3) & 1);
  LODWORD(v21) = (Ulong >> 5) & 0xF;
  LODWORD(v15) = (Ulong >> 9) & 1;
  LODWORD(v8) = (Ulong >> 4) & 1;
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(a2 + 72),
    4u,
    0xBu,
    0xEu,
    (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
    v8,
    v15,
    v21);
  LODWORD(v22) = HIWORD(Ulong) & 1;
  LODWORD(v16) = (unsigned __int16)Ulong >> 14;
  LODWORD(v9) = (Ulong >> 10) & 0xF;
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(a2 + 72),
    4u,
    0xBu,
    0xFu,
    (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
    v9,
    v16,
    v22);
  LODWORD(v23) = (Ulong >> 20) & 1;
  LODWORD(v17) = (Ulong >> 18) & 1;
  LODWORD(v10) = (Ulong >> 17) & 1;
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(a2 + 72),
    4u,
    0xBu,
    0x10u,
    (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
    v10,
    v17,
    v23);
  LODWORD(v24) = (Ulong >> 22) & 1;
  LODWORD(v18) = (Ulong >> 21) & 1;
  LODWORD(v11) = (Ulong >> 19) & 1;
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(a2 + 72),
    4u,
    0xBu,
    0x11u,
    (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
    v11,
    v18,
    v24);
  LODWORD(v25) = (Ulong >> 26) & 1;
  LODWORD(v19) = (Ulong >> 25) & 1;
  LODWORD(v12) = (Ulong >> 23) & 1;
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(a2 + 72),
    4u,
    0xBu,
    0x12u,
    (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
    v12,
    v19,
    v25);
  LODWORD(v26) = Ulong >> 31;
  LODWORD(v20) = (Ulong >> 30) & 1;
  LODWORD(v13) = (Ulong >> 27) & 1;
  return WPP_RECORDER_SF_ddL(
           *(_QWORD *)(a2 + 72),
           4u,
           0xBu,
           0x13u,
           (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
           v13,
           v20,
           v26);
}
