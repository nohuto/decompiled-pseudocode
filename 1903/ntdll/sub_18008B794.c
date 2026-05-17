/*
 * XREFs of sub_18008B794 @ 0x18008B794
 * Callers:
 *     sub_1800159B8 @ 0x1800159B8 (sub_1800159B8.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x1800730B0 (RtlpGetSystemDefaultUILanguage.c)
 *     sub_1800FFDA8 @ 0x1800FFDA8 (sub_1800FFDA8.c)
 *     sub_180100128 @ 0x180100128 (sub_180100128.c)
 * Callees:
 *     sub_1800090D4 @ 0x1800090D4 (sub_1800090D4.c)
 *     sub_180016554 @ 0x180016554 (sub_180016554.c)
 *     RtlCultureNameToLCID @ 0x1800168B0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_18008B794(__int64 a1, _WORD *a2, _WORD *a3)
{
  _WORD *v5; // rsi
  _WORD *v6; // rax
  int v7; // ebx
  WCHAR v9; // ax
  const WCHAR *v10; // rdi
  WCHAR *v11; // rcx
  WCHAR i; // ax
  unsigned int v13; // [rsp+30h] [rbp-50h] BYREF
  __int64 v14; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  int v16; // [rsp+50h] [rbp-30h] BYREF
  __int64 v17; // [rsp+58h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+60h] [rbp-20h]
  int v19; // [rsp+68h] [rbp-18h]
  __int128 v20; // [rsp+70h] [rbp-10h]
  int v21; // [rsp+B0h] [rbp+30h] BYREF
  int v22; // [rsp+C8h] [rbp+48h] BYREF

  v14 = 0LL;
  v5 = 0LL;
  if ( a1 && a2 && a3 )
  {
    v6 = (_WORD *)sub_180016554(a1, 0xACu);
    v5 = v6;
    if ( v6 )
    {
      memset(v6, 0, 0x158uLL);
      *a2 = 0;
      v22 = 0;
      *a3 = 0;
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      v14 = 0LL;
      p_DestinationString = &DestinationString;
      v16 = 48;
      v17 = 0LL;
      v19 = 64;
      v20 = 0LL;
      v7 = ZwOpenKey(&v14, 131097LL, &v16);
      if ( v7 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"InstallLanguageFallback");
        v13 = 8;
        v7 = sub_1800090D4(v14, (__int64)&DestinationString, &v22, v5, &v13);
        if ( v7 >= 0 )
        {
          if ( v22 != 1 )
            goto LABEL_15;
          v9 = *v5;
          v10 = v5;
          while ( v9 )
          {
            v11 = (WCHAR *)(v10 + 1);
            if ( v9 == 44 )
            {
              *v10++ = 0;
              for ( i = *v11; i == 32; i = *v10 )
                ++v10;
              break;
            }
            v9 = *v11;
            ++v10;
          }
          RtlInitUnicodeString(&DestinationString, v5);
          if ( RtlCultureNameToLCID(&DestinationString.Length, &v21) )
          {
            *a2 = v21;
            if ( *v10 )
            {
              RtlInitUnicodeString(&DestinationString, v10);
              if ( RtlCultureNameToLCID(&DestinationString.Length, &v21) )
              {
                *a3 = v21;
              }
              else
              {
                v7 = -1073741823;
                *a2 = 0;
              }
            }
          }
          else
          {
LABEL_15:
            v7 = -1073741823;
          }
        }
      }
    }
    else
    {
      v7 = -1073741801;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v14 )
    ZwClose(v14);
  if ( v5 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v5);
  return (unsigned int)v7;
}
