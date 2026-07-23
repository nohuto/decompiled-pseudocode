/*
 * XREFs of WmipSendEnableRequest @ 0x1406CF574
 * Callers:
 *     WmipEnableCollectOrEvent @ 0x140613CC4 (WmipEnableCollectOrEvent.c)
 * Callees:
 *     WmipUnreferenceEntry @ 0x1405FD204 (WmipUnreferenceEntry.c)
 *     WmipReferenceEntry @ 0x140613C30 (WmipReferenceEntry.c)
 *     WmipSendEnableDisableRequest @ 0x14070BB0C (WmipSendEnableDisableRequest.c)
 *     WmipReleaseCollectionEnabled @ 0x140710370 (WmipReleaseCollectionEnabled.c)
 *     WmipWaitForCollectionEnabled @ 0x1408B6060 (WmipWaitForCollectionEnabled.c)
 */

__int64 __fastcall WmipSendEnableRequest(ULONG_PTR BugCheckParameter2, char a2)
{
  int v4; // ecx
  int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // r14d
  int v11; // eax

  if ( a2 )
  {
    v4 = *(_DWORD *)(BugCheckParameter2 + 88);
    v5 = 2;
    *(_DWORD *)(BugCheckParameter2 + 88) = v4 + 1;
  }
  else
  {
    v4 = *(_DWORD *)(BugCheckParameter2 + 92);
    v5 = 4;
    *(_DWORD *)(BugCheckParameter2 + 92) = v4 + 1;
  }
  if ( v4 || (v5 & *(_DWORD *)(BugCheckParameter2 + 16)) != 0 )
  {
    if ( !a2 && (v5 & *(_DWORD *)(BugCheckParameter2 + 16)) != 0 )
      WmipWaitForCollectionEnabled(BugCheckParameter2);
    return 0;
  }
  else
  {
    WmipReferenceEntry(BugCheckParameter2);
    *(_DWORD *)(BugCheckParameter2 + 16) |= v5;
    do
    {
      LOBYTE(v7) = a2;
      LOBYTE(v6) = a2 != 0 ? 4 : 6;
      v10 = WmipSendEnableDisableRequest(v6, BugCheckParameter2, v7);
      if ( a2 )
        v11 = *(_DWORD *)(BugCheckParameter2 + 88);
      else
        v11 = *(_DWORD *)(BugCheckParameter2 + 92);
      if ( v11 )
        break;
      LOBYTE(v9) = a2;
      LOBYTE(v8) = a2 != 0 ? 5 : 7;
      v10 = WmipSendEnableDisableRequest(v8, BugCheckParameter2, v9);
    }
    while ( a2 ? *(_DWORD *)(BugCheckParameter2 + 88) : *(_DWORD *)(BugCheckParameter2 + 92) );
    *(_DWORD *)(BugCheckParameter2 + 16) &= ~v5;
    if ( !a2 )
      WmipReleaseCollectionEnabled(BugCheckParameter2);
    WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, (volatile signed __int64 *)BugCheckParameter2);
  }
  return v10;
}
