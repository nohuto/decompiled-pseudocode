/*
 * XREFs of IopInitCrashDumpRegCallback @ 0x140A16DD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     NtClose @ 0x1405FBB70 (NtClose.c)
 *     IoCreateFile @ 0x140617880 (IoCreateFile.c)
 *     IopInitializeCrashDump @ 0x140774CF4 (IopInitializeCrashDump.c)
 */

__int64 __fastcall IopInitCrashDumpRegCallback(
        __int64 a1,
        __int64 a2,
        const WCHAR *a3,
        int a4,
        __int64 a5,
        HANDLE FileHandle)
{
  _BYTE *v6; // rbx
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp+17h] BYREF

  v6 = FileHandle;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  if ( FileHandle )
  {
    if ( !*(_BYTE *)FileHandle )
    {
      if ( a3 )
      {
        if ( a4 )
        {
          if ( a5 )
          {
            if ( RtlInitUnicodeStringEx(&DestinationString, a3) >= 0 )
            {
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Length = 48;
              ObjectAttributes.Attributes = 64;
              ObjectAttributes.ObjectName = &DestinationString;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              if ( IoCreateFile(
                     &FileHandle,
                     0xC0100000,
                     &ObjectAttributes,
                     &IoStatusBlock,
                     0LL,
                     6u,
                     2u,
                     1u,
                     0x8008u,
                     0LL,
                     0,
                     CreateFileTypeNone,
                     0LL,
                     0x112u) >= 0 )
              {
                ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u);
                IoStatusBlock = (struct _IO_STATUS_BLOCK)DestinationString;
                if ( IopInitializeCrashDump((unsigned int *)FileHandle, (__int128 *)&IoStatusBlock.0) )
                  *v6 = 1;
                ExReleaseResourceLite(&IopCrashDumpLock);
                NtClose(FileHandle);
              }
            }
          }
        }
      }
    }
  }
  return 0LL;
}
