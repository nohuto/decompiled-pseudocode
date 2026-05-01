/*
 * XREFs of HampConnectionCleanup @ 0x180005F70
 * Callers:
 *     HampConnectionDestroy @ 0x180005B58 (HampConnectionDestroy.c)
 *     HamDisconnectForExtendedExecution @ 0x180005D20 (HamDisconnectForExtendedExecution.c)
 * Callees:
 *     <none>
 */

void __fastcall HampConnectionCleanup(__int64 a1)
{
  if ( *(_QWORD *)a1 )
  {
    switch ( *(_DWORD *)(a1 + 112) )
    {
      case 0:
        NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800138D0, 1u, 0LL, a1);
        break;
      case 1:
        NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180013B70, 1u, 0LL, a1);
        break;
      case 2:
        NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800138A0, 1u, 0LL, a1);
        break;
      case 3:
        NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180013DD0, 1u, 0LL, a1);
        break;
      case 4:
        NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180013B10, 1u, 0LL, a1);
        break;
      case 5:
        NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180013AE0, 1u, 0LL, a1);
        break;
      case 6:
        NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180013B40, 1u, 0LL, a1);
        break;
      default:
        return;
    }
  }
}
