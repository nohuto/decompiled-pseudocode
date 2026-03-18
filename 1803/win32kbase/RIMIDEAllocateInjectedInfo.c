/*
 * XREFs of RIMIDEAllocateInjectedInfo @ 0x1C00F28A8
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1C00F2D44 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 */

void *__fastcall RIMIDEAllocateInjectedInfo(__int64 a1)
{
  void *result; // rax
  __int64 v3; // rbx
  void *v4; // rax

  result = Win32AllocPoolZInit(0x58uLL, 0x6A6E6952u);
  v3 = (__int64)result;
  if ( result )
  {
    v4 = Win32AllocPoolZInit(8LL * *(unsigned int *)(a1 + 88), 0x6A6E6952u);
    if ( v4 )
    {
      *(_QWORD *)(v3 + 72) = v4;
    }
    else
    {
      Win32FreePool(v3);
      return 0LL;
    }
    return (void *)v3;
  }
  return result;
}
