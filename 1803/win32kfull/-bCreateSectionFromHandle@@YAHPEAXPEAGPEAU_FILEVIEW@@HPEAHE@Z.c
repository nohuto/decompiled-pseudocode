/*
 * XREFs of ?bCreateSectionFromHandle@@YAHPEAXPEAGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00BF82C
 * Callers:
 *     ?bMapFileRetainHandle@@YAHPEAGPEAU_FILEVIEW@@HPEAH@Z @ 0x1C00566C8 (-bMapFileRetainHandle@@YAHPEAGPEAU_FILEVIEW@@HPEAH@Z.c)
 *     ?bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00BF6B0 (-bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z.c)
 * Callees:
 *     ?bIsFileInSystemFontsDir@@YAHPEAX@Z @ 0x1C00BFABC (-bIsFileInSystemFontsDir@@YAHPEAX@Z.c)
 *     ZwWin32CreateSection @ 0x1C00BFBDC (ZwWin32CreateSection.c)
 *     ?TryGetFileDeviceRemoteBit@@YAJPEAXPEA_N@Z @ 0x1C00BFCD0 (-TryGetFileDeviceRemoteBit@@YAJPEAXPEA_N@Z.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C0111E94 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C025A5C0 (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
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
  NTSTATUS v13; // eax
  void *v14; // rcx
  int v15; // edx
  int v16; // edi
  wchar_t *v17; // rax
  const wchar_t *v18; // r15
  NTSTATUS v19; // r13d
  LONG HighPart; // eax
  DWORD LowPart; // ecx
  int Section; // eax
  __int64 result; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  DWORD v28; // eax
  int v29; // [rsp+28h] [rbp-D8h]
  void *v30; // [rsp+38h] [rbp-C8h]
  bool v31; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v32[2]; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v33[5]; // [rsp+60h] [rbp-A0h] BYREF
  PCWSTR v34; // [rsp+B0h] [rbp-50h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES v36; // [rsp+C8h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+F8h] [rbp-8h] BYREF
  char FileInformation[8]; // [rsp+108h] [rbp+8h] BYREF
  union _LARGE_INTEGER v39; // [rsp+110h] [rbp+10h] BYREF
  char v40[16]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v41; // [rsp+130h] [rbp+30h]

  v6 = SourceString;
  v34 = SourceString;
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
  v13 = ZwQueryInformationFile(a1, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
  v14 = a1;
  if ( v13 >= 0 )
  {
    if ( ZwQueryInformationFile(a1, &IoStatusBlock, v40, 0x28u, FileBasicInformation) < 0 )
      goto LABEL_27;
    v16 = (8 * (a6 & 1)) | 1;
    *(_QWORD *)&v33[0] = v41;
    DWORD2(v33[2]) = v16;
    if ( !a5 )
    {
LABEL_11:
      if ( !a4 )
      {
        HighPart = v39.HighPart;
        LowPart = v39.LowPart;
        goto LABEL_13;
      }
      v28 = v39.LowPart;
      if ( a4 > 0 )
        v28 = a4;
      v32[1] = 0;
      v32[0] = v28;
      if ( ZwSetInformationFile(a1, &IoStatusBlock, v32, 8u, FileEndOfFileInformation) >= 0 )
      {
        LowPart = v32[0];
        HighPart = 0;
        v39.QuadPart = v32[0];
LABEL_13:
        if ( !HighPart )
        {
          DWORD2(v33[1]) = LowPart;
          if ( (v16 & 8) != 0 )
            goto LABEL_17;
          if ( (int)TryGetFileDeviceRemoteBit(a1, &v31) >= 0 )
          {
            v16 ^= ((unsigned __int8)v16 ^ (unsigned __int8)(2 * v31)) & 2;
            DWORD2(v33[2]) = v16;
LABEL_17:
            v36.RootDirectory = 0LL;
            v36.ObjectName = 0LL;
            v36.Length = 48;
            v36.Attributes = 512;
            *(_OWORD *)&v36.SecurityDescriptor = 0LL;
            if ( (v16 & 2) != 0 )
              Section = ObtainSectionForNetworkedFontFile(
                          &DestinationString,
                          (struct _FILEVIEW *)v33,
                          &v36,
                          &v39,
                          a4 != 0);
            else
              Section = ZwWin32CreateSection(
                          (int)&v33[2],
                          v15,
                          (int)&v36,
                          (int)&v39,
                          a4 != 0 ? 4 : 2,
                          v29,
                          (__int64)a1,
                          v30);
            v14 = *(void **)&v33[3];
            if ( Section >= 0 )
            {
              if ( (unsigned int)bIsFileInSystemFontsDir(*(void **)&v33[3]) )
              {
                DWORD2(v33[2]) |= 0x10u;
LABEL_22:
                result = 1LL;
                v24 = v33[1];
                *(_OWORD *)a3 = v33[0];
                v25 = v33[2];
                *((_OWORD *)a3 + 1) = v24;
                v26 = v33[3];
                *((_OWORD *)a3 + 2) = v25;
                v27 = v33[4];
                *((_OWORD *)a3 + 3) = v26;
                *((_OWORD *)a3 + 4) = v27;
                return result;
              }
              if ( (int)ScrutinizeFontLoad(0LL, v6) >= 0 )
                goto LABEL_22;
              v14 = *(void **)&v33[3];
            }
            goto LABEL_25;
          }
        }
      }
LABEL_27:
      v14 = a1;
      goto LABEL_25;
    }
    v17 = (wchar_t *)AllocFreeTmpBuffer(536LL);
    v18 = v17;
    v14 = a1;
    if ( v17 )
    {
      *a5 = 0;
      v19 = ZwQueryVolumeInformationFile(a1, &IoStatusBlock, v17, 0x218u, FileFsAttributeInformation);
      if ( v19 >= 0 && !_wcsnicmp(v18 + 6, L"FAT", 3uLL) )
        *a5 = 1;
      FreeTmpBuffer(v18);
      if ( v19 < 0 )
        goto LABEL_27;
      v6 = v34;
      goto LABEL_11;
    }
  }
LABEL_25:
  ZwClose(v14);
  return 0LL;
}
