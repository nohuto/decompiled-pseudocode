/*
 * XREFs of ?UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C0130DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0055368 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0055808 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C008DB54 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C008DD04 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C008E570 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?vClient@UMPDOBJ@@QEAAXPEAX@Z @ 0x1C00910BC (-vClient@UMPDOBJ@@QEAAXPEAX@Z.c)
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?vKeepIt@SURFREF@@QEAAXXZ @ 0x1C0257584 (-vKeepIt@SURFREF@@QEAAXXZ.c)
 */

HSURF __fastcall UMPDDrvEnableSurface(struct DHPDEV__ *a1)
{
  UMPDOBJ *v2; // rbx
  HSURF v3; // rdi
  int v4; // eax
  HSURF v5; // rsi
  int v6; // eax
  UINT32 cData[2]; // [rsp+28h] [rbp-E0h]
  __int64 v9; // [rsp+38h] [rbp-D0h] BYREF
  HSURF v10; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+48h] [rbp-C0h] BYREF
  UMPDOBJ *v12; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v13[32]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+78h] [rbp-90h]
  _QWORD v15[5]; // [rsp+80h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *v17; // [rsp+C8h] [rbp-40h]
  __int64 v18; // [rsp+D0h] [rbp-38h]
  __int64 *v19; // [rsp+D8h] [rbp-30h]
  __int64 v20; // [rsp+E0h] [rbp-28h]
  char *v21; // [rsp+E8h] [rbp-20h]
  __int64 v22; // [rsp+F0h] [rbp-18h]
  __int64 *v23; // [rsp+F8h] [rbp-10h]
  __int64 v24; // [rsp+100h] [rbp-8h]

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v12);
  memset(v15, 0, 0x20uLL);
  v2 = v12;
  v3 = 0LL;
  if ( v12 )
  {
    v15[0] = 0x300000020LL;
    v15[2] = *(_QWORD *)v12;
    v15[3] = a1;
    cData[0] = 8;
    v4 = UMPDOBJ::Thunk(v12, v15, 0x20u, &v10, *(size_t *)cData);
    v5 = v10;
    if ( v4 == -1 )
      v5 = 0LL;
    if ( v5 )
    {
      SURFREF::SURFREF((SURFREF *)v13, v5);
      if ( v14 )
      {
        if ( !*(_QWORD *)(v14 + 48) )
        {
          if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
          {
            v9 = 0x100012094LL;
            v19 = &v11;
            v17 = &v9;
            v21 = (char *)&v9 + 4;
            v23 = (__int64 *)&v10;
            v18 = 4LL;
            v11 = 0x1000000LL;
            v20 = 8LL;
            v22 = 4LL;
            LODWORD(v10) = 0;
            v24 = 4LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D707D, 0LL, 0LL, 6u, &pData);
          }
LABEL_14:
          SURFREF::~SURFREF((SURFREF *)v13);
          goto LABEL_29;
        }
        v6 = *(_DWORD *)(v14 + 112);
        if ( (v6 & 0x40000) == 0 )
        {
          if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
          {
            LODWORD(v10) = 71980;
            v19 = &v11;
            v17 = (__int64 *)&v10;
            v21 = (char *)&v9 + 4;
            v23 = &v9;
            v18 = 4LL;
            v11 = 0x1000000LL;
            v20 = 8LL;
            v22 = 4LL;
            v9 = 0x100000000LL;
            v24 = 4LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D707D, 0LL, 0LL, 6u, &pData);
          }
          goto LABEL_14;
        }
        if ( *(_WORD *)(v14 + 100) == 1 && ((v6 & 1) == 0 || (v6 & 0x20) == 0 || (v6 & 8) == 0) )
          v5 = 0LL;
        if ( (v6 & 0x4000000) != 0 )
          v5 = 0LL;
        if ( *((_DWORD *)v2 + 106) )
          UMPDOBJ::vClient((UMPDOBJ *)1, (void *)(v14 + 24));
        if ( v5 )
          SURFREF::vKeepIt((SURFREF *)v13);
      }
      else
      {
        v5 = 0LL;
      }
      SURFREF::~SURFREF((SURFREF *)v13);
    }
    v3 = v5;
  }
LABEL_29:
  XUMPDOBJ::~XUMPDOBJ(&v12);
  return v3;
}
