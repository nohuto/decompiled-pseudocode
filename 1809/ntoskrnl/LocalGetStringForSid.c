/*
 * XREFs of LocalGetStringForSid @ 0x1408A62B4
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x1408A59C0 (LocalConvertSDToStringSD_Rev1.c)
 *     GetPrintableOperandValue @ 0x1408A8248 (GetPrintableOperandValue.c)
 *     LocalGetStringForRelativeAttribute @ 0x1408A9FD4 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     wcscpy_s @ 0x14019BCC0 (wcscpy_s.c)
 *     RtlNtStatusToDosError @ 0x140623EE0 (RtlNtStatusToDosError.c)
 *     LookupSidInTable @ 0x1406B03A0 (LookupSidInTable.c)
 *     SddlpAlloc @ 0x1406B0574 (SddlpAlloc.c)
 *     LocalConvertSidToStringSidW @ 0x1408A5F94 (LocalConvertSidToStringSidW.c)
 */

__int64 __fastcall LocalGetStringForSid(PSID Sid1, wchar_t **a2, __int64 a3, __int64 a4, int a5, char a6)
{
  unsigned int v6; // ebx
  __int64 v9; // rax
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rax
  size_t v13; // rdi
  wchar_t *v14; // rax
  const wchar_t *v15; // r8
  wchar_t *v17; // [rsp+20h] [rbp-28h]
  __int64 v18; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0;
  v18 = 0LL;
  if ( Sid1 && a2 )
  {
    v9 = LookupSidInTable(0LL, Sid1, a3, a4, v17, a6, &v18);
    v10 = v9;
    if ( v9 )
    {
      v12 = *(unsigned int *)(v9 + 12);
    }
    else
    {
      if ( !v18 )
      {
        v11 = LocalConvertSidToStringSidW(Sid1, a2);
        if ( v11 < 0 )
          return RtlNtStatusToDosError(v11);
        return v6;
      }
      v12 = 2LL;
    }
    v13 = 2 * v12 + 2;
    v14 = (wchar_t *)SddlpAlloc(v13);
    *a2 = v14;
    if ( v14 )
    {
      v15 = (const wchar_t *)(v10 + 2);
      if ( !v10 )
        v15 = L"SA";
      wcscpy_s(v14, v13 >> 1, v15);
    }
    else
    {
      return 8;
    }
    return v6;
  }
  return 87LL;
}
