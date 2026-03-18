/*
 * XREFs of RIMIDEAllocateInjectedInfo @ 0x1C0145FAC
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1C0146468 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 */

void *__fastcall RIMIDEAllocateInjectedInfo(__int64 a1)
{
  void *result; // rax
  __int64 v3; // rbx
  void *v4; // rax

  result = Win32AllocPoolZInit(0x60uLL, 1785620818LL);
  v3 = (__int64)result;
  if ( result )
  {
    v4 = Win32AllocPoolZInit(8LL * *(unsigned int *)(a1 + 88), 1785620818LL);
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
