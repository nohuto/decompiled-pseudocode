/*
 * XREFs of CreateProp @ 0x1C007A508
 * Callers:
 *     RealInternalSetProp @ 0x1C007A3B0 (RealInternalSetProp.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0014870 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 */

char *__fastcall CreateProp(const void **a1)
{
  unsigned int *v1; // rax
  __int64 v3; // rcx
  _DWORD *v4; // rdx
  int v5; // ecx
  _DWORD *v7; // rax
  _DWORD *v8; // rdi
  _DWORD *v9; // rax

  v1 = (unsigned int *)*a1;
  if ( *a1 )
  {
    v3 = *v1;
    if ( v1[1] != (_DWORD)v3 )
    {
LABEL_3:
      v4 = *a1;
      v5 = *((_DWORD *)*a1 + 1);
      v4[1] = v5 + 1;
      return (char *)&v4[4 * v5 + 2];
    }
    v7 = Win32AllocPoolZInit(16 * v3 + 24, 1886872149LL);
    v8 = v7;
    if ( v7 )
    {
      memmove(v7, *a1, 16LL * (unsigned int)(*(_DWORD *)*a1 - 1) + 24);
      Win32FreePool((__int64)*a1);
      *a1 = v8;
      ++*v8;
      goto LABEL_3;
    }
  }
  else
  {
    v9 = Win32AllocPoolZInit(0x18uLL, 1886872149LL);
    *a1 = v9;
    if ( v9 )
    {
      *v9 = 1;
      goto LABEL_3;
    }
  }
  return 0LL;
}
