/*
 * XREFs of SetProtocolInfoCompletion @ 0x1C00136F0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0003F10 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C0003F3C (NVMeFreeDmaBuffer.c)
 *     memmove @ 0x1C0005640 (memmove.c)
 */

__int64 __fastcall SetProtocolInfoCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // r9
  const void *v7; // rdx
  __int64 v8; // r8

  result = GetSrbExtension(a2);
  v5 = result;
  if ( *(_BYTE *)(v4 + 2) == 40 )
    v6 = *(_QWORD *)(v4 + 64);
  else
    v6 = *(_QWORD *)(v4 + 24);
  if ( *(_BYTE *)(v4 + 3) == 1 )
  {
    *(_DWORD *)(v6 + 56) = *(_DWORD *)(result + 4240);
    result = *(unsigned int *)(result + 4240);
    if ( (_DWORD)result )
    {
      v7 = *(const void **)(v5 + 4200);
      if ( v7 )
        result = (__int64)memmove((void *)(*(unsigned int *)(v6 + 52) + v6 + 36), v7, (unsigned int)result);
    }
  }
  else
  {
    *(_DWORD *)(v6 + 56) = 0;
  }
  v8 = *(_QWORD *)(v5 + 4200);
  if ( v8 )
    result = NVMeFreeDmaBuffer(a1, *(unsigned int *)(v5 + 4240), v8);
  *(_QWORD *)(v5 + 4200) = 0LL;
  *(_DWORD *)(v5 + 4240) = 0;
  *(_BYTE *)(v5 + 4253) |= 8u;
  return result;
}
