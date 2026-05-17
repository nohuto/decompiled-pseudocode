/*
 * XREFs of RtlGetCurrentDirectory_U @ 0x180076C20
 * Callers:
 *     LdrpMakeUnicodeStringFromPathElement @ 0x1800D098C (LdrpMakeUnicodeStringFromPathElement.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlpReferenceCurrentDirectory @ 0x180076D08 (RtlpReferenceCurrentDirectory.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

__int64 __fastcall RtlGetCurrentDirectory_U(__int64 a1, char *a2)
{
  unsigned __int64 v2; // rbp
  __int64 v4; // rax
  __int64 v5; // rbx
  wchar_t *Buffer; // rdx
  unsigned int Length; // edi
  __int64 v8; // rdi
  size_t v9; // rsi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rcx

  v2 = (unsigned int)a1;
  LOBYTE(a1) = 1;
  v4 = RtlpReferenceCurrentDirectory(a1, a2);
  v5 = v4;
  if ( v4 )
  {
    Buffer = *(wchar_t **)(v4 + 32);
    Length = *(unsigned __int16 *)(v4 + 24);
  }
  else
  {
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    Buffer = ProcessParameters->CurrentDirectory.DosPath.Buffer;
    Length = ProcessParameters->CurrentDirectory.DosPath.Length;
  }
  v8 = Length >> 1;
  if ( (unsigned int)v8 < 2 || Buffer[(unsigned int)(v8 - 2)] == 58 )
  {
    v9 = 2 * v8;
    if ( v2 > 2 * v8 )
      goto LABEL_6;
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) == 1 )
      {
        NtClose(*(HANDLE *)(v4 + 8));
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
      }
    }
    else
    {
      RtlLeaveCriticalSection((__int64)&FastPebLock);
    }
    return (unsigned int)(2 * v8 + 2);
  }
  else
  {
    v9 = 2 * v8;
    if ( v2 >= 2 * v8 )
    {
LABEL_6:
      memmove(a2, Buffer, v9);
      if ( v5 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
        {
          NtClose(*(HANDLE *)(v5 + 8));
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
        }
      }
      else
      {
        RtlLeaveCriticalSection((__int64)&FastPebLock);
      }
      if ( (unsigned int)v8 > 1 && *(_WORD *)&a2[2 * (unsigned int)(v8 - 2)] == 58 )
      {
        *(_WORD *)&a2[v9] = 0;
      }
      else
      {
        LODWORD(v8) = v8 - 1;
        *(_WORD *)&a2[2 * (unsigned int)v8] = 0;
      }
      return (unsigned int)(2 * v8);
    }
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) == 1 )
      {
        NtClose(*(HANDLE *)(v4 + 8));
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
      }
    }
    else
    {
      RtlLeaveCriticalSection((__int64)&FastPebLock);
    }
    return (unsigned int)v9;
  }
}
