/*
 * XREFs of MiLogTrimWs @ 0x140131118
 * Callers:
 *     MiTrimWorkingSet @ 0x140130F08 (MiTrimWorkingSet.c)
 * Callees:
 *     _TlgCreateSz @ 0x140003938 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWriteEx @ 0x140100938 (_TlgWriteEx.c)
 *     MiFillLogProcessInfo @ 0x1401311C4 (MiFillLogProcessInfo.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall MiLogTrimWs(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  const struct _TlgProvider_t *v9; // r11
  _QWORD *v10; // r9
  int v11; // r10d
  char v12; // al
  ULONG v13; // r10d
  TraceLoggingHProvider v14; // r11
  char v15; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+44h] [rbp-BCh] BYREF
  int v17; // [rsp+48h] [rbp-B8h] BYREF
  int v18; // [rsp+4Ch] [rbp-B4h] BYREF
  LPCSTR psz; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+68h] [rbp-98h] BYREF
  __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  __int64 v24; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  char *v26; // [rsp+A0h] [rbp-60h]
  int v27; // [rsp+A8h] [rbp-58h]
  int v28; // [rsp+ACh] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-50h] BYREF
  int *v30; // [rsp+C0h] [rbp-40h]
  int v31; // [rsp+C8h] [rbp-38h]
  int v32; // [rsp+CCh] [rbp-34h]
  __int64 *v33; // [rsp+D0h] [rbp-30h]
  int v34; // [rsp+D8h] [rbp-28h]
  int v35; // [rsp+DCh] [rbp-24h]
  __int64 *v36; // [rsp+E0h] [rbp-20h]
  int v37; // [rsp+E8h] [rbp-18h]
  int v38; // [rsp+ECh] [rbp-14h]
  __int64 *v39; // [rsp+F0h] [rbp-10h]
  int v40; // [rsp+F8h] [rbp-8h]
  int v41; // [rsp+FCh] [rbp-4h]
  __int64 *v42; // [rsp+100h] [rbp+0h]
  int v43; // [rsp+108h] [rbp+8h]
  int v44; // [rsp+10Ch] [rbp+Ch]
  __int64 *v45; // [rsp+110h] [rbp+10h]
  int v46; // [rsp+118h] [rbp+18h]
  int v47; // [rsp+11Ch] [rbp+1Ch]
  int *v48; // [rsp+120h] [rbp+20h]
  int v49; // [rsp+128h] [rbp+28h]
  int v50; // [rsp+12Ch] [rbp+2Ch]
  int *v51; // [rsp+130h] [rbp+30h]
  int v52; // [rsp+138h] [rbp+38h]
  int v53; // [rsp+13Ch] [rbp+3Ch]

  if ( hProvider )
  {
    MiFillLogProcessInfo(a1, &v16, &psz, *(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(a1 + 174)));
    if ( v9->LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(v9, 1uLL) )
      {
        v12 = *(_BYTE *)(a1 + 184) & 7;
        v28 = 0;
        v15 = v12;
        v22 = v10[912];
        v23 = v10[960];
        v24 = v10[974];
        v18 = a5;
        v26 = &v15;
        v20 = a2;
        v21 = a3;
        v17 = a4;
        v27 = v11;
        TlgCreateSz(&pDesc, psz);
        v32 = 0;
        v35 = 0;
        v38 = 0;
        v41 = 0;
        v44 = 0;
        v47 = 0;
        v50 = 0;
        v53 = 0;
        v33 = &v20;
        v36 = &v21;
        v39 = &v22;
        v42 = &v23;
        v45 = &v24;
        v48 = &v17;
        v30 = &v16;
        v51 = &v18;
        v31 = 4;
        v34 = 8;
        v37 = 8;
        v40 = 8;
        v43 = 8;
        v46 = 8;
        v49 = 4;
        v52 = 4;
        TlgWriteEx(v14, &unk_14036EFC9, 0LL, v13, 0LL, 0LL, 0xCu, &pData);
      }
    }
  }
}
