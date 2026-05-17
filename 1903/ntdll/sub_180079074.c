/*
 * XREFs of sub_180079074 @ 0x180079074
 * Callers:
 *     sub_180060CBC @ 0x180060CBC (sub_180060CBC.c)
 *     sub_180060EF4 @ 0x180060EF4 (sub_180060EF4.c)
 *     RtlWakeConditionVariable @ 0x180079040 (RtlWakeConditionVariable.c)
 * Callees:
 *     sub_180079198 @ 0x180079198 (sub_180079198.c)
 *     ZwAlertThreadByThreadId @ 0x18009D4B0 (ZwAlertThreadByThreadId.c)
 */

unsigned __int64 __fastcall sub_180079074(volatile signed __int64 *a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 *v3; // rbx
  unsigned __int64 result; // rax
  char v5; // r9
  unsigned __int64 v6; // rdx
  bool v8; // zf
  unsigned int v10; // edi
  _QWORD *v11; // r10
  unsigned int v12; // r8d
  unsigned __int64 *v13; // rcx
  unsigned __int64 *v14; // r9
  unsigned __int64 v15; // rtt
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rdi
  unsigned __int64 v18; // rtt
  _QWORD *v19; // rcx
  volatile signed __int32 *v20; // [rsp+48h] [rbp+10h] BYREF

  v3 = (unsigned __int64 *)&v20;
  result = a2;
  v20 = 0LL;
  v5 = a2;
  v6 = a2 & 0xFFFFFFFFFFFFFFF0uLL;
  v8 = (v5 & 7) == 7;
  v10 = 0;
  while ( 1 )
  {
    v11 = (_QWORD *)v6;
    if ( v8 )
      break;
    v12 = a3 + (result & 7);
    if ( !*(_QWORD *)(v6 + 8) )
    {
      do
      {
        v19 = v11;
        v11 = (_QWORD *)*v11;
        v11[2] = v19;
      }
      while ( !v11[1] );
    }
    v13 = (unsigned __int64 *)v11[1];
    if ( v12 <= v10 )
      goto LABEL_18;
    do
    {
      v14 = (unsigned __int64 *)v13[2];
      if ( !v14 )
        break;
      *v3 = (unsigned __int64)v13;
      ++v10;
      *v13 = 0LL;
      v3 = v13;
      *(_QWORD *)(v6 + 8) = v14;
      v13 = v14;
      *v14 = 0LL;
    }
    while ( v12 > v10 );
    if ( v12 <= v10 )
    {
LABEL_18:
      v18 = result;
      result = _InterlockedCompareExchange64(a1, v6, result);
      if ( v18 == result )
        goto LABEL_9;
    }
    else
    {
      v15 = result;
      result = _InterlockedCompareExchange64(a1, 0LL, result);
      if ( v15 == result )
      {
        *v3 = (unsigned __int64)v13;
        *v13 = 0LL;
        goto LABEL_9;
      }
    }
    v6 = result & 0xFFFFFFFFFFFFFFF0uLL;
    v8 = (result & 7) == 7;
  }
  result = _InterlockedExchange64(a1, 0LL) & 0xFFFFFFFFFFFFFFF0uLL;
  *v3 = result;
LABEL_9:
  v16 = v20;
  if ( v20 )
  {
    do
    {
      v17 = *(volatile signed __int32 **)v16;
      if ( !_interlockedbittestandreset(v16 + 9, 1u) )
      {
        if ( !*((_QWORD *)v20 + 5) || (result = sub_180079198(), !(_BYTE)result) )
        {
          _InterlockedOr(v16 + 9, 4u);
          result = ZwAlertThreadByThreadId(*((_QWORD *)v20 + 3));
        }
      }
      v16 = v17;
      v20 = v17;
    }
    while ( v17 );
  }
  return result;
}
