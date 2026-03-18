/*
 * XREFs of ?ClearCaches@CInternalMilCmdConnection@@UEAA_NK@Z @ 0x1800C2400
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeBatchPool@CInternalMilCmdConnection@@AEAAXXZ @ 0x18006F46C (-FreeBatchPool@CInternalMilCmdConnection@@AEAAXXZ.c)
 */

char __fastcall CInternalMilCmdConnection::ClearCaches(CInternalMilCmdConnection *this, DWORD a2)
{
  if ( *((_BYTE *)this + 212) )
  {
    if ( GetTickCount() - *((_DWORD *)this + 52) < a2 )
      return 0;
    CInternalMilCmdConnection::FreeBatchPool((union _SLIST_HEADER *)this);
    *((_BYTE *)this + 212) = 0;
  }
  return 1;
}
