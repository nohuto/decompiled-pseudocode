/*
 * XREFs of ndisValidateMiniportDriverCharacteristicsHeader @ 0x1C010945C
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0036F60 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C00695B4 (WPP_RECORDER_SF_DD_ea_1C00695B4.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C007F0C4 (WPP_RECORDER_SF_DDDDDDDD.c)
 *     ?NdisTraceLoggingLogoFailure@@YAXW4NdisTLLogoFailureReason@@PEBU_UNICODE_STRING@@_K@Z @ 0x1C0123570 (-NdisTraceLoggingLogoFailure@@YAXW4NdisTLLogoFailureReason@@PEBU_UNICODE_STRING@@_K@Z.c)
 */

__int64 __fastcall ndisValidateMiniportDriverCharacteristicsHeader(
        unsigned __int8 *a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4,
        unsigned int *a5)
{
  unsigned int v5; // esi
  unsigned __int8 *v7; // rbx
  unsigned int v10; // edi
  const WCHAR *v11; // rax
  int v13; // [rsp+20h] [rbp-78h]
  __int64 v14; // [rsp+30h] [rbp-68h]

  v5 = 0;
  v7 = a1;
  LOBYTE(a1) = a1[4];
  *a5 = 0;
  v10 = 152;
  if ( __PAIR16__(v7[5], (unsigned __int8)a1) == 21254 && (unsigned __int16)(*((_WORD *)v7 + 1) - 152) <= 7u )
  {
    *a3 = 6;
    *a4 = 70;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0x26u,
        (struct _GUID *)&WPP_9b3b3d942ac1381da64d129aaaed6f79_Traceguids,
        6,
        83);
    if ( a2 )
      NdisTraceLoggingLogoFailure(a1, a2, *((unsigned __int16 *)v7 + 1));
  }
  else
  {
    *a3 = (unsigned __int8)a1;
    *a4 = v7[5];
  }
  v11 = (const WCHAR *)&unk_1C00CE790;
  while ( (*a4 | (*a3 << 16)) != *(_DWORD *)v11 )
  {
    v11 += 4;
    if ( v11 == L"DefaultFilterSettings" )
      goto LABEL_8;
  }
  v5 = *((unsigned __int8 *)v11 + 4);
LABEL_8:
  switch ( v5 )
  {
    case 1u:
      v10 = 136;
      goto LABEL_12;
    case 2u:
LABEL_10:
      if ( *v7 != 0x8A || v7[1] < v5 )
      {
LABEL_25:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDDDDDDD(*((_QWORD *)WPP_GLOBAL_Control + 8), *v7, v7[5], 0x28u, v13);
        return 3221291013LL;
      }
LABEL_12:
      if ( *((unsigned __int16 *)v7 + 1) >= v10 )
      {
        *a5 = v10;
        return 0LL;
      }
      goto LABEL_25;
    case 3u:
      v10 = 160;
      goto LABEL_10;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v14) = v7[5];
    WPP_RECORDER_SF_DD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      1u,
      0x27u,
      (struct _GUID *)&WPP_9b3b3d942ac1381da64d129aaaed6f79_Traceguids,
      v7[4],
      v14);
  }
  return 3221291012LL;
}
