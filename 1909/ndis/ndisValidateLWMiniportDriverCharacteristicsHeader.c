/*
 * XREFs of ndisValidateLWMiniportDriverCharacteristicsHeader @ 0x1C0116608
 * Callers:
 *     NdisLWMRegisterMiniportDriver @ 0x1C009D9E0 (NdisLWMRegisterMiniportDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C007F0C4 (WPP_RECORDER_SF_DDDDDDDD.c)
 *     WPP_RECORDER_SF_DDZ @ 0x1C007F23C (WPP_RECORDER_SF_DDZ.c)
 */

__int64 __fastcall ndisValidateLWMiniportDriverCharacteristicsHeader(unsigned __int8 *a1, const WCHAR *a2)
{
  const WCHAR *v2; // rax
  int v3; // ebx
  WCHAR *v4; // rdi
  __int64 v5; // r8
  char v6; // r10
  int v8; // [rsp+20h] [rbp-58h]

  v2 = (const WCHAR *)&unk_1C00CE790;
  v3 = a1[5];
  v4 = (WCHAR *)a2;
  v5 = 0LL;
  v6 = 0;
  while ( (v3 | (a1[4] << 16)) != *(_DWORD *)v2 )
  {
    v2 += 4;
    a2 = L"DefaultFilterSettings";
    if ( v2 == L"DefaultFilterSettings" )
      goto LABEL_6;
  }
  v5 = *((unsigned __int8 *)v2 + 5);
  v6 = *((_BYTE *)v2 + 4);
LABEL_6:
  if ( (_DWORD)v5 == 1 )
  {
    if ( *a1 == 0xC7 && *((_WORD *)a1 + 1) >= 0x78u && a1[1] )
    {
      *(_BYTE *)v4 = v6;
      return 0LL;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDDDDDDD(*((_QWORD *)WPP_GLOBAL_Control + 8), *a1, 120LL, 0x2Bu, v8);
      return 3221291013LL;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (__int64)a2,
        v5,
        0x2Au,
        v8,
        a1[4],
        v3,
        (unsigned __int16 *)a1 + 8);
    return 3221291012LL;
  }
}
