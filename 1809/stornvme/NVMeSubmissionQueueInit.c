/*
 * XREFs of NVMeSubmissionQueueInit @ 0x1C000F960
 * Callers:
 *     AdminQueueInitialize @ 0x1C000B4D8 (AdminQueueInitialize.c)
 *     IoQueuesInitialize @ 0x1C000C854 (IoQueuesInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeSubmissionQueueInit(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rbx
  __int16 v11; // r14
  unsigned __int16 v12; // bp
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  int v21; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  v21 = 0;
  if ( a3 )
  {
    v12 = *(_WORD *)(a1 + 262);
    v11 = 0;
  }
  else
  {
    v11 = *(_WORD *)(a1 + 194);
    v12 = *(_WORD *)(a1 + 260);
  }
  v13 = a5;
  *(_QWORD *)a2 = a4;
  if ( v13 )
    *(_QWORD *)(a2 + 8) = v13;
  else
    *(_QWORD *)(a2 + 8) = StorPortGetPhysicalAddress(a1, 0LL, a4, &v21);
  v14 = a3 * *(_DWORD *)(a1 + 160);
  v15 = *(_QWORD *)(a1 + 136) + 4096LL;
  *(_WORD *)(a2 + 40) = a3;
  *(_QWORD *)(a2 + 42) = 0LL;
  *(_WORD *)(a2 + 50) = 0;
  *(_WORD *)(a2 + 52) = v11;
  v16 = v15 + (unsigned int)(2 * v14);
  *(_WORD *)(a2 + 128) = 0;
  *(_QWORD *)(a2 + 24) = a6;
  result = a7;
  *(_QWORD *)(a2 + 32) = a7;
  *(_QWORD *)(a2 + 16) = v16;
  *(_DWORD *)(a2 + 132) = 0;
  if ( v12 )
  {
    v18 = 0LL;
    v19 = v12;
    do
    {
      result = *(_QWORD *)(a2 + 24);
      v20 = v18 + *(_QWORD *)a2;
      v18 += 64LL;
      *(_QWORD *)(v7 + result) = v20;
      v7 += 16LL;
      --v19;
    }
    while ( v19 );
  }
  return result;
}
