/*
 * XREFs of ??$LogAecEffectPolicy@$0EAAAAAAAAAAI@@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180052E2C
 * Callers:
 *     ?LogAecEffectPolicyInsertion@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180052DFC (-LogAecEffectPolicyInsertion@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioe.c)
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001E08C (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 */

void __fastcall LogAecEffectPolicy<70368744177672>(__int64 a1, const WCHAR *a2)
{
  __int64 v3; // r11
  LPCGUID v4; // r9
  __int64 v5; // r10
  LPCGUID v6; // r8
  int v7; // [rsp+30h] [rbp-D0h] BYREF
  int v8; // [rsp+34h] [rbp-CCh] BYREF
  int v9; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+60h] [rbp-A0h]
  __int64 v12; // [rsp+68h] [rbp-98h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-90h] BYREF
  int *v14; // [rsp+80h] [rbp-80h]
  __int64 v15; // [rsp+88h] [rbp-78h]
  __int64 v16; // [rsp+90h] [rbp-70h]
  __int64 v17; // [rsp+98h] [rbp-68h]
  __int64 v18; // [rsp+A0h] [rbp-60h]
  __int64 v19; // [rsp+A8h] [rbp-58h]
  __int64 v20; // [rsp+B0h] [rbp-50h]
  __int64 v21; // [rsp+B8h] [rbp-48h]
  __int64 v22; // [rsp+C0h] [rbp-40h]
  __int64 v23; // [rsp+C8h] [rbp-38h]
  __int64 v24; // [rsp+D0h] [rbp-30h]
  __int64 v25; // [rsp+D8h] [rbp-28h]
  __int64 v26; // [rsp+E0h] [rbp-20h]
  __int64 v27; // [rsp+E8h] [rbp-18h]
  __int64 v28; // [rsp+F0h] [rbp-10h]
  __int64 v29; // [rsp+F8h] [rbp-8h]
  __int64 v30; // [rsp+100h] [rbp+0h]
  __int64 v31; // [rsp+108h] [rbp+8h]
  __int64 v32; // [rsp+110h] [rbp+10h]
  __int64 v33; // [rsp+118h] [rbp+18h]
  __int64 v34; // [rsp+120h] [rbp+20h]
  __int64 v35; // [rsp+128h] [rbp+28h]
  __int64 v36; // [rsp+130h] [rbp+30h]
  __int64 v37; // [rsp+138h] [rbp+38h]
  __int64 v38; // [rsp+140h] [rbp+40h]
  __int64 v39; // [rsp+148h] [rbp+48h]
  int *v40; // [rsp+150h] [rbp+50h]
  __int64 v41; // [rsp+158h] [rbp+58h]
  int *v42; // [rsp+160h] [rbp+60h]
  __int64 v43; // [rsp+168h] [rbp+68h]

  if ( (unsigned int)hProvider > 4 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000008uLL) )
    {
      v11 = v3;
      v12 = 16LL;
      TlgCreateWsz(&pDesc, a2);
      v7 = (int)v4;
      v14 = &v7;
      v18 = v5 + 4;
      v20 = v5 + 8;
      v22 = v5 + 12;
      v24 = v5 + 16;
      v26 = v5 + 20;
      v28 = v5 + 32;
      v30 = v5 + 28;
      v32 = v5 + 24;
      v34 = v5 + 36;
      v36 = v5 + 40;
      v38 = v5 + 44;
      v8 = *(_DWORD *)(v5 + 60);
      v40 = &v8;
      v9 = *(_DWORD *)(v5 + 64);
      v42 = &v9;
      v15 = 4LL;
      v16 = v5;
      v17 = 4LL;
      v19 = 4LL;
      v21 = 4LL;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      v31 = 4LL;
      v33 = 4LL;
      v35 = 4LL;
      v37 = 4LL;
      v39 = 16LL;
      v41 = 4LL;
      v43 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801790B3, v6, v4, 0x13u, &pData);
    }
  }
}
