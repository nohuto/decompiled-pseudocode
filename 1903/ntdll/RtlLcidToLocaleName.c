/*
 * XREFs of RtlLcidToLocaleName @ 0x180016AF0
 * Callers:
 *     sub_1800093C4 @ 0x1800093C4 (sub_1800093C4.c)
 *     RtlLCIDToCultureName @ 0x180016330 (RtlLCIDToCultureName.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180017900 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrResSearchResource @ 0x180056760 (LdrResSearchResource.c)
 *     sub_180056AC0 @ 0x180056AC0 (sub_180056AC0.c)
 *     sub_1800772D8 @ 0x1800772D8 (sub_1800772D8.c)
 *     sub_18007E254 @ 0x18007E254 (sub_18007E254.c)
 *     sub_1800E2A9C @ 0x1800E2A9C (sub_1800E2A9C.c)
 * Callees:
 *     sub_180016CBC @ 0x180016CBC (sub_180016CBC.c)
 *     sub_180016D34 @ 0x180016D34 (sub_180016D34.c)
 *     sub_18007B398 @ 0x18007B398 (sub_18007B398.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_1800F6F14 @ 0x1800F6F14 (sub_1800F6F14.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800FCD80 (RtlpGetUserOrMachineUILanguage4NLS.c)
 */

NTSTATUS __cdecl RtlLcidToLocaleName(
        LCID lcid,
        PUNICODE_STRING LocaleName,
        ULONG Flags,
        BOOLEAN AllocateDestinationString)
{
  char v5; // r14
  LCID v7; // ebx
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rax
  WCHAR *v11; // r10
  _WORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned int v15; // edx
  __int64 v16; // r8
  PWCH Buffer; // rdx
  __int64 v19; // [rsp+20h] [rbp-A9h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-A1h] BYREF
  _BYTE v21[176]; // [rsp+40h] [rbp-89h] BYREF

  v19 = 85LL;
  v5 = Flags;
  v7 = lcid;
  if ( (lcid & 0xFFFFEFFF) == 0 )
    return -1073741585;
  if ( LocaleName )
  {
    if ( (Flags & 0xFFFFFFFD) != 0 )
      return -1073741583;
    if ( AllocateDestinationString || LocaleName->Buffer )
    {
      if ( lcid == 5120 )
      {
        if ( (int)RtlpGetUserOrMachineUILanguage4NLS(1LL, v21, &v19) >= 0 )
        {
          v16 = (unsigned int)v19;
          Buffer = (PWCH)v21;
          goto LABEL_21;
        }
      }
      else if ( ((lcid - 1024) & 0xFFFFF7FF) != 0 )
      {
        if ( qword_180166368 || (unsigned __int8)sub_18007B398() )
        {
          if ( v7 == 2048 )
            v7 = DefaultLocaleId;
          v8 = sub_180016D34(v7);
          if ( v8 < 0 )
            return -1073741585;
          v9 = v8;
          if ( (v5 & 2) == 0 )
          {
            _mm_lfence();
            if ( (*(_BYTE *)(*(unsigned __int16 *)(qword_180166368 + 48)
                           * *(unsigned __int16 *)(*(_QWORD *)(qword_180166368 + 16) + 8LL * v8 + 4)
                           + *(_QWORD *)(qword_180166368 + 8)
                           + 24LL) & 1) == 0 )
              return -1073741585;
          }
          _mm_lfence();
          v10 = *(_QWORD *)(qword_180166368 + 32) + 2LL;
          v11 = (WCHAR *)(v10 + 2LL * *(unsigned __int16 *)(*(_QWORD *)(qword_180166368 + 16) + 8 * v9 + 6));
          if ( v11 )
          {
            v12 = (_WORD *)(v10 + 2LL * *(unsigned __int16 *)(*(_QWORD *)(qword_180166368 + 16) + 8 * v9 + 6));
            v13 = 84LL;
            do
            {
              if ( !*v12 )
                break;
              ++v12;
              --v13;
            }
            while ( v13 );
            v14 = v13 == 0 ? 0xC000000D : 0;
            v15 = v13 ? 84 - v13 : 0;
          }
          else
          {
            v15 = v19;
            v14 = 3221225485LL;
          }
          if ( (int)v14 >= 0 )
          {
            v16 = v15;
            Buffer = v11;
LABEL_21:
            LOBYTE(v14) = AllocateDestinationString;
            return sub_180016CBC(v14, Buffer, v16, LocaleName);
          }
        }
      }
      else
      {
        DestinationString.Buffer = (PWCH)v21;
        DestinationString.MaximumLength = 170;
        if ( (int)sub_1800F6F14(&DestinationString) >= 0 )
        {
          Buffer = DestinationString.Buffer;
          v16 = DestinationString.Length >> 1;
          goto LABEL_21;
        }
      }
      return -1073741823;
    }
  }
  return -1073741584;
}
