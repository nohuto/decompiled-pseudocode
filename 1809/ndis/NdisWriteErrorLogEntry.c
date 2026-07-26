/*
 * XREFs of NdisWriteErrorLogEntry @ 0x1C0014630
 * Callers:
 *     ndisMIndicatePDConfigChange @ 0x1C007CD04 (ndisMIndicatePDConfigChange.c)
 *     ndisQueryPowerCapabilities @ 0x1C00BC400 (ndisQueryPowerCapabilities.c)
 *     ndisMInitializeScatterGatherDma @ 0x1C00CF3A4 (ndisMInitializeScatterGatherDma.c)
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 *     NdisMAllocateMapRegisters @ 0x1C0117D80 (NdisMAllocateMapRegisters.c)
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     McTemplateK0jqxzqqQR5 @ 0x1C005F510 (McTemplateK0jqxzqqQR5.c)
 */

void NdisWriteErrorLogEntry(NDIS_HANDLE NdisAdapterHandle, ULONG ErrorCode, ULONG NumberOfErrorValues, ...)
{
  __int64 v5; // rax
  size_t v6; // rbp
  const void *v7; // r15
  size_t v8; // r14
  unsigned __int64 v9; // rax
  char *ErrorLogEntry; // rax
  void *v11; // rbx
  ULONG v12; // edx
  ULONG *v13; // r8
  __int64 v14; // rcx
  ULONG v15; // [rsp+A0h] [rbp+18h] BYREF

  v15 = NumberOfErrorValues;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_qD(10LL, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, NdisAdapterHandle, ErrorCode);
    NumberOfErrorValues = v15;
  }
  if ( NdisAdapterHandle )
  {
    v5 = *((_QWORD *)NdisAdapterHandle + 486);
    v6 = *(unsigned __int16 *)(v5 + 2);
    v7 = *(const void **)(v5 + 8);
    v8 = v6;
    v9 = v6 + 48 + 4LL * NumberOfErrorValues;
    if ( v9 <= 0xFFFFFFFF )
    {
      if ( (unsigned int)v9 <= 0xF0
        || (v6 = *((unsigned __int16 *)NdisAdapterHandle + 1921),
            v7 = (const void *)*((_QWORD *)NdisAdapterHandle + 481),
            v8 = v6,
            v9 = v6 + 48 + 4LL * NumberOfErrorValues,
            v9 <= 0xFFFFFFFF)
        && (unsigned int)v9 <= 0xF0 )
      {
        ErrorLogEntry = (char *)IoAllocateErrorLogEntry(*((PVOID *)NdisAdapterHandle + 482), v9);
        v11 = ErrorLogEntry;
        if ( ErrorLogEntry )
        {
          *((_DWORD *)ErrorLogEntry + 3) = ErrorCode;
          *(_WORD *)ErrorLogEntry = 0;
          v12 = 0;
          *((_QWORD *)ErrorLogEntry + 2) = 0LL;
          *((_QWORD *)ErrorLogEntry + 3) = 0LL;
          *((_WORD *)ErrorLogEntry + 1) = 4 * v15;
          if ( v15 )
          {
            v13 = &v15;
            do
            {
              v14 = v12;
              v13 += 2;
              ++v12;
              *(_DWORD *)&ErrorLogEntry[4 * v14 + 40] = *v13;
            }
            while ( v12 < v15 );
          }
          if ( (_DWORD)v6 )
          {
            *((_WORD *)ErrorLogEntry + 2) = 1;
            *((_WORD *)ErrorLogEntry + 3) = 4 * (v15 + 12);
            memmove(&ErrorLogEntry[4 * v15 + 48], v7, v8);
          }
          else
          {
            *((_WORD *)ErrorLogEntry + 2) = 0;
          }
          if ( (byte_1C00A2084 & 0x20) != 0 )
            McTemplateK0jqxzqqQR5(
              *((_QWORD *)NdisAdapterHandle + 486),
              v12,
              (_DWORD)NdisAdapterHandle + 4040,
              (_DWORD)NdisAdapterHandle + 4040,
              *((_DWORD *)NdisAdapterHandle + 1022),
              *((_QWORD *)NdisAdapterHandle + 507),
              *(_QWORD *)(*((_QWORD *)NdisAdapterHandle + 486) + 8LL),
              ErrorCode,
              v15,
              (__int64)v11 + 40);
          IoWriteErrorLogEntry(v11);
        }
      }
    }
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(11LL, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, NdisAdapterHandle, ErrorCode);
}
