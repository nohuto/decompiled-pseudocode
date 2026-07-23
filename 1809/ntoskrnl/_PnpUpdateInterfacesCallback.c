/*
 * XREFs of _PnpUpdateInterfacesCallback @ 0x14071F7B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     _PnpNotifyDerivedKeys @ 0x1406E7328 (_PnpNotifyDerivedKeys.c)
 */

char __fastcall PnpUpdateInterfacesCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void (__fastcall *v7)(__int64, __int64, __int64); // rax
  __int64 v8; // r9
  __int64 v10; // [rsp+20h] [rbp-48h]
  unsigned int v11; // [rsp+28h] [rbp-40h]
  void (__fastcall *v12)(__int64, __int64, __int64); // [rsp+38h] [rbp-30h]
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a4 + 28) )
  {
    v7 = *(void (__fastcall **)(__int64, __int64, __int64))a4;
    *(_QWORD *)&v13 = 0LL;
    v7(a1, a2, 3LL);
  }
  v8 = *(_QWORD *)(a4 + 8);
  if ( v8 )
  {
    v12 = *(void (__fastcall **)(__int64, __int64, __int64))a4;
    v11 = *(_DWORD *)(a4 + 24);
    v10 = *(_QWORD *)(a4 + 16);
    v13 = 0LL;
    PnpNotifyDerivedKeys(
      a1,
      a2,
      3u,
      v8,
      v10,
      v11,
      (__int64)&v13,
      (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, __int64))v12);
  }
  return 0;
}
