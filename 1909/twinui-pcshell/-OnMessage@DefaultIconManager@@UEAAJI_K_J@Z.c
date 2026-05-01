/*
 * XREFs of ?OnMessage@DefaultIconManager@@UEAAJI_K_J@Z @ 0x1802721F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x180042D24 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18004CC7C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z @ 0x18024638C (--$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z.c)
 *     ?UpdateImageCache@DefaultIconManager@@AEAAJXZ @ 0x18027313C (-UpdateImageCache@DefaultIconManager@@AEAAJXZ.c)
 */

__int64 __fastcall DefaultIconManager::OnMessage(DefaultIconManager *this, int a2)
{
  int v3; // edx
  char v4; // r14
  HSTRING *v5; // rsi
  __int64 v6; // rax
  int updated; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  HSTRING v10; // r8
  int v12; // eax
  unsigned int v13; // ebx
  HSTRING string; // [rsp+20h] [rbp-20h] BYREF
  _BYTE pvParam[12]; // [rsp+28h] [rbp-18h] BYREF
  int v16; // [rsp+34h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]

  v3 = a2 - 736;
  if ( v3 )
  {
    if ( v3 == 58 )
    {
      v4 = *((_BYTE *)this + 144);
      v5 = (HSTRING *)((char *)this + 152);
      v6 = *((_QWORD *)this + 19);
      string = 0LL;
      *(_QWORD *)pvParam = v6;
      updated = Microsoft::WRL::Wrappers::HString::Set(&string, (HSTRING *)pvParam);
      v8 = updated;
      if ( updated < 0 )
      {
        v9 = 315LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
          (const char *)(unsigned int)updated);
        WindowsDeleteString(string);
        return v8;
      }
      AcquireSRWLockExclusive((PSRWLOCK)this + 61);
      *(_DWORD *)pvParam = 16;
      *(_QWORD *)&pvParam[4] = 0LL;
      v16 = 0;
      if ( SystemParametersInfoW(0x42u, 0, pvParam, 0) )
      {
        Microsoft::WRL::Wrappers::HString::Set<unsigned short *>(v5, (const wchar_t **)&pvParam[8]);
        *((_BYTE *)this + 144) = pvParam[4] & 1;
      }
      if ( this != (DefaultIconManager *)-488LL )
        ReleaseSRWLockExclusive((PSRWLOCK)this + 61);
      if ( v4 != *((_BYTE *)this + 144)
        || (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                           (Microsoft::WRL::Wrappers::Details *)*v5,
                           string,
                           v10) )
      {
        updated = DefaultIconManager::UpdateImageCache((DefaultIconManager *)((char *)this - 8));
        v8 = updated;
        if ( updated < 0 )
        {
          v9 = 332LL;
          goto LABEL_13;
        }
      }
      WindowsDeleteString(string);
    }
    return 0LL;
  }
  v12 = DefaultIconManager::UpdateImageCache((DefaultIconManager *)((char *)this - 8));
  v13 = v12;
  if ( v12 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x135,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
    (const char *)(unsigned int)v12);
  return v13;
}
