/*
 * XREFs of RootHub_RestoreU1U2Timeouts @ 0x1C00226B8
 * Callers:
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C002127C (RootHub_DetectAndAcknowledgePortResume.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0020E08 (XilRegister_WriteUlong.c)
 */

__int64 __fastcall RootHub_RestoreU1U2Timeouts(_QWORD *a1, int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbp
  unsigned int *v5; // r14
  __int64 v6; // rbx
  int Ulong; // eax
  int v8; // edi
  unsigned int v9; // ebx
  __int64 result; // rax
  __int64 v11; // [rsp+28h] [rbp-20h]

  v3 = a1[1];
  v4 = *(_QWORD *)(v3 + 88);
  v5 = (unsigned int *)(16LL * (unsigned int)(a2 - 1) + a1[5] + 4LL);
  v6 = (unsigned int)(a2 - 1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(v3 + 72), 4u, 0xBu, 0xDCu, (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids);
  Ulong = XilRegister_ReadUlong(v4, v5);
  v8 = Ulong;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xDDu,
      (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
      Ulong);
  v9 = (*(unsigned __int8 *)(88 * v6 + a1[6] + 22) << 8) | v8 & 0xFFFF0000 | *(unsigned __int8 *)(88 * v6 + a1[6] + 21);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v11) = v9;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xDEu,
      (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
      v11);
  }
  XilRegister_WriteUlong(v4, v5, v9);
  result = XilRegister_ReadUlong(v4, v5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v11) = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1[1] + 72LL),
             4u,
             0xBu,
             0xDFu,
             (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
             v11);
  }
  return result;
}
