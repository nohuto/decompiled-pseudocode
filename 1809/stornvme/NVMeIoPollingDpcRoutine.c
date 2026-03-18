/*
 * XREFs of NVMeIoPollingDpcRoutine @ 0x1C0015BE0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeCompletionDpcRoutine @ 0x1C00018F0 (NVMeCompletionDpcRoutine.c)
 */

__int64 __fastcall NVMeIoPollingDpcRoutine(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v4; // rdx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // r9
  __int64 result; // rax
  int *v11; // r8
  __int64 v12; // rdx
  unsigned int v13; // r8d
  unsigned int v14; // r9d
  __int64 v15; // r8
  int v16; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17; // [rsp+48h] [rbp-38h]
  __int64 v18; // [rsp+50h] [rbp-30h]
  __int64 v19; // [rsp+58h] [rbp-28h]
  int v20; // [rsp+60h] [rbp-20h] BYREF
  __int64 v21; // [rsp+68h] [rbp-18h]
  __int64 v22; // [rsp+70h] [rbp-10h]
  __int64 v23; // [rsp+78h] [rbp-8h]

  v4 = *a2;
  v17 = 0LL;
  v7 = 4LL;
  v18 = 0LL;
  v16 = 4;
  v20 = 5;
  v19 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v8 = *(_DWORD *)(v4 + 3740);
  if ( (v8 & 0x20) == 0 )
  {
    if ( (v8 & 2) != 0 )
      v7 = 5LL;
    StorPortExtendedFunction(93LL, v4, v7, a2[1] + 96);
  }
  NVMeCompletionDpcRoutine(a1, *a2, a2[1], ((unsigned int)~*(_DWORD *)(*a2 + 3740) >> 3) & 1);
  result = *(unsigned int *)(*a2 + 3740);
  if ( (result & 0x20) == 0 )
  {
    v11 = &v16;
    if ( (result & 2) != 0 )
      v11 = &v20;
    result = StorPortNotification(4100LL, *a2, v11, v9);
  }
  v12 = a2[1];
  v13 = 0;
  v14 = *(_DWORD *)(v12 + 180);
  if ( v14 )
  {
    while ( 1 )
    {
      result = v13;
      if ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 192) + 8LL * v13) + 128LL) )
        break;
      if ( ++v13 >= v14 )
        return result;
    }
    result = *(unsigned int *)(*a2 + 20);
    if ( (result & 0x10) == 0 )
    {
      v15 = *(_QWORD *)(v12 + 208);
      if ( v15 )
        return StorPortExtendedFunction(89LL, *a2, *(_QWORD *)(v15 + 8LL * a3), -10LL * *(unsigned int *)(v12 + 204));
      else
        return StorPortNotification(4098LL, *a2, v12 + 216, a3);
    }
  }
  return result;
}
