/*
 * XREFs of RtlpEnterCriticalSectionContended @ 0x1800143C0
 * Callers:
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpWaitOnCriticalSection @ 0x18005EA34 (RtlpWaitOnCriticalSection.c)
 *     RtlpInitializeStaticCriticalSection @ 0x180086780 (RtlpInitializeStaticCriticalSection.c)
 */

__int64 __fastcall RtlpEnterCriticalSectionContended(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rdi
  bool v6; // si
  char v7; // r10
  char v8; // al
  char v9; // bp
  unsigned __int64 v10; // rdx
  signed __int32 v11; // eax
  __int64 v12; // rdx
  signed __int32 v13; // ett
  unsigned int v14; // edi
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 32) & 0x4000000) != 0 && *(_QWORD *)a1 != -1LL && !*(_QWORD *)(*(_QWORD *)a1 + 16LL) )
    RtlpInitializeStaticCriticalSection();
  v5 = 0LL;
  v6 = 0;
  if ( MEMORY[0x7FFE036A] > 1u )
  {
    v5 = *(_QWORD *)(a1 + 32) & 0xFFFFFFLL;
    v6 = (*(_QWORD *)(a1 + 32) & 0x2000000LL) != 0;
  }
  v7 = 0;
  v8 = 1;
  v9 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v8 )
      {
        a3 = 3LL;
        v10 = v5;
        if ( !v9 )
          a3 = 1LL;
        if ( v5 )
        {
          do
          {
            v11 = *(_DWORD *)(a1 + 8);
            while ( (v11 & 1) != 0 )
            {
              v13 = v11;
              v11 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), v11 ^ a3, v11);
              if ( v13 == v11 )
                goto LABEL_25;
            }
            _mm_pause();
            --v10;
          }
          while ( v10 );
        }
      }
      v12 = *(unsigned int *)(a1 + 8);
      LOBYTE(a4) = 0;
      if ( !v9 )
      {
        if ( (v12 & 1) != 0 )
        {
          a4 = 1LL;
          a3 = (unsigned int)v12 ^ 1;
        }
        else
        {
          a3 = (unsigned int)(v12 - 4);
          if ( (((_BYTE)v12 - 4) & 2) == 0 )
            a3 = (unsigned int)(v12 - 6);
        }
        goto LABEL_16;
      }
      if ( (v12 & 2) == 0 )
        break;
LABEL_20:
      RtlpWaitOnCriticalSection(a1, v12, a3, a4);
      v7 = 1;
      if ( v6 && v5 > 0x64 )
        --v5;
      v8 = 1;
    }
    a3 = (unsigned int)v12 ^ 3;
    a4 = v12 & 1;
    if ( (v12 & 1) == 0 )
      a3 = (unsigned int)(v12 - 2);
LABEL_16:
    if ( (_DWORD)a3 == (_DWORD)v12 )
      goto LABEL_20;
    if ( (_DWORD)v12 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), a3, v12) )
      break;
    v8 = 0;
  }
  if ( !(_BYTE)a4 )
  {
    v9 = 1;
    v12 = (unsigned int)a3;
    goto LABEL_20;
  }
LABEL_25:
  if ( v6 )
  {
    if ( !v7 && v5 < 0x7D0 )
      LODWORD(v5) = v5 + 1;
    v14 = *(_DWORD *)(a1 + 32) ^ (*(_DWORD *)(a1 + 32) ^ v5) & 0xFFFFFF;
    if ( NtCurrentPeb()->NumberOfProcessors == 1 )
      v14 &= 0xFF000000;
    *(_QWORD *)(a1 + 32) = v14;
  }
  result = 0LL;
  *(_QWORD *)(a1 + 16) = NtCurrentTeb()->ClientId.UniqueThread;
  *(_DWORD *)(a1 + 12) = 1;
  return result;
}
