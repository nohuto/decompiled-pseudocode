/*
 * XREFs of __C_specific_handler @ 0x18008CC40
 * Callers:
 *     __GSHandlerCheck_SEH @ 0x18009C274 (__GSHandlerCheck_SEH.c)
 * Callees:
 *     RtlUnwindEx @ 0x18001D490 (RtlUnwindEx.c)
 *     sub_1800929F0 @ 0x1800929F0 (sub_1800929F0.c)
 *     nullsub_1 @ 0x180092A20 (nullsub_1.c)
 *     sub_180092A28 @ 0x180092A28 (sub_180092A28.c)
 */

EXCEPTION_DISPOSITION __cdecl _C_specific_handler(
        struct _EXCEPTION_RECORD *ExceptionRecord,
        void *EstablisherFrame,
        struct _CONTEXT *ContextRecord,
        struct _DISPATCHER_CONTEXT *DispatcherContext)
{
  DWORD64 ImageBase; // r15
  DWORD *HandlerData; // rbx
  unsigned __int64 v10; // rbp
  DWORD ScopeIndex; // edi
  int v12; // eax
  DWORD v14; // r9d
  unsigned __int64 v15; // rsi
  DWORD v16; // r8d
  __int64 v17; // rcx
  DWORD i; // r10d
  __int64 v19; // rax
  _QWORD v20[2]; // [rsp+30h] [rbp-38h] BYREF

  sub_180092A28(ContextRecord);
  ImageBase = DispatcherContext->ImageBase;
  HandlerData = (DWORD *)DispatcherContext->HandlerData;
  v10 = DispatcherContext->ControlPc - ImageBase;
  ScopeIndex = DispatcherContext->ScopeIndex;
  if ( (ExceptionRecord->ExceptionFlags & 0x66) != 0 )
  {
    v14 = *HandlerData;
    v15 = DispatcherContext->TargetIp - ImageBase;
    if ( ScopeIndex < *HandlerData )
    {
      v16 = *HandlerData;
      do
      {
        v17 = v16;
        if ( v10 >= HandlerData[4 * ScopeIndex + 1] && v10 < HandlerData[4 * ScopeIndex + 2] )
        {
          if ( (ExceptionRecord->ExceptionFlags & 0x20) != 0 )
          {
            for ( i = 0; i < v16; ++i )
            {
              if ( v15 >= HandlerData[4 * i + 1]
                && v15 < HandlerData[4 * i + 2]
                && HandlerData[4 * i + 4] == HandlerData[4 * ScopeIndex + 4]
                && HandlerData[4 * i + 3] == HandlerData[4 * ScopeIndex + 3] )
              {
                break;
              }
            }
            v17 = v14;
            if ( i != v14 )
              return 1;
          }
          v19 = HandlerData[4 * ScopeIndex + 4];
          if ( (_DWORD)v19 )
          {
            if ( v15 == v19 )
              return 1;
          }
          else
          {
            LOBYTE(v17) = 1;
            DispatcherContext->ScopeIndex = ScopeIndex + 1;
            ((void (__fastcall *)(__int64, void *))(ImageBase + HandlerData[4 * ScopeIndex + 3]))(v17, EstablisherFrame);
            v14 = *HandlerData;
            LODWORD(v17) = *HandlerData;
          }
        }
        ++ScopeIndex;
        v16 = v17;
      }
      while ( ScopeIndex < (unsigned int)v17 );
    }
  }
  else
  {
    v20[0] = ExceptionRecord;
    v20[1] = ContextRecord;
    while ( ScopeIndex < *HandlerData )
    {
      if ( v10 >= HandlerData[4 * ScopeIndex + 1]
        && v10 < HandlerData[4 * ScopeIndex + 2]
        && HandlerData[4 * ScopeIndex + 4] )
      {
        if ( HandlerData[4 * ScopeIndex + 3] == 1 )
          goto LABEL_10;
        v12 = ((__int64 (__fastcall *)(_QWORD *, void *))(ImageBase + HandlerData[4 * ScopeIndex + 3]))(
                v20,
                EstablisherFrame);
        if ( v12 < 0 )
          return 0;
        if ( v12 > 0 )
        {
LABEL_10:
          sub_1800929F0(ImageBase + HandlerData[4 * ScopeIndex + 4], EstablisherFrame, 1LL);
          RtlUnwindEx(
            EstablisherFrame,
            (PVOID)(ImageBase + HandlerData[4 * ScopeIndex + 4]),
            ExceptionRecord,
            (PVOID)(int)ExceptionRecord->ExceptionCode,
            DispatcherContext->ContextRecord,
            DispatcherContext->HistoryTable);
          nullsub_1();
        }
      }
      ++ScopeIndex;
    }
  }
  return 1;
}
