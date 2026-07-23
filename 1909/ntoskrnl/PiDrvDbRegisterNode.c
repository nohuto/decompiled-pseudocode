/*
 * XREFs of PiDrvDbRegisterNode @ 0x140756EE0
 * Callers:
 *     PiDrvDbInit @ 0x140756B78 (PiDrvDbInit.c)
 *     PiDrvDbRegisterNodeCallback @ 0x14078C770 (PiDrvDbRegisterNodeCallback.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x1400880E8 (RtlStringCchPrintfW.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     RtlFindUnicodeSubstring @ 0x14066A080 (RtlFindUnicodeSubstring.c)
 *     _PnpSetObjectProperty @ 0x1407083D4 (_PnpSetObjectProperty.c)
 *     DrvDbRegisterDatabase @ 0x14075644C (DrvDbRegisterDatabase.c)
 *     PiDrvDbCreateNode @ 0x14075703C (PiDrvDbCreateNode.c)
 *     PiDrvDbDestroyNode @ 0x140877F24 (PiDrvDbDestroyNode.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x140878F64 (PiDrvDbQuerySystemPathWin32.c)
 *     DrvDbUnregisterDatabase @ 0x140941AF8 (DrvDbUnregisterDatabase.c)
 */

__int64 __fastcall PiDrvDbRegisterNode(PCWSTR Source, char a2)
{
  wchar_t *PoolWithTag; // r14
  char v5; // r12
  int Node; // eax
  char *v7; // rbx
  int v8; // edi
  SIZE_T v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // esi
  __int64 v13; // rcx
  wchar_t *v15; // rdi
  PWCHAR UnicodeSubstring; // rax
  unsigned __int16 i; // cx
  int v18; // [rsp+28h] [rbp-58h]
  UNICODE_STRING String2; // [rsp+50h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING SearchString; // [rsp+70h] [rbp-10h] BYREF
  PVOID P; // [rsp+C0h] [rbp+40h] BYREF

  P = 0LL;
  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&SearchString.Length = 0LL;
  SearchString.Buffer = 0LL;
  PoolWithTag = 0LL;
  v5 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  Node = PiDrvDbCreateNode(Source, (__int64)&P);
  v7 = (char *)P;
  v8 = Node;
  if ( Node < 0 )
    goto LABEL_9;
  if ( (*((_DWORD *)P + 16) & 1) != 0 )
  {
    v12 = a2 & 8;
  }
  else
  {
    v9 = *((unsigned __int16 *)P + 16) + 32LL;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v9, 0x62647050u);
    if ( !PoolWithTag )
    {
      v8 = -1073741670;
      goto LABEL_9;
    }
    v8 = RtlStringCchPrintfW(PoolWithTag, v9 >> 1, L"%wZ\\%ws", v7 + 32, L"DriverDatabase");
    if ( v8 < 0 )
      goto LABEL_9;
    v12 = a2 & 8;
    v8 = DrvDbRegisterDatabase(v10, Source, v11, (__int64)PoolWithTag, v12 != 0, v18, (__int64)v7);
    if ( v8 < 0 )
      goto LABEL_9;
    v5 = 1;
  }
  if ( !v12 )
  {
LABEL_8:
    v7 = 0LL;
    goto LABEL_9;
  }
  v8 = PnpSetObjectProperty(
         *(__int64 *)&PiPnpRtlCtx,
         *((_QWORD *)v7 + 3),
         7u,
         *((_QWORD *)v7 + 9),
         0LL,
         (__int64)&DEVPKEY_DriverDatabase_FilePath,
         18,
         *((_QWORD *)v7 + 7),
         (unsigned int)*((unsigned __int16 *)v7 + 24) + 2,
         0);
  if ( v8 >= 0 )
  {
    v15 = (wchar_t *)*((_QWORD *)v7 + 7);
    String2.Buffer = v15;
    RtlInitUnicodeString(&SearchString, L"\\System32\\config\\");
    UnicodeSubstring = RtlFindUnicodeSubstring((PUNICODE_STRING)v7 + 3, &SearchString, 1u);
    if ( UnicodeSubstring )
    {
      i = 2 * ((__int64)(unsigned int)((_DWORD)UnicodeSubstring - *((_DWORD *)v7 + 14)) >> 1);
    }
    else
    {
      String2.Length = *((_WORD *)v7 + 24);
      for ( i = String2.Length; i > 2u; String2.Length = i )
      {
        if ( v15[((unsigned __int64)i >> 1) - 1] == 92 )
          break;
        i -= 2;
      }
      if ( i <= 2u || v15[((unsigned __int64)i >> 1) - 1] != 92 )
        goto LABEL_25;
      i -= 2;
    }
    String2.Length = i;
LABEL_25:
    String2.MaximumLength = i;
    if ( (int)PiDrvDbQuerySystemPathWin32(&String2, &DestinationString) < 0 )
    {
      v8 = 0;
      goto LABEL_8;
    }
    v8 = PnpSetObjectProperty(
           *(__int64 *)&PiPnpRtlCtx,
           *((_QWORD *)v7 + 3),
           7u,
           *((_QWORD *)v7 + 9),
           0LL,
           (__int64)&DEVPKEY_DriverDatabase_SystemPath,
           18,
           (__int64)DestinationString.Buffer,
           (unsigned int)DestinationString.Length + 2,
           0);
    if ( v8 >= 0 )
      goto LABEL_8;
  }
LABEL_9:
  RtlFreeAnsiString(&DestinationString);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v7 )
  {
    if ( v5 )
      DrvDbUnregisterDatabase(v13, Source);
    PiDrvDbDestroyNode(v7);
  }
  return (unsigned int)v8;
}
