/*
 * XREFs of RtlConvertSharedToExclusive @ 0x18005F9E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireResourceExclusive @ 0x18005FC20 (RtlAcquireResourceExclusive.c)
 *     ZwReleaseSemaphore @ 0x18009C820 (ZwReleaseSemaphore.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

__int64 __fastcall RtlConvertSharedToExclusive(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // ett
  int v5; // eax
  bool v6; // zf
  unsigned __int32 v7; // ecx
  int v8; // eax
  signed __int32 v9; // r8d
  bool v10; // zf
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  char v15; // [rsp+30h] [rbp+8h] BYREF

  result = *(unsigned int *)(a1 + 68);
  if ( (int)result >= 0 )
  {
    if ( (_DWORD)result == 1 )
    {
      while ( 1 )
      {
        v4 = result;
        LODWORD(result) = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 68), -1, result);
        if ( v4 == (_DWORD)result )
          break;
        if ( (_DWORD)result != 1 )
          goto LABEL_7;
      }
      result = (__int64)NtCurrentTeb();
      *(_QWORD *)(a1 + 72) = *(_QWORD *)(result + 72);
    }
    else
    {
LABEL_7:
      v5 = *(_DWORD *)(a1 + 68);
      if ( v5 < 0 )
      {
        if ( v5 == -1 )
          *(_QWORD *)(a1 + 72) = 0LL;
        if ( !_InterlockedIncrement((volatile signed __int32 *)(a1 + 68)) )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            v7 = _InterlockedExchange((volatile __int32 *)(a1 + 48), 0);
            if ( v7 )
            {
              v8 = ZwReleaseSemaphore(*(_QWORD *)(a1 + 40), v7, &v15);
              if ( v8 < 0 )
                RtlRaiseStatus((unsigned int)v8);
            }
          }
          v9 = *(_DWORD *)(a1 + 64);
          v10 = v9 == 0;
          if ( v9 > 0 )
          {
            do
            {
              v11 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), v9 - 1, v9);
              if ( v9 == v11 )
                break;
              v9 = v11;
            }
            while ( v11 > 0 );
            v10 = v9 == 0;
          }
          if ( !v10 )
          {
            v12 = ZwReleaseSemaphore(*(_QWORD *)(a1 + 56), 1LL, &v15);
            if ( v12 < 0 )
              RtlRaiseStatus((unsigned int)v12);
          }
        }
      }
      else if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 68), 0xFFFFFFFF) == 1 )
      {
        a2 = *(unsigned int *)(a1 + 64);
        v6 = (_DWORD)a2 == 0;
        if ( (int)a2 > 0 )
        {
          do
          {
            v13 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), a2 - 1, a2);
            if ( (_DWORD)a2 == v13 )
              break;
            a2 = (unsigned int)v13;
          }
          while ( v13 > 0 );
          v6 = (_DWORD)a2 == 0;
        }
        if ( !v6 )
        {
          v14 = ZwReleaseSemaphore(*(_QWORD *)(a1 + 56), 1LL, &v15);
          if ( v14 < 0 )
            RtlRaiseStatus((unsigned int)v14);
        }
      }
      LOBYTE(a2) = 1;
      return RtlAcquireResourceExclusive(a1, a2);
    }
  }
  return result;
}
