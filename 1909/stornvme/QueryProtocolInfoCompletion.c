/*
 * XREFs of QueryProtocolInfoCompletion @ 0x1C0001270
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0003F10 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C0003F3C (NVMeFreeDmaBuffer.c)
 *     memmove @ 0x1C0005640 (memmove.c)
 */

__int64 __fastcall QueryProtocolInfoCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  _DWORD *v5; // r8
  __int64 v6; // rbx
  _DWORD *v7; // r9
  const void *v8; // rdx
  __int64 v9; // r8

  result = GetSrbExtension(a2);
  v6 = result;
  if ( *(_BYTE *)(v4 + 2) == 40 )
    v7 = *(_DWORD **)(v4 + 64);
  else
    v7 = *(_DWORD **)(v4 + 24);
  if ( *(_BYTE *)(v4 + 3) == 1 )
  {
    if ( v7[10] == 3 )
      v7[15] = *v5;
    v7[14] = *(_DWORD *)(result + 4240);
    result = *(unsigned int *)(result + 4240);
    if ( (_DWORD)result )
    {
      v8 = *(const void **)(v6 + 4200);
      if ( v8 )
        result = (__int64)memmove((char *)v7 + (unsigned int)v7[13] + 36, v8, (unsigned int)result);
    }
  }
  else
  {
    v7[14] = 0;
  }
  v9 = *(_QWORD *)(v6 + 4200);
  if ( v9 )
    result = NVMeFreeDmaBuffer(a1, *(unsigned int *)(v6 + 4240), v9, *(_QWORD *)(v6 + 4208));
  *(_QWORD *)(v6 + 4200) = 0LL;
  *(_DWORD *)(v6 + 4240) = 0;
  *(_BYTE *)(v6 + 4253) |= 8u;
  return result;
}
