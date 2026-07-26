/*
 * XREFs of ndisUnsetNdis6OpenHandlers @ 0x1C0138EEC
 * Callers:
 *     ndisDeQueueOpenOnMiniport @ 0x1C0136A1C (ndisDeQueueOpenOnMiniport.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisUnsetNdis6OpenHandlers(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdi
  bool v3; // si
  bool v4; // bp
  unsigned __int8 v6; // r8
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v2 = *(_QWORD *)(a1 + 56);
  v3 = 0;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = WPP_RECORDER_SF_q(
               *((_QWORD *)WPP_GLOBAL_Control + 8),
               4,
               6,
               156,
               (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
               a1);
  v6 = *(_BYTE *)(a1 + 32);
  if ( !v2 )
    goto LABEL_19;
  do
  {
    result = *(_QWORD *)(v2 + 24);
    if ( !v3 )
      v3 = *(_BYTE *)(result + 56) >= 6u;
    if ( !v4 )
      v4 = *(_BYTE *)(result + 56) < 6u;
    v2 = *(_QWORD *)(v2 + 392);
  }
  while ( v2 );
  if ( !v3 )
  {
LABEL_19:
    if ( !*(_QWORD *)(a1 + 2048) )
    {
      *(_DWORD *)(a1 + 2240) = 0;
      v7 = *(_DWORD *)(a1 + 120);
      v8 = *(_QWORD *)(a1 + 2152);
      *(_QWORD *)(a1 + 1896) = v8;
      result = v7 & 0x20000000;
      if ( (_DWORD)result )
        *(_QWORD *)(a1 + 432) = v8;
      if ( v6 < 6u )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 3760) + 224LL);
        result = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 2184) = result;
        *(_QWORD *)(a1 + 2176) = v9;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_q(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             4,
             6,
             157,
             (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
             a1);
  return result;
}
