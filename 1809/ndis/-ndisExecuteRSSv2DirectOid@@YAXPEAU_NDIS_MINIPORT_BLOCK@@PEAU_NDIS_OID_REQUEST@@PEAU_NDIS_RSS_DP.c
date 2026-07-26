/*
 * XREFs of ?ndisExecuteRSSv2DirectOid@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DPC_WORKER_CONTEXT@@U_PROCESSOR_NUMBER@@@Z @ 0x1C007F91C
 * Callers:
 *     ?ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU_PROCESSOR_NUMBER@@U3@G22@Z @ 0x1C007FCC8 (-ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     ndisSynchronousOidRequest @ 0x1C0048DF4 (ndisSynchronousOidRequest_ea_1C0048DF4.c)
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 *     ?ndisAreProcessorsEqual@@YAEU_PROCESSOR_NUMBER@@0@Z @ 0x1C007F794 (-ndisAreProcessorsEqual@@YAEU_PROCESSOR_NUMBER@@0@Z.c)
 */

void __fastcall ndisExecuteRSSv2DirectOid(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        struct _NDIS_RSS_DPC_WORKER_CONTEXT *a3,
        struct _PROCESSOR_NUMBER a4)
{
  unsigned int NumberOfRssEntries; // eax
  int v8; // ebx
  NDIS_PORT_NUMBER PortNumber; // eax
  KIRQL v10; // bl
  bool v11; // r14
  _PROCESSOR_NUMBER v12; // [rsp+30h] [rbp-D0h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD SystemArgument1[32]; // [rsp+40h] [rbp-C0h] BYREF

  NumberOfRssEntries = a3->Command.Param.NumberOfRssEntries;
  v12 = a4;
  if ( NumberOfRssEntries )
  {
    v8 = 24 * NumberOfRssEntries + 20;
    memset(SystemArgument1, 0, 0xF8uLL);
    PortNumber = a2->PortNumber;
    LODWORD(SystemArgument1[7]) = 0;
    LODWORD(SystemArgument1[1]) = PortNumber;
    SystemArgument1[5] = &a3->Command;
    SystemArgument1[13] = &ndisIntReqGeneric;
    HIDWORD(SystemArgument1[30]) = a2[1].RequestType;
    HIDWORD(SystemArgument1[29]) = *(_DWORD *)(&a2->Reserved2 + 1);
    LODWORD(SystemArgument1[30]) = a2[1].Header;
    LODWORD(SystemArgument1[4]) = 66240;
    LODWORD(SystemArgument1[6]) = v8;
    HIDWORD(SystemArgument1[6]) = v8;
    SystemArgument1[0] = 0xC00F80296LL;
    LODWORD(SystemArgument1[11]) = 16777224;
    v10 = KfRaiseIrql(2u);
    KeGetCurrentProcessorNumberEx(&ProcNumber);
    v11 = ndisAreProcessorsEqual(v12, ProcNumber);
    if ( v11 )
      a3->Status = ndisSynchronousOidRequest(0LL, a1, 0LL, (ULONG_PTR)SystemArgument1);
    if ( v10 != 2 )
      KeLowerIrql(v10);
    if ( !v11 )
    {
      a1->RssV2CompletionCount = 1;
      KeResetEvent(&a1->RssV2CompletionEvent);
      a3->Status = 0;
      KeSetTargetProcessorDpcEx(&a3->Dpc, &v12);
      KeInsertQueueDpc(&a3->Dpc, SystemArgument1, a3);
      KeWaitForSingleObject(&a1->RssV2CompletionEvent, Executive, 0, 0, 0LL);
    }
    if ( a3->Status )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        a1->pAdapterInstanceName,
        "Miniport has failed OID_GEN_RSS_SET_INDIRECTION_TABLE_ENTRIES");
      ndisBugCheckEx(0x1CuLL, (ULONG_PTR)a1, 0x102C0uLL, a3->Status);
    }
  }
}
