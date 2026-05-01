/*
 * XREFs of CrmLogActivityUpdate @ 0x180033CD0
 * Callers:
 *     CrmGlobalsRegistrationRundownHelper @ 0x1800339E8 (CrmGlobalsRegistrationRundownHelper.c)
 *     CrmActivityListenerCallback @ 0x180033AE0 (CrmActivityListenerCallback.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

char __fastcall CrmLogActivityUpdate(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        char a11)
{
  int v13; // edi
  bool v14; // al
  int v15; // eax
  int v16; // r9d
  int v17; // r10d
  int v18; // r11d
  bool v20; // [rsp+30h] [rbp-D0h] BYREF
  bool v21; // [rsp+31h] [rbp-CFh] BYREF
  bool v22; // [rsp+32h] [rbp-CEh] BYREF
  bool v23; // [rsp+33h] [rbp-CDh] BYREF
  int v24; // [rsp+34h] [rbp-CCh] BYREF
  int v25; // [rsp+38h] [rbp-C8h] BYREF
  int v26; // [rsp+3Ch] [rbp-C4h] BYREF
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+44h] [rbp-BCh] BYREF
  int v29; // [rsp+48h] [rbp-B8h] BYREF
  int v30; // [rsp+4Ch] [rbp-B4h] BYREF
  int v31; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+54h] [rbp-ACh] BYREF
  int v33; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+68h] [rbp-98h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  __int64 v37; // [rsp+78h] [rbp-88h] BYREF
  __int64 v38; // [rsp+80h] [rbp-80h] BYREF
  __int64 v39; // [rsp+88h] [rbp-78h] BYREF
  __int64 v40; // [rsp+90h] [rbp-70h] BYREF
  __int64 v41; // [rsp+98h] [rbp-68h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B0h] [rbp-50h] BYREF
  void *v44; // [rsp+C0h] [rbp-40h]
  int v45; // [rsp+C8h] [rbp-38h]
  int v46; // [rsp+CCh] [rbp-34h]
  UUID *v47; // [rsp+D0h] [rbp-30h]
  __int64 v48; // [rsp+D8h] [rbp-28h]
  __int64 *v49; // [rsp+E0h] [rbp-20h]
  __int64 v50; // [rsp+E8h] [rbp-18h]
  int *v51; // [rsp+F0h] [rbp-10h]
  __int64 v52; // [rsp+F8h] [rbp-8h]
  __int64 *v53; // [rsp+100h] [rbp+0h]
  __int64 v54; // [rsp+108h] [rbp+8h]
  int *v55; // [rsp+110h] [rbp+10h]
  __int64 v56; // [rsp+118h] [rbp+18h]
  bool *v57; // [rsp+120h] [rbp+20h]
  __int64 v58; // [rsp+128h] [rbp+28h]
  bool *v59; // [rsp+130h] [rbp+30h]
  __int64 v60; // [rsp+138h] [rbp+38h]
  int *v61; // [rsp+140h] [rbp+40h]
  __int64 v62; // [rsp+148h] [rbp+48h]
  int *v63; // [rsp+150h] [rbp+50h]
  __int64 v64; // [rsp+158h] [rbp+58h]
  int *v65; // [rsp+160h] [rbp+60h]
  __int64 v66; // [rsp+168h] [rbp+68h]
  __int64 *v67; // [rsp+170h] [rbp+70h]
  __int64 v68; // [rsp+178h] [rbp+78h]
  __int64 *v69; // [rsp+180h] [rbp+80h]
  __int64 v70; // [rsp+188h] [rbp+88h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+190h] [rbp+90h] BYREF
  UUID *v72; // [rsp+1B0h] [rbp+B0h]
  __int64 v73; // [rsp+1B8h] [rbp+B8h]
  __int64 *v74; // [rsp+1C0h] [rbp+C0h]
  __int64 v75; // [rsp+1C8h] [rbp+C8h]
  int *v76; // [rsp+1D0h] [rbp+D0h]
  __int64 v77; // [rsp+1D8h] [rbp+D8h]
  __int64 *v78; // [rsp+1E0h] [rbp+E0h]
  __int64 v79; // [rsp+1E8h] [rbp+E8h]
  int *v80; // [rsp+1F0h] [rbp+F0h]
  __int64 v81; // [rsp+1F8h] [rbp+F8h]
  bool *v82; // [rsp+200h] [rbp+100h]
  __int64 v83; // [rsp+208h] [rbp+108h]
  bool *v84; // [rsp+210h] [rbp+110h]
  __int64 v85; // [rsp+218h] [rbp+118h]
  int *v86; // [rsp+220h] [rbp+120h]
  __int64 v87; // [rsp+228h] [rbp+128h]
  int *v88; // [rsp+230h] [rbp+130h]
  __int64 v89; // [rsp+238h] [rbp+138h]
  int *v90; // [rsp+240h] [rbp+140h]
  __int64 v91; // [rsp+248h] [rbp+148h]
  __int64 *v92; // [rsp+250h] [rbp+150h]
  __int64 v93; // [rsp+258h] [rbp+158h]
  __int64 *v94; // [rsp+260h] [rbp+160h]
  __int64 v95; // [rsp+268h] [rbp+168h]

  v13 = *((_DWORD *)&unk_180075164 + 110 * a2);
  v14 = a7 != a8 && (a8 == v13 || a7 == v13);
  v15 = (a2 > 4) & (unsigned __int8)(a11 | v14);
  if ( v15 )
  {
    if ( dword_18009B128 > 5u )
    {
      LOBYTE(v15) = TlgKeywordOn((TraceLoggingHProvider)&dword_18009B128, 0x400000000000uLL);
      if ( (_BYTE)v15 )
      {
        v34 = a1;
        v24 = v18;
        v35 = a3;
        v25 = v16;
        v20 = a5 != 0;
        v21 = a6 != 0;
        v36 = a9;
        v37 = a10;
        v72 = &Uuid;
        v74 = &v34;
        v76 = &v24;
        v78 = &v35;
        v80 = &v25;
        v82 = &v20;
        v84 = &v21;
        v86 = &v26;
        v88 = &v27;
        v90 = &v28;
        v92 = &v36;
        v94 = &v37;
        v26 = v13;
        v27 = v17;
        v28 = a8;
        v73 = 16LL;
        v75 = 8LL;
        v77 = 4LL;
        v79 = 8LL;
        v81 = 4LL;
        v83 = 1LL;
        v85 = 1LL;
        v87 = 4LL;
        v89 = 4LL;
        v91 = 4LL;
        v93 = 8LL;
        v95 = 8LL;
        LOBYTE(v15) = TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008CCB9, 0LL, 0LL, 0xEu, &pData);
      }
    }
  }
  else if ( dword_18009B128 > 5u )
  {
    v40 = a9;
    v22 = a5 != 0;
    v41 = a10;
    v47 = &Uuid;
    v23 = a6 != 0;
    v38 = a1;
    v49 = &v38;
    v51 = &v29;
    v53 = &v39;
    v55 = &v30;
    v57 = &v22;
    v59 = &v23;
    v61 = &v31;
    v63 = &v32;
    v65 = &v33;
    v67 = &v40;
    v69 = &v41;
    v29 = a2;
    v39 = a3;
    v30 = a4;
    v31 = v13;
    v32 = a7;
    v33 = a8;
    v48 = 16LL;
    v50 = 8LL;
    v52 = 4LL;
    v54 = 8LL;
    v56 = 4LL;
    v58 = 1LL;
    v60 = 1LL;
    v62 = 4LL;
    v64 = 4LL;
    v66 = 4LL;
    v68 = 8LL;
    v70 = 8LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_18009B130;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18008CBF0 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_18009B130;
    v44 = &unk_18008CBFB;
    UserData.Reserved = 2;
    v45 = 189;
    v46 = 1;
    LOBYTE(v15) = EventWriteTransfer(qword_18009B148, &EventDescriptor, 0LL, 0LL, 0xEu, &UserData);
  }
  return v15;
}
