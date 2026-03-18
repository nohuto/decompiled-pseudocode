/*
 * XREFs of ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x1C005205C
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C0051768 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C010A590 (-InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     ?DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C00A8074 (-DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C010F8F0 (_TlgCreateSz.c)
 *     ?OrientationToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C0185FA0 (-OrientationToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void InputConfig::TraceCurrentConfig(void)
{
  CInputConfig *v0; // rsi
  CInputConfig *v1; // rbx
  CInputConfig *i; // r14
  _QWORD **v3; // rbx
  _QWORD *j; // rdi
  __int64 v5; // rdx
  int v6; // r9d
  unsigned int v7; // ecx
  const CHAR *v8; // rax
  __int64 v10; // rdx
  int v11; // r9d
  int v12; // [rsp+38h] [rbp-D0h] BYREF
  int v13; // [rsp+3Ch] [rbp-CCh] BYREF
  int v14; // [rsp+40h] [rbp-C8h] BYREF
  int v15; // [rsp+48h] [rbp-C0h] BYREF
  int v16; // [rsp+50h] [rbp-B8h] BYREF
  int v17; // [rsp+54h] [rbp-B4h] BYREF
  int v18; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  int *v20; // [rsp+88h] [rbp-80h]
  __int64 v21; // [rsp+90h] [rbp-78h]
  int *v22; // [rsp+98h] [rbp-70h]
  __int64 v23; // [rsp+A0h] [rbp-68h]
  int *v24; // [rsp+A8h] [rbp-60h]
  __int64 v25; // [rsp+B0h] [rbp-58h]
  int *v26; // [rsp+B8h] [rbp-50h]
  __int64 v27; // [rsp+C0h] [rbp-48h]
  int *v28; // [rsp+C8h] [rbp-40h]
  __int64 v29; // [rsp+D0h] [rbp-38h]
  __int64 v30; // [rsp+D8h] [rbp-30h]
  __int64 v31; // [rsp+E0h] [rbp-28h]
  __int64 v32; // [rsp+E8h] [rbp-20h]
  __int64 v33; // [rsp+F0h] [rbp-18h]
  int *v34; // [rsp+F8h] [rbp-10h]
  __int64 v35; // [rsp+100h] [rbp-8h]
  int *v36; // [rsp+108h] [rbp+0h]
  __int64 v37; // [rsp+110h] [rbp+8h]
  int *v38; // [rsp+118h] [rbp+10h]
  __int64 v39; // [rsp+120h] [rbp+18h]
  int *v40; // [rsp+128h] [rbp+20h]
  __int64 v41; // [rsp+130h] [rbp+28h]
  int *v42; // [rsp+138h] [rbp+30h]
  __int64 v43; // [rsp+140h] [rbp+38h]
  int *v44; // [rsp+148h] [rbp+40h]
  __int64 v45; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+158h] [rbp+50h] BYREF
  __int64 v47; // [rsp+168h] [rbp+60h]
  __int64 v48; // [rsp+170h] [rbp+68h]
  _QWORD *v49; // [rsp+178h] [rbp+70h]
  __int64 v50; // [rsp+180h] [rbp+78h]
  __int64 v51; // [rsp+188h] [rbp+80h]
  __int64 v52; // [rsp+190h] [rbp+88h]
  _QWORD *v53; // [rsp+198h] [rbp+90h]
  __int64 v54; // [rsp+1A0h] [rbp+98h]
  __int64 v55; // [rsp+1A8h] [rbp+A0h]
  __int64 v56; // [rsp+1B0h] [rbp+A8h]
  _QWORD *v57; // [rsp+1B8h] [rbp+B0h]
  __int64 v58; // [rsp+1C0h] [rbp+B8h]
  __int64 v59; // [rsp+1C8h] [rbp+C0h]
  __int64 v60; // [rsp+1D0h] [rbp+C8h]
  _QWORD *v61; // [rsp+1D8h] [rbp+D0h]
  __int64 v62; // [rsp+1E0h] [rbp+D8h]

  v0 = gpInputConfig;
  if ( gpInputConfig )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
    v1 = *(CInputConfig **)v0;
    for ( i = **(CInputConfig ***)v0; v1 != v0; i = *(CInputConfig **)i )
    {
      v3 = (_QWORD **)((char *)v1 + 16);
      if ( !v3 )
        break;
      v15 = *((_DWORD *)v3 + 299);
      if ( dword_1C020CB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 2uLL) )
      {
        v12 = *((_DWORD *)v3 + 1);
        v20 = &v12;
        v13 = *(_DWORD *)v3;
        v22 = &v13;
        v14 = *((_DWORD *)v3 + 2);
        v24 = &v14;
        v26 = &v15;
        v16 = *((unsigned __int8 *)v3 + 1192);
        v28 = &v16;
        v21 = 4LL;
        v23 = 4LL;
        v25 = 4LL;
        v27 = 4LL;
        v29 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E5BA6, 0LL, 0LL, 7u, &pData);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
      for ( j = v3[150]; j != v3 + 150 && j != (_QWORD *)-16LL; j = (_QWORD *)*j )
      {
        if ( (j[4] & 2) != 0 )
        {
          if ( dword_1C020CB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 2uLL) )
          {
            v7 = *((_DWORD *)j + 16);
            v22 = (int *)j + 5;
            v24 = (int *)(j + 3);
            v26 = (int *)j + 7;
            v28 = &v16;
            v30 = (__int64)j + 36;
            v32 = (__int64)j + 38;
            v15 = *((_DWORD *)j + 11);
            v34 = &v15;
            v14 = *((_DWORD *)j + 10);
            v36 = &v14;
            v13 = *((_DWORD *)j + 12);
            v38 = &v13;
            v12 = *((_DWORD *)j + 14);
            v40 = &v12;
            v18 = *((_DWORD *)j + 13);
            v42 = &v18;
            v17 = *((_DWORD *)j + 15);
            v44 = &v17;
            v20 = (int *)(j + 2);
            v21 = 4LL;
            v23 = 4LL;
            v25 = 4LL;
            v27 = 4LL;
            v16 = v6;
            v29 = 4LL;
            v31 = v5;
            v33 = v5;
            v35 = 4LL;
            v37 = 4LL;
            v39 = 4LL;
            v41 = 4LL;
            v43 = 4LL;
            v45 = 4LL;
            v8 = InputTraceLogging::OrientationToString(v7);
            TlgCreateSz(&pDesc, v8);
            v48 = 4LL;
            v49 = j + 9;
            v47 = (__int64)j + 68;
            v51 = (__int64)j + 76;
            v53 = j + 10;
            v55 = (__int64)j + 84;
            v57 = j + 11;
            v59 = (__int64)j + 92;
            v61 = j + 12;
            v50 = 4LL;
            v52 = 4LL;
            v54 = 4LL;
            v56 = 4LL;
            v58 = 4LL;
            v60 = 4LL;
            v62 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E59DB, 0LL, 0LL, 0x18u, &pData);
          }
        }
        else if ( dword_1C020CB50 > 4u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 2uLL) )
          {
            v20 = (int *)(j + 2);
            v22 = (int *)j + 5;
            v24 = (int *)(j + 3);
            v26 = (int *)j + 7;
            v28 = &v17;
            v30 = (__int64)j + 36;
            v32 = (__int64)j + 38;
            v21 = 4LL;
            v23 = 4LL;
            v25 = 4LL;
            v27 = 4LL;
            v17 = v11;
            v29 = 4LL;
            v31 = v10;
            v33 = v10;
            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E5B27, 0LL, 0LL, 9u, &pData);
          }
        }
        if ( *((_BYTE *)j + 392) )
          InputTraceLogging::InputConfig::DisplayPath((const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)(j + 50));
      }
      ExReleaseResourceLite(CInputConfig::slock);
      KeLeaveCriticalRegion();
      v1 = i;
    }
    ExReleaseResourceLite(CInputConfig::slock);
    KeLeaveCriticalRegion();
  }
}
