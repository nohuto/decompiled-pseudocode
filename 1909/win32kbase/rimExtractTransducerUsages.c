/*
 * XREFs of rimExtractTransducerUsages @ 0x1C01526B8
 * Callers:
 *     rimPopulateContactFrameData @ 0x1C0155FA0 (rimPopulateContactFrameData.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     rimHidP_GetUsageValue @ 0x1C0142D10 (rimHidP_GetUsageValue.c)
 */

__int64 __fastcall rimExtractTransducerUsages(__int64 a1, unsigned __int16 a2, char *a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rax
  _DWORD *v8; // rsi
  struct _HIDP_PREPARSED_DATA *v9; // rbx
  __int16 *v10; // r14
  int UsageValue; // r15d
  int v12; // r11d
  __int64 v13; // rcx
  __int16 v14; // ax
  int v15; // r9d
  int v16; // r10d
  int v17; // r11d
  __int64 v18; // rcx
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  BOOL v21; // [rsp+44h] [rbp-BCh] BYREF
  int v22; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  char *v25; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  int *v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  BOOL *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  __int64 v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  __int64 v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  int *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  int *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  __int64 v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  __int64 *v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  char **v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  __int64 *v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]

  v5 = *(_QWORD *)(a1 + 480);
  v25 = a3;
  LOWORD(v20) = a2;
  v8 = (_DWORD *)(a5 + 2828);
  v24 = v5;
  if ( !*(_DWORD *)(a5 + 2828) )
  {
    v9 = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a1 + 464) + 16LL);
    v10 = (__int16 *)(a5 + 2832);
    UsageValue = rimHidP_GetUsageValue(HidP_Input, 0xDu, a2, 0x5Bu, (unsigned int *)(a5 + 2828), v9, a3, a4);
    v12 = rimHidP_GetUsageValue(HidP_Input, 0xDu, v20, 0x92u, (unsigned int *)(a5 + 2832), v9, v25, a4);
    if ( (*(_DWORD *)(v24 + 312) & 0x10000) != 0 )
    {
      if ( UsageValue < 0 )
        return 0LL;
      if ( v12 >= 0 )
      {
        v13 = (unsigned int)*v8;
        if ( (_DWORD)v13 )
        {
          if ( *(_DWORD *)v10 )
          {
            v14 = *v10;
            *(_DWORD *)(a5 + 2824) = 1;
            *(_WORD *)(a5 + 2566) = v14;
            *(_QWORD *)(a5 + 2568) = v13;
          }
        }
      }
    }
    if ( UsageValue >= 0 && *v8 && hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v18 = *(_QWORD *)(a1 + 464);
      v28 = &v20;
      v20 = 1;
      v29 = 4LL;
      v21 = v17 >= 0;
      v30 = &v21;
      v32 = v18 + 110;
      v34 = v18 + 112;
      v36 = &v22;
      v23 = *(_DWORD *)v10;
      v38 = &v23;
      v40 = a5 + 2824;
      LODWORD(v24) = *(_DWORD *)(a5 + 48);
      v42 = &v24;
      v44 = &v25;
      v46 = &v26;
      v31 = 4LL;
      v33 = 2LL;
      v35 = 2LL;
      v22 = v15;
      v37 = 4LL;
      v39 = 4LL;
      v41 = 4LL;
      v43 = 4LL;
      LODWORD(v25) = v16;
      v45 = 4LL;
      v26 = 2048LL;
      v47 = 8LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01E3AC2, 0LL, 0LL, 0xCu, &pData);
    }
  }
  return 0LL;
}
