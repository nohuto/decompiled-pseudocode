/*
 * XREFs of NdisWriteErrorLogEntry @ 0x1C0022460
 * Callers:
 *     ndisQueryPowerCapabilities @ 0x1C0032FA4 (ndisQueryPowerCapabilities.c)
 *     ?ndisMInitializeScatterGatherDmaInternal@@YAHPEAXEKK@Z @ 0x1C0035504 (-ndisMInitializeScatterGatherDmaInternal@@YAHPEAXEKK@Z.c)
 *     ndisMIndicatePDConfigChange @ 0x1C00C1DE8 (ndisMIndicatePDConfigChange.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 *     NdisMAllocateMapRegisters @ 0x1C0139490 (NdisMAllocateMapRegisters.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     McTemplateK0jqxzqqQR5 @ 0x1C00947B0 (McTemplateK0jqxzqqQR5.c)
 */

void NdisWriteErrorLogEntry(NDIS_HANDLE NdisAdapterHandle, ULONG ErrorCode, ULONG NumberOfErrorValues, ...)
{
  ULONG v3; // esi
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
  char v15; // [rsp+30h] [rbp-68h]
  ULONG v16; // [rsp+B0h] [rbp+18h] BYREF

  v16 = NumberOfErrorValues;
  v3 = ErrorCode;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = ErrorCode;
    LOBYTE(ErrorCode) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      ErrorCode,
      1,
      10,
      (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
      (char)NdisAdapterHandle,
      v15);
    NumberOfErrorValues = v16;
  }
  if ( NdisAdapterHandle )
  {
    v5 = *((_QWORD *)NdisAdapterHandle + 482);
    v6 = *(unsigned __int16 *)(v5 + 2);
    v7 = *(const void **)(v5 + 8);
    v8 = v6;
    v9 = v6 + 48 + 4LL * NumberOfErrorValues;
    if ( v9 <= 0xFFFFFFFF )
    {
      ErrorCode = 240;
      if ( (unsigned int)v9 <= 0xF0
        || (v6 = *((unsigned __int16 *)NdisAdapterHandle + 1905),
            v7 = (const void *)*((_QWORD *)NdisAdapterHandle + 477),
            v8 = v6,
            v9 = v6 + 48 + 4LL * NumberOfErrorValues,
            v9 <= 0xFFFFFFFF)
        && (unsigned int)v9 <= 0xF0 )
      {
        ErrorLogEntry = (char *)IoAllocateErrorLogEntry(*((PVOID *)NdisAdapterHandle + 478), v9);
        v11 = ErrorLogEntry;
        if ( ErrorLogEntry )
        {
          *((_DWORD *)ErrorLogEntry + 3) = v3;
          *(_WORD *)ErrorLogEntry = 0;
          v12 = 0;
          *((_QWORD *)ErrorLogEntry + 2) = 0LL;
          *((_QWORD *)ErrorLogEntry + 3) = 0LL;
          *((_WORD *)ErrorLogEntry + 1) = 4 * v16;
          if ( v16 )
          {
            v13 = &v16;
            do
            {
              v14 = v12;
              v13 += 2;
              ++v12;
              *(_DWORD *)&ErrorLogEntry[4 * v14 + 40] = *v13;
            }
            while ( v12 < v16 );
          }
          if ( (_DWORD)v6 )
          {
            *((_WORD *)ErrorLogEntry + 2) = 1;
            *((_WORD *)ErrorLogEntry + 3) = 4 * (v16 + 12);
            memmove(&ErrorLogEntry[4 * v16 + 48], v7, v8);
          }
          else
          {
            *((_WORD *)ErrorLogEntry + 2) = 0;
          }
          if ( (byte_1C00E8044 & 0x20) != 0 )
            McTemplateK0jqxzqqQR5(
              *((_QWORD *)NdisAdapterHandle + 482),
              v12,
              (_DWORD)NdisAdapterHandle + 4008,
              (_DWORD)NdisAdapterHandle + 4008,
              *((_DWORD *)NdisAdapterHandle + 1014),
              *((_QWORD *)NdisAdapterHandle + 503),
              *(_QWORD *)(*((_QWORD *)NdisAdapterHandle + 482) + 8LL),
              v3,
              v16,
              (__int64)v11 + 40);
          IoWriteErrorLogEntry(v11);
        }
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(ErrorCode) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      ErrorCode,
      1,
      11,
      (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
      (char)NdisAdapterHandle,
      v3);
  }
}
