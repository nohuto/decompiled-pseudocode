/*
 * XREFs of ?HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTIVITY_PROPERTIES@@KKE@Z @ 0x180025FA0
 * Callers:
 *     ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x18001028C (-HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PE.c)
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180011F4C (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x180018D00 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 *     ?HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x18003A3F4 (-HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K.c)
 * Callees:
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

void __fastcall HampSrvTraceActivityCreateStop(
        int a1,
        __int64 a2,
        struct _HAM_CLIENT_CONTEXT *a3,
        const unsigned __int16 *a4,
        unsigned int a5,
        union _RM_SID *a6,
        char a7,
        struct _HAM_ACTIVITY_PROPERTIES *a8,
        unsigned int a9,
        unsigned int a10,
        char a11)
{
  union _RM_SID *v11; // r11
  __int64 v13; // rax
  __int16 *v14; // r8
  __int16 *v15; // rdx
  __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  int v20; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v21; // [rsp+3Ch] [rbp-C4h] BYREF
  _DWORD v22[2]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  void *v25; // [rsp+70h] [rbp-90h]
  int v26; // [rsp+78h] [rbp-88h]
  int v27; // [rsp+7Ch] [rbp-84h]
  int *v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  __int64 *v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]
  const unsigned __int16 *v32; // [rsp+A0h] [rbp-60h]
  int v33; // [rsp+A8h] [rbp-58h]
  int v34; // [rsp+ACh] [rbp-54h]
  unsigned int *v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  char *v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  __int16 *v39; // [rsp+D0h] [rbp-30h]
  int v40; // [rsp+D8h] [rbp-28h]
  int v41; // [rsp+DCh] [rbp-24h]
  __int16 *v42; // [rsp+E0h] [rbp-20h]
  int v43; // [rsp+E8h] [rbp-18h]
  int v44; // [rsp+ECh] [rbp-14h]
  int *v45; // [rsp+F0h] [rbp-10h]
  __int64 v46; // [rsp+F8h] [rbp-8h]
  int *v47; // [rsp+100h] [rbp+0h]
  __int64 v48; // [rsp+108h] [rbp+8h]
  unsigned int *v49; // [rsp+110h] [rbp+10h]
  __int64 v50; // [rsp+118h] [rbp+18h]
  _DWORD *v51; // [rsp+120h] [rbp+20h]
  __int64 v52; // [rsp+128h] [rbp+28h]
  char *v53; // [rsp+130h] [rbp+30h]
  __int64 v54; // [rsp+138h] [rbp+38h]
  union _RM_SID *v55; // [rsp+140h] [rbp+40h]
  int v56; // [rsp+148h] [rbp+48h]
  int v57; // [rsp+14Ch] [rbp+4Ch]
  int v58; // [rsp+170h] [rbp+70h] BYREF
  __int64 v59; // [rsp+178h] [rbp+78h] BYREF

  v59 = a2;
  v58 = a1;
  v11 = a6;
  if ( !a6 )
    v11 = (struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 2548);
  if ( dword_1800AB2C0 > 4u && (byte_1800AB2D0 & 8) != 0 && (qword_1800AB2D8 & 8) == qword_1800AB2D8 )
  {
    v28 = &v58;
    v29 = 4LL;
    v30 = &v59;
    LODWORD(v13) = 0;
    v31 = 8LL;
    if ( a4 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a4[v13] );
    }
    v34 = 0;
    v33 = 2 * v13 + 2;
    v14 = &word_18008DA4C;
    v18 = a5;
    v15 = &word_18008DA4C;
    if ( !a4 )
      a4 = (const unsigned __int16 *)&word_18008DA4C;
    v36 = 4LL;
    v32 = a4;
    v35 = &v18;
    v37 = &a7;
    LODWORD(v16) = 0;
    v38 = 8LL;
    if ( a8 != (struct _HAM_ACTIVITY_PROPERTIES *)-12LL )
    {
      v15 = (__int16 *)((char *)a8 + 12);
      v16 = -1LL;
      do
        ++v16;
      while ( *((_WORD *)a8 + v16 + 6) );
    }
    v39 = v15;
    v40 = 2 * v16 + 2;
    v41 = 0;
    LODWORD(v16) = 0;
    if ( a8 != (struct _HAM_ACTIVITY_PROPERTIES *)-140LL )
    {
      v14 = (__int16 *)((char *)a8 + 140);
      v16 = -1LL;
      do
        ++v16;
      while ( *((_WORD *)a8 + v16 + 70) );
    }
    v42 = v14;
    v19 = *(_DWORD *)a8;
    v45 = &v19;
    v43 = 2 * v16 + 2;
    v44 = 0;
    v46 = 4LL;
    if ( a3 )
      v17 = *((_DWORD *)a3 + 37);
    else
      v17 = 0;
    v20 = v17;
    v47 = &v20;
    v21 = a9;
    v49 = &v21;
    v22[0] = a10;
    v51 = v22;
    v53 = &a11;
    LOBYTE(v17) = *((_BYTE *)v11 + 1);
    v48 = 4LL;
    v50 = 4LL;
    v52 = 4LL;
    v54 = 1LL;
    if ( (unsigned __int8)v17 > 0xFu )
      v17 = 15;
    else
      v17 = (unsigned __int8)v17;
    v55 = v11;
    v56 = 4 * v17 + 8;
    v57 = 0;
    *(_DWORD *)&EventDescriptor.Level = 516;
    UserData.Ptr = (ULONGLONG)off_1800AB2C8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 8LL;
    UserData.Size = *(unsigned __int16 *)off_1800AB2C8;
    v25 = &unk_1800981CD;
    UserData.Reserved = 2;
    v26 = 190;
    v27 = 1;
    v22[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0xFu, &UserData);
  }
}
