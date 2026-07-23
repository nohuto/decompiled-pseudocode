/*
 * XREFs of IopDeviceRemovalForResetComplete @ 0x140827B80
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x14015D890 (RtlUnicodeStringValidateDestWorker.c)
 *     McTemplateK0hzr0qqhzr4 @ 0x1402881C0 (McTemplateK0hzr0qqhzr4.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopFreeResetRemovalContext @ 0x140827D30 (IopFreeResetRemovalContext.c)
 *     PnpTraceDeviceRemovalForResetComplete @ 0x14083A9D8 (PnpTraceDeviceRemovalForResetComplete.c)
 */

__int64 __fastcall IopDeviceRemovalForResetComplete(char *P, __int64 a2, __int64 a3, size_t *a4)
{
  int v5; // esi
  __int16 v6; // di
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v9; // rax
  const WCHAR *v10; // rcx
  __int64 v11; // rdx
  size_t v12; // r9
  signed __int64 v13; // r8
  size_t cchMax; // [rsp+20h] [rbp-38h]
  ULONG dwFlags; // [rsp+28h] [rbp-30h]
  size_t pcchDest; // [rsp+60h] [rbp+8h] BYREF
  wchar_t *ppszDest; // [rsp+68h] [rbp+10h] BYREF

  if ( !P )
    __fastfail(5u);
  v5 = *((_DWORD *)P + 41);
  v6 = 0;
  if ( v5 >= 0 || !*((_DWORD *)P + 40) )
  {
    v7 = *((_QWORD *)P + 23);
    v8 = v7 ? *(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL) : 0LL;
    if ( (byte_140406847 & 8) != 0 )
    {
      v9 = *((_QWORD *)P + 21);
      McTemplateK0hzr0qqhzr4(
        *(_QWORD *)(v9 + 56),
        *(_QWORD *)(v9 + 48),
        **(_WORD **)(v9 + 56) >> 1,
        *(_WORD *)(v8 + 40) >> 1,
        *(_QWORD *)(v8 + 48),
        v5,
        **(_DWORD **)(v9 + 48),
        **(_WORD **)(v9 + 56) >> 1,
        *(_QWORD *)(*(_QWORD *)(v9 + 56) + 8LL));
    }
  }
  if ( v5 >= 0 || *((_DWORD *)P + 44) >= (unsigned int)PnpResetMaximumRetryAttempts )
  {
    PnpTraceDeviceRemovalForResetComplete(P);
    return IopFreeResetRemovalContext(P);
  }
  else
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)P + 21) + 64LL), 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag(*((PVOID *)P + 21), 0x4B706E50u);
    *((_QWORD *)P + 21) = 0LL;
    *((_DWORD *)P + 48) = 0;
    *((_DWORD *)P + 40) = v5;
    if ( RtlUnicodeStringValidateDestWorker((PCUNICODE_STRING)(P + 200), &ppszDest, &pcchDest, a4, cchMax, dwFlags) >= 0 )
    {
      v10 = &word_140767740;
      v11 = 0x7FFFLL;
      if ( pcchDest )
      {
        v12 = pcchDest - 0x7FFF;
        v13 = (char *)ppszDest - (char *)&word_140767740;
        do
        {
          if ( !v11 )
            break;
          if ( !*v10 )
            break;
          --v11;
          *(const WCHAR *)((char *)v10 + v13) = *v10;
          ++v10;
          ++v6;
        }
        while ( v12 + v11 );
      }
      *((_WORD *)P + 100) = 2 * v6;
    }
    ++*((_DWORD *)P + 44);
    return KiSetTimerEx((__int64)P, PnpResetRetryInterval, 0, 0, (__int64)(P + 64));
  }
}
