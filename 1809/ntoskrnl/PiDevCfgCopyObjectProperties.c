/*
 * XREFs of PiDevCfgCopyObjectProperties @ 0x1406FB6E4
 * Callers:
 *     PiDevCfgConfigureDeviceDriverConfiguration @ 0x1406FADE4 (PiDevCfgConfigureDeviceDriverConfiguration.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x14082D214 (PiDevCfgConfigureDeviceInterface.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x14082E524 (PiDevCfgInitDriverDatabaseCallback.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _PnpOpenObjectRegKey @ 0x140598118 (_PnpOpenObjectRegKey.c)
 *     _PnpGetObjectProperty @ 0x14059B008 (_PnpGetObjectProperty.c)
 *     _PnpGetGenericStoreProperty @ 0x14059B7F8 (_PnpGetGenericStoreProperty.c)
 *     PiDevCfgSetObjectProperty @ 0x1406E601C (PiDevCfgSetObjectProperty.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1406FB7E8 (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpGetObjectPropertyKeys @ 0x1408FB434 (_PnpGetObjectPropertyKeys.c)
 */

__int64 __fastcall PiDevCfgCopyObjectProperties(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        SIZE_T NumberOfBytes,
        __int64 a6,
        unsigned int a7,
        void *a8,
        unsigned __int8 (__fastcall *a9)(char *, __int64),
        __int64 a10,
        int a11)
{
  __int64 v11; // rax
  int v12; // r14d
  int v15; // edi
  int ObjectPropertyKeys; // eax
  int ObjectProperty; // ebx
  int v20; // r9d
  char *PoolWithTag; // r12
  int v22; // r9d
  int GenericStorePropertyKeys; // eax
  PVOID v24; // rdi
  __int64 v25; // r9
  HANDLE v26; // rcx
  int v27; // [rsp+20h] [rbp-69h]
  int v28; // [rsp+20h] [rbp-69h]
  int v29; // [rsp+28h] [rbp-61h]
  int v30; // [rsp+60h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-21h] BYREF
  __int64 v32; // [rsp+70h] [rbp-19h]
  HANDLE v33; // [rsp+78h] [rbp-11h] BYREF
  char *v34; // [rsp+80h] [rbp-9h]
  __int64 v35; // [rsp+88h] [rbp-1h]
  unsigned int v37; // [rsp+E8h] [rbp+5Fh] BYREF

  v11 = *(_QWORD *)&PiPnpRtlCtx;
  v12 = 0;
  v35 = *(_QWORD *)&PiPnpRtlCtx;
  Handle = 0LL;
  v33 = 0LL;
  v15 = a2;
  v37 = 0;
  v30 = 1;
  LODWORD(NumberOfBytes) = 0;
  if ( !a4 )
  {
    ObjectProperty = PnpOpenObjectRegKey(a1, a2, a3, 33554433, 0, (__int64)&Handle);
    if ( ObjectProperty < 0 )
      goto LABEL_8;
    v11 = v35;
  }
  if ( a8 || (ObjectProperty = PnpOpenObjectRegKey(v11, a6, a7, 33554433, 0, (__int64)&v33), ObjectProperty >= 0) )
  {
    if ( a3 )
    {
      v20 = (int)Handle;
      if ( a4 )
        v20 = a4;
      ObjectPropertyKeys = PnpGetObjectPropertyKeys(a1, v15, a3, v20, v27, 0, 0LL, 0, (__int64)&v37);
    }
    else
    {
      v28 = 0;
      ObjectPropertyKeys = PnpGetGenericStorePropertyKeys(a1, a4, 0LL, 0LL);
    }
    ObjectProperty = ObjectPropertyKeys;
    if ( (int)(ObjectPropertyKeys + 0x80000000) < 0 || ObjectPropertyKeys == -1073741789 )
    {
      if ( !v37 )
      {
        ObjectProperty = 0;
        goto LABEL_8;
      }
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 20LL * v37, 0x63647050u);
      if ( !PoolWithTag )
      {
        ObjectProperty = -1073741670;
        goto LABEL_8;
      }
      if ( a3 )
      {
        v22 = (int)Handle;
        if ( a4 )
          v22 = a4;
        GenericStorePropertyKeys = PnpGetObjectPropertyKeys(
                                     a1,
                                     v15,
                                     a3,
                                     v22,
                                     v28,
                                     0,
                                     (__int64)PoolWithTag,
                                     v37,
                                     (__int64)&v37);
      }
      else
      {
        GenericStorePropertyKeys = PnpGetGenericStorePropertyKeys(a1, a4, 0LL, 0LL);
      }
      ObjectProperty = GenericStorePropertyKeys;
      if ( GenericStorePropertyKeys < 0 )
        goto LABEL_57;
      v32 = 256LL;
      v24 = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x63647050u);
      if ( !v24 )
      {
        ObjectProperty = -1073741670;
LABEL_57:
        ExFreePoolWithTag(PoolWithTag, 0);
        goto LABEL_8;
      }
      if ( !v37 )
      {
LABEL_55:
        if ( v24 )
          ExFreePoolWithTag(v24, 0);
        goto LABEL_57;
      }
      while ( 1 )
      {
        if ( a9 && !a9(&PoolWithTag[20 * v12], a10) )
          goto LABEL_51;
        v34 = &PoolWithTag[20 * v12];
        if ( a3 )
        {
          v25 = (__int64)Handle;
          if ( a4 )
            v25 = a4;
          ObjectProperty = PnpGetObjectProperty(
                             a1,
                             a2,
                             a3,
                             v25,
                             0LL,
                             (__int64)&PoolWithTag[20 * v12],
                             (__int64)&v30,
                             (__int64)v24,
                             v32,
                             (__int64)&NumberOfBytes,
                             a11);
          if ( ObjectProperty == -1073741822 )
          {
            ObjectProperty = 0;
            goto LABEL_51;
          }
        }
        else
        {
          ObjectProperty = PnpGetGenericStoreProperty(
                             a1,
                             a4,
                             0LL,
                             (__int64)&PoolWithTag[20 * v12],
                             &v30,
                             (__int64)v24,
                             v32,
                             &NumberOfBytes);
        }
        if ( ObjectProperty == -1073741789 )
        {
          if ( (unsigned int)NumberOfBytes <= (unsigned int)v32 )
          {
            ObjectProperty = -1073741595;
            goto LABEL_55;
          }
          ExFreePoolWithTag(v24, 0);
          v32 = (unsigned int)NumberOfBytes;
          v24 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x63647050u);
          if ( !v24 )
          {
            ObjectProperty = -1073741670;
            goto LABEL_55;
          }
          ObjectProperty = 0;
          --v12;
        }
        else
        {
          if ( ObjectProperty < 0 )
            goto LABEL_55;
          v26 = v33;
          if ( a8 )
            v26 = a8;
          ObjectProperty = PiDevCfgSetObjectProperty(
                             v35,
                             0LL,
                             a6,
                             a7,
                             (__int64)v26,
                             v29,
                             (__int64)v34,
                             v30,
                             (__int64)v24,
                             NumberOfBytes,
                             a11);
          if ( ObjectProperty == -1073741790 )
            ObjectProperty = 0;
          if ( ObjectProperty < 0 )
            goto LABEL_55;
        }
LABEL_51:
        if ( ++v12 >= v37 )
          goto LABEL_55;
      }
    }
  }
LABEL_8:
  if ( Handle )
    ZwClose(Handle);
  if ( v33 )
    ZwClose(v33);
  return (unsigned int)ObjectProperty;
}
