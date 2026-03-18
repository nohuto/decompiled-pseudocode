/*
 * XREFs of UmfdUnloadFontFileInternal @ 0x1C011A088
 * Callers:
 *     UmfdLoadFontFile @ 0x1C0100E70 (UmfdLoadFontFile.c)
 *     UmfdUnloadFontFile @ 0x1C011A050 (UmfdUnloadFontFile.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C000246C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00024A0 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C00428C0 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C01011A0 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     ?Remove@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z @ 0x1C011A130 (-Remove@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall UmfdUnloadFontFileInternal(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ecx
  __int64 v6; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v7[8]; // [rsp+28h] [rbp-50h] BYREF
  struct _SLIST_ENTRY v8[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+58h] [rbp-20h]
  unsigned int v10; // [rsp+60h] [rbp-18h]

  v6 = a1;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v7, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
  NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::Remove(v2, &v6);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v7);
  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v8, 5);
  v9 = a1;
  v8[0].Next = (struct _SLIST_ENTRY *)&UnloadFontFileRequest::`vftable';
  v10 = 0;
  v3 = UmfdClientSendAndWaitForCompletion(*(_DWORD *)(a1 + 8), v8);
  v4 = v10;
  if ( v3 < 0 )
    return 0;
  return v4;
}
