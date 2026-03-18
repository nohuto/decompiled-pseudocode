/*
 * XREFs of CreateProp @ 0x1C0011458
 * Callers:
 *     RealInternalSetProp @ 0x1C0011300 (RealInternalSetProp.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
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
    v7 = (_DWORD *)Win32AllocPoolZInit(16 * v3 + 24);
    v8 = v7;
    if ( v7 )
    {
      memmove(v7, *a1, 16LL * (unsigned int)(*(_DWORD *)*a1 - 1) + 24);
      Win32FreePool(*a1);
      *a1 = v8;
      ++*v8;
      goto LABEL_3;
    }
  }
  else
  {
    v9 = (_DWORD *)Win32AllocPoolZInit(0x18uLL);
    *a1 = v9;
    if ( v9 )
    {
      *v9 = 1;
      goto LABEL_3;
    }
  }
  return 0LL;
}
