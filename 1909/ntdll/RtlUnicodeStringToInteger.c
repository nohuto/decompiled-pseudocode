/*
 * XREFs of RtlUnicodeStringToInteger @ 0x180074900
 * Callers:
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180015FD0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlGetFileMUIPath @ 0x180059E30 (RtlGetFileMUIPath.c)
 *     RtlGetIntegerAtom @ 0x18005B850 (RtlGetIntegerAtom.c)
 *     WerpGlobalFlagsForProcess @ 0x18006B88C (WerpGlobalFlagsForProcess.c)
 *     RtlQueryImageFileKeyOption @ 0x180079F00 (RtlQueryImageFileKeyOption.c)
 *     RtlGetUILanguageInfo @ 0x180084510 (RtlGetUILanguageInfo.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D12B4 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D17B0 (LdrpInitializeExecutionOptions.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800D4C10 (LdrpQueryIllegalCWDDevices.c)
 *     AVrfInitializeVerifier @ 0x1800D8C38 (AVrfInitializeVerifier.c)
 *     RtlUnicodeStringToLcid @ 0x1800EBE80 (RtlUnicodeStringToLcid.c)
 *     RtlpSetPreferredUILanguages @ 0x1800EDCD0 (RtlpSetPreferredUILanguages.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1800FD410 (RtlpMuiRegAddAlternateCodePage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnicodeStringToInteger(unsigned __int16 *a1, unsigned int a2, int *a3)
{
  unsigned int v5; // r9d
  int v6; // r10d
  unsigned __int16 *v7; // r8
  int v8; // edx
  unsigned __int16 v9; // r12
  unsigned __int16 v10; // cx
  unsigned __int16 *v11; // r14
  int v12; // r15d
  int v13; // r11d
  unsigned int v14; // eax
  __int16 v16; // ax

  v5 = 0;
  v6 = 0;
  if ( !*a1 || (*(_BYTE *)a1 & 1) != 0 )
  {
LABEL_49:
    v5 = -1073741811;
    goto LABEL_25;
  }
  v7 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
  v8 = *a1 >> 1;
  v9 = 0;
  if ( v8 )
  {
    while ( 1 )
    {
      --v8;
      v9 = *v7++;
      if ( v9 > 0x20u )
        break;
      if ( !v8 )
      {
        v9 = 0;
        break;
      }
    }
  }
  else
  {
    v8 = -1;
  }
  v10 = v9;
  if ( ((v9 - 43) & 0xFFFD) == 0 )
  {
    if ( v8 )
    {
      --v8;
      v10 = *v7++;
    }
    else
    {
      v10 = 0;
    }
  }
  v11 = v7;
  v12 = v8;
  if ( a2 )
  {
    switch ( a2 )
    {
      case 0xAu:
        v13 = 0;
        goto LABEL_12;
      case 2u:
        v13 = 1;
        goto LABEL_12;
      case 8u:
        v13 = 3;
        goto LABEL_12;
      case 0x10u:
        v13 = 4;
        goto LABEL_12;
    }
    goto LABEL_49;
  }
  a2 = 10;
  v13 = 0;
  if ( v10 == 48 )
  {
    if ( v8 )
    {
      --v8;
      v16 = *v7++;
      switch ( v16 )
      {
        case 'x':
          a2 = 16;
          v13 = 4;
          break;
        case 'o':
          a2 = 8;
          v13 = 3;
          break;
        case 'b':
          a2 = 2;
          v13 = 1;
          break;
        default:
          v8 = v12;
          v7 = v11;
          break;
      }
      if ( v8 )
        goto LABEL_19;
    }
    v10 = 0;
  }
LABEL_12:
  while ( v10 )
  {
    if ( (unsigned __int16)(v10 - 48) > 9u )
    {
      if ( (unsigned __int16)(v10 - 65) <= 5u )
      {
        v14 = v10 - 55;
      }
      else
      {
        if ( (unsigned __int16)(v10 - 97) > 5u )
          break;
        v14 = v10 - 87;
      }
    }
    else
    {
      v14 = v10 - 48;
    }
    if ( v14 >= a2 )
      break;
    v6 = v13 ? v14 | (v6 << v13) : v14 + a2 * v6;
    if ( !v8 )
      break;
LABEL_19:
    --v8;
    v10 = *v7++;
  }
  if ( v9 == 45 )
    v6 = -v6;
LABEL_25:
  *a3 = v6;
  return v5;
}
