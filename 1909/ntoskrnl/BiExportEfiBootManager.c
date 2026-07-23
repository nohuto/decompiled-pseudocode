/*
 * XREFs of BiExportEfiBootManager @ 0x140930DA0
 * Callers:
 *     BiExportStoreAlterationsToEfi @ 0x14093110C (BiExportStoreAlterationsToEfi.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memcmp @ 0x1401A1110 (memcmp.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     BcdOpenObject @ 0x14073F08C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14073F218 (BcdCloseObject.c)
 *     BiLogMessage @ 0x1407403B4 (BiLogMessage.c)
 *     BiGetElement @ 0x14092E7E8 (BiGetElement.c)
 *     BiDeleteEfiVariable @ 0x140930A68 (BiDeleteEfiVariable.c)
 *     BiHandleFirmwareDefaultEntry @ 0x140931740 (BiHandleFirmwareDefaultEntry.c)
 *     BiQueryBootEntryOrder @ 0x140931A34 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x140931B0C (BiQueryBootOptions.c)
 *     BiSetBootEntryOrder @ 0x140931C94 (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x140931D08 (BiSetBootOptions.c)
 *     BiTranslateDisplayOrder @ 0x140931E60 (BiTranslateDisplayOrder.c)
 *     BiTranslateObjectIdentifier @ 0x140931FC4 (BiTranslateObjectIdentifier.c)
 */

__int64 __fastcall BiExportEfiBootManager(void *a1, __int64 a2)
{
  void *v3; // r13
  ULONG v4; // edi
  ULONG *v5; // r14
  void *v6; // rsi
  NTSTATUS v7; // eax
  int v8; // ebx
  void *v9; // r15
  int Element; // eax
  PVOID PoolWithTag; // rax
  int v13; // r15d
  unsigned int v14; // ebx
  int v15; // eax
  ULONG v16; // eax
  int v17; // eax
  int v18; // eax
  ULONG v19; // [rsp+20h] [rbp-39h] BYREF
  _DWORD Count[3]; // [rsp+24h] [rbp-35h] BYREF
  HANDLE BcdObjectHandle; // [rsp+30h] [rbp-29h] BYREF
  void *Buf1; // [rsp+38h] [rbp-21h] BYREF
  PVOID P; // [rsp+40h] [rbp-19h] BYREF
  ULONG *v24; // [rsp+48h] [rbp-11h] BYREF
  void *v25; // [rsp+50h] [rbp-9h] BYREF
  __int64 v26; // [rsp+58h] [rbp-1h]
  _DWORD *v27; // [rsp+60h] [rbp+7h] BYREF
  _BOOT_OPTIONS BootOptions; // [rsp+68h] [rbp+Fh] BYREF

  v26 = a2;
  memset(&BootOptions, 0, sizeof(BootOptions));
  Buf1 = 0LL;
  v3 = 0LL;
  v25 = 0LL;
  v4 = 0;
  P = 0LL;
  v5 = 0LL;
  BcdObjectHandle = 0LL;
  v6 = 0LL;
  v24 = 0LL;
  *(_QWORD *)&Count[1] = 0LL;
  v27 = 0LL;
  v7 = BcdOpenObject(a1, &GUID_FIRMWARE_BOOTMGR, &BcdObjectHandle);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 0LL;
    if ( v7 == -1073741772 )
      v8 = 0;
    goto LABEL_10;
  }
  Element = BiGetElement(BcdObjectHandle, 0x24000001u, &P, Count);
  v8 = Element;
  if ( Element < 0 )
  {
    if ( Element != -1073741275 )
      goto LABEL_7;
    Count[0] = 0;
LABEL_24:
    v13 = BiQueryBootEntryOrder(&Count[1], &v19);
    v8 = BiHandleFirmwareDefaultEntry(v26, BcdObjectHandle, &Buf1, Count);
    if ( v8 < 0 )
    {
      v9 = *(void **)&Count[1];
      goto LABEL_56;
    }
    v14 = Count[0];
    if ( v13 >= 0 && Count[0] )
    {
      v9 = *(void **)&Count[1];
      if ( v19 == Count[0] && !memcmp(Buf1, *(const void **)&Count[1], 4LL * Count[0]) )
      {
LABEL_32:
        BootOptions.Length = 24;
        BootOptions.Version = 1;
        v15 = BiGetElement(BcdObjectHandle, 0x25000004u, &v24, &v19);
        v5 = v24;
        v8 = v15;
        if ( v15 < 0 )
        {
          if ( v15 != -1073741275 )
            goto LABEL_56;
          v8 = BiDeleteEfiVariable(L"Timeout");
          if ( v8 < 0 )
            goto LABEL_56;
          BootOptions.Timeout = 0;
        }
        else
        {
          v16 = -1;
          v4 = 1;
          if ( *(_QWORD *)v24 <= 0xFFFFFFFFuLL )
            v16 = *v24;
          BootOptions.Timeout = v16;
        }
        v17 = BiGetElement(BcdObjectHandle, 0x24000002u, &v25, &v19);
        v3 = v25;
        v8 = v17;
        if ( v17 < 0 )
        {
          if ( v17 == -1073741275 )
          {
            v8 = BiDeleteEfiVariable(L"BootNext");
            if ( v8 >= 0 )
            {
              BootOptions.NextBootEntryId = 0;
LABEL_45:
              v19 = 0;
              v18 = BiQueryBootOptions(&v27, &v19);
              v6 = v27;
              if ( v18 >= 0 && *v27 == BootOptions.Version )
              {
                if ( (v4 & 1) != 0 && v27[2] == BootOptions.Timeout )
                  v4 &= ~1u;
                if ( (v4 & 2) != 0 && v27[4] == BootOptions.NextBootEntryId )
                  v4 &= ~2u;
              }
              if ( v4 )
                v8 = BiSetBootOptions(&BootOptions, v4);
            }
          }
        }
        else
        {
          v4 |= 2u;
          v8 = BiTranslateObjectIdentifier(v26, v25, &v19);
          if ( v8 >= 0 )
          {
            BootOptions.NextBootEntryId = v19;
            goto LABEL_45;
          }
        }
LABEL_56:
        if ( Buf1 )
          ExFreePoolWithTag(Buf1, 0x4B444342u);
        if ( v3 )
          ExFreePoolWithTag(v3, 0x4B444342u);
        goto LABEL_8;
      }
    }
    else
    {
      v9 = *(void **)&Count[1];
    }
    v8 = BiSetBootEntryOrder((PULONG)Buf1, (PULONG)v14);
    if ( v8 < 0 )
      goto LABEL_56;
    goto LABEL_32;
  }
  Count[0] >>= 4;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * Count[0], 0x4B444342u);
  Buf1 = PoolWithTag;
  if ( PoolWithTag )
  {
    BiTranslateDisplayOrder(a2, P, PoolWithTag, Count);
    goto LABEL_24;
  }
  v8 = -1073741670;
LABEL_7:
  v9 = *(void **)&Count[1];
LABEL_8:
  if ( P )
    ExFreePoolWithTag(P, 0x4B444342u);
LABEL_10:
  if ( BcdObjectHandle )
    BcdCloseObject(BcdObjectHandle);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x4B444342u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  if ( v8 < 0 )
    BiLogMessage(4LL, L"BiExportEfiBootManager failed: %x", (unsigned int)v8);
  return (unsigned int)v8;
}
