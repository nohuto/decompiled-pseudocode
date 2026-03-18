/*
 * XREFs of CmpCmdHiveClose @ 0x14063E098
 * Callers:
 *     CmpCompleteUnloadKey @ 0x14063DD64 (CmpCompleteUnloadKey.c)
 *     CmShutdownSystem @ 0x1408273C4 (CmShutdownSystem.c)
 *     CmpDestroyHive @ 0x14082F4C4 (CmpDestroyHive.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1400E50E0 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1401C02F0 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x1401C05B0 (ZwSetInformationFile.c)
 *     ZwSetInformationObject @ 0x1401C0C50 (ZwSetInformationObject.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

BOOLEAN __fastcall CmpCmdHiveClose(__int64 a1)
{
  HANDLE *v2; // rdi
  BOOLEAN v3; // r14
  void *v4; // rsi
  __int64 v5; // rdx
  unsigned int i; // ebx
  HANDLE v7; // rcx
  __int16 *p_ObjectInformation; // r8
  __int16 v10; // [rsp+30h] [rbp-50h] BYREF
  __int16 ObjectInformation; // [rsp+34h] [rbp-4Ch] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-48h] BYREF
  _QWORD FileInformation[5]; // [rsp+48h] [rbp-38h] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(FileInformation, 0, sizeof(FileInformation));
  v2 = (HANDLE *)(a1 + 1536);
  v3 = IoSetThreadHardErrorMode(0);
  v4 = *(void **)(a1 + 1536);
  if ( v4 && ZwQueryInformationFile(v4, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation) >= 0 )
  {
    if ( *(_BYTE *)(a1 + 141) )
    {
      FileInformation[2] = MEMORY[0xFFFFF78000000014];
    }
    else
    {
      v5 = FileInformation[2];
      if ( *(_QWORD *)(a1 + 4224) )
        v5 = *(_QWORD *)(a1 + 4224);
      FileInformation[2] = v5;
    }
    FileInformation[1] = MEMORY[0xFFFFF78000000014];
    ZwSetInformationFile(v4, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
  }
  for ( i = 0; i < 6; ++i )
  {
    v7 = *v2;
    if ( *v2 )
    {
      if ( i )
      {
        ObjectInformation = 0;
        p_ObjectInformation = &ObjectInformation;
      }
      else
      {
        v10 = 0;
        p_ObjectInformation = &v10;
      }
      ZwSetInformationObject(v7, ObjectHandleFlagInformation, p_ObjectInformation, 2u);
      ZwClose(*v2);
      *v2 = 0LL;
    }
    ++v2;
  }
  return IoSetThreadHardErrorMode(v3);
}
