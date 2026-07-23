/*
 * XREFs of DrvDbSetDriverInfFileMappedProperty @ 0x140904484
 * Callers:
 *     DrvDbDispatchDriverInfFile @ 0x1406D3910 (DrvDbDispatchDriverInfFile.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     DrvDbOpenObjectRegKey @ 0x1406D3F18 (DrvDbOpenObjectRegKey.c)
 *     DrvDbSetRegValueMappedProperty @ 0x140904B78 (DrvDbSetRegValueMappedProperty.c)
 */

__int64 __fastcall DrvDbSetDriverInfFileMappedProperty(
        _QWORD *a1,
        __int64 a2,
        HANDLE a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        int a7)
{
  __int64 v7; // r10
  _UNKNOWN **i; // rbx
  _QWORD *v11; // r8
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v15; // rcx
  _UNKNOWN **v16; // rsi
  int v17; // [rsp+20h] [rbp-38h]
  char v18; // [rsp+28h] [rbp-30h]
  HANDLE Handle[3]; // [rsp+40h] [rbp-18h] BYREF

  Handle[0] = 0LL;
  v7 = 0LL;
  for ( i = &off_1403515A0; ; i += 5 )
  {
    v11 = *i;
    if ( *((_DWORD *)*i + 4) == *(_DWORD *)(a4 + 16) )
    {
      v12 = *v11 - *(_QWORD *)a4;
      if ( *v11 == *(_QWORD *)a4 )
        v12 = v11[1] - *(_QWORD *)(a4 + 8);
      if ( !v12 )
        break;
    }
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= 4 )
      return (unsigned int)-1073741802;
  }
  v15 = 5 * v7;
  v16 = &off_1403515A0 + 5 * v7;
  if ( !v16 )
    return (unsigned int)-1073741802;
  if ( a5 != *((_DWORD *)v16 + 2) && a5 )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    v18 = 0;
    v17 = 2;
    v13 = DrvDbOpenObjectRegKey(a1, 0LL, 3u, a2, v17, v18, Handle, 0LL);
    if ( v13 < 0 )
      goto LABEL_17;
    a3 = Handle[0];
  }
  v13 = DrvDbSetRegValueMappedProperty(v15, a3, v16, a5, a6, a7);
LABEL_17:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v13;
}
