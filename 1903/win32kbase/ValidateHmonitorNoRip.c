/*
 * XREFs of ValidateHmonitorNoRip @ 0x1C007ADE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

__int64 __fastcall ValidateHmonitorNoRip(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  char *v5; // rsi
  __int64 v6; // rcx
  _QWORD *v7; // r14
  unsigned __int64 v8; // rdi
  __int64 v9; // rbp

  v4 = 0LL;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v5 = (char *)qword_1C0213758 + (unsigned int)(unsigned __int16)a1 * dword_1C0213760;
    GetDomainLockRef(14LL, a2, a3);
    v7 = gpKernelHandleTable;
    v8 = a1 >> 16;
    v9 = 3LL * (unsigned int)((v5 - (char *)qword_1C0213758) >> 5);
    if ( ((_WORD)v8 == *((_WORD *)v5 + 13) || (_WORD)v8 == 0xFFFF || !(_WORD)v8 && PsGetCurrentProcessWow64Process(v6))
      && (v5[25] & 1) == 0
      && v5[24] == 12 )
    {
      return v7[v9];
    }
  }
  return v4;
}
