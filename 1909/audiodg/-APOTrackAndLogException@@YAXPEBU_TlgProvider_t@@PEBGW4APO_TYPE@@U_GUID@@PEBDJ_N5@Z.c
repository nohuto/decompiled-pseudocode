/*
 * XREFs of ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEBDJ_N5@Z @ 0x140042A50
 * Callers:
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x140042E44 (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 * Callees:
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x140007D0C (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z.c)
 *     _TlgKeywordOn @ 0x14000EEB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140014224 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1400143CC (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x14002BFF8 (_TlgCreateSz.c)
 */

void __fastcall APOTrackAndLogException(__int64 a1, const WCHAR *a2, int a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v8; // rbx
  const CHAR *v9; // rdx
  LPCSTR v10; // r11
  LPCGUID v11; // r9
  TraceLoggingHProvider v12; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-39h] BYREF
  __int64 v15; // [rsp+60h] [rbp-29h]
  int v16; // [rsp+68h] [rbp-21h]
  int v17; // [rsp+6Ch] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+70h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+80h] [rbp-9h] BYREF
  char *v20; // [rsp+90h] [rbp+7h]
  int v21; // [rsp+98h] [rbp+Fh]
  int v22; // [rsp+9Ch] [rbp+13h]

  v8 = a3;
  if ( *(_DWORD *)g_SysFxUtilTlp > 2u && TlgKeywordOn(g_SysFxUtilTlp, 0x400000000000uLL) )
  {
    if ( (unsigned int)v8 >= 4 )
      v9 = "Unknown";
    else
      v9 = off_140068420[v8];
    TlgCreateSz(&pDesc, v9);
    v17 = 0;
    v15 = a4;
    v16 = 16;
    TlgCreateWsz(&v18, a2);
    TlgCreateSz(&v19, v10);
    v22 = 0;
    v20 = &a6;
    v21 = 4;
    TlgWrite(v12, &unk_14006FD00, 0LL, v11, 7u, &pData);
  }
  if ( a2 )
    TrackSystemEffectBehavior((__int64)a2, v8, 0, 1, a4, SLODWORD(FLOAT_1_0));
}
