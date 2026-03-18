/*
 * XREFs of ExpHwidNetworkIfDeviceInfoProvider @ 0x140625FB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140625E64 (ExpHwidSendSynchronousIrpToDevice.c)
 *     ExpHwidAppendDeviceInfoBlock @ 0x140626870 (ExpHwidAppendDeviceInfoBlock.c)
 */

__int64 __fastcall ExpHwidNetworkIfDeviceInfoProvider(__int64 a1, UNICODE_STRING *a2, __int64 a3)
{
  char *v6; // rdi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int appended; // esi
  unsigned int v11; // esi
  char *PoolWithTag; // rax
  unsigned __int16 v13; // ax
  _DWORD v15[8]; // [rsp+40h] [rbp-40h] BYREF
  int v16; // [rsp+60h] [rbp-20h] BYREF
  __int16 v17; // [rsp+64h] [rbp-1Ch]
  int v18; // [rsp+70h] [rbp-10h] BYREF

  memset(v15, 0, sizeof(v15));
  v6 = 0LL;
  if ( !*(_BYTE *)(a1 + 12) )
  {
    v18 = 66067;
    v7 = ExpHwidSendSynchronousIrpToDevice(a2, 0x170002u, &v18, 8u, &v18, 8u, 0LL, 0LL);
    v8 = v18;
    if ( v7 < 0 )
      v8 = v7;
    v18 = v8;
    v16 = 16843009;
    v9 = ExpHwidSendSynchronousIrpToDevice(a2, 0x170002u, &v16, 0xAu, &v16, 0xAu, 0LL, 0LL);
    if ( v9 < 0 )
    {
      *(_BYTE *)(a3 + 33) |= 0x20u;
      v17 = 0;
      v16 = v9;
    }
    if ( !*(_BYTE *)(a1 + 12) )
    {
      HIWORD(v15[1]) = *(_WORD *)(a3 + 32);
      BYTE1(v15[1]) = *(_BYTE *)(a3 + 34);
      v15[2] = *(_DWORD *)(a3 + 36);
      v15[7] = 0;
      LOBYTE(v15[1]) = 2;
      *(GUID *)&v15[3] = GUID_NDIS_LAN_CLASS;
    }
  }
  appended = ExpHwidAppendDeviceInfoBlock(a1, v15, &v16, 6LL);
  if ( appended >= 0 )
  {
    v11 = *(unsigned __int16 *)(a3 + 40) + 10;
    if ( !*(_BYTE *)(a1 + 12) )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v11, 0x534C53u);
      v6 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      *(_DWORD *)PoolWithTag = v18;
      *((_DWORD *)PoolWithTag + 1) = v16;
      *((_WORD *)PoolWithTag + 4) = v17;
      v13 = *(_WORD *)(a3 + 40);
      if ( v13 )
        memmove(v6 + 10, *(const void **)(a3 + 48), v13);
      HIWORD(v15[1]) = *(_WORD *)(a3 + 32);
      BYTE1(v15[1]) = *(_BYTE *)(a3 + 34);
      v15[2] = *(_DWORD *)(a3 + 36);
      v15[0] = 0;
      v15[7] = 0;
      LOBYTE(v15[1]) = 2;
      *(_OWORD *)&v15[3] = SL_HWID_IF_GUID_MAC;
    }
    appended = ExpHwidAppendDeviceInfoBlock(a1, v15, v6, v11);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  return (unsigned int)appended;
}
