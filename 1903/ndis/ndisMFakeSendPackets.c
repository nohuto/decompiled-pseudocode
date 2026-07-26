/*
 * XREFs of ndisMFakeSendPackets @ 0x1C009A6F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ndisFreePaddedMdl @ 0x1C008A0A0 (ndisFreePaddedMdl.c)
 */

__int64 __fastcall ndisMFakeSendPackets(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 *v4; // r14
  __int64 v5; // rsi
  unsigned int v7; // ebx
  __int64 result; // rax
  __int64 v9; // r15
  __int64 v10; // rsi

  v3 = *(_QWORD *)(a1 + 16);
  v4 = a2;
  v5 = a3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      3,
      91,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1,
      v3);
  }
  v7 = -1073741823;
  if ( v3 )
    v7 = *(_DWORD *)(v3 + 540);
  result = v7 & 0xC0230000;
  if ( (_DWORD)result == -1071448064 )
    v7 = (unsigned __int16)v7 | 0xC0010000;
  if ( (_DWORD)v5 )
  {
    v9 = v5;
    do
    {
      v10 = *v4;
      if ( (*(_BYTE *)(v3 + 928) & 8) != 0 && *(_QWORD *)(*(unsigned __int16 *)(v10 + 42) + v10 + 128) )
        ndisFreePaddedMdl(*v4);
      *(_BYTE *)(v10 + 41) &= 0xC0u;
      result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 680))(*(_QWORD *)(a1 + 32), v10, v7);
      ++v4;
      --v9;
    }
    while ( v9 );
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    return WPP_RECORDER_SF_qq(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             (int)a2,
             3,
             92,
             (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
             a1,
             v3);
  }
  return result;
}
