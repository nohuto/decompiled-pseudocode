/*
 * XREFs of NVMeQueuesReInit @ 0x1C000D8B8
 * Callers:
 *     NVMeControllerPowerUp @ 0x1C000B600 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C000B7AC (NVMeControllerReset.c)
 * Callees:
 *     CompletionQueueReInit @ 0x1C0008BA0 (CompletionQueueReInit.c)
 *     SubmissionQueueReInit @ 0x1C000DE00 (SubmissionQueueReInit.c)
 */

void *__fastcall NVMeQueuesReInit(__int64 a1)
{
  _DWORD *v1; // rax
  __int64 v3; // rcx
  void *result; // rax
  unsigned int v5; // ecx
  __int64 v6; // rdx
  unsigned int v7; // edi
  unsigned int v8; // edi
  unsigned int v9; // edx
  __int64 v10; // rax

  v1 = (_DWORD *)(a1 + 912);
  *(_DWORD *)(a1 + 808) = 0;
  v3 = 4LL;
  do
  {
    *v1 = 0;
    v1 += 26;
    --v3;
  }
  while ( v3 );
  SubmissionQueueReInit(a1, a1 + 280);
  result = CompletionQueueReInit(a1, a1 + 416);
  v5 = 0;
  if ( *(_WORD *)(a1 + 268) )
  {
    do
    {
      v6 = *(_QWORD *)(a1 + 312);
      if ( *(_QWORD *)(v6 + 16LL * v5) )
        *(_QWORD *)(v6 + 16LL * v5) = 0LL;
      result = (void *)*(unsigned __int16 *)(a1 + 268);
      ++v5;
    }
    while ( v5 < (unsigned int)result );
  }
  v7 = 0;
  if ( *(_WORD *)(a1 + 272) )
  {
    do
    {
      SubmissionQueueReInit(a1, *(_QWORD *)(a1 + 760) + 136LL * v7);
      result = (void *)*(unsigned __int16 *)(a1 + 272);
      ++v7;
    }
    while ( v7 < (unsigned int)result );
  }
  v8 = 0;
  if ( *(_WORD *)(a1 + 274) )
  {
    do
    {
      CompletionQueueReInit(a1, *(_QWORD *)(a1 + 768) + 344LL * v8);
      result = (void *)*(unsigned __int16 *)(a1 + 274);
      ++v8;
    }
    while ( v8 < (unsigned int)result );
  }
  v9 = 0;
  if ( *(_WORD *)(a1 + 202) )
  {
    do
    {
      v10 = v9++;
      *(_QWORD *)(*(_QWORD *)(a1 + 232) + 48 * v10 + 40) = 0LL;
      result = (void *)*(unsigned __int16 *)(a1 + 202);
    }
    while ( v9 < (unsigned int)result );
  }
  return result;
}
