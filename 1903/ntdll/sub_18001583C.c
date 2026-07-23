/*
 * XREFs of sub_18001583C @ 0x18001583C
 * Callers:
 *     sub_1800127D4 @ 0x1800127D4 (sub_1800127D4.c)
 *     sub_180013008 @ 0x180013008 (sub_180013008.c)
 *     sub_1800136CC @ 0x1800136CC (sub_1800136CC.c)
 *     sub_180016414 @ 0x180016414 (sub_180016414.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180074270 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x18007B110 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetUILanguageInfo @ 0x180083E70 (RtlGetUILanguageInfo.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008AB10 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     sub_1800EC198 @ 0x1800EC198 (sub_1800EC198.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC2E0 (RtlpCleanupRegistryKeys.c)
 *     sub_1800ECF50 @ 0x1800ECF50 (sub_1800ECF50.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDBE0 (RtlpSetUserPreferredUILanguages.c)
 *     sub_1800F6BDC @ 0x1800F6BDC (sub_1800F6BDC.c)
 *     sub_180100D94 @ 0x180100D94 (sub_180100D94.c)
 * Callees:
 *     sub_180015918 @ 0x180015918 (sub_180015918.c)
 *     sub_180016414 @ 0x180016414 (sub_180016414.c)
 *     RtlCultureNameToLCID @ 0x1800168B0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 */

__int64 __fastcall sub_18001583C(__int64 a1, const WCHAR *a2, char a3, _WORD *a4)
{
  char v4; // r15
  unsigned int v9; // ebx
  __int64 v10; // rbp
  int v12; // ecx
  __int64 v13; // r9
  __int64 v14; // rdx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  DWORD Lcid; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  v9 = -1073741772;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v10 = *(_QWORD *)(a1 + 24);
  if ( (int)sub_180015918(a1, a2, 0LL, &Lcid) >= 0 )
  {
    v12 = 0;
    if ( *(_WORD *)(v10 + 6) )
    {
      v13 = *(_QWORD *)(v10 + 16);
      do
      {
        v14 = 28LL * v12;
        if ( *(_WORD *)(v14 + v13 + 6) == (_WORD)Lcid )
        {
          if ( (*(_WORD *)(v14 + v13) & 0x1020) == 0x20 )
          {
            if ( a4 )
            {
              *a4 = v12;
              return 0LL;
            }
          }
          else if ( (*(_WORD *)(v14 + v13) & 0x1000) != 0 )
          {
            v4 = 1;
          }
        }
        ++v12;
      }
      while ( v12 < *(unsigned __int16 *)(v10 + 6) );
    }
  }
  if ( a3 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
    {
      if ( Lcid != 4096 )
        v9 = sub_180016414(a1, (unsigned __int16)Lcid, 0LL, a4);
    }
  }
  if ( v4 && v9 == -1073741772 )
    return 3221225659LL;
  else
    return v9;
}
