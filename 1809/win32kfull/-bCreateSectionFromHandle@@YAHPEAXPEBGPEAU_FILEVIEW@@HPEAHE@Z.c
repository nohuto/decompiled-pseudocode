/*
 * XREFs of ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C008CFCC
 * Callers:
 *     ?bCreateSection@@YAHPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C008CE30 (-bCreateSection@@YAHPEBGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?bMapFileRetainHandle@@YAHPEBGPEAU_FILEVIEW@@HPEAH@Z @ 0x1C00C27F8 (-bMapFileRetainHandle@@YAHPEBGPEAU_FILEVIEW@@HPEAH@Z.c)
 * Callees:
 *     ?bIsFileInSystemFontsDir@@YAHPEAX@Z @ 0x1C008D28C (-bIsFileInSystemFontsDir@@YAHPEAX@Z.c)
 *     ZwWin32CreateSection @ 0x1C008D3C8 (ZwWin32CreateSection.c)
 *     ?TryGetFileDeviceRemoteBit@@YAJPEAXPEA_N@Z @ 0x1C008D4CC (-TryGetFileDeviceRemoteBit@@YAJPEAXPEA_N@Z.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C01350F8 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C026DCBC (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
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
  _DWORD v31[2]; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v32[5]; // [rsp+60h] [rbp-A0h] BYREF
  PCWSTR v33; // [rsp+B0h] [rbp-50h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES v35; // [rsp+C8h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+F8h] [rbp-8h] BYREF
  char FileInformation[8]; // [rsp+108h] [rbp+8h] BYREF
  union _LARGE_INTEGER v38; // [rsp+110h] [rbp+10h] BYREF
  char v39[16]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v40; // [rsp+130h] [rbp+30h]

  v6 = SourceString;
  v33 = SourceString;
  memset(v32, 0, sizeof(v32));
  v10 = v32[1];
  *(_OWORD *)a3 = v32[0];
  *((_OWORD *)a3 + 1) = v10;
  v11 = v32[3];
  DWORD2(v32[2]) = 8 * (a6 & 1);
  *((_OWORD *)a3 + 2) = v32[2];
  v12 = v32[4];
  *((_OWORD *)a3 + 3) = v11;
  *((_OWORD *)a3 + 4) = v12;
  RtlInitUnicodeString(&DestinationString, v6);
  *(_QWORD *)&v32[3] = a1;
  if ( !a1 )
    return 0LL;
  if ( ZwQueryInformationFile(a1, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation) < 0
    || ZwQueryInformationFile(a1, &IoStatusBlock, v39, 0x28u, FileBasicInformation) < 0 )
  {
    goto LABEL_31;
  }
  v14 = (8 * (a6 & 1)) | 1;
  *(_QWORD *)&v32[0] = v40;
  DWORD2(v32[2]) = v14;
  if ( a5 )
  {
    v15 = (wchar_t *)AllocFreeTmpBuffer(536LL);
    v16 = v15;
    if ( !v15 )
      goto LABEL_31;
    *a5 = 0;
    v17 = ZwQueryVolumeInformationFile(a1, &IoStatusBlock, v15, 0x218u, FileFsAttributeInformation);
    if ( v17 >= 0 && !_wcsnicmp(v16 + 6, L"FAT", 3uLL) )
      *a5 = 1;
    FreeTmpBuffer(v16);
    if ( v17 < 0 )
      goto LABEL_31;
    v6 = v33;
  }
  if ( a4 )
  {
    LowPart = v38.LowPart;
    if ( a4 > 0 )
      LowPart = a4;
    v31[1] = 0;
    v31[0] = LowPart;
    if ( ZwSetInformationFile(a1, &IoStatusBlock, v31, 8u, FileEndOfFileInformation) < 0 )
      goto LABEL_31;
    v19 = v31[0];
    HighPart = 0;
    v38.QuadPart = v31[0];
  }
  else
  {
    HighPart = v38.HighPart;
    v19 = v38.LowPart;
  }
  if ( !HighPart )
  {
    DWORD2(v32[1]) = v19;
    if ( (v14 & 8) != 0 )
      goto LABEL_17;
    if ( (int)TryGetFileDeviceRemoteBit(a1, &v30) >= 0 )
    {
      v14 ^= ((unsigned __int8)v14 ^ (unsigned __int8)(2 * v30)) & 2;
      DWORD2(v32[2]) = v14;
LABEL_17:
      v35.RootDirectory = 0LL;
      v35.ObjectName = 0LL;
      v35.Length = 48;
      v35.Attributes = 512;
      *(_OWORD *)&v35.SecurityDescriptor = 0LL;
      if ( (v14 & 2) != 0 )
        Section = ObtainSectionForNetworkedFontFile(&DestinationString, (struct _FILEVIEW *)v32, &v35, &v38, a4 != 0);
      else
        Section = ZwWin32CreateSection((int)&v32[2], v13, (int)&v35, (int)&v38, a4 != 0 ? 4 : 2, v28, (__int64)a1, v29);
      v21 = *(void **)&v32[3];
      if ( Section >= 0 )
      {
        if ( (unsigned int)bIsFileInSystemFontsDir(*(void **)&v32[3]) )
        {
          DWORD2(v32[2]) |= 0x10u;
LABEL_22:
          result = 1LL;
          v23 = v32[1];
          *(_OWORD *)a3 = v32[0];
          v24 = v32[2];
          *((_OWORD *)a3 + 1) = v23;
          v25 = v32[3];
          *((_OWORD *)a3 + 2) = v24;
          v26 = v32[4];
          *((_OWORD *)a3 + 3) = v25;
          *((_OWORD *)a3 + 4) = v26;
          return result;
        }
        if ( (int)ScrutinizeFontLoad(0LL, v6) >= 0 )
          goto LABEL_22;
        v21 = *(void **)&v32[3];
      }
      goto LABEL_32;
    }
  }
LABEL_31:
  v21 = a1;
LABEL_32:
  ZwClose(v21);
  return 0LL;
}
