/*
 * XREFs of EtwpBugCheckMultiPartCallback @ 0x1403131E0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 */

void __fastcall EtwpBugCheckMultiPartCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        GUID *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  __int64 *v4; // rbx
  LARGE_INTEGER *v6; // rcx
  __int64 v7; // r8
  unsigned __int16 v8; // cx
  __int64 v9; // rdx
  __int64 v10; // rsi
  unsigned int v11; // ebp
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r9
  _DWORD *v16; // rcx
  int v17; // eax
  int v18; // edx

  v4 = *(__int64 **)&ReasonSpecificData[3].Data1;
  *(_DWORD *)ReasonSpecificData[2].Data4 = 0;
  ReasonSpecificData[1] = EtwSecondaryDumpDataGuid;
  if ( !v4 )
  {
    v4 = &EtwpDumpCallbackContext;
    EtwpDumpCallbackContext = 0LL;
    qword_14040AEB8 = 0LL;
    *(_QWORD *)&ReasonSpecificData[3].Data1 = &EtwpDumpCallbackContext;
  }
  if ( !*((_BYTE *)v4 + 2) )
  {
    *(_DWORD *)ReasonSpecificData[2].Data4 = 32;
    if ( *(_DWORD *)ReasonSpecificData->Data4 )
    {
      v6 = *(LARGE_INTEGER **)&ReasonSpecificData->Data1;
      v6[2].QuadPart = EtwpBootTime;
      v6[1].LowPart = EtwCPUSpeedInMHz;
      v6[3] = EtwPerfFreq;
      v6->LowPart = KeMaximumIncrement;
      v6->HighPart = -268417693;
      *(_QWORD *)&ReasonSpecificData[2].Data1 = *(_QWORD *)&ReasonSpecificData->Data1;
      *(_DWORD *)ReasonSpecificData[2].Data4 = 32;
      *(_DWORD *)ReasonSpecificData->Data4 = 32;
    }
    *((_BYTE *)v4 + 2) = 1;
    goto LABEL_30;
  }
  v7 = v4[1];
  v8 = *(_WORD *)v4;
  if ( v7 )
  {
    v15 = *(_QWORD *)(*(_QWORD *)(EtwpHostSiloState + 456) + 8LL * v8);
    v16 = *(_DWORD **)(v7 + 16);
    if ( v16[2] <= *v16 )
      v17 = v16[2];
    else
      v17 = v16[1];
    v16[12] = v17;
    *(_DWORD *)ReasonSpecificData[2].Data4 = v17;
    if ( *(_DWORD *)ReasonSpecificData->Data4 )
      *(_QWORD *)&ReasonSpecificData[2].Data1 = v16;
    v14 = *(_QWORD *)v4[1];
    v13 = v15 + 96;
    goto LABEL_26;
  }
  v9 = EtwpHostSiloState;
  while ( (unsigned int)v8 < *(_DWORD *)(v9 + 16) )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 456) + 8LL * v8);
    if ( (*(_BYTE *)(*(_QWORD *)(v9 + 456) + 8LL * v8) & 1) == 0
      && *(int *)(v10 + 12) < 0
      && (*(_DWORD *)(v10 + 316) & 1) == 0 )
    {
      if ( *(_QWORD *)(v10 + 712) )
      {
        _mm_pause();
      }
      else
      {
        v11 = 2 * *(unsigned __int16 *)(v10 + 152) + 48;
        *(_DWORD *)ReasonSpecificData[2].Data4 = v11;
        if ( !*(_DWORD *)ReasonSpecificData->Data4 )
          goto LABEL_19;
        if ( v11 <= *(_DWORD *)&ReasonSpecificData->Data4[4] )
        {
          v12 = *(_QWORD *)&ReasonSpecificData->Data1;
          *(_DWORD *)v12 = 32223201;
          *(_DWORD *)(v12 + 4) = *(_DWORD *)v10;
          *(_DWORD *)(v12 + 16) = *(_DWORD *)(v10 + 4);
          *(_DWORD *)(v12 + 12) = *(_DWORD *)(v10 + 216);
          *(_QWORD *)(v12 + 24) = *(_QWORD *)(v10 + 808);
          *(_DWORD *)(v12 + 8) = *(_DWORD *)(v10 + 12);
          *(_DWORD *)(v12 + 20) = *(unsigned __int16 *)(v10 + 152);
          *(_OWORD *)(v12 + 32) = *(_OWORD *)(v10 + 320);
          memmove((void *)(v12 + 48), *(const void **)(v10 + 160), 2LL * *(unsigned __int16 *)(v10 + 152));
          *(_QWORD *)&ReasonSpecificData[2].Data1 = *(_QWORD *)&ReasonSpecificData->Data1;
          *(_DWORD *)ReasonSpecificData[2].Data4 = v11;
          *(_DWORD *)ReasonSpecificData->Data4 = v11;
LABEL_19:
          v13 = v10 + 96;
          v14 = *(_QWORD *)(v10 + 96);
LABEL_26:
          if ( v14 == v13 )
            v14 = 0LL;
          v4[1] = v14;
          if ( !v14 )
            ++*(_WORD *)v4;
          break;
        }
      }
    }
    v9 = EtwpHostSiloState;
    v8 = *(_WORD *)v4 + 1;
    *(_WORD *)v4 = v8;
  }
LABEL_30:
  v18 = *(_DWORD *)ReasonSpecificData[3].Data4;
  if ( (unsigned int)*(unsigned __int16 *)v4 >= *(_DWORD *)(EtwpHostSiloState + 16) )
  {
    *(_DWORD *)ReasonSpecificData[3].Data4 = v18 & 0xFFFFFFFE;
    v4[1] = 0LL;
    *((_BYTE *)v4 + 2) = 0;
    *(_WORD *)v4 = 0;
  }
  else
  {
    *(_DWORD *)ReasonSpecificData[3].Data4 = v18 | 1;
  }
}
