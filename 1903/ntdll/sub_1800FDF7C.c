/*
 * XREFs of sub_1800FDF7C @ 0x1800FDF7C
 * Callers:
 *     RtlGetUILanguageInfo @ 0x180083E70 (RtlGetUILanguageInfo.c)
 *     sub_1800EC198 @ 0x1800EC198 (sub_1800EC198.c)
 *     sub_1800FDDB4 @ 0x1800FDDB4 (sub_1800FDDB4.c)
 * Callees:
 *     sub_180015918 @ 0x180015918 (sub_180015918.c)
 *     RtlCultureNameToLCID @ 0x1800168B0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     sub_1800FDDB4 @ 0x1800FDDB4 (sub_1800FDDB4.c)
 */

__int64 __fastcall sub_1800FDF7C(__int64 a1, __int64 a2, WCHAR *a3, char a4, __int64 a5)
{
  __int64 v9; // rbx
  __int16 v10; // r9
  __int16 v11; // r10
  __int16 i; // dx
  __int16 v13; // r8
  __int16 v14; // cx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 result; // rax
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  DWORD Lcid; // [rsp+60h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  if ( !a3 )
    return 3221225485LL;
  v9 = a5;
  if ( !a5 )
    return 3221225485LL;
  if ( (int)sub_180015918(a1, a3, 0LL, (__int16 *)&Lcid) >= 0 )
  {
    v10 = Lcid;
    v11 = 0;
    for ( i = 0; i < 8; i += 2 )
    {
      v13 = (*(_WORD *)(a2 + 8) >> i) & 3;
      v14 = *(_WORD *)(a2 + 2LL * v11 + 12);
      if ( v13 == 2 )
      {
        v15 = v14;
        v16 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        if ( *(_WORD *)(28 * v15 + v16 + 6) == (_WORD)Lcid )
        {
          *(_OWORD *)v9 = *(_OWORD *)(28 * v15 + v16);
          *(_QWORD *)(v9 + 16) = *(_QWORD *)(28 * v15 + v16 + 16);
          *(_DWORD *)(v9 + 24) = *(_DWORD *)(28 * v15 + v16 + 24);
          return 0LL;
        }
      }
      else if ( v14 != (_WORD)Lcid && v13 != 3 )
      {
        result = 0LL;
        *(_QWORD *)v9 = 0LL;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = 0LL;
        *(_DWORD *)(v9 + 24) = 0;
        *(_WORD *)(v9 + 6) = v10;
        return result;
      }
      ++v11;
    }
  }
  if ( a4
    && (RtlInitUnicodeString(&DestinationString, a3), RtlCultureNameToLCID(&DestinationString, &Lcid))
    && Lcid != 4096 )
  {
    return sub_1800FDDB4(a1, a2, Lcid, 0, v9);
  }
  else
  {
    return 3221225524LL;
  }
}
