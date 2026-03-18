/*
 * XREFs of UmfdLoadFontFile @ 0x1C00BE2A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0004B8C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0004BC0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C00815E8 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C0083010 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     UmfdUnloadFontFile @ 0x1C00BE1C0 (UmfdUnloadFontFile.c)
 *     UmfdUnloadFontFileInternal @ 0x1C00BE1F0 (UmfdUnloadFontFileInternal.c)
 *     ?Insert@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z @ 0x1C00BE7B8 (-Insert@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z.c)
 *     _TlgKeywordOn @ 0x1C00BFD40 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

_DWORD *__fastcall UmfdLoadFontFile(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  int v10; // ebx
  __int64 CurrentProcess; // rax
  int v12; // r15d
  _DWORD *v13; // rbx
  __int64 v14; // rcx
  const GUID *v15; // r8
  const GUID *v16; // r9
  PVOID v18; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C8h] BYREF
  int v20; // [rsp+48h] [rbp-C0h]
  struct _SLIST_ENTRY v21[2]; // [rsp+58h] [rbp-B0h] BYREF
  int v22; // [rsp+80h] [rbp-88h]
  __int64 v23; // [rsp+88h] [rbp-80h]
  __int64 v24; // [rsp+A8h] [rbp-60h]
  __int64 v25; // [rsp+C8h] [rbp-40h]
  int v26; // [rsp+DCh] [rbp-2Ch]
  int v27; // [rsp+E0h] [rbp-28h]
  __int64 v28; // [rsp+F0h] [rbp-18h]
  __int64 v29; // [rsp+150h] [rbp+48h]
  int v30; // [rsp+158h] [rbp+50h]
  PVOID pv; // [rsp+160h] [rbp+58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+168h] [rbp+60h] BYREF
  PVOID *v33; // [rsp+188h] [rbp+80h]
  int v34; // [rsp+190h] [rbp+88h]
  int v35; // [rsp+194h] [rbp+8Ch]

  v10 = a1;
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  PsGetProcessImageFileName(CurrentProcess);
  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v21, 4);
  v29 = 0LL;
  pv = 0LL;
  v21[0].Next = (struct _SLIST_ENTRY *)&LoadFontFileRequest::`vftable';
  v12 = -1;
  v28 = a5;
  v22 = v10;
  v13 = 0LL;
  v26 = a6;
  v27 = a7;
  v30 = -1;
  v23 = a2;
  v24 = a3;
  v25 = a4;
  v18 = 0LL;
  if ( (int)UmfdClientSendAndWaitForCompletion(2u, v21) >= 0 )
  {
    v13 = pv;
    v18 = pv;
    if ( pv )
      goto LABEL_3;
  }
  if ( v29 )
  {
    v19 = v29;
    v20 = v30;
    UmfdUnloadFontFileInternal((__int64)&v19);
  }
  if ( v13 )
  {
LABEL_3:
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v19, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
    if ( (unsigned __int8)NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::Insert(v14, &v18, &v18) )
    {
      v12 = v13[2];
    }
    else
    {
      UmfdUnloadFontFile(v13);
      v13 = 0LL;
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v19);
  }
  if ( (unsigned int)hProvider > 5 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
  {
    v35 = 0;
    v33 = &v18;
    LODWORD(v18) = v12;
    v34 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E4647, v15, v16, 3u, &pData);
  }
  return v13;
}
