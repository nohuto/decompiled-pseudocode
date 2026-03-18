/*
 * XREFs of vInitFontsDirectoryNameInformation @ 0x1C01340A0
 * Callers:
 *     <none>
 * Callees:
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C007D8D0 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ?QueryNameStringFromHandle@@YAJPEAXPEAU_OBJECT_NAME_INFORMATION@@KD@Z @ 0x1C008D334 (-QueryNameStringFromHandle@@YAJPEAXPEAU_OBJECT_NAME_INFORMATION@@KD@Z.c)
 */

int vInitFontsDirectoryNameInformation()
{
  void *v0; // rax
  struct _STRING *v1; // rax
  __int64 v2; // r8
  char v3; // r9
  wchar_t *v4; // rax
  __int64 v5; // rax
  int v7; // [rsp+68h] [rbp-9h] BYREF
  const wchar_t *v8; // [rsp+70h] [rbp-1h]
  STRING Source; // [rsp+78h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp+27h] BYREF
  void *FileHandle; // [rsp+D8h] [rbp+67h] BYREF

  v7 = 2359330;
  v8 = L"\\SystemRoot\\Fonts";
  Source.Buffer = (PCHAR)L"\\";
  *(_DWORD *)&Source.Length = 262146;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v7;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(v0) = ZwCreateFile(&FileHandle, 1u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 1u, 1u, 0x24u, 0LL, 0);
  if ( (int)v0 >= 0 )
  {
    v1 = (struct _STRING *)PALLOCMEM2(0x190uLL, 1986422343LL, 1);
    gpniFontsDirectory = v1;
    if ( v1
      && ((int)QueryNameStringFromHandle(FileHandle, (struct _OBJECT_NAME_INFORMATION *)v1, v2, v3) < 0
       || RtlAppendStringToString(gpniFontsDirectory, &Source) < 0) )
    {
      Win32FreePool(gpniFontsDirectory);
      gpniFontsDirectory = 0LL;
    }
    v4 = (wchar_t *)PALLOCMEM2(0x208uLL, 1986422343LL, 1);
    gpwszFontsDirectory = v4;
    if ( v4 )
    {
      if ( (unsigned int)bAppendSysDirectory(v4, &pwsz) )
      {
        v5 = -1LL;
        do
          ++v5;
        while ( gpwszFontsDirectory[v5] );
        gcwcFontsDirectory = v5 + 1;
      }
      else
      {
        Win32FreePool(gpwszFontsDirectory);
        gpwszFontsDirectory = 0LL;
        gcwcFontsDirectory = 0;
      }
    }
    ZwClose(FileHandle);
    v0 = PALLOCMEM2(0x190uLL, 1986422343LL, 1);
    gpniScratch = (__int64)v0;
  }
  return (int)v0;
}
