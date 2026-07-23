/*
 * XREFs of sub_1800CC218 @ 0x1800CC218
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800CBF80 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     EtwEventRegister @ 0x18000A640 (EtwEventRegister.c)
 *     EtwEventWrite @ 0x180052CB0 (EtwEventWrite.c)
 *     EtwNotificationUnregister @ 0x1800537B0 (EtwNotificationUnregister.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1800CC218(int a1, __int64 a2, __int64 a3)
{
  const EVENT_DESCRIPTOR *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  NTSTATUS result; // eax
  ULONGLONG RegHandle; // [rsp+20h] [rbp-40h] BYREF
  __int64 v8; // [rsp+28h] [rbp-38h] BYREF
  int v9; // [rsp+30h] [rbp-30h]
  int v10; // [rsp+34h] [rbp-2Ch]
  int *v11; // [rsp+38h] [rbp-28h]
  __int64 v12; // [rsp+40h] [rbp-20h]
  __int64 v13; // [rsp+48h] [rbp-18h]
  int v14; // [rsp+50h] [rbp-10h]
  int v15; // [rsp+54h] [rbp-Ch]
  int v16; // [rsp+70h] [rbp+10h] BYREF

  v16 = a1;
  if ( a1 == -1073740673 )
  {
    v3 = &stru_18012C110;
  }
  else
  {
    v3 = (const EVENT_DESCRIPTOR *)&unk_18012C130;
    if ( a1 != -1073740674 )
      v3 = (const EVENT_DESCRIPTOR *)&unk_18012C190;
  }
  v4 = -1LL;
  v8 = a2;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_WORD *)(a2 + 2 * v5) );
  v10 = 0;
  v9 = 2 * v5 + 2;
  v11 = &v16;
  v12 = 4LL;
  v13 = a3;
  do
    ++v4;
  while ( *(_WORD *)(a3 + 2 * v4) );
  v15 = 0;
  v14 = 2 * v4 + 2;
  result = EtwEventRegister(&stru_18012C1C0, 0LL, 0LL, &RegHandle);
  if ( !result )
  {
    EtwEventWrite(RegHandle, v3, 3u, (PEVENT_DATA_DESCRIPTOR)&v8);
    return EtwNotificationUnregister(RegHandle, 0LL);
  }
  return result;
}
