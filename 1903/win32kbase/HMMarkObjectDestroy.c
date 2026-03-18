/*
 * XREFs of HMMarkObjectDestroy @ 0x1C0027A10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

__int64 __fastcall HMMarkObjectDestroy(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ecx
  char *v5; // r8
  char v6; // al

  GetDomainLockRef(14LL, a2, a3);
  v4 = 0;
  v5 = (char *)qword_1C0213758 + dword_1C0213760 * (unsigned int)(unsigned __int16)*a1;
  v6 = v5[25] | 1;
  v5[25] = v6;
  if ( a1[2] )
    v5[25] = v6 & 0xFD;
  else
    return 1;
  return v4;
}
