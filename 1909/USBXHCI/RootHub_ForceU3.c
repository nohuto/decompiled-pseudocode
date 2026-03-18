/*
 * XREFs of RootHub_ForceU3 @ 0x1C0021D18
 * Callers:
 *     RootHub_HandleResumedPorts @ 0x1C0022124 (RootHub_HandleResumedPorts.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0020E08 (XilRegister_WriteUlong.c)
 *     RootHub_ForceU0AndWait @ 0x1C0021948 (RootHub_ForceU0AndWait.c)
 *     DynamicLock_Acquire @ 0x1C0046FAC (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C00471B4 (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_ForceU3(_QWORD *a1, int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // r14
  unsigned int *v7; // rsi
  bool v8; // zf
  __int64 result; // rax
  int Ulong; // eax
  int v11; // ebx
  int v12; // ebx
  __int64 v13; // [rsp+28h] [rbp-20h]
  int v14; // [rsp+28h] [rbp-20h]

  v3 = a1[1];
  v4 = 88LL * (unsigned int)(a2 - 1);
  v5 = a1[6];
  v6 = *(_QWORD *)(v3 + 88);
  v7 = (unsigned int *)(a1[5] + 16LL * (unsigned int)(a2 - 1));
  if ( *(_BYTE *)(v5 + v4 + 13) == 2 )
    v8 = (*(_QWORD *)(v3 + 336) & 0x8000000LL) == 0;
  else
    v8 = (*(_QWORD *)(v3 + 336) & 0x80000LL) == 0;
  if ( v8 || (result = RootHub_ForceU0AndWait(a1, a2), (int)result >= 0) )
  {
    DynamicLock_Acquire(*(_QWORD *)(a1[6] + v4 + 24));
    *(_BYTE *)(v5 + v4 + 18) = 0;
    Ulong = XilRegister_ReadUlong(v6, v7);
    v11 = Ulong;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = Ulong;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xE4u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
        v14);
    }
    if ( ((v11 & 2) == 0 || (v11 & 0x1E0u) >= 0x60) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(a1[1] + 72LL),
        3u,
        0xBu,
        0xE5u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids);
    v12 = v11 & 0xE00C200 | 0x10060;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v13) = v12;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xE6u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
        v13);
    }
    XilRegister_WriteUlong(v6, v7, v12);
    DynamicLock_Release(*(_QWORD *)(a1[6] + v4 + 24));
    result = XilRegister_ReadUlong(v6, v7);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v13) = result;
      return WPP_RECORDER_SF_d(
               *(_QWORD *)(a1[1] + 72LL),
               4u,
               0xBu,
               0xE7u,
               (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
               v13);
    }
  }
  return result;
}
