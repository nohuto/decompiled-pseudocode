/*
 * XREFs of sub_180021B60 @ 0x180021B60
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     sub_180017368 @ 0x180017368 (sub_180017368.c)
 *     RtlCompareUnicodeString @ 0x180019EE0 (RtlCompareUnicodeString.c)
 *     sub_18001C4DC @ 0x18001C4DC (sub_18001C4DC.c)
 *     RtlInitString @ 0x180021100 (RtlInitString.c)
 *     RtlxOemStringToUnicodeSize @ 0x180022080 (RtlxOemStringToUnicodeSize.c)
 *     RtlAnsiStringToUnicodeString @ 0x180024B70 (RtlAnsiStringToUnicodeString.c)
 *     sub_1800255A8 @ 0x1800255A8 (sub_1800255A8.c)
 *     sub_180025600 @ 0x180025600 (sub_180025600.c)
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     sub_18006D6B8 @ 0x18006D6B8 (sub_18006D6B8.c)
 *     LdrGetDllHandleByName @ 0x180077240 (LdrGetDllHandleByName.c)
 *     _strnicmp @ 0x18008DC70 (_strnicmp.c)
 */

__int64 sub_180021B60()
{
  int v0; // eax
  __int64 v1; // rcx
  wchar_t *Buffer; // rbx
  unsigned int v3; // edi
  unsigned int v4; // r14d
  unsigned int v5; // esi
  __int64 v6; // r13
  __int64 v7; // r12
  const char *v8; // r15
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rdi
  int v12; // eax
  char v13; // bl
  unsigned __int16 v14; // ax
  int v16; // eax
  void *ApiSetMap; // [rsp+30h] [rbp-48h]
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-40h] BYREF
  STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int16 v20[16]; // [rsp+58h] [rbp-20h] BYREF
  char v21; // [rsp+C0h] [rbp+48h] BYREF
  unsigned int v22; // [rsp+C8h] [rbp+50h] BYREF
  unsigned __int64 v23; // [rsp+D0h] [rbp+58h] BYREF
  __int64 v24; // [rsp+D8h] [rbp+60h] BYREF

  v23 = 0LL;
  LdrGetDllHandleByName(&unk_180118060, 0LL, &v23);
  v0 = sub_18001C4DC(v23, 1, 0xDu, &v22, &v24);
  v1 = v24;
  if ( v0 < 0 )
    v1 = 0LL;
  v24 = v1;
  if ( !v1 )
    return 0LL;
  Buffer = 0LL;
  v3 = 0;
  v4 = v22 >> 5;
  v5 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  ApiSetMap = NtCurrentPeb()->ApiSetMap;
  UnicodeString.Buffer = 0LL;
  if ( v22 >> 5 )
  {
    v6 = v24;
    do
    {
      v7 = v6 + 32LL * v5;
      if ( !*(_DWORD *)(v7 + 4) )
        break;
      v8 = (const char *)(v23 + *(unsigned int *)(v7 + 4));
      if ( !strnicmp(v8, "EXT-", 4uLL) )
      {
        RtlInitString(&DestinationString, v8);
        v9 = RtlxOemStringToUnicodeSize(&DestinationString);
        v11 = v9;
        if ( v9 > UnicodeString.MaximumLength )
        {
          if ( v9 >= 0xFFFE )
          {
            v3 = -1073741675;
            break;
          }
          if ( Buffer )
            RtlFreeUnicodeString(&UnicodeString);
          UnicodeString.Buffer = (wchar_t *)sub_18006D6B8(v11, v10);
          Buffer = UnicodeString.Buffer;
          if ( !UnicodeString.Buffer )
          {
            v3 = -1073741670;
            break;
          }
          UnicodeString.MaximumLength = v11;
        }
        else
        {
          UnicodeString.Length = 0;
        }
        RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 0);
        sub_1800255A8(0LL, &UnicodeString, 5328LL);
        v12 = sub_180025600((_DWORD)ApiSetMap, (unsigned int)&UnicodeString, 0, (unsigned int)&v21, (__int64)v20);
        v13 = v21;
        v3 = v12;
        if ( v12 >= 0 && v21 )
        {
          if ( v20[0] )
            v14 = 5329;
          else
            v14 = 5330;
        }
        else
        {
          v14 = 5331;
        }
        sub_1800255A8(0LL, &UnicodeString, v14);
        if ( v13 && !(unsigned int)RtlCompareUnicodeString(word_180118260, v20, 1) )
        {
          v16 = sub_180017368(v23, v6 + 32LL * v5);
          Buffer = UnicodeString.Buffer;
          v3 = v16;
          if ( v16 < 0 )
            break;
          v3 = 0;
        }
        else
        {
          Buffer = UnicodeString.Buffer;
        }
      }
      ++v5;
    }
    while ( v5 < v4 );
    if ( Buffer )
      RtlFreeUnicodeString(&UnicodeString);
  }
  return v3;
}
