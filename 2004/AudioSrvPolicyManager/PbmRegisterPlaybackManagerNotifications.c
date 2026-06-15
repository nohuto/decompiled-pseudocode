/*
 * XREFs of PbmRegisterPlaybackManagerNotifications @ 0x1800233A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001B274 @ 0x18001B274 (sub_18001B274.c)
 *     sub_18001B358 @ 0x18001B358 (sub_18001B358.c)
 *     sub_18001B7E4 @ 0x18001B7E4 (sub_18001B7E4.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmRegisterPlaybackManagerNotifications(void *a1, int a2, int a3)
{
  int v3; // edi
  __int64 v6; // rcx
  int v7; // eax
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v10; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v10 = 0LL;
  if ( !qword_18004FE78 )
    return (unsigned int)v3;
  v3 = sub_18001B7E4(qword_18004FE78, a1, &v10);
  if ( v3 >= 0 )
  {
    if ( !a2 )
    {
      v7 = sub_18001B274(v6, (__int64)v10, a3);
      goto LABEL_7;
    }
    if ( a2 == 1 )
    {
      v7 = sub_18001B358(v6, (__int64)v10, a3);
LABEL_7:
      v3 = v7;
    }
  }
  v8 = v10;
  if ( v10 && _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 32LL))(v10);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v8 + 24LL))(v8, 1LL);
  }
  return (unsigned int)v3;
}
