/*
 * XREFs of RootHub_ForceU3 @ 0x1C001E2A0
 * Callers:
 *     RootHub_HandleResumedPorts @ 0x1C001E648 (RootHub_HandleResumedPorts.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C001D374 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001D458 (XilRegister_WriteUlong.c)
 *     RootHub_ForceU0AndWait @ 0x1C001DF08 (RootHub_ForceU0AndWait.c)
 *     DynamicLock_Acquire @ 0x1C0041760 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C004195C (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_ForceU3(_QWORD *a1, int a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // rbx
  unsigned int *v7; // rsi
  __int64 v8; // r14
  bool v9; // zf
  __int64 result; // rax
  int Ulong; // ebx
  int v12; // ebx
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+28h] [rbp-20h]

  v3 = (unsigned int)(a2 - 1);
  v4 = a1[1];
  v5 = 10 * v3;
  v6 = a1[6];
  v7 = (unsigned int *)(a1[5] + 16 * v3);
  v8 = *(_QWORD *)(v4 + 88);
  if ( *(_BYTE *)(v6 + 80 * v3 + 13) == 2 )
    v9 = (*(_QWORD *)(v4 + 272) & 0x8000000LL) == 0;
  else
    v9 = (*(_QWORD *)(v4 + 272) & 0x80000LL) == 0;
  if ( v9 || (result = RootHub_ForceU0AndWait(a1, a2), (int)result >= 0) )
  {
    DynamicLock_Acquire(*(_QWORD *)(a1[6] + 8 * v5 + 24));
    *(_BYTE *)(v6 + 8 * v5 + 18) = 0;
    Ulong = XilRegister_ReadUlong(v8, v7);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xE4u,
      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
      Ulong);
    if ( (Ulong & 2) == 0 || (Ulong & 0x1E0u) >= 0x60 )
      WPP_RECORDER_SF_(
        *(_QWORD *)(a1[1] + 72LL),
        3u,
        0xBu,
        0xE5u,
        (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids);
    v12 = Ulong & 0xE00C200 | 0x10060;
    LODWORD(v13) = v12;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xE6u,
      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
      v13);
    XilRegister_WriteUlong(v8, v7, v12);
    DynamicLock_Release(*(_QWORD *)(a1[6] + 8 * v5 + 24));
    LODWORD(v14) = XilRegister_ReadUlong(v8, v7);
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1[1] + 72LL),
             4u,
             0xBu,
             0xE7u,
             (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
             v14);
  }
  return result;
}
