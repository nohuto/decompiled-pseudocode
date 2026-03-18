/*
 * XREFs of DrvDbSetDriverInfFileMappedProperty @ 0x1409411A8
 * Callers:
 *     DrvDbDispatchDriverInfFile @ 0x1406F33A0 (DrvDbDispatchDriverInfFile.c)
 * Callees:
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     DrvDbOpenDriverInfFileRegKey @ 0x1406F3354 (DrvDbOpenDriverInfFileRegKey.c)
 *     DrvDbSetRegValueMappedProperty @ 0x1409418F4 (DrvDbSetRegValueMappedProperty.c)
 */

__int64 __fastcall DrvDbSetDriverInfFileMappedProperty(
        int a1,
        int a2,
        HANDLE a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        int a7)
{
  int v8; // ebx
  __int64 v11; // rax
  int v12; // ebx
  __int64 v13; // rcx
  _UNKNOWN **i; // r8
  _QWORD *v15; // r10
  __int64 v16; // rdx
  __int64 v18; // rcx
  _UNKNOWN **v19; // rsi
  unsigned int v20; // edi
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  Handle = 0LL;
  v8 = *(_DWORD *)(a4 + 16);
  if ( v8 == 2 )
  {
    v11 = *(_QWORD *)a4 - DEVPKEY_NODE;
    if ( *(_QWORD *)a4 == DEVPKEY_NODE )
      v11 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
    if ( !v11 )
      return (unsigned int)-1073741790;
  }
  v13 = 0LL;
  for ( i = &off_1403706C0; ; i += 5 )
  {
    v15 = *i;
    if ( *((_DWORD *)*i + 4) == v8 )
    {
      v16 = *v15 - *(_QWORD *)a4;
      if ( *v15 == *(_QWORD *)a4 )
        v16 = v15[1] - *(_QWORD *)(a4 + 8);
      if ( !v16 )
        break;
    }
    v13 = (unsigned int)(v13 + 1);
    if ( (unsigned int)v13 >= 4 )
      return (unsigned int)-1073741802;
  }
  v18 = 5 * v13;
  v19 = &off_1403706C0 + v18;
  if ( !v19 )
    return (unsigned int)-1073741802;
  v20 = a5;
  if ( a5 != *((_DWORD *)v19 + 2) && a5 )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    v12 = DrvDbOpenDriverInfFileRegKey(a1, a2, 2, 0, (__int64)&Handle, 0LL);
    if ( v12 < 0 )
      goto LABEL_22;
    a3 = Handle;
  }
  v12 = DrvDbSetRegValueMappedProperty(v18, a3, v19, v20, a6, a7);
LABEL_22:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v12;
}
