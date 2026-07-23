/*
 * XREFs of __C_specific_handler @ 0x14019EE50
 * Callers:
 *     __GSHandlerCheck_SEH @ 0x1401C0888 (__GSHandlerCheck_SEH.c)
 * Callees:
 *     RtlUnwindEx @ 0x140019C30 (RtlUnwindEx.c)
 *     KeCheckStackAndTargetAddress @ 0x14009FCB0 (KeCheckStackAndTargetAddress.c)
 *     _NLG_Notify @ 0x14019FE20 (_NLG_Notify.c)
 *     __NLG_Return2 @ 0x14019FE50 (__NLG_Return2.c)
 */

EXCEPTION_DISPOSITION __cdecl _C_specific_handler(
        struct _EXCEPTION_RECORD *ExceptionRecord,
        void *EstablisherFrame,
        struct _CONTEXT *ContextRecord,
        struct _DISPATCHER_CONTEXT *DispatcherContext)
{
  unsigned __int64 Rsp; // rdx
  unsigned __int64 Rip; // rcx
  DWORD64 ImageBase; // r15
  unsigned __int64 v11; // rbp
  DWORD *HandlerData; // rbx
  DWORD ScopeIndex; // edi
  __int64 v14; // rax
  int v15; // eax
  DWORD v17; // r10d
  unsigned __int64 v18; // rsi
  DWORD v19; // edx
  __int64 v20; // rcx
  DWORD i; // r9d
  __int64 v22; // rax
  struct _EXCEPTION_RECORD *v23; // [rsp+30h] [rbp-38h] BYREF
  struct _CONTEXT *v24; // [rsp+38h] [rbp-30h]

  Rsp = ContextRecord->Rsp;
  Rip = ContextRecord->Rip;
  v23 = 0LL;
  v24 = 0LL;
  KeCheckStackAndTargetAddress(Rip, Rsp);
  ImageBase = DispatcherContext->ImageBase;
  v11 = DispatcherContext->ControlPc - ImageBase;
  HandlerData = (DWORD *)DispatcherContext->HandlerData;
  ScopeIndex = DispatcherContext->ScopeIndex;
  if ( (ExceptionRecord->ExceptionFlags & 0x66) != 0 )
  {
    v17 = *HandlerData;
    v18 = DispatcherContext->TargetIp - ImageBase;
    if ( ScopeIndex < *HandlerData )
    {
      v19 = *HandlerData;
      do
      {
        v20 = v19;
        if ( v11 >= HandlerData[4 * ScopeIndex + 1] && v11 < HandlerData[4 * ScopeIndex + 2] )
        {
          if ( (ExceptionRecord->ExceptionFlags & 0x20) != 0 )
          {
            for ( i = 0; i < v19; ++i )
            {
              if ( v18 >= HandlerData[4 * i + 1]
                && v18 < HandlerData[4 * i + 2]
                && HandlerData[4 * i + 4] == HandlerData[4 * ScopeIndex + 4]
                && HandlerData[4 * i + 3] == HandlerData[4 * ScopeIndex + 3] )
              {
                break;
              }
            }
            v20 = v17;
            if ( i != v17 )
              return 1;
          }
          v22 = HandlerData[4 * ScopeIndex + 4];
          if ( (_DWORD)v22 )
          {
            if ( v18 == v22 )
              return 1;
          }
          else
          {
            DispatcherContext->ScopeIndex = ScopeIndex + 1;
            LOBYTE(v20) = 1;
            ((void (__fastcall *)(__int64, void *))(ImageBase + HandlerData[4 * ScopeIndex + 3]))(v20, EstablisherFrame);
            v17 = *HandlerData;
            LODWORD(v20) = *HandlerData;
          }
        }
        ++ScopeIndex;
        v19 = v20;
      }
      while ( ScopeIndex < (unsigned int)v20 );
    }
  }
  else
  {
    v23 = ExceptionRecord;
    v24 = ContextRecord;
    while ( ScopeIndex < *HandlerData )
    {
      if ( v11 >= HandlerData[4 * ScopeIndex + 1]
        && v11 < HandlerData[4 * ScopeIndex + 2]
        && HandlerData[4 * ScopeIndex + 4] )
      {
        v14 = HandlerData[4 * ScopeIndex + 3];
        if ( (_DWORD)v14 == 1 )
          goto LABEL_10;
        v15 = ((__int64 (__fastcall *)(struct _EXCEPTION_RECORD **, void *))(ImageBase + v14))(&v23, EstablisherFrame);
        if ( v15 < 0 )
          return 0;
        if ( v15 > 0 )
        {
LABEL_10:
          NLG_Notify(ImageBase + HandlerData[4 * ScopeIndex + 4], EstablisherFrame, 1LL);
          RtlUnwindEx(
            EstablisherFrame,
            (PVOID)(ImageBase + HandlerData[4 * ScopeIndex + 4]),
            ExceptionRecord,
            (PVOID)ExceptionRecord->ExceptionCode,
            DispatcherContext->ContextRecord,
            DispatcherContext->HistoryTable);
          _NLG_Return2();
        }
      }
      ++ScopeIndex;
    }
  }
  return 1;
}
