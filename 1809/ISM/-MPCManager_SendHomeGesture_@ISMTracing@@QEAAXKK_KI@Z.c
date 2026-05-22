/*
 * XREFs of ?MPCManager_SendHomeGesture_@ISMTracing@@QEAAXKK_KI@Z @ 0x18003E744
 * Callers:
 *     ?SendHomeGesture@MPCManager@@QEAAXKK_KI@Z @ 0x18003CCD4 (-SendHomeGesture@MPCManager@@QEAAXKK_KI@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void ISMTracing::MPCManager_SendHomeGesture_(ISMTracing *this, int a2, int a3, __int64 a4, ...)
{
  const struct _TlgProvider_t *v4; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-21h] BYREF
  int *v6; // [rsp+58h] [rbp-1h]
  __int64 v7; // [rsp+60h] [rbp+7h]
  int *v8; // [rsp+68h] [rbp+Fh]
  __int64 v9; // [rsp+70h] [rbp+17h]
  __int64 *v10; // [rsp+78h] [rbp+1Fh]
  __int64 v11; // [rsp+80h] [rbp+27h]
  va_list v12; // [rsp+88h] [rbp+2Fh]
  __int64 v13; // [rsp+90h] [rbp+37h]
  int v14; // [rsp+C0h] [rbp+67h] BYREF
  int v15; // [rsp+C8h] [rbp+6Fh] BYREF
  __int64 v16; // [rsp+D0h] [rbp+77h] BYREF
  va_list va; // [rsp+D8h] [rbp+7Fh] BYREF

  va_start(va, a4);
  v16 = a4;
  v15 = a3;
  v14 = a2;
  v4 = (const struct _TlgProvider_t *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( *(_DWORD *)v4 > 4u
    && (*((_QWORD *)v4 + 2) & 0x400000000001LL) != 0
    && (*((_QWORD *)v4 + 3) & 0x400000000001LL) == *((_QWORD *)v4 + 3) )
  {
    v7 = 4LL;
    v6 = &v14;
    v8 = &v15;
    v10 = &v16;
    va_copy(v12, va);
    v9 = 4LL;
    v11 = 8LL;
    v13 = 4LL;
    TlgWrite(v4, &unk_180166C72, 0LL, 0LL, 6u, &pData);
  }
}
