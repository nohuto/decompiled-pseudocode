/*
 * XREFs of IopGetRelatedFileName @ 0x1405B510C
 * Callers:
 *     IopSymlinkRememberJunction @ 0x1406CD7AC (IopSymlinkRememberJunction.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopGetFileInformation @ 0x14062BCD4 (IopGetFileInformation.c)
 *     ObQueryNameStringMode @ 0x14062E570 (ObQueryNameStringMode.c)
 */

__int64 __fastcall IopGetRelatedFileName(__int64 a1, __int64 a2, unsigned __int16 a3, _WORD *a4)
{
  _DWORD *v4; // rsi
  const void **v5; // rdi
  unsigned int v6; // ebp
  unsigned int v7; // r14d
  const void **PoolWithTag; // rax
  int NameStringMode; // eax
  unsigned int v13; // ebx
  _DWORD *v14; // rax
  int FileInformation; // eax
  unsigned int v16; // ecx
  PVOID v17; // rax
  _DWORD v19[4]; // [rsp+30h] [rbp-38h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v19[0] = 0;
  v6 = 256;
  v7 = 256;
  do
  {
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0);
      v5 = 0LL;
    }
    if ( v7 >= 0xFFFF )
    {
      v13 = -1073741562;
      goto LABEL_21;
    }
    PoolWithTag = (const void **)ExAllocatePoolWithTag(PagedPool, v7, 0x63466F49u);
    v5 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, v7);
    NameStringMode = ObQueryNameStringMode(*(_QWORD *)(a1 + 8), (_DWORD)v5, v7, (unsigned int)v19, 0);
    v13 = NameStringMode;
    v7 = v19[0] + 8;
    if ( a4 )
      *a4 = *(_WORD *)v5;
  }
  while ( NameStringMode == -2147483643 );
  if ( NameStringMode >= 0 )
  {
    do
    {
      if ( v4 )
      {
        ExFreePoolWithTag(v4, 0);
        v4 = 0LL;
      }
      if ( v6 >= 0xFFFF )
        goto LABEL_26;
      v14 = ExAllocatePoolWithTag(PagedPool, v6, 0x63466F49u);
      v4 = v14;
      if ( !v14 )
      {
        v13 = -1073741670;
        goto LABEL_21;
      }
      memset(v14, 0, v6);
      FileInformation = IopGetFileInformation(*(PVOID *)(a1 + 64), (__int64)v19);
      v13 = FileInformation;
      v6 = *v4 + 8;
    }
    while ( FileInformation == -2147483643 );
    if ( FileInformation < 0 )
      goto LABEL_19;
    v16 = *v4 + *(unsigned __int16 *)v5 + a3;
    if ( v16 >= 0xFFFF )
    {
LABEL_26:
      v13 = -1073741562;
      goto LABEL_19;
    }
    *(_WORD *)(a2 + 2) = v16;
    *(_WORD *)a2 = v16 - a3;
    v17 = ExAllocatePoolWithTag(PagedPool, v16, 0x63466F49u);
    *(_QWORD *)(a2 + 8) = v17;
    if ( v17 )
    {
      memmove(v17, v5[1], *(unsigned __int16 *)v5);
      memmove((void *)(*(_QWORD *)(a2 + 8) + *(unsigned __int16 *)v5), v4 + 1, (unsigned int)*v4);
    }
    else
    {
      v13 = -1073741670;
    }
LABEL_19:
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
  }
LABEL_21:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v13;
}
