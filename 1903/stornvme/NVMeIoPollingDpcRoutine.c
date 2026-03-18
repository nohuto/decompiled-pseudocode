/*
 * XREFs of NVMeIoPollingDpcRoutine @ 0x1C00157F0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeCompletionDpcRoutine @ 0x1C0003C80 (NVMeCompletionDpcRoutine.c)
 */

__int64 __fastcall NVMeIoPollingDpcRoutine(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v4; // rdx
  __int64 v7; // r8
  int v8; // eax
  __int64 result; // rax
  _QWORD *v10; // r8
  __int64 v11; // rdx
  unsigned int v12; // r8d
  unsigned int v13; // r9d
  __int64 v14; // r8
  _QWORD v15[4]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v16[4]; // [rsp+60h] [rbp-20h] BYREF

  memset(&v15[1], 0, 24);
  v4 = *a2;
  v7 = 4LL;
  v16[0] = 5LL;
  v15[0] = 4LL;
  memset(&v16[1], 0, 24);
  v8 = *(_DWORD *)(v4 + 3748);
  if ( (v8 & 0x20) == 0 )
  {
    if ( (v8 & 2) != 0 )
      v7 = 5LL;
    StorPortExtendedFunction(93LL, v4, v7);
  }
  NVMeCompletionDpcRoutine(a1, *a2, a2[1], ((unsigned int)~*(_DWORD *)(*a2 + 3748) >> 3) & 1);
  result = *(unsigned int *)(*a2 + 3748);
  if ( (result & 0x20) == 0 )
  {
    v10 = v15;
    if ( (result & 2) != 0 )
      v10 = v16;
    result = StorPortNotification(4100LL, *a2, v10);
  }
  v11 = a2[1];
  v12 = 0;
  v13 = *(_DWORD *)(v11 + 180);
  if ( v13 )
  {
    while ( 1 )
    {
      result = v12;
      if ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 192) + 8LL * v12) + 128LL) )
        break;
      if ( ++v12 >= v13 )
        return result;
    }
    result = *(unsigned int *)(*a2 + 20);
    if ( (result & 0x10) == 0 )
    {
      v14 = *(_QWORD *)(v11 + 208);
      if ( v14 )
        return StorPortExtendedFunction(89LL, *a2, *(_QWORD *)(v14 + 8LL * a3));
      else
        return StorPortNotification(4098LL, *a2, v11 + 216);
    }
  }
  return result;
}
