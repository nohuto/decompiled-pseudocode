/*
 * XREFs of EtwpBugCheckMultiPartCallback @ 0x140331210
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
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
  bool i; // cf
  __int64 v11; // rsi
  unsigned int v12; // ebp
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  bool v16; // zf
  __int64 v17; // r9
  _DWORD *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // edx

  v4 = *(__int64 **)&ReasonSpecificData[3].Data1;
  *(_DWORD *)ReasonSpecificData[2].Data4 = 0;
  ReasonSpecificData[1] = EtwSecondaryDumpDataGuid;
  if ( !v4 )
  {
    v4 = &EtwpDumpCallbackContext;
    EtwpDumpCallbackContext = 0LL;
    qword_1404325B8 = 0LL;
    *(_QWORD *)&ReasonSpecificData[3].Data1 = &EtwpDumpCallbackContext;
  }
  if ( *((_BYTE *)v4 + 2) )
  {
    v7 = v4[1];
    v8 = *(_WORD *)v4;
    if ( v7 )
    {
      v17 = *(_QWORD *)(*(_QWORD *)(EtwpHostSiloState + 456) + 8LL * v8);
      v18 = (_DWORD *)v4[1];
      if ( *(_DWORD *)(v7 + 8) <= *v18 )
        *(_DWORD *)(v4[1] + 48) = v18[2];
      else
        v18[12] = v18[1];
      *(_DWORD *)ReasonSpecificData[2].Data4 = *(_DWORD *)(v4[1] + 48);
      if ( *(_DWORD *)ReasonSpecificData->Data4 )
        *(_QWORD *)&ReasonSpecificData[2].Data1 = v4[1];
      v19 = *(_QWORD *)(v4[1] + 56);
      v20 = v19 - 56;
      if ( v19 == v17 + 96 )
        v20 = 0LL;
      v4[1] = v20;
      v16 = v20 == 0;
LABEL_30:
      if ( v16 )
        ++*(_WORD *)v4;
    }
    else
    {
      v9 = EtwpHostSiloState;
      for ( i = (unsigned int)v8 < *(_DWORD *)(EtwpHostSiloState + 16); i; i = (unsigned int)v8 < *(_DWORD *)(v9 + 16) )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(v9 + 456) + 8LL * v8);
        if ( (v11 & 1) == 0 && *(int *)(v11 + 12) < 0 && (*(_DWORD *)(v11 + 316) & 1) == 0 )
        {
          if ( *(_QWORD *)(v11 + 712) )
          {
            _mm_pause();
          }
          else
          {
            v12 = 2 * *(unsigned __int16 *)(v11 + 152) + 48;
            *(_DWORD *)ReasonSpecificData[2].Data4 = v12;
            if ( !*(_DWORD *)ReasonSpecificData->Data4 )
              goto LABEL_19;
            if ( v12 <= *(_DWORD *)&ReasonSpecificData->Data4[4] )
            {
              v13 = *(_QWORD *)&ReasonSpecificData->Data1;
              *(_DWORD *)v13 = 32223201;
              *(_DWORD *)(v13 + 4) = *(_DWORD *)v11;
              *(_DWORD *)(v13 + 16) = *(_DWORD *)(v11 + 4);
              *(_DWORD *)(v13 + 12) = *(_DWORD *)(v11 + 216);
              *(_QWORD *)(v13 + 24) = *(_QWORD *)(v11 + 808);
              *(_DWORD *)(v13 + 8) = *(_DWORD *)(v11 + 12);
              *(_DWORD *)(v13 + 20) = *(unsigned __int16 *)(v11 + 152);
              *(_OWORD *)(v13 + 32) = *(_OWORD *)(v11 + 320);
              memmove((void *)(v13 + 48), *(const void **)(v11 + 160), 2LL * *(unsigned __int16 *)(v11 + 152));
              *(_QWORD *)&ReasonSpecificData[2].Data1 = *(_QWORD *)&ReasonSpecificData->Data1;
              *(_DWORD *)ReasonSpecificData[2].Data4 = v12;
              *(_DWORD *)ReasonSpecificData->Data4 = v12;
LABEL_19:
              v14 = *(_QWORD *)(v11 + 96);
              v15 = v14 - 56;
              if ( v14 == v11 + 96 )
                v15 = 0LL;
              v4[1] = v15;
              v16 = v15 == 0;
              goto LABEL_30;
            }
          }
        }
        v9 = EtwpHostSiloState;
        v8 = *(_WORD *)v4 + 1;
        *(_WORD *)v4 = v8;
      }
    }
  }
  else
  {
    *(_DWORD *)ReasonSpecificData[2].Data4 = 32;
    if ( *(_DWORD *)ReasonSpecificData->Data4 )
    {
      v6 = *(LARGE_INTEGER **)&ReasonSpecificData->Data1;
      v6[2].QuadPart = EtwpBootTime;
      v6[1].LowPart = EtwCPUSpeedInMHz;
      v6[3] = EtwPerfFreq;
      v6->LowPart = KeMaximumIncrement;
      v6->HighPart = -(KernelVersionBump != 1) - 268417093;
      *(_QWORD *)&ReasonSpecificData[2].Data1 = *(_QWORD *)&ReasonSpecificData->Data1;
      *(_DWORD *)ReasonSpecificData[2].Data4 = 32;
      *(_DWORD *)ReasonSpecificData->Data4 = 32;
    }
    *((_BYTE *)v4 + 2) = 1;
  }
  v21 = *(_DWORD *)ReasonSpecificData[3].Data4;
  if ( (unsigned int)*(unsigned __int16 *)v4 >= *(_DWORD *)(EtwpHostSiloState + 16) )
  {
    *(_DWORD *)ReasonSpecificData[3].Data4 = v21 & 0xFFFFFFFE;
    v4[1] = 0LL;
    *((_BYTE *)v4 + 2) = 0;
    *(_WORD *)v4 = 0;
  }
  else
  {
    *(_DWORD *)ReasonSpecificData[3].Data4 = v21 | 1;
  }
}
