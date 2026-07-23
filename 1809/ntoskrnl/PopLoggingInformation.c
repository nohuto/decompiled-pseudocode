/*
 * XREFs of PopLoggingInformation @ 0x1406DCB00
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140588FE0 (PopDiagTraceControlCallback.c)
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopLoggingInformation(_QWORD *a1, unsigned int *a2)
{
  __int64 v2; // r8
  int v3; // r14d
  unsigned int v6; // r9d
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // ebp
  unsigned int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // ebx
  char *PoolWithTag; // rax
  _QWORD *v14; // rdi
  __int64 v15; // rsi
  size_t v16; // rbx

  v2 = PowerStateDisableReasonListHead;
  v3 = 0;
  v6 = 4;
  if ( (__int64 *)PowerStateDisableReasonListHead == &PowerStateDisableReasonListHead )
  {
LABEL_9:
    v11 = v6 + 16;
    if ( v3 )
      v11 = v6;
    v12 = v11;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v11, 0x66756263u);
    if ( PoolWithTag )
    {
      *a2 = v12;
      v9 = 0;
      *a1 = PoolWithTag;
      v14 = PoolWithTag + 4;
      *(_DWORD *)PoolWithTag = v12;
      if ( v3 )
      {
        v15 = PowerStateDisableReasonListHead;
        while ( (__int64 *)v15 != &PowerStateDisableReasonListHead && v3 )
        {
          v16 = (unsigned int)(*(_DWORD *)(v15 + 28) + 16);
          memmove(v14, (const void *)(v15 + 16), v16);
          v15 = *(_QWORD *)v15;
          v14 = (_QWORD *)((char *)v14 + v16);
          --v3;
        }
      }
      else
      {
        *v14 = 0LL;
        *(_QWORD *)(PoolWithTag + 12) = 0LL;
        *((_DWORD *)PoolWithTag + 3) = 0;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    while ( 1 )
    {
      v7 = v6 + 16;
      v8 = -1;
      ++v3;
      if ( v6 + 16 >= v6 )
        v8 = v6 + 16;
      v9 = v7 < v6 ? 0xC0000095 : 0;
      if ( v7 < v6 )
        break;
      v6 = -1;
      v10 = v8 + *(_DWORD *)(v2 + 28);
      if ( v10 >= v8 )
        v6 = v8 + *(_DWORD *)(v2 + 28);
      v9 = v10 < v8 ? 0xC0000095 : 0;
      if ( v10 < v8 )
        break;
      v2 = *(_QWORD *)v2;
      if ( (__int64 *)v2 == &PowerStateDisableReasonListHead )
        goto LABEL_9;
    }
  }
  return v9;
}
