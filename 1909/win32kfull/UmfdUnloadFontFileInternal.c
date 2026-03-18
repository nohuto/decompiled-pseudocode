/*
 * XREFs of UmfdUnloadFontFileInternal @ 0x1C00FD088
 * Callers:
 *     UmfdLoadFontFile @ 0x1C00F9F20 (UmfdLoadFontFile.c)
 *     UmfdUnloadFontFile @ 0x1C00FD050 (UmfdUnloadFontFile.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0030F0C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0030F40 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C0096898 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C0096A40 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ?Remove@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z @ 0x1C00FD130 (-Remove@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall UmfdUnloadFontFileInternal(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ecx
  __int64 v6; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v7[8]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v8[6]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v9; // [rsp+60h] [rbp-18h]

  v6 = a1;
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v7, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
  NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::Remove(v2, &v6);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v7);
  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v8, 5);
  v8[5] = a1;
  v8[0] = &UnloadFontFileRequest::`vftable';
  v9 = 0;
  v3 = UmfdClientSendAndWaitForCompletion(*(_DWORD *)(a1 + 8), (__int64)v8);
  v4 = v9;
  if ( v3 < 0 )
    return 0;
  return v4;
}
