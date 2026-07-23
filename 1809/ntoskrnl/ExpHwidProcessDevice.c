/*
 * XREFs of ExpHwidProcessDevice @ 0x140587158
 * Callers:
 *     sub_140586DC0 @ 0x140586DC0 (sub_140586DC0.c)
 *     sub_140586FE0 @ 0x140586FE0 (sub_140586FE0.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExpHwidAppendDeviceInfoBlock @ 0x14058728C (ExpHwidAppendDeviceInfoBlock.c)
 */

__int64 __fastcall ExpHwidProcessDevice(unsigned __int16 *a1, __int128 *a2, __int64 a3)
{
  char v3; // bp
  char *v7; // rdi
  __int128 v8; // xmm0
  unsigned int v9; // esi
  char *PoolWithTag; // rax
  unsigned __int16 v11; // ax
  unsigned int v12; // ebx
  _DWORD v14[8]; // [rsp+20h] [rbp-58h] BYREF

  v3 = *(_BYTE *)(a3 + 12);
  v7 = 0LL;
  if ( !v3 )
  {
    memset(v14, 0, sizeof(v14));
    LOBYTE(v14[1]) = (a2 != 0LL) + 1;
    HIWORD(v14[1]) = a1[16];
    BYTE1(v14[1]) = *((_BYTE *)a1 + 34);
    v14[2] = *((_DWORD *)a1 + 9);
    if ( a2 )
      v8 = *a2;
    else
      v8 = *((_OWORD *)a1 + 1);
    *(_OWORD *)&v14[3] = v8;
  }
  v9 = a1[28] + *a1;
  if ( !v3 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v9, 0x20534C53u);
    v7 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memmove(PoolWithTag, *((const void **)a1 + 1), *a1);
    v11 = a1[28];
    if ( v11 )
      memmove(&v7[2 * ((unsigned __int64)*a1 >> 1)], *((const void **)a1 + 8), v11);
  }
  v12 = ((__int64 (__fastcall *)(__int64, _DWORD *, char *, _QWORD))ExpHwidAppendDeviceInfoBlock)(a3, v14, v7, v9);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return v12;
}
