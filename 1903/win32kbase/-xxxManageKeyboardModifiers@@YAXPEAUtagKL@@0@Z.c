/*
 * XREFs of ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C018087C
 * Callers:
 *     xxxChangeForegroundKeyboardTable @ 0x1C00A0140 (xxxChangeForegroundKeyboardTable.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     ?xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z @ 0x1C018077C (-xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z.c)
 *     xxxKeyEventEx @ 0x1C01861D0 (xxxKeyEventEx.c)
 */

void __fastcall xxxManageKeyboardModifiers(struct tagKL *a1, struct tagKL *a2, __int64 a3)
{
  struct tagTHREADINFO *v3; // rsi
  __int64 v4; // rbx
  __int64 v7; // rax
  unsigned __int8 v8[32]; // [rsp+50h] [rbp-48h] BYREF

  v3 = gptiCurrent;
  v4 = 0LL;
  if ( *((_QWORD *)gptiCurrent + 53) )
  {
    if ( a1 )
    {
      memset(v8, 0, sizeof(v8));
      xxxAdjustPushStateForKL(gptiCurrent, v8, a1, a1, a2);
      xxxAdjustPushStateForKL(v3, v8, a2, a1, a2);
      v7 = *((_QWORD *)a1 + 6);
      if ( v7 && (*(_DWORD *)(*(_QWORD *)(v7 + 32) + 80LL) & 1) != 0 && (byte_1C02142C4 & 4) == 0 )
        xxxKeyEventEx(32930LL, 541LL, 0LL, 0LL, 0LL, 0LL, 0, 0, 0LL, 0LL);
    }
    else
    {
      GetDomainLockRef(16LL, (__int64)a2, a3);
      do
      {
        *(_BYTE *)(v4 + *((_QWORD *)v3 + 53) + 236) &= 0xAAu;
        *((_BYTE *)&gafAsyncKeyState + v4) &= 0xAAu;
        gafRawKeyState[v4++] &= 0xAAu;
      }
      while ( v4 < 64 );
    }
  }
}
