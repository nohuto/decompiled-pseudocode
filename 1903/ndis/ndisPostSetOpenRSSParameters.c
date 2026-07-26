/*
 * XREFs of ndisPostSetOpenRSSParameters @ 0x1C003B7A8
 * Callers:
 *     ndisOidPostRSSParameters @ 0x1C003B6A0 (ndisOidPostRSSParameters.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x1C0002F40 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     ndisPostSetOpenRSSParametersHelper @ 0x1C003B8B8 (ndisPostSetOpenRSSParametersHelper.c)
 */

__int64 __fastcall ndisPostSetOpenRSSParameters(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v6; // rbx
  char v8; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v4 = *(_QWORD *)(a1 + 16);
  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = a2;
    LOBYTE(a2) = 4;
    result = WPP_RECORDER_SF_qqL(
               *((_QWORD *)WPP_GLOBAL_Control + 8),
               a2,
               11,
               163,
               (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
               a1,
               v8,
               a3);
  }
  if ( (*(_DWORD *)(v6 + 88) & 0x800) != 0 )
  {
    *(_QWORD *)(v6 + 40) = *(_QWORD *)(v4 + 528);
    result = *(unsigned __int16 *)(v4 + 536);
    *(_DWORD *)(v6 + 48) = result;
    *(_QWORD *)(v4 + 528) = 0LL;
    *(_WORD *)(v4 + 536) = 0;
    *(_DWORD *)(v6 + 88) &= ~0x800u;
  }
  if ( !a3 )
    result = ndisPostSetOpenRSSParametersHelper(v4, a1, *(_QWORD *)(v6 + 40));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_qqqL(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             a2,
             0xBu,
             0xA4u,
             (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
             v4,
             a1,
             v6,
             a3);
  return result;
}
