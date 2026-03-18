/*
 * XREFs of ?Channel_SetConnectionId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_SETCONNECTIONID@@@Z @ 0x1800728D4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::Channel_SetConnectionId(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_CHANNEL_SETCONNECTIONID *a4)
{
  struct CResourceTable *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, struct CResourceTable **))(**(_QWORD **)(*((_QWORD *)this + 151) + 48LL)
                                                                                         + 24LL))(
          *(_QWORD *)(*((_QWORD *)this + 151) + 48LL),
          *(_QWORD *)((char *)a4 + 4),
          *((unsigned int *)a4 + 4),
          &v7) )
  {
    if ( *((_DWORD *)a4 + 3) )
      *((_DWORD *)a2 + 18) = (_DWORD)v7;
    else
      *((_DWORD *)a2 + 17) = (_DWORD)v7;
  }
  return 0LL;
}
