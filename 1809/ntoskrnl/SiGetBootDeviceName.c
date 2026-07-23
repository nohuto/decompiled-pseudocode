/*
 * XREFs of SiGetBootDeviceName @ 0x1406AFB44
 * Callers:
 *     SiGetSystemPartition @ 0x1406AF9D0 (SiGetSystemPartition.c)
 *     SiGetFirmwareSystemPartition @ 0x1406AFA20 (SiGetFirmwareSystemPartition.c)
 *     SiGetSystemDisk @ 0x1407055F0 (SiGetSystemDisk.c)
 * Callees:
 *     SiValidateSystemPartition @ 0x140127BA4 (SiValidateSystemPartition.c)
 *     wcsstr @ 0x140197A90 (wcsstr.c)
 *     swprintf_s @ 0x14019A4A0 (swprintf_s.c)
 *     _snwscanf_s @ 0x14019AE80 (_snwscanf_s.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SiGetBootDeviceNameFromRegistry @ 0x1406AFCE8 (SiGetBootDeviceNameFromRegistry.c)
 *     SiTranslateSymbolicLink @ 0x1406B0038 (SiTranslateSymbolicLink.c)
 */

__int64 __fastcall SiGetBootDeviceName(int a1, __int64 a2, char a3, _DWORD *a4, char a5, _QWORD *a6)
{
  WCHAR *v6; // r14
  WCHAR *v7; // rsi
  PVOID v8; // rdi
  int BootDeviceNameFromRegistry; // eax
  wchar_t *v11; // r12
  int v12; // ebx
  __int64 v13; // r15
  __int64 v14; // rbx
  size_t v15; // rbx
  wchar_t *PoolWithTag; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  wchar_t *v20; // rax
  SIZE_T v21; // r15
  WCHAR *v22; // rax
  int v23; // [rsp+40h] [rbp-20h] BYREF
  int v24; // [rsp+44h] [rbp-1Ch] BYREF
  char v25; // [rsp+48h] [rbp-18h] BYREF
  char v26; // [rsp+4Ch] [rbp-14h] BYREF
  PVOID P; // [rsp+50h] [rbp-10h]
  wchar_t *Src; // [rsp+58h] [rbp-8h] BYREF

  P = 0LL;
  v6 = 0LL;
  Src = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  BootDeviceNameFromRegistry = SiGetBootDeviceNameFromRegistry(a2, &Src);
  v11 = Src;
  v12 = BootDeviceNameFromRegistry;
  if ( BootDeviceNameFromRegistry < 0 )
    goto LABEL_17;
  v13 = -1LL;
  v14 = -1LL;
  do
    ++v14;
  while ( Src[v14] );
  if ( snwscanf_s(Src, v14 + 1, L"multi(%d)disk(%d)rdisk(%d)partition(%d)", &v23, &v24, &v26, &v25) != 4 )
  {
    v12 = -1073741823;
    goto LABEL_17;
  }
  if ( !v23 && !v24 )
  {
    v15 = v14 + 11;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * v15, 0x4B505953u);
    v7 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v12 = -1073741670;
      goto LABEL_17;
    }
    swprintf_s(PoolWithTag, v15, L"%s%s", L"\\ArcName\\", v11);
    v12 = SiTranslateSymbolicLink(v7);
    if ( v12 >= 0 )
    {
      v8 = P;
      if ( a3 )
      {
        v12 = SiValidateSystemPartition((PCWSTR)P, a4, v17, v18, a5);
        if ( v12 < 0 )
        {
LABEL_11:
          if ( v8 )
            ExFreePoolWithTag(v8, 0);
          goto LABEL_13;
        }
      }
      if ( a1 )
        goto LABEL_21;
      v20 = wcsstr(v7, L"partition");
      if ( v20 )
        *v20 = 0;
      do
        ++v13;
      while ( v7[v13] );
      v21 = 2 * v13 + 2;
      v22 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v21, 0x4B505953u);
      v6 = v22;
      if ( !v22 )
      {
        v12 = -1073741670;
        goto LABEL_11;
      }
      memmove(v22, v7, v21);
      ExFreePoolWithTag(v8, 0);
      P = 0LL;
      v12 = SiTranslateSymbolicLink(v6);
      if ( v12 >= 0 )
      {
        v8 = P;
LABEL_21:
        *a6 = v8;
        goto LABEL_22;
      }
    }
    v8 = P;
    goto LABEL_11;
  }
  v12 = -1073741823;
LABEL_22:
  if ( v12 < 0 )
    goto LABEL_11;
LABEL_13:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
LABEL_17:
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v12;
}
