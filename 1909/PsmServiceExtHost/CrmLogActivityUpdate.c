/*
 * XREFs of CrmLogActivityUpdate @ 0x180032E90
 * Callers:
 *     CrmActivityListenerCallback @ 0x180032CA0 (CrmActivityListenerCallback.c)
 *     CrmGlobalsRegistrationRundownHelper @ 0x18003C9C8 (CrmGlobalsRegistrationRundownHelper.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

int __fastcall CrmLogActivityUpdate(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  char *v12; // rbx
  const void *v13; // rdx
  __int64 v14; // rax
  size_t v15; // r8
  int v18; // edx
  bool v20; // [rsp+30h] [rbp-D0h] BYREF
  bool v21; // [rsp+31h] [rbp-CFh] BYREF
  int Key; // [rsp+38h] [rbp-C8h] BYREF
  int v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+44h] [rbp-BCh] BYREF
  int v25; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  UUID *v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+98h] [rbp-68h]
  __int64 *v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  int *p_Key; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  __int64 *v38; // [rsp+C0h] [rbp-40h]
  __int64 v39; // [rsp+C8h] [rbp-38h]
  int *v40; // [rsp+D0h] [rbp-30h]
  __int64 v41; // [rsp+D8h] [rbp-28h]
  bool *v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  bool *v44; // [rsp+F0h] [rbp-10h]
  __int64 v45; // [rsp+F8h] [rbp-8h]
  int *v46; // [rsp+100h] [rbp+0h]
  __int64 v47; // [rsp+108h] [rbp+8h]
  int *v48; // [rsp+110h] [rbp+10h]
  __int64 v49; // [rsp+118h] [rbp+18h]
  int *v50; // [rsp+120h] [rbp+20h]
  __int64 v51; // [rsp+128h] [rbp+28h]
  __int64 *v52; // [rsp+130h] [rbp+30h]
  __int64 v53; // [rsp+138h] [rbp+38h]
  __int64 *v54; // [rsp+140h] [rbp+40h]
  __int64 v55; // [rsp+148h] [rbp+48h]

  Key = a2;
  v12 = (char *)&CrmPolicyTable + 536 * a2;
  v13 = 0LL;
  LODWORD(v14) = dword_1800ABF88;
  v15 = 0LL;
  if ( dword_1800ABF88 == 14 )
  {
    v13 = &CrmPolicyTable8828080Override;
    v15 = 1LL;
  }
  else if ( dword_1800ABF88 == 5 || dword_1800ABF88 == 11 )
  {
    goto LABEL_11;
  }
  if ( dword_1800ABF88 != 12 )
  {
    if ( !v13 )
      goto LABEL_6;
    goto LABEL_12;
  }
LABEL_11:
  v13 = &CrmPolicyTableXboxOverride;
  v15 = 3LL;
LABEL_12:
  v14 = (__int64)bsearch(&Key, v13, v15, 0x218uLL, CrmPolicyTableCompare);
  if ( v14 )
    v12 = (char *)v14;
LABEL_6:
  v18 = *((_DWORD *)v12 + 1);
  if ( dword_1800AB2F8 > 5u && (qword_1800AB308 & 4) != 0 )
  {
    v14 = qword_1800AB310 & 4;
    if ( v14 == qword_1800AB310 )
    {
      v25 = a7;
      v20 = a5 != 0;
      v26 = a8;
      v21 = a6 != 0;
      v29 = a9;
      v30 = a10;
      v32 = &Uuid;
      v34 = &v27;
      p_Key = &Key;
      v38 = &v28;
      v40 = &v23;
      v42 = &v20;
      v44 = &v21;
      v46 = &v24;
      v48 = &v25;
      v50 = &v26;
      v52 = &v29;
      v54 = &v30;
      v27 = a1;
      Key = a2;
      v28 = a3;
      v23 = a4;
      v24 = v18;
      v33 = 16LL;
      v35 = 8LL;
      v37 = 4LL;
      v39 = 8LL;
      v41 = 4LL;
      v43 = 1LL;
      v45 = 1LL;
      v47 = 4LL;
      v49 = 4LL;
      v51 = 4LL;
      v53 = 8LL;
      v55 = 8LL;
      LODWORD(v14) = TlgWrite((TraceLoggingHProvider)&dword_1800AB2F8, &unk_18009AB1D, 0LL, 0LL, 0xEu, &pData);
    }
  }
  return v14;
}
