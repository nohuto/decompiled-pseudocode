/*
 * XREFs of AlpcpReceiveLegacyConnectionReply @ 0x1406A736C
 * Callers:
 *     NtSecureConnectPort @ 0x1406A6DC0 (NtSecureConnectPort.c)
 * Callees:
 *     AlpcpReadMessageData @ 0x140615164 (AlpcpReadMessageData.c)
 *     AlpcpUnlockMessage @ 0x140616E4C (AlpcpUnlockMessage.c)
 *     AlpcpReceiveSynchronousReply @ 0x1406352B0 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpQueryRemoteView @ 0x1406A7498 (AlpcpQueryRemoteView.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1406D5CE0 (AlpcpGetDataFromUserVaSafe.c)
 */

__int64 __fastcall AlpcpReceiveLegacyConnectionReply(
        __int64 *a1,
        char *a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 v10; // rbx
  int v11; // eax
  int RemoteView; // esi
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int16 v15; // r14
  unsigned int v16; // eax
  ULONG_PTR v17; // rcx
  ULONG_PTR v19; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v20[16]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v21; // [rsp+48h] [rbp-20h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v19 = 0LL;
  v10 = *a1;
  v11 = AlpcpReceiveSynchronousReply(a1, PreviousMode, &v19, 0, 0LL);
  RemoteView = v11;
  if ( !v11 )
  {
    if ( a4 )
    {
      RemoteView = AlpcpQueryRemoteView(v10, a4, v20);
      if ( RemoteView < 0 )
      {
        v17 = v19;
LABEL_17:
        AlpcpUnlockMessage(v17);
        return (unsigned int)RemoteView;
      }
      *(_QWORD *)(a5 + 40) = v21;
    }
    v13 = v19;
    if ( a6 )
    {
      v14 = *(_QWORD *)(v19 + 144);
      if ( v14 )
      {
        *(_DWORD *)a6 = 24;
        *(_QWORD *)(a6 + 16) = *(_QWORD *)(v14 + 40);
        *(_QWORD *)(a6 + 8) = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 40LL);
      }
    }
    if ( a2 )
    {
      v15 = 0;
      v16 = *(unsigned __int16 *)(v13 + 240);
      if ( *a3 < v16 )
      {
        v15 = *(_WORD *)(v13 + 240);
        *(_WORD *)(v13 + 240) = *a3;
      }
      else
      {
        *a3 = v16;
      }
      if ( *(_QWORD *)(v13 + 176) )
        AlpcpGetDataFromUserVaSafe(v13, a2);
      else
        AlpcpReadMessageData(v13, a2);
      if ( v15 )
        *(_WORD *)(v13 + 240) = v15;
    }
    v17 = v13;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(v10 + 416) & 0x10) != 0 || v11 == -1073740031 )
    return (unsigned int)-1073741759;
  return (unsigned int)RemoteView;
}
