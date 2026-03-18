/*
 * XREFs of WmipDoDisableRequest @ 0x1407022C8
 * Callers:
 *     WmipSendDisableRequest @ 0x14068F108 (WmipSendDisableRequest.c)
 *     WmipEnableCollectionForNewGuid @ 0x140708014 (WmipEnableCollectionForNewGuid.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140708610 (WmipDisableCollectionForRemovedGuid.c)
 * Callees:
 *     WmipSendEnableDisableRequest @ 0x14070A88C (WmipSendEnableDisableRequest.c)
 *     WmipReleaseCollectionEnabled @ 0x14070F0F0 (WmipReleaseCollectionEnabled.c)
 */

__int64 __fastcall WmipDoDisableRequest(_DWORD *a1, char a2, __int64 a3)
{
  int v3; // ebp
  _DWORD *v5; // rbx
  char v6; // si
  __int64 v7; // r8
  unsigned int v8; // r14d
  __int64 v9; // rcx

  v3 = a3;
  v5 = a1;
  v6 = a2 != 0 ? 5 : 7;
  do
  {
    LOBYTE(a3) = a2;
    LOBYTE(a1) = v6;
    v8 = WmipSendEnableDisableRequest(a1, v5, a3);
    if ( a2 )
      v9 = (unsigned int)v5[22];
    else
      v9 = (unsigned int)v5[23];
    if ( !(_DWORD)v9 )
      break;
    LOBYTE(v7) = a2;
    LOBYTE(v9) = a2 != 0 ? 4 : 6;
    v8 = WmipSendEnableDisableRequest(v9, v5, v7);
  }
  while ( !(a2 ? v5[22] : v5[23]) );
  v5[4] &= ~v3;
  if ( !a2 )
    WmipReleaseCollectionEnabled(v5);
  return v8;
}
