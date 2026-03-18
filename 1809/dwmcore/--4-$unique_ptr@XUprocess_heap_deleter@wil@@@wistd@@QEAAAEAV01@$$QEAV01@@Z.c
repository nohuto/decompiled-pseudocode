/*
 * XREFs of ??4?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800876C4
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x18001B008 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ??$swap_wil@Uheap_buffer@details_abi@wil@@@wistd@@YAXAEAUheap_buffer@details_abi@wil@@0@Z @ 0x18001D6BC (--$swap_wil@Uheap_buffer@details_abi@wil@@@wistd@@YAXAEAUheap_buffer@details_abi@wil@@0@Z.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x180086D4C (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x18007AB80 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 */

wil::details **__fastcall wistd::unique_ptr<void,wil::process_heap_deleter>::operator=(
        wil::details **a1,
        wil::details **a2)
{
  wil::details *v3; // rdi
  wil::details *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    if ( v3 != v4 )
    {
      if ( v4 )
        wil::details::FreeProcessHeap(v4, a2);
      *a1 = v3;
    }
  }
  return a1;
}
