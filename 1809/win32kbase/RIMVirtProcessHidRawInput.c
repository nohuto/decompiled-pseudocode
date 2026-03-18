/*
 * XREFs of RIMVirtProcessHidRawInput @ 0x1C0128AE0
 * Callers:
 *     ?ivCallback@CHidInput@@MEAAJPEAX@Z @ 0x1C014D340 (-ivCallback@CHidInput@@MEAAJPEAX@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0050484 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     ApiSetProcessHidRawInput @ 0x1C01648E0 (ApiSetProcessHidRawInput.c)
 */

__int64 __fastcall RIMVirtProcessHidRawInput(__int64 a1, const UNICODE_STRING *a2, const void *a3, unsigned int a4)
{
  size_t v5; // r15
  unsigned int v8; // ebp
  __int64 i; // rsi
  int v11; // [rsp+50h] [rbp+8h] BYREF
  int v12; // [rsp+54h] [rbp+Ch]

  v5 = a4;
  v8 = -1073741772;
  if ( *(_BYTE *)(a1 + 81) || *(_BYTE *)(a1 + 80) )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v11, 1, 0);
    RIMLockExclusive(a1 + 104);
    for ( i = *(_QWORD *)(a1 + 424); i; i = *(_QWORD *)(i + 40) )
    {
      if ( RtlEqualUnicodeString(a2, (PCUNICODE_STRING)(i + 208), 0) )
      {
        v8 = 0;
        RIMLockExclusive(a1 + 568);
        memmove(*(void **)(*(_QWORD *)(i + 464) + 24LL), a3, v5);
        *(_DWORD *)(i + 256) = 0;
        *(_QWORD *)(i + 264) = v5;
        ApiSetProcessHidRawInput(i);
        *(_QWORD *)(a1 + 576) = 0LL;
        ExReleasePushLockExclusiveEx(a1 + 568, 0LL);
        KeLeaveCriticalRegion();
        break;
      }
    }
    *(_QWORD *)(a1 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 104, 0LL);
    KeLeaveCriticalRegion();
    if ( v11 && !v12 && (int)IsLeaveEditionCritSupported() >= 0 )
      LeaveEditionCrit();
  }
  return v8;
}
