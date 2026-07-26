/*
 * XREFs of ndisMFakeSendNetBufferLists @ 0x1C0017340
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C000BFC0 (NdisSendNetBufferLists.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C000A960 (ndisMSendCompleteNetBufferListsInternal.c)
 *     PktMonClientNblDropNdis @ 0x1C00C9768 (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisMFakeSendNetBufferLists(__int64 a1, struct _NET_BUFFER_LIST *a2, int a3, char a4)
{
  struct _NET_BUFFER_LIST *v5; // rdi
  int v7; // ecx
  struct _NET_BUFFER_LIST *i; // rax
  int v9; // edx
  char v10; // [rsp+30h] [rbp-18h]

  v5 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      3,
      89,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1,
      v10);
  }
  if ( byte_1C00E5E20 && (*(_DWORD *)(a1 + 5812) & 2) != 0 )
    PktMonClientNblDropNdis(a1 + 5800, (_DWORD)v5, a3, 2, *(_DWORD *)(a1 + 540), -536866811);
  v7 = *(_DWORD *)(a1 + 540);
  for ( i = v5; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
    i->Status = v7;
  ndisMSendCompleteNetBufferListsInternal(a1, v5, a4 & 1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      3,
      90,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1,
      (char)v5);
  }
}
