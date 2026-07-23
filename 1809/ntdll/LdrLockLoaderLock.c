/*
 * XREFs of LdrLockLoaderLock @ 0x180081050
 * Callers:
 *     TppIopExecuteCallback @ 0x18002EA60 (TppIopExecuteCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x18002ED5C (TppWorkCallbackPrologRelease.c)
 * Callees:
 *     LdrpAcquireLoaderLock @ 0x18002B034 (LdrpAcquireLoaderLock.c)
 *     RtlRaiseStatus @ 0x18009F6C0 (RtlRaiseStatus.c)
 *     LdrpTryAcquireLoaderLock @ 0x1800CFBF0 (LdrpTryAcquireLoaderLock.c)
 *     LdrpGenericExceptionFilter @ 0x1800D7988 (LdrpGenericExceptionFilter.c)
 */

NTSTATUS __cdecl LdrLockLoaderLock(ULONG Flags, ULONG *Disposition, PVOID *Cookie)
{
  NTSTATUS v5; // ebx
  ULONG v7; // edi
  int v8; // eax
  __int16 v9; // cx
  __int16 v10; // ax
  int UniqueThread; // eax
  int v12; // [rsp+50h] [rbp+8h]
  int v13; // [rsp+58h] [rbp+10h]

  v5 = 0;
  if ( Disposition )
    *Disposition = 0;
  if ( Cookie )
    *Cookie = 0LL;
  if ( (Flags & 0xFFFFFFFC) != 0 )
  {
    if ( (Flags & 1) != 0 )
      RtlRaiseStatus(-1073741585);
    return -1073741585;
  }
  else if ( Cookie )
  {
    if ( (Flags & 2) == 0 || Disposition )
    {
      if ( LdrInitState == 3 )
      {
        v7 = 1;
        if ( (Flags & 1) != 0 )
        {
          if ( (Flags & 2) != 0 )
          {
            if ( (unsigned __int8)LdrpTryAcquireLoaderLock() )
            {
              UniqueThread = (int)NtCurrentTeb()->ClientId.UniqueThread;
              *Cookie = (PVOID)(((unsigned __int64)(UniqueThread & 0xFFF) << 48) | (unsigned __int16)(_InterlockedExchangeAdd(&LdrpLoaderLockAcquisitionCount, 1u) + 1) & 0xFFFE | 1LL);
            }
            else
            {
              v7 = 2;
            }
            *Disposition = v7;
          }
          else
          {
            LdrpAcquireLoaderLock();
            if ( Disposition )
              *Disposition = 1;
            v8 = (int)NtCurrentTeb()->ClientId.UniqueThread;
            *Cookie = (PVOID)(((unsigned __int64)(v8 & 0xFFF) << 48) | (unsigned __int16)(_InterlockedExchangeAdd(
                                                                                            &LdrpLoaderLockAcquisitionCount,
                                                                                            1u)
                                                                                        + 1) & 0xFFFE | 1LL);
          }
        }
        else
        {
          if ( (Flags & 2) != 0 )
          {
            if ( !(unsigned __int8)LdrpTryAcquireLoaderLock() )
            {
              *Disposition = 2;
              return v5;
            }
            *Disposition = 1;
            v12 = (int)NtCurrentTeb()->ClientId.UniqueThread;
            v9 = _InterlockedExchangeAdd(&LdrpLoaderLockAcquisitionCount, 1u);
            v10 = v12;
          }
          else
          {
            LdrpAcquireLoaderLock();
            if ( Disposition )
              *Disposition = 1;
            v13 = (int)NtCurrentTeb()->ClientId.UniqueThread;
            v9 = _InterlockedExchangeAdd(&LdrpLoaderLockAcquisitionCount, 1u);
            v10 = v13;
          }
          *Cookie = (PVOID)(((unsigned __int64)(v10 & 0xFFF) << 48) | (unsigned __int16)(v9 + 1) & 0xFFFE | 1LL);
        }
      }
    }
    else
    {
      if ( (Flags & 1) != 0 )
        RtlRaiseStatus(-1073741584);
      return -1073741584;
    }
  }
  else
  {
    if ( (Flags & 1) != 0 )
      RtlRaiseStatus(-1073741583);
    return -1073741583;
  }
  return v5;
}
