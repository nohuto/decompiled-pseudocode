/*
 * XREFs of BiBindEfiBootManager @ 0x14092F684
 * Callers:
 *     BiBindEfiNamespaceObjects @ 0x14092FAF4 (BiBindEfiNamespaceObjects.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     BcdOpenObject @ 0x14073F08C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14073F218 (BcdCloseObject.c)
 *     BiLogMessage @ 0x1407403B4 (BiLogMessage.c)
 *     BcdCreateObject @ 0x14092DEEC (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14092DF84 (BcdDeleteObject.c)
 *     BcdSetElementData @ 0x14092E6F4 (BcdSetElementData.c)
 *     BiQueryBootEntryOrder @ 0x140931A34 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x140931B0C (BiQueryBootOptions.c)
 *     BiTranslateBootEntryId @ 0x140931D7C (BiTranslateBootEntryId.c)
 *     BiTranslateBootOrder @ 0x140931DDC (BiTranslateBootOrder.c)
 */

__int64 __fastcall BiBindEfiBootManager(HANDLE BcdStoreHandle, __int64 a2)
{
  void *v4; // r14
  NTSTATUS v5; // ebx
  PVOID PoolWithTag; // rax
  int v7; // eax
  unsigned int *v8; // rsi
  __int64 v9; // rdx
  HANDLE BcdObjectHandle; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v12; // [rsp+28h] [rbp-48h] BYREF
  PVOID v13; // [rsp+30h] [rbp-40h] BYREF
  _BCD_OBJECT_DESCRIPTION Description; // [rsp+38h] [rbp-38h] BYREF
  PVOID P; // [rsp+40h] [rbp-30h] BYREF
  __int64 Buffer; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-20h] BYREF

  Buffer = 0LL;
  v13 = 0LL;
  P = 0LL;
  BcdObjectHandle = 0LL;
  v4 = 0LL;
  v17[0] = 0LL;
  v17[1] = 0LL;
  if ( BcdOpenObject(BcdStoreHandle, &GUID_FIRMWARE_BOOTMGR, &BcdObjectHandle) >= 0 )
  {
    BcdDeleteObject(BcdObjectHandle);
    BcdObjectHandle = 0LL;
  }
  Description.Type = 269484033;
  Description.Version = 1;
  v5 = BcdCreateObject(BcdStoreHandle, &GUID_FIRMWARE_BOOTMGR, &Description, &BcdObjectHandle);
  if ( v5 >= 0 )
  {
    v5 = BiQueryBootEntryOrder(&v13, &v12);
    if ( v5 >= 0 )
    {
      if ( v12 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * v12, 0x4B444342u);
        v4 = PoolWithTag;
        if ( !PoolWithTag )
        {
          v5 = -1073741670;
          goto LABEL_19;
        }
        BiTranslateBootOrder(a2, v13, PoolWithTag, &v12);
        if ( v12 )
        {
          v5 = BcdSetElementData(BcdObjectHandle, 0x24000001u, v4, 16 * v12);
          if ( v5 < 0 )
            goto LABEL_19;
        }
      }
      v7 = BiQueryBootOptions(&P, &v12);
      v8 = (unsigned int *)P;
      v5 = v7;
      if ( v7 >= 0 )
      {
        if ( *((_DWORD *)P + 2) == -1
          || (Buffer = *((unsigned int *)P + 2),
              v5 = BcdSetElementData(BcdObjectHandle, 0x25000004u, &Buffer, 8u),
              v5 >= 0) )
        {
          v9 = v8[4];
          if ( (_DWORD)v9 == -2
            || (int)BiTranslateBootEntryId(a2, v9, v17) < 0
            || (v5 = BcdSetElementData(BcdObjectHandle, 0x24000002u, v17, 0x10u), v5 >= 0) )
          {
            v5 = 0;
          }
        }
      }
      if ( v8 )
        ExFreePoolWithTag(v8, 0x4B444342u);
    }
LABEL_19:
    if ( v13 )
      ExFreePoolWithTag(v13, 0x4B444342u);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x4B444342u);
  }
  if ( BcdObjectHandle )
  {
    if ( v5 >= 0 )
      BcdCloseObject(BcdObjectHandle);
    else
      BcdDeleteObject(BcdObjectHandle);
  }
  if ( v5 < 0 )
    BiLogMessage(4LL, L"BiBindEfiBootManager failed %x", (unsigned int)v5);
  return (unsigned int)v5;
}
