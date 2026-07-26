/*
 * XREFs of ndisValidateProtocolDriverCharacteristicsHeader @ 0x1C0109614
 * Callers:
 *     NdisRegisterProtocolDriver @ 0x1C0037860 (NdisRegisterProtocolDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C007EEF4 (WPP_RECORDER_SF_DDDDDDDD.c)
 *     WPP_RECORDER_SF_DDZ @ 0x1C007F06C (WPP_RECORDER_SF_DDZ.c)
 */

__int64 __fastcall ndisValidateProtocolDriverCharacteristicsHeader(unsigned __int16 *a1, unsigned int *a2)
{
  unsigned __int8 v2; // bl
  const WCHAR *v3; // rax
  int v4; // edi
  int v5; // r11d
  unsigned int v6; // r10d
  int v8; // [rsp+20h] [rbp-58h]

  v2 = *((_BYTE *)a1 + 4);
  v3 = (const WCHAR *)&unk_1C00CE790;
  v4 = *((unsigned __int8 *)a1 + 5);
  v5 = 0;
  *a2 = 0;
  while ( (v4 | (v2 << 16)) != *(_DWORD *)v3 )
  {
    v3 += 4;
    if ( v3 == L"DefaultFilterSettings" )
      goto LABEL_6;
  }
  v5 = *((unsigned __int8 *)v3 + 7);
LABEL_6:
  if ( v5 == 1 )
  {
    v6 = 120;
    goto LABEL_10;
  }
  if ( v5 == 2 )
  {
    v6 = 128;
    if ( *(_BYTE *)a1 != 0x95 || *((_BYTE *)a1 + 1) < 2u )
    {
LABEL_16:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDDDDDDD(*((_QWORD *)WPP_GLOBAL_Control + 8), *(unsigned __int8 *)a1, (__int64)a1, 0x2Fu, v8);
      return 3221291013LL;
    }
LABEL_10:
    if ( a1[1] >= v6 )
    {
      *a2 = v6;
      return 0LL;
    }
    goto LABEL_16;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDZ(*((_QWORD *)WPP_GLOBAL_Control + 8), (__int64)a2, (__int64)a1, 0x2Eu, v8, v2, v4, a1 + 8);
  return 3221291012LL;
}
