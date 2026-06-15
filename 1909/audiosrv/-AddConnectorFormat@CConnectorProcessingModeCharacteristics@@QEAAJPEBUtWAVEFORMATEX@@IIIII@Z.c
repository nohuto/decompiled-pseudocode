/*
 * XREFs of ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x180053208
 * Callers:
 *     ?DeserializeProcessingModeCharacteristics@@YAJKPEAEPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x180053034 (-DeserializeProcessingModeCharacteristics@@YAJKPEAEPEAPEAV-$CSimpleArray@PEAVCConnectorProcessin.c)
 *     _lambda_53c21122ac2ea0b62ae7643ed09637d7_::operator() @ 0x180115434 (_lambda_53c21122ac2ea0b62ae7643ed09637d7_--operator().c)
 *     ?GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x1801177CC (-GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18011A8FC (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?Add@?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAHAEBQEAUCConnectorFormatCharacteristics@@@Z @ 0x180053308 (-Add@-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnect.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800652FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18006C963 (memcpy_0.c)
 *     ??_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z @ 0x1801155B8 (--_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CConnectorProcessingModeCharacteristics::AddConnectorFormat(
        CConnectorProcessingModeCharacteristics *this,
        const struct tWAVEFORMATEX *a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  CConnectorFormatCharacteristics *v11; // rax
  CConnectorFormatCharacteristics *v12; // rbx
  __int64 cbSize; // rdi
  void *v14; // rax
  unsigned int v15; // edx
  void *v16; // rsi
  int v17; // edi
  CConnectorFormatCharacteristics *v19; // [rsp+20h] [rbp-28h] BYREF

  v11 = (CConnectorFormatCharacteristics *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( v11 )
  {
    *((_QWORD *)v11 + 1) = 0LL;
    *((_QWORD *)v11 + 2) = 0LL;
    *((_QWORD *)v11 + 3) = 0LL;
    *(_QWORD *)v11 = 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  v19 = v12;
  if ( !v12 )
    return (unsigned int)-2147024882;
  cbSize = a2->cbSize;
  v14 = CoTaskMemAlloc(cbSize + 18);
  v16 = v14;
  if ( v14 )
  {
    memcpy_0(v14, a2, cbSize + 18);
    v17 = 0;
  }
  else
  {
    v17 = -2147024882;
  }
  *(_QWORD *)v12 = v16;
  if ( v17 < 0 )
  {
LABEL_13:
    CConnectorFormatCharacteristics::`scalar deleting destructor'(v12, v15);
    return (unsigned int)v17;
  }
  *((_DWORD *)v12 + 3) = a3;
  *((_DWORD *)v12 + 2) = a4;
  *((_DWORD *)v12 + 4) = a5;
  *((_DWORD *)v12 + 5) = a6;
  *((_DWORD *)v12 + 6) = a7;
  if ( !(unsigned int)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::Add(
                        (char *)this + 16,
                        &v19) )
  {
    v17 = -2147024882;
    goto LABEL_13;
  }
  return (unsigned int)v17;
}
