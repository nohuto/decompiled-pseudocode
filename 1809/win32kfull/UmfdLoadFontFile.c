/*
 * XREFs of UmfdLoadFontFile @ 0x1C0100E70
 * Callers:
 *     <none>
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C000246C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00024A0 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C00428C0 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C01011A0 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     ?Insert@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z @ 0x1C010122C (-Insert@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z.c)
 *     UmfdUnloadFontFile @ 0x1C011A050 (UmfdUnloadFontFile.c)
 *     UmfdUnloadFontFileInternal @ 0x1C011A088 (UmfdUnloadFontFileInternal.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

PVOID __fastcall UmfdLoadFontFile(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  int v10; // ebx
  __int64 CurrentProcess; // rax
  PVOID v12; // rbx
  __int64 v13; // rcx
  PVOID v15; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v16; // [rsp+30h] [rbp-D8h] BYREF
  int v17; // [rsp+38h] [rbp-D0h]
  struct _SLIST_ENTRY v18[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+70h] [rbp-98h]
  __int64 v20; // [rsp+78h] [rbp-90h]
  __int64 v21; // [rsp+98h] [rbp-70h]
  __int64 v22; // [rsp+B8h] [rbp-50h]
  int v23; // [rsp+CCh] [rbp-3Ch]
  int v24; // [rsp+D0h] [rbp-38h]
  __int64 v25; // [rsp+E0h] [rbp-28h]
  __int64 v26; // [rsp+140h] [rbp+38h]
  int v27; // [rsp+148h] [rbp+40h]
  PVOID pv; // [rsp+150h] [rbp+48h]

  v10 = a1;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  PsGetProcessImageFileName(CurrentProcess);
  FontDriverDdiRequest::FontDriverDdiRequest(v18, 4LL);
  v26 = 0LL;
  v27 = -1;
  pv = 0LL;
  v18[0].Next = (struct _SLIST_ENTRY *)&LoadFontFileRequest::`vftable';
  v25 = a5;
  LODWORD(v19) = v10;
  v12 = 0LL;
  v23 = a6;
  v24 = a7;
  v20 = a2;
  v21 = a3;
  v22 = a4;
  if ( (int)UmfdClientSendAndWaitForCompletion(2u, v18) >= 0 && (v12 = pv, (v15 = pv) != 0LL) )
  {
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v16, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
    if ( !(unsigned __int8)NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::Insert(v13, &v15, &v15) )
    {
      UmfdUnloadFontFile(v12);
      v12 = 0LL;
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v16);
  }
  else if ( v26 )
  {
    v16 = v26;
    v17 = v27;
    UmfdUnloadFontFileInternal(&v16);
  }
  return v12;
}
