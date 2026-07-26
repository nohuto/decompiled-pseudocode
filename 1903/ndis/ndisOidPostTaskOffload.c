/*
 * XREFs of ndisOidPostTaskOffload @ 0x1C006C530
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqqd @ 0x1C001D460 (WPP_RECORDER_SF_qqqd.c)
 *     ndisOidPostOffloadEncapsulation @ 0x1C003A070 (ndisOidPostOffloadEncapsulation.c)
 */

__int64 __fastcall ndisOidPostTaskOffload(struct _NDIS_REQ_TRACKER *a1, char a2)
{
  __int64 result; // rax
  __int64 v3; // r14
  __int64 v5; // rbx
  __int64 v6; // rsi
  int v7; // ebp
  int v8; // eax
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v3 = *(_QWORD *)a1;
  v5 = *((_QWORD *)a1 + 4);
  v6 = *((_QWORD *)a1 + 3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = WPP_RECORDER_SF_qqq(
               *((_QWORD *)WPP_GLOBAL_Control + 8),
               4,
               11,
               216,
               (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
               v3,
               v6,
               v5);
  if ( *(_DWORD *)(v5 + 4) == 1 )
  {
    result = *(_QWORD *)(v6 + 696);
    v7 = 0;
    if ( result )
    {
      if ( *(_DWORD *)(result + 88) == -67042815 )
      {
        ndisOidPostOffloadEncapsulation(a1);
        if ( *(_DWORD *)(*(_QWORD *)(v6 + 696) + 88LL) == -67042815 )
        {
          *(_DWORD *)(v5 + 32) = -67042815;
          *(_QWORD *)(v5 + 40) = *(_QWORD *)(*(_QWORD *)(v6 + 696) + 96LL);
          *(_DWORD *)(v5 + 48) = *(_DWORD *)(*(_QWORD *)(v6 + 696) + 104LL);
          *(_DWORD *)(*(_QWORD *)(v6 + 696) + 88LL) = 0;
          *(_QWORD *)(*(_QWORD *)(v6 + 696) + 96LL) = 0LL;
          *(_DWORD *)(*(_QWORD *)(v6 + 696) + 104LL) = 0;
        }
        v8 = *((_DWORD *)a1 + 10);
        if ( !v8 )
          v7 = *(_DWORD *)(v5 + 48);
        *(_DWORD *)(v5 + 52) = v7;
        result = v8 != 0 ? 0x90 : 0;
        *(_DWORD *)(v5 + 56) = result;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_qqqd(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             a2,
             0xBu,
             0xD9u,
             (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
             v3,
             v6,
             v5,
             *((_DWORD *)a1 + 10));
  return result;
}
