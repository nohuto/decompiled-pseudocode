/*
 * XREFs of _PnpGetObjectPropertyWorker @ 0x14059B194
 * Callers:
 *     _PnpGetObjectProperty @ 0x14059B008 (_PnpGetObjectProperty.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     _PnpOpenObjectRegKey @ 0x140598118 (_PnpOpenObjectRegKey.c)
 *     _PnpGetMappedPropertyDispatch @ 0x14059B324 (_PnpGetMappedPropertyDispatch.c)
 *     _PnpGetGenericStoreProperty @ 0x14059B7F8 (_PnpGetGenericStoreProperty.c)
 *     _PnpValidatePropertyData @ 0x1406A4464 (_PnpValidatePropertyData.c)
 */

__int64 __fastcall PnpGetObjectPropertyWorker(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        unsigned __int64 a8,
        int a9,
        ULONG *a10,
        int a11)
{
  HANDLE v12; // rbp
  void *v14; // rdi
  int v15; // esi
  int MappedPropertyDispatch; // ebx
  HANDLE Handle[2]; // [rsp+60h] [rbp-38h] BYREF

  v12 = a4;
  Handle[0] = 0LL;
  if ( (_WORD)a11 )
    return (unsigned int)-1073741811;
  v14 = (void *)a8;
  if ( a8 )
  {
    v15 = a9;
    v14 = (void *)(-(__int64)(a9 != 0) & a8);
  }
  else
  {
    v15 = 0;
  }
  *a7 = 0;
  *a10 = 0;
  MappedPropertyDispatch = PnpGetMappedPropertyDispatch(
                             a1,
                             a2,
                             a3,
                             (_DWORD)a4,
                             a5,
                             a6,
                             (__int64)a7,
                             (__int64)v14,
                             v15,
                             (__int64)a10,
                             a11);
  if ( MappedPropertyDispatch == -1073741802 )
  {
    if ( !v12 )
    {
      MappedPropertyDispatch = PnpOpenObjectRegKey(a1, a2, a3, 33554433, 0, (__int64)Handle);
      if ( MappedPropertyDispatch < 0 )
        goto LABEL_5;
      v12 = Handle[0];
    }
    MappedPropertyDispatch = PnpGetGenericStoreProperty(a1, v12, a5, a6, a7, v14, v15, a10);
    if ( MappedPropertyDispatch >= 0 )
      MappedPropertyDispatch = PnpValidatePropertyData(v14, *a10);
  }
LABEL_5:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)MappedPropertyDispatch;
}
