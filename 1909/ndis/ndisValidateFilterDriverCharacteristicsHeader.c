/*
 * XREFs of ndisValidateFilterDriverCharacteristicsHeader @ 0x1C0109554
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C0037390 (NdisFRegisterFilterDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C007F0C4 (WPP_RECORDER_SF_DDDDDDDD.c)
 *     WPP_RECORDER_SF_DDZ @ 0x1C007F23C (WPP_RECORDER_SF_DDZ.c)
 */

__int64 __fastcall ndisValidateFilterDriverCharacteristicsHeader(unsigned __int8 *a1, const WCHAR *a2)
{
  unsigned __int8 v2; // r11
  const WCHAR *v3; // rax
  int v4; // ebx
  unsigned int v5; // r10d
  WCHAR *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r8
  unsigned __int16 v10; // dx
  int v11; // [rsp+20h] [rbp-58h]

  v2 = a1[4];
  v3 = (const WCHAR *)&unk_1C00CE790;
  v4 = a1[5];
  v5 = 0;
  *(_DWORD *)a2 = 0;
  v6 = (WCHAR *)a2;
  v7 = v4 | (v2 << 16);
  while ( (_DWORD)v7 != *(_DWORD *)v3 )
  {
    v3 += 4;
    a2 = L"DefaultFilterSettings";
    if ( v3 == L"DefaultFilterSettings" )
      goto LABEL_6;
  }
  v5 = *((unsigned __int8 *)v3 + 6);
LABEL_6:
  switch ( v5 )
  {
    case 1u:
      v10 = *((_WORD *)a1 + 1);
      LODWORD(v8) = v10;
      if ( v10 >= 0xE0u )
        LODWORD(v8) = 224;
      goto LABEL_12;
    case 2u:
      v8 = 224LL;
      break;
    case 3u:
      v8 = 240LL;
      break;
    default:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (__int64)a2,
          v7,
          0x2Cu,
          v11,
          v2,
          v4,
          (unsigned __int16 *)a1 + 8);
      return 3221291012LL;
  }
  if ( *a1 == 0x8B && *((unsigned __int16 *)a1 + 1) >= (unsigned int)v8 && a1[1] >= v5 )
  {
LABEL_12:
    *(_DWORD *)v6 = v8;
    return 0LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDDDDDDD(*((_QWORD *)WPP_GLOBAL_Control + 8), *a1, v8, 0x2Du, v11);
  return 3221291013LL;
}
