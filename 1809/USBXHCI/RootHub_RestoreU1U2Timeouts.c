/*
 * XREFs of RootHub_RestoreU1U2Timeouts @ 0x1C001EB88
 * Callers:
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C001D924 (RootHub_DetectAndAcknowledgePortResume.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C001D374 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001D458 (XilRegister_WriteUlong.c)
 */

__int64 __fastcall RootHub_RestoreU1U2Timeouts(_QWORD *a1, int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbp
  unsigned int *v5; // rsi
  __int64 v6; // rdi
  int Ulong; // ebx
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+28h] [rbp-20h]

  v3 = a1[1];
  v4 = *(_QWORD *)(v3 + 88);
  v5 = (unsigned int *)(16LL * (unsigned int)(a2 - 1) + a1[5] + 4LL);
  v6 = (unsigned int)(a2 - 1);
  WPP_RECORDER_SF_(*(_QWORD *)(v3 + 72), 4u, 0xBu, 0xDCu, (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids);
  Ulong = XilRegister_ReadUlong(v4, v5);
  WPP_RECORDER_SF_d(
    *(_QWORD *)(a1[1] + 72LL),
    4u,
    0xBu,
    0xDDu,
    (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
    Ulong);
  LODWORD(v6) = (*(unsigned __int8 *)(a1[6] + 80 * v6 + 22) << 8) | Ulong & 0xFFFF0000 | *(unsigned __int8 *)(a1[6] + 80 * v6 + 21);
  LODWORD(v9) = v6;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(a1[1] + 72LL),
    4u,
    0xBu,
    0xDEu,
    (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
    v9);
  XilRegister_WriteUlong(v4, v5, v6);
  LODWORD(v10) = XilRegister_ReadUlong(v4, v5);
  return WPP_RECORDER_SF_d(
           *(_QWORD *)(a1[1] + 72LL),
           4u,
           0xBu,
           0xDFu,
           (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
           v10);
}
