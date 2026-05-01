/*
 * XREFs of ?_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@PEAPEAU2@@Z @ 0x180052200
 * Callers:
 *     ?Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180052520 (-Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800402F0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1800524BC (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     _alloca_probe @ 0x1800B0ED0 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x180117764 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x18012A58C (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ??$?0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z @ 0x18017BB18 (--$-0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaSharedExperienceManager::_NormalizeAndAddPositionerArgs(
        CortanaSharedExperienceManager *this,
        HSTRING a2,
        struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *a3,
        HSTRING *a4)
{
  PCWSTR StringRawBuffer; // rax
  const unsigned __int16 *v7; // rbx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  int v10; // eax
  unsigned int v11; // ebx
  const wchar_t *v12; // rax
  HSTRING_HEADER *v13; // rbx
  HRESULT v14; // eax
  HSTRING v15; // rax
  HSTRING v16; // rcx
  __int64 v18; // rdx
  HSTRING string; // [rsp+20h] [rbp-E0h] BYREF
  UINT32 length[2]; // [rsp+28h] [rbp-D8h] BYREF
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING string1; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING v23[2]; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR sourceString[2088]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+10F8h] [rbp+FF8h]

  v23[1] = (HSTRING)-2LL;
  v23[0] = a2;
  *a4 = 0LL;
  string1 = 0LL;
  if ( a2 )
  {
    length[0] = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(a2, length);
    v7 = StringRawBuffer;
    if ( StringRawBuffer && length[0] )
    {
      v8 = length[0] - 1;
      v9 = (unsigned int)v8;
      if ( StringRawBuffer[v8] != 47 )
      {
        v10 = Microsoft::WRL::Wrappers::HString::Set(&string1, v23);
        v11 = v10;
        if ( v10 >= 0 )
          goto LABEL_6;
        v18 = 831LL;
LABEL_22:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
          (const char *)(unsigned int)v10,
          (int)string);
        goto LABEL_13;
      }
      memset_0(sourceString, 0, 0x1048uLL);
      v10 = StringCchCopyNW(sourceString, 0x824uLL, v7, v9);
      v11 = v10;
      if ( v10 < 0 )
      {
        v18 = 826LL;
        goto LABEL_22;
      }
      v23[0] = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, sourceString)
                          + 24);
      v10 = Microsoft::WRL::Wrappers::HString::Set(&string1, v23);
      v11 = v10;
      if ( v10 < 0 )
      {
        v18 = 827LL;
        goto LABEL_22;
      }
    }
  }
  else
  {
    v10 = Microsoft::WRL::Wrappers::HString::Set(
            (Microsoft::WRL::Wrappers::HString *)&string1,
            L"StartMode=Proactive",
            0x13u);
    v11 = v10;
    if ( v10 < 0 )
    {
      v18 = 814LL;
      goto LABEL_22;
    }
  }
LABEL_6:
  v21 = 0;
  v10 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *, int *))(*(_QWORD *)a3 + 48LL))(
          a3,
          &v21);
  v11 = v10;
  if ( v10 < 0 )
  {
    v18 = 838LL;
    goto LABEL_22;
  }
  *(_QWORD *)length = 0LL;
  if ( v21 == 1 )
  {
    v12 = L"&Positioner=desktop";
  }
  else
  {
    if ( v21 != 2 )
      goto LABEL_10;
    v12 = L"&Positioner=holographic";
  }
  *(_QWORD *)length = v12;
LABEL_10:
  v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)length);
  WindowsDeleteString(0LL);
  string = 0LL;
  v14 = WindowsConcatString(string1, (HSTRING)v13[1].Reserved.Reserved1, &string);
  v11 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x353,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v14,
      (int)string);
    v16 = string;
  }
  else
  {
    v15 = string;
    v16 = 0LL;
    string = 0LL;
    *a4 = v15;
    v11 = 0;
  }
  WindowsDeleteString(v16);
  string = 0LL;
LABEL_13:
  WindowsDeleteString(string1);
  return v11;
}
