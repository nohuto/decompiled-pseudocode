/*
 * XREFs of SiGetEspFromFirmware @ 0x140933318
 * Callers:
 *     SiGetEfiSystemDevice @ 0x140932F2C (SiGetEfiSystemDevice.c)
 * Callees:
 *     _wcsicmp @ 0x1401A0100 (_wcsicmp.c)
 *     ZwEnumerateBootEntries @ 0x1401C1BF0 (ZwEnumerateBootEntries.c)
 *     ZwQueryBootEntryOrder @ 0x1401C27F0 (ZwQueryBootEntryOrder.c)
 *     ZwQueryBootOptions @ 0x1401C2810 (ZwQueryBootOptions.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     BiReleasePrivilege @ 0x14073F36C (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x14073F3BC (BiAcquirePrivilege.c)
 *     SiBootEntryGetNtFilePath @ 0x140932DA4 (SiBootEntryGetNtFilePath.c)
 *     SiGetEfiBootEntryById @ 0x140932F0C (SiGetEfiBootEntryById.c)
 *     SiIsValidWindowsBootEntry @ 0x140933738 (SiIsValidWindowsBootEntry.c)
 */

NTSTATUS __fastcall SiGetEspFromFirmware(void *a1, ULONG a2)
{
  ULONG v2; // r14d
  void *v3; // r15
  ULONG *v4; // r12
  int *v5; // r13
  wchar_t *v6; // rdi
  wchar_t *v7; // rsi
  NTSTATUS result; // eax
  NTSTATUS v9; // ebx
  PVOID PoolWithTag; // rax
  ULONG v11; // eax
  _BOOT_OPTIONS *v12; // rax
  ULONG v13; // r14d
  NTSTATUS v14; // eax
  unsigned int *EfiBootEntryById; // rax
  unsigned int *v16; // r14
  int NtFilePath; // eax
  char IsValidWindowsBootEntry; // al
  ULONG v19; // r14d
  ULONG *v20; // rax
  ULONG v21; // ebx
  unsigned int *v22; // rax
  unsigned int *v23; // r14
  int v24; // eax
  _WORD *v25; // rdx
  __int64 v26; // rax
  ULONG v27; // ecx
  PVOID P; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v29[4]; // [rsp+28h] [rbp-10h] BYREF
  ULONG BufferLength; // [rsp+88h] [rbp+50h] BYREF
  ULONG Count; // [rsp+90h] [rbp+58h] BYREF
  PVOID v33; // [rsp+98h] [rbp+60h] BYREF

  BufferLength = a2;
  v2 = 0;
  *(_QWORD *)v29 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  P = 0LL;
  v5 = 0LL;
  v33 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  result = BiAcquirePrivilege(0x16u, (__int64)v29);
  if ( result >= 0 )
  {
    BufferLength = 0;
    v9 = ZwEnumerateBootEntries(0LL, &BufferLength);
    if ( v9 == -1073741789 )
    {
      while ( v2 < BufferLength )
      {
        if ( v3 )
          ExFreePoolWithTag(v3, 0);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, BufferLength, 0x4B505953u);
        v3 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_11;
        v2 = BufferLength;
        v9 = ZwEnumerateBootEntries(PoolWithTag, &BufferLength);
        if ( v9 != -1073741789 )
          break;
      }
    }
    if ( v9 >= 0 )
    {
      if ( BufferLength )
      {
        v11 = 24;
        BufferLength = 24;
        while ( 1 )
        {
          if ( v5 )
          {
            ExFreePoolWithTag(v5, 0);
            v11 = BufferLength;
          }
          v12 = (_BOOT_OPTIONS *)ExAllocatePoolWithTag(PagedPool, v11, 0x4B505953u);
          v5 = (int *)v12;
          if ( !v12 )
            break;
          v13 = BufferLength;
          v14 = ZwQueryBootOptions(v12, &BufferLength);
          v9 = v14;
          if ( v14 != -1073741789 )
          {
            if ( v14 < 0 )
              goto LABEL_45;
            EfiBootEntryById = SiGetEfiBootEntryById((unsigned int *)v3, v5[3]);
            v16 = EfiBootEntryById;
            if ( EfiBootEntryById
              && (NtFilePath = SiBootEntryGetNtFilePath((__int64)EfiBootEntryById, (_FILE_PATH **)&P),
                  v6 = (wchar_t *)P,
                  v9 = NtFilePath,
                  NtFilePath >= 0) )
            {
              IsValidWindowsBootEntry = SiIsValidWindowsBootEntry(v16, P);
              v19 = 0;
              if ( IsValidWindowsBootEntry )
                goto LABEL_45;
              ExFreePoolWithTag(v6, 0);
              v6 = 0LL;
            }
            else
            {
              v19 = 0;
            }
            Count = 0;
            v9 = ZwQueryBootEntryOrder(0LL, &Count);
            if ( v9 == -1073741789 )
            {
              while ( v19 < Count )
              {
                if ( v4 )
                  ExFreePoolWithTag(v4, 0);
                v20 = (ULONG *)ExAllocatePoolWithTag(PagedPool, 4LL * Count, 0x4B505953u);
                v4 = v20;
                if ( !v20 )
                  goto LABEL_11;
                v19 = Count;
                v9 = ZwQueryBootEntryOrder(v20, &Count);
                if ( v9 != -1073741789 )
                  break;
              }
            }
            if ( !v9 )
            {
              if ( !Count )
                goto LABEL_10;
              v21 = 0;
              do
              {
                v22 = SiGetEfiBootEntryById((unsigned int *)v3, v4[v21]);
                v23 = v22;
                if ( v22 )
                {
                  v24 = SiBootEntryGetNtFilePath((__int64)v22, (_FILE_PATH **)&v33);
                  v7 = (wchar_t *)v33;
                  if ( v24 >= 0 && (unsigned __int8)SiIsValidWindowsBootEntry(v23, v33) )
                  {
                    if ( v6 )
                    {
                      if ( wcsicmp(v6 + 6, v7 + 6) )
                      {
                        v9 = -1073740719;
                        goto LABEL_45;
                      }
                    }
                    else
                    {
                      v6 = v7;
                      v33 = 0LL;
                      v7 = 0LL;
                    }
                  }
                  if ( v7 )
                  {
                    ExFreePoolWithTag(v7, 0);
                    v7 = 0LL;
                    v33 = 0LL;
                  }
                }
                ++v21;
              }
              while ( v21 < Count );
              v9 = v6 == 0LL ? 0xC0000225 : 0;
            }
            goto LABEL_45;
          }
          v11 = BufferLength;
          if ( v13 >= BufferLength )
            goto LABEL_45;
        }
LABEL_11:
        v9 = -1073741801;
      }
      else
      {
LABEL_10:
        v9 = -1073741275;
      }
    }
LABEL_45:
    BiReleasePrivilege(v29);
    if ( v9 >= 0 )
    {
      if ( v6 )
      {
        v25 = v6 + 6;
        v26 = -1LL;
        do
          ++v26;
        while ( v25[v26] );
        v27 = 2 * v26 + 2;
        BufferLength = v27;
        if ( v27 <= 0x6A )
          memmove(a1, v25, v27);
        else
          v9 = -1073741789;
      }
      else
      {
        v9 = -1073741823;
      }
    }
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    return v9;
  }
  return result;
}
