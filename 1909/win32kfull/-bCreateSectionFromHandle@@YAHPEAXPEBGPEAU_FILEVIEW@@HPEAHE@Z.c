/*
 * XREFs of ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C0122DDC
 * Callers:
 *     ?bCreateSection@@YAHPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C0122C28 (-bCreateSection@@YAHPEBGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?bMapFileRetainHandle@@YAHPEBGPEAU_FILEVIEW@@HPEAH@Z @ 0x1C01429CC (-bMapFileRetainHandle@@YAHPEBGPEAU_FILEVIEW@@HPEAH@Z.c)
 * Callees:
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C011A00C (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     ?bIsFileInSystemFontsDir@@YAHPEAX@Z @ 0x1C01230F0 (-bIsFileInSystemFontsDir@@YAHPEAX@Z.c)
 *     ZwWin32CreateSection @ 0x1C012322C (ZwWin32CreateSection.c)
 *     ?TryGetFileDeviceRemoteBit@@YAJPEAXPEA_N@Z @ 0x1C0123C60 (-TryGetFileDeviceRemoteBit@@YAJPEAXPEA_N@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C0285E7C (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 */

__int64 __fastcall bCreateSectionFromHandle(
        void *a1,
        PCWSTR SourceString,
        struct _FILEVIEW *a3,
        int a4,
        int *a5,
        unsigned __int8 a6)
{
  const WCHAR *v6; // r15
  __int128 v10; // xmm1
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  int v13; // edx
  int v14; // ebx
  wchar_t *v15; // rax
  const wchar_t *v16; // r15
  NTSTATUS v17; // r13d
  LONG HighPart; // eax
  DWORD v19; // ecx
  int Section; // eax
  void *v21; // rcx
  __int64 result; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  DWORD LowPart; // eax
  int v28; // [rsp+28h] [rbp-D8h]
  void *v29; // [rsp+38h] [rbp-C8h]
  bool v30; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+58h] [rbp-A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v33[5]; // [rsp+70h] [rbp-90h] BYREF
  PCWSTR v34; // [rsp+C0h] [rbp-40h]
  struct _UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-38h] BYREF
  struct _OBJECT_ATTRIBUTES v36; // [rsp+D8h] [rbp-28h] BYREF
  __int64 FileInformation; // [rsp+108h] [rbp+8h] BYREF
  union _LARGE_INTEGER v38; // [rsp+110h] [rbp+10h] BYREF
  __int64 v39; // [rsp+118h] [rbp+18h]
  _QWORD v40[5]; // [rsp+120h] [rbp+20h] BYREF

  v6 = SourceString;
  v34 = SourceString;
  memset(&v36, 0, sizeof(v36));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  FileInformation = 0LL;
  v38.QuadPart = 0LL;
  v39 = 0LL;
  memset(v40, 0, sizeof(v40));
  *(_QWORD *)&DestinationString.Length = 0LL;
  v31 = 0LL;
  DestinationString.Buffer = 0LL;
  memset(v33, 0, sizeof(v33));
  v10 = v33[1];
  *(_OWORD *)a3 = v33[0];
  *((_OWORD *)a3 + 1) = v10;
  v11 = v33[3];
  DWORD2(v33[2]) = 8 * (a6 & 1);
  *((_OWORD *)a3 + 2) = v33[2];
  v12 = v33[4];
  *((_OWORD *)a3 + 3) = v11;
  *((_OWORD *)a3 + 4) = v12;
  RtlInitUnicodeString(&DestinationString, v6);
  *(_QWORD *)&v33[3] = a1;
  if ( !a1 )
    return 0LL;
  if ( ZwQueryInformationFile(a1, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation) < 0
    || ZwQueryInformationFile(a1, &IoStatusBlock, v40, 0x28u, FileBasicInformation) < 0 )
  {
    goto LABEL_25;
  }
  v14 = (8 * (a6 & 1)) | 1;
  *(_QWORD *)&v33[0] = v40[2];
  DWORD2(v33[2]) = v14;
  if ( a5 )
  {
    v15 = (wchar_t *)AllocFreeTmpBuffer(536LL);
    v16 = v15;
    if ( !v15 )
      goto LABEL_25;
    *a5 = 0;
    v17 = ZwQueryVolumeInformationFile(a1, &IoStatusBlock, v15, 0x218u, FileFsAttributeInformation);
    if ( v17 >= 0 && !_wcsnicmp(v16 + 6, L"FAT", 3uLL) )
      *a5 = 1;
    FreeTmpBuffer(v16);
    if ( v17 < 0 )
      goto LABEL_25;
    v6 = v34;
  }
  if ( a4 )
  {
    LowPart = v38.LowPart;
    if ( a4 > 0 )
      LowPart = a4;
    v31 = LowPart;
    if ( ZwSetInformationFile(a1, &IoStatusBlock, &v31, 8u, FileEndOfFileInformation) < 0 )
      goto LABEL_25;
    v19 = v31;
    HighPart = 0;
    v38.QuadPart = (unsigned int)v31;
  }
  else
  {
    HighPart = v38.HighPart;
    v19 = v38.LowPart;
  }
  if ( !HighPart )
  {
    DWORD2(v33[1]) = v19;
    if ( (v14 & 8) != 0 )
      goto LABEL_15;
    if ( (int)TryGetFileDeviceRemoteBit(a1, &v30) >= 0 )
    {
      v14 ^= ((unsigned __int8)v14 ^ (unsigned __int8)(2 * v30)) & 2;
      DWORD2(v33[2]) = v14;
LABEL_15:
      v36.Length = 48;
      v36.RootDirectory = 0LL;
      v36.Attributes = 512;
      v36.ObjectName = 0LL;
      *(_OWORD *)&v36.SecurityDescriptor = 0LL;
      if ( (v14 & 2) != 0 )
        Section = ObtainSectionForNetworkedFontFile(&DestinationString, (struct _FILEVIEW *)v33, &v36, &v38, a4 != 0);
      else
        Section = ZwWin32CreateSection((int)&v33[2], v13, (int)&v36, (int)&v38, a4 != 0 ? 4 : 2, v28, (__int64)a1, v29);
      v21 = *(void **)&v33[3];
      if ( Section >= 0 )
      {
        if ( (unsigned int)bIsFileInSystemFontsDir(*(void **)&v33[3]) )
        {
          DWORD2(v33[2]) |= 0x10u;
LABEL_20:
          result = 1LL;
          v23 = v33[1];
          *(_OWORD *)a3 = v33[0];
          v24 = v33[2];
          *((_OWORD *)a3 + 1) = v23;
          v25 = v33[3];
          *((_OWORD *)a3 + 2) = v24;
          v26 = v33[4];
          *((_OWORD *)a3 + 3) = v25;
          *((_OWORD *)a3 + 4) = v26;
          return result;
        }
        if ( ScrutinizeFontLoad(0, v6) >= 0 )
          goto LABEL_20;
        v21 = *(void **)&v33[3];
      }
      goto LABEL_32;
    }
  }
LABEL_25:
  v21 = a1;
LABEL_32:
  ZwClose(v21);
  return 0LL;
}
