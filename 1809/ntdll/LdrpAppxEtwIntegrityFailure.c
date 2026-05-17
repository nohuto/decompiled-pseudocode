/*
 * XREFs of LdrpAppxEtwIntegrityFailure @ 0x1800CDA68
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800CD7D0 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     EtwEventRegister @ 0x180021AD0 (EtwEventRegister.c)
 *     EtwEventWrite @ 0x18004DC20 (EtwEventWrite.c)
 *     EtwNotificationUnregister @ 0x18004E980 (EtwNotificationUnregister.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpAppxEtwIntegrityFailure(int a1, __int64 a2, __int64 a3)
{
  void *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 result; // rax
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // [rsp+20h] [rbp-40h] BYREF
  __int64 v10; // [rsp+28h] [rbp-38h] BYREF
  int v11; // [rsp+30h] [rbp-30h]
  int v12; // [rsp+34h] [rbp-2Ch]
  int *v13; // [rsp+38h] [rbp-28h]
  __int64 v14; // [rsp+40h] [rbp-20h]
  __int64 v15; // [rsp+48h] [rbp-18h]
  int v16; // [rsp+50h] [rbp-10h]
  int v17; // [rsp+54h] [rbp-Ch]
  int v18; // [rsp+70h] [rbp+10h] BYREF

  v18 = a1;
  if ( a1 == -1073740673 )
  {
    v3 = &AppModelLibraryLoadFailureNgenBinary;
  }
  else
  {
    v3 = &AppModelLibraryLoadFailureSystemBinary;
    if ( a1 != -1073740674 )
      v3 = &AppModelLibraryLoadFailureApplicationBinary;
  }
  v4 = -1LL;
  v10 = a2;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_WORD *)(a2 + 2 * v5) );
  v12 = 0;
  v11 = 2 * v5 + 2;
  v13 = &v18;
  v14 = 4LL;
  v15 = a3;
  do
    ++v4;
  while ( *(_WORD *)(a3 + 2 * v4) );
  v17 = 0;
  v16 = 2 * v4 + 2;
  result = EtwEventRegister(AppModelRuntimeProviderId, 0LL, 0LL, &v9);
  if ( !(_DWORD)result )
  {
    EtwEventWrite(v9, (int)v3, 3, (__int64)&v10);
    return EtwNotificationUnregister(v9, 0LL, v7, v8);
  }
  return result;
}
