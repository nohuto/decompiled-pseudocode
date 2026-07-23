/*
 * XREFs of DrvDbGetDeviceIdMappedPropertyKeys @ 0x140902684
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x1406F62C0 (DrvDbDispatchDeviceId.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     DrvDbOpenObjectRegKey @ 0x1406D3F18 (DrvDbOpenObjectRegKey.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1406F68D4 (_PnpCtxRegQueryInfoKey.c)
 *     DrvDbGetCompositeMappedPropertyKeys @ 0x140902600 (DrvDbGetCompositeMappedPropertyKeys.c)
 */

__int64 __fastcall DrvDbGetDeviceIdMappedPropertyKeys(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned int *v6; // rdi
  int v8; // eax
  int InfoKey; // ebx
  __int64 v10; // rcx
  int v12; // [rsp+20h] [rbp-38h]
  char v13; // [rsp+28h] [rbp-30h]
  HANDLE Handle[3]; // [rsp+40h] [rbp-18h] BYREF
  int v15; // [rsp+70h] [rbp+18h] BYREF

  v6 = a6;
  Handle[0] = 0LL;
  v8 = a3;
  v15 = 0;
  *a6 = 0;
  if ( !a3 )
  {
    v13 = 0;
    v12 = 1;
    InfoKey = DrvDbOpenObjectRegKey(a1, 0LL, 5u, a2, v12, v13, Handle, 0LL);
    if ( InfoKey < 0 )
      goto LABEL_7;
    v8 = (int)Handle[0];
  }
  InfoKey = PnpCtxRegQueryInfoKey((__int64)&v15, v8, 0, 0, (__int64)&v15, 0LL, 0LL);
  if ( InfoKey >= 0 && v15 )
    InfoKey = DrvDbGetCompositeMappedPropertyKeys(v10, (_OWORD **)off_140402E28, 2u, a4, a5, v6);
LABEL_7:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)InfoKey;
}
