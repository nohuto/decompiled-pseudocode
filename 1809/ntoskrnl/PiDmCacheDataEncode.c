/*
 * XREFs of PiDmCacheDataEncode @ 0x1406F391C
 * Callers:
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14059AA98 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmObjectCreate @ 0x1406F2ED0 (PiDmObjectCreate.c)
 *     PiDmObjectProcessPropertyChange @ 0x1406F34BC (PiDmObjectProcessPropertyChange.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     PiDmGetObject @ 0x1405999C8 (PiDmGetObject.c)
 *     _PnpStringFromGuid @ 0x14059BCE4 (_PnpStringFromGuid.c)
 */

__int64 __fastcall PiDmCacheDataEncode(int a1, int *a2, unsigned int a3, __int64 a4, unsigned int a5, __int64 a6)
{
  SIZE_T v6; // r15
  int *v7; // rbp
  unsigned int v9; // edi
  int Object; // eax
  PVOID PoolWithTag; // rax
  __int128 v13; // xmm0
  wchar_t v14[40]; // [rsp+20h] [rbp-98h] BYREF

  v6 = a3;
  v7 = a2;
  v9 = 0;
  if ( !a1 )
  {
    *(_DWORD *)a6 = 2;
    return v9;
  }
  if ( !a5 || a1 != (_DWORD)a4 )
    goto LABEL_3;
  if ( a1 == 13 )
  {
    v9 = PnpStringFromGuid(a2, v14);
    if ( (v9 & 0x80000000) != 0 )
      return v9;
    a2 = (int *)v14;
  }
  else
  {
    if ( a1 != 18 )
    {
LABEL_3:
      if ( a1 == 13 )
      {
        v13 = *(_OWORD *)v7;
        *(_DWORD *)a6 = 4;
        *(_OWORD *)(a6 + 8) = v13;
        return v9;
      }
      if ( (unsigned int)v6 > 8 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x5A706E50u);
        *(_QWORD *)(a6 + 16) = PoolWithTag;
        if ( !PoolWithTag )
          return (unsigned int)-1073741670;
        memmove(PoolWithTag, v7, v6);
        *(_DWORD *)a6 = 5;
      }
      else
      {
        memmove((void *)(a6 + 16), v7, v6);
        *(_DWORD *)a6 = 3;
      }
      *(_DWORD *)(a6 + 12) = v6;
      goto LABEL_7;
    }
    if ( a2 )
      *((_WORD *)a2 + ((unsigned __int64)a3 >> 1) - 1) = 0;
  }
  if ( !a2 )
    goto LABEL_3;
  Object = PiDmGetObject(a5, (__int64)a2, (__int64 *)(a6 + 16), a4);
  v9 = Object;
  if ( Object == -1073741772 )
  {
    v9 = 0;
    goto LABEL_3;
  }
  if ( Object < 0 )
    return v9;
  *(_DWORD *)a6 = 6;
LABEL_7:
  *(_DWORD *)(a6 + 8) = a1;
  return v9;
}
