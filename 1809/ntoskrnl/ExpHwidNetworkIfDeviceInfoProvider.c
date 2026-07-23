/*
 * XREFs of ExpHwidNetworkIfDeviceInfoProvider @ 0x140586BC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExpHwidAppendDeviceInfoBlock @ 0x14058728C (ExpHwidAppendDeviceInfoBlock.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140588074 (ExpHwidSendSynchronousIrpToDevice.c)
 */

__int64 __fastcall ExpHwidNetworkIfDeviceInfoProvider(__int64 a1, __int64 a2, __int64 a3)
{
  char *v6; // rdi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int appended; // esi
  unsigned int v11; // esi
  char *PoolWithTag; // rax
  unsigned __int16 v13; // ax
  __int64 v15; // [rsp+20h] [rbp-60h]
  __int64 v16; // [rsp+20h] [rbp-60h]
  _DWORD v17[8]; // [rsp+40h] [rbp-40h] BYREF
  int v18; // [rsp+60h] [rbp-20h] BYREF
  __int16 v19; // [rsp+64h] [rbp-1Ch]
  int v20; // [rsp+70h] [rbp-10h] BYREF

  v6 = 0LL;
  if ( !*(_BYTE *)(a1 + 12) )
  {
    v20 = 66067;
    v7 = ExpHwidSendSynchronousIrpToDevice(a2, 1507330LL, &v20, 8LL, &v20, 8, 0LL, 0LL);
    v8 = v20;
    if ( v7 < 0 )
      v8 = v7;
    v20 = v8;
    v18 = 16843009;
    v9 = ExpHwidSendSynchronousIrpToDevice(a2, 1507330LL, &v18, 10LL, &v18, 10, 0LL, 0LL);
    if ( v9 < 0 )
    {
      *(_BYTE *)(a3 + 33) |= 0x20u;
      v18 = v9;
      v19 = 0;
    }
  }
  if ( !*(_BYTE *)(a1 + 12) )
  {
    memset(v17, 0, sizeof(v17));
    HIWORD(v17[1]) = *(_WORD *)(a3 + 32);
    BYTE1(v17[1]) = *(_BYTE *)(a3 + 34);
    v17[2] = *(_DWORD *)(a3 + 36);
    LOBYTE(v17[1]) = 2;
    *(GUID *)&v17[3] = GUID_NDIS_LAN_CLASS;
  }
  appended = ExpHwidAppendDeviceInfoBlock(a1, v17, &v18, 6LL, v15);
  if ( appended >= 0 )
  {
    v11 = *(unsigned __int16 *)(a3 + 40) + 10;
    if ( !*(_BYTE *)(a1 + 12) )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v11, 0x534C53u);
      v6 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      *(_DWORD *)PoolWithTag = v20;
      *((_DWORD *)PoolWithTag + 1) = v18;
      *((_WORD *)PoolWithTag + 4) = v19;
      v13 = *(_WORD *)(a3 + 40);
      if ( v13 )
        memmove(v6 + 10, *(const void **)(a3 + 48), v13);
      memset(v17, 0, sizeof(v17));
      HIWORD(v17[1]) = *(_WORD *)(a3 + 32);
      BYTE1(v17[1]) = *(_BYTE *)(a3 + 34);
      v17[2] = *(_DWORD *)(a3 + 36);
      LOBYTE(v17[1]) = 2;
      *(_OWORD *)&v17[3] = SL_HWID_IF_GUID_MAC;
    }
    appended = ExpHwidAppendDeviceInfoBlock(a1, v17, v6, v11, v16);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  return (unsigned int)appended;
}
