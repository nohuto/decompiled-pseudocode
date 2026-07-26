/*
 * XREFs of ndisMFakeOidRequest @ 0x1C0014980
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qDd @ 0x1C0008570 (WPP_RECORDER_SF_qDd.c)
 */

__int64 __fastcall ndisMFakeOidRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  char v5; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = -1073741823;
  if ( v2 )
    v3 = *(_DWORD *)(v2 + 540);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = *(_DWORD *)(a2 + 32);
    LOBYTE(a2) = 3;
    WPP_RECORDER_SF_qDd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      a1,
      95,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1,
      v5,
      v3);
  }
  return v3;
}
