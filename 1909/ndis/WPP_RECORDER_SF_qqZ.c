/*
 * XREFs of WPP_RECORDER_SF_qqZ @ 0x1C003CFC8
 * Callers:
 *     ?ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007C5B8 (-ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012C44C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qqZ(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        char a7,
        unsigned __int16 *a8)
{
  const wchar_t *v9; // rsi
  unsigned __int64 v10; // rdi
  const wchar_t *v14; // rbx
  int v15; // eax
  bool v16; // zf
  __int64 v18; // rdx
  const wchar_t *v19; // rcx
  const wchar_t *v20; // rax
  int v21; // [rsp+20h] [rbp-78h]

  v9 = L"NULL";
  v10 = (unsigned __int64)a3 >> 16;
  v14 = a8;
  v15 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v10 + ((unsigned __int16)(a3 - 1) >> 5) + 11);
  if ( _bittest(&v15, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v10 + 41) >= a2 )
  {
    if ( a8 )
      v18 = *a8;
    else
      v18 = 8LL;
    if ( a8 && *a8 )
      v19 = (const wchar_t *)*((_QWORD *)a8 + 1);
    else
      v19 = L"NULL";
    v20 = a8;
    if ( !a8 )
      v20 = L"\b";
    ndisWppFastTraceMessage(a5, a4, &a6, 8LL, &a7, 8LL, v20, 2LL, v19, v18, 0LL);
  }
  v16 = v14 == 0LL;
  if ( v14 )
  {
    if ( *v14 )
      v9 = (const wchar_t *)*((_QWORD *)v14 + 1);
    v16 = v14 == 0LL;
  }
  if ( v16 )
    v14 = L"\b";
  LOWORD(v21) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v21, &a6, 8LL, &a7, 8LL, v14, 2LL, v9);
}
