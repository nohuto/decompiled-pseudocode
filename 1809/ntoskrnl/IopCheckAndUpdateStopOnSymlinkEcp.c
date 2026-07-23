/*
 * XREFs of IopCheckAndUpdateStopOnSymlinkEcp @ 0x14081DF78
 * Callers:
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 * Callees:
 *     FsRtlFindExtraCreateParameter @ 0x14063A850 (FsRtlFindExtraCreateParameter.c)
 */

bool __fastcall IopCheckAndUpdateStopOnSymlinkEcp(struct _ECP_LIST *a1, int a2, __int64 a3)
{
  int v5; // ecx
  _DWORD *v6; // rcx
  PVOID EcpContext; // [rsp+20h] [rbp-18h] BYREF
  ULONG EcpContextSize; // [rsp+58h] [rbp+20h] BYREF

  if ( FsRtlFindExtraCreateParameter(a1, &ECP_TYPE_IO_STOP_ON_SYMLINK_FILTER_GUID, &EcpContext, &EcpContextSize) < 0 )
    return 1;
  if ( EcpContextSize >= 8 )
  {
    if ( (unsigned int)(a2 + 1610612733) <= 0x16 )
    {
      v5 = 4194817;
      if ( _bittest(&v5, a2 + 1610612733) )
      {
        v6 = EcpContext;
        ++*(_DWORD *)EcpContext;
        v6[1] = *(unsigned __int16 *)(a3 + 6);
      }
    }
    if ( EcpContextSize > 8 )
      return 1;
  }
  return a2 == -1610612724;
}
