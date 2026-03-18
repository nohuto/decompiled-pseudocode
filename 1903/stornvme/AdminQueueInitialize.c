/*
 * XREFs of AdminQueueInitialize @ 0x1C0008918
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C000B0B4 (NVMeControllerInitPart1.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 *     NVMeCompletionQueueInit @ 0x1C000A814 (NVMeCompletionQueueInit.c)
 *     NVMeSubmissionQueueInit @ 0x1C000DB8C (NVMeSubmissionQueueInit.c)
 */

char __fastcall AdminQueueInitialize(__int64 a1)
{
  __int64 v1; // r14
  __int64 v3; // rsi
  unsigned __int16 v4; // cx
  char result; // al
  __int64 v6; // rdx
  char *v7; // [rsp+60h] [rbp+20h]
  char *v8; // [rsp+68h] [rbp+28h]

  v1 = a1 + 280;
  v3 = a1 + 416;
  v4 = *(_WORD *)(a1 + 268);
  if ( *(_BYTE *)(a1 + 16) )
  {
    v6 = 16LL * v4;
    v8 = (char *)(v6 + *(_QWORD *)v3);
    v7 = &v8[v6];
    NVMeZeroMemory(v8, 16 * v4);
    NVMeZeroMemory(v7, 16 * *(unsigned __int16 *)(a1 + 268));
    NVMeSubmissionQueueInit(a1, v1, 0, *(_QWORD *)v1, 0LL, (__int64)v8, (__int64)v7);
    NVMeCompletionQueueInit(a1, v3, 0, *(_QWORD *)v3, 0LL, 0LL);
    NVMeZeroMemory(*(void **)v1, *(unsigned __int16 *)(a1 + 268) << 6);
    NVMeZeroMemory(*(void **)v3, 16 * *(unsigned __int16 *)(a1 + 268));
    *(_WORD *)(v1 + 50) = 0;
    result = 1;
    *(_DWORD *)(v3 + 180) = 1;
  }
  else
  {
    StorPortExtendedFunction(0LL, a1, 16 * (unsigned int)v4);
    return 0;
  }
  return result;
}
