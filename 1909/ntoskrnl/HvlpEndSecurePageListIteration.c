/*
 * XREFs of HvlpEndSecurePageListIteration @ 0x14028E374
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x14028A948 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlIterateSecurePagesForHibernation @ 0x14028AAE4 (HvlIterateSecurePagesForHibernation.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x14028B62C (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x14028BDC8 (HvlpGetEncryptedDataFromSecureKernel.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 *     VslEndSecurePageIteration @ 0x14028F004 (VslEndSecurePageIteration.c)
 */

char __fastcall HvlpEndSecurePageListIteration(__int64 a1, void *a2, _DWORD *a3)
{
  int v5; // ebx
  int *v6; // rax
  __int64 *v7; // rsi
  unsigned int v8; // eax
  size_t Size; // [rsp+40h] [rbp+8h] BYREF

  v5 = a1;
  if ( (_DWORD)a1 )
  {
    LOBYTE(v6) = BYTE2(HvlpIteratorCrashdump);
    v7 = &qword_140462D48;
  }
  else
  {
    LOBYTE(v6) = BYTE2(HvlpIteratorHibernate);
    v7 = &qword_140462D28;
  }
  if ( (_BYTE)v6 )
  {
    LOBYTE(a1) = (_DWORD)a1 == 0;
    VslEndSecurePageIteration(a1, &Size);
    if ( a3 )
    {
      v8 = Size;
      if ( (unsigned int)Size <= *a3 )
      {
        *a3 = Size;
        if ( v8 )
          memmove(a2, (const void *)*v7, v8);
      }
    }
    v6 = &HvlpIteratorCrashdump;
    if ( !v5 )
      v6 = &HvlpIteratorHibernate;
    *((_QWORD *)v6 + 1) = 0LL;
    *v6 = 0;
  }
  return (char)v6;
}
