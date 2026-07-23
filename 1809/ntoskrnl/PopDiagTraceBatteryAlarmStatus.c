/*
 * XREFs of PopDiagTraceBatteryAlarmStatus @ 0x1408719A4
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14071B3E8 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     _TlgCreateSz @ 0x140003938 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceBatteryAlarmStatus(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned __int64 v3; // rax
  const CHAR *v5; // rsi
  int v6; // edi
  char v7; // r9
  int v8; // r10d
  char *v9; // r11
  __int64 v10; // rbx
  int v11; // r9d
  int v12; // r10d
  char v14; // [rsp+38h] [rbp-D0h] BYREF
  char v15; // [rsp+39h] [rbp-CFh] BYREF
  int v16; // [rsp+3Ch] [rbp-CCh] BYREF
  int v17; // [rsp+40h] [rbp-C8h] BYREF
  int v18; // [rsp+44h] [rbp-C4h] BYREF
  int v19; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+4Ch] [rbp-BCh] BYREF
  int v21; // [rsp+50h] [rbp-B8h] BYREF
  int v22; // [rsp+54h] [rbp-B4h] BYREF
  int v23; // [rsp+58h] [rbp-B0h] BYREF
  int v24; // [rsp+5Ch] [rbp-ACh] BYREF
  int v25; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-80h] BYREF
  int *v28; // [rsp+98h] [rbp-70h]
  __int64 v29; // [rsp+A0h] [rbp-68h]
  int *v30; // [rsp+A8h] [rbp-60h]
  __int64 v31; // [rsp+B0h] [rbp-58h]
  int *v32; // [rsp+B8h] [rbp-50h]
  __int64 v33; // [rsp+C0h] [rbp-48h]
  int *v34; // [rsp+C8h] [rbp-40h]
  __int64 v35; // [rsp+D0h] [rbp-38h]
  int *v36; // [rsp+D8h] [rbp-30h]
  __int64 v37; // [rsp+E0h] [rbp-28h]
  int *v38; // [rsp+E8h] [rbp-20h]
  __int64 v39; // [rsp+F0h] [rbp-18h]
  int *v40; // [rsp+F8h] [rbp-10h]
  __int64 v41; // [rsp+100h] [rbp-8h]
  int *v42; // [rsp+108h] [rbp+0h]
  __int64 v43; // [rsp+110h] [rbp+8h]
  int *v44; // [rsp+118h] [rbp+10h]
  __int64 v45; // [rsp+120h] [rbp+18h]
  int *v46; // [rsp+128h] [rbp+20h]
  __int64 v47; // [rsp+130h] [rbp+28h]
  int *v48; // [rsp+138h] [rbp+30h]
  __int64 v49; // [rsp+140h] [rbp+38h]
  int *v50; // [rsp+148h] [rbp+40h]
  __int64 v51; // [rsp+150h] [rbp+48h]

  v3 = *a3;
  if ( (unsigned int)v3 <= 1 )
  {
    v5 = IndexToActionName[v3];
    v6 = 0;
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      LOBYTE(v3) = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
      if ( (_BYTE)v3 )
      {
        v21 = dword_140418B30;
        v15 = *v9;
        v23 = *((_DWORD *)v9 + 1);
        v24 = *((_DWORD *)v9 + 5);
        v25 = *((_DWORD *)v9 + 2);
        v16 = *((_DWORD *)v9 + 3);
        v17 = *((_DWORD *)v9 + 4);
        v18 = *(_DWORD *)(a1 + 4);
        v19 = *(_DWORD *)(a1 + 16);
        v20 = (unsigned __int8)byte_140418AC0;
        v14 = v7;
        v22 = v8;
        TlgCreateSz(&pDesc, v5);
        v29 = 1LL;
        v30 = &v21;
        v28 = (int *)&v14;
        v32 = &v22;
        v34 = (int *)&v15;
        v36 = &v23;
        v38 = &v24;
        v40 = &v25;
        v42 = &v16;
        v44 = &v17;
        v46 = &v18;
        v48 = &v19;
        v50 = &v20;
        v31 = 4LL;
        v33 = 4LL;
        v35 = 1LL;
        v37 = 4LL;
        v39 = 4LL;
        v41 = 4LL;
        v43 = 4LL;
        v45 = 4LL;
        v47 = 4LL;
        v49 = 4LL;
        v51 = 4LL;
        LOBYTE(v3) = TlgWrite(&pCallbackContext, &unk_140370829, 0LL, 0LL, 0xFu, &pData);
      }
    }
    if ( (unsigned int)dword_1404189B4 > 1 )
    {
      v10 = qword_1404189D0;
      v3 = (unsigned __int64)&qword_1404189D0;
      while ( (__int64 *)v10 != &qword_1404189D0 )
      {
        ++v6;
        if ( *(_DWORD *)(v10 + 64) )
          v3 = (unsigned __int64)&qword_1404189D0;
        if ( pCallbackContext.LevelPlus1 > 5 )
        {
          if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
          {
            v18 = *(_DWORD *)(v10 + 88);
            v16 = *(_DWORD *)(v10 + 68);
            v20 = v6;
            v19 = v11;
            v17 = v12;
            TlgCreateSz(&pDesc, v5);
            v29 = 4LL;
            v30 = &v19;
            v28 = &v20;
            v32 = &v18;
            v34 = &v17;
            v36 = &v16;
            v31 = 4LL;
            v33 = 4LL;
            v35 = 4LL;
            v37 = 4LL;
            TlgWrite(&pCallbackContext, &unk_140370B31, 0LL, 0LL, 8u, &pData);
          }
          v3 = (unsigned __int64)&qword_1404189D0;
        }
        v10 = *(_QWORD *)v10;
      }
    }
  }
  return v3;
}
