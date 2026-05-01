/*
 * XREFs of ?BuildJsonFromKglEntry@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV?$ComPtr@UIGameEntry@KnownGameList@@@WRL@Microsoft@@PEAVHString@Wrappers@78@@Z @ 0x18003B66C
 * Callers:
 *     ?CheckKGLForGameFromGameConfig@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUGameConfig@ExecutionModel@@KPEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18003B44C (-CheckKGLForGameFromGameConfig@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUGam.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?JsonDocumentFromGameConfigValues@@YAJK_KK_N11KPEBGPEAPEAUHSTRING__@@@Z @ 0x180016D18 (-JsonDocumentFromGameConfigValues@@YAJK_KK_N11KPEBGPEAPEAUHSTRING__@@@Z.c)
 *     ?GetGameProfileFromRawData@AutoGameProfile@@YAJKKPEBEKPEAKPEA_K1PEA_N3@Z @ 0x180041098 (-GetGameProfileFromRawData@AutoGameProfile@@YAJKKPEBEKPEAKPEA_K1PEA_N3@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::KglDefaults::BuildJsonFromKglEntry(
        _BOOL8 a1,
        _QWORD *a2,
        HSTRING *a3)
{
  unsigned __int16 v4; // si
  unsigned int v5; // r13d
  int v6; // r14d
  bool v7; // r15
  char v8; // r12
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  void (*v12)(void); // rax
  int v14; // eax
  DWORD ActiveProcessorCount; // eax
  int GameProfileFromRawData; // eax
  HSTRING *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  bool *v21; // [rsp+50h] [rbp-41h]
  bool v22; // [rsp+58h] [rbp-39h]
  unsigned __int16 v23; // [rsp+5Ch] [rbp-35h] BYREF
  unsigned int v24; // [rsp+60h] [rbp-31h] BYREF
  _BYTE v25[12]; // [rsp+64h] [rbp-2Dh] BYREF
  __int16 v26; // [rsp+70h] [rbp-21h] BYREF
  PCNZWCH sourceString; // [rsp+78h] [rbp-19h]
  char v28[8]; // [rsp+80h] [rbp-11h] BYREF
  const WCHAR *v29; // [rsp+88h] [rbp-9h]
  unsigned int v30; // [rsp+90h] [rbp-1h]
  __int64 v31; // [rsp+98h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]
  _BOOL8 v33; // [rsp+F8h] [rbp+67h] BYREF
  _QWORD *v34; // [rsp+100h] [rbp+6Fh]
  HSTRING *v35; // [rsp+108h] [rbp+77h]
  bool v36; // [rsp+110h] [rbp+7Fh] BYREF

  v35 = a3;
  v34 = a2;
  v33 = a1;
  v31 = -2LL;
  v4 = 0;
  sourceString = 0LL;
  v5 = 0;
  v24 = 0;
  v6 = 0;
  memset(v25, 0, sizeof(v25));
  v7 = 0;
  LOBYTE(v33) = 0;
  v8 = 0;
  v36 = 0;
  v22 = 0;
  v9 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 *))(*(_QWORD *)*a2 + 48LL))(*a2, &v23);
  if ( v9 < 0 )
  {
    v10 = 260LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
      (const char *)(unsigned int)v9);
    v11 = *a2;
    if ( !*a2 )
      return (unsigned int)v9;
    *a2 = 0LL;
LABEL_5:
    v12 = *(void (**)(void))(*(_QWORD *)v11 + 16LL);
LABEL_6:
    v12();
    return (unsigned int)v9;
  }
  if ( v23 )
  {
    while ( 1 )
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int16 *, char *))(*(_QWORD *)*a2 + 64LL))(*a2, v4, &v26, v28);
      v9 = v14;
      if ( v14 < 0 )
        break;
      switch ( v26 )
      {
        case 320:
          v22 = (_DWORD)v29 != 0;
          break;
        case 321:
          ActiveProcessorCount = GetActiveProcessorCount(0xFFFFu);
          if ( !ActiveProcessorCount )
          {
            v18 = 58LL;
            goto LABEL_31;
          }
          v24 = -1;
          *(_QWORD *)&v25[4] = -1LL;
          if ( (v30 & 3) != 0 )
          {
            v18 = 66LL;
            goto LABEL_31;
          }
          if ( (unsigned __int16)(*v29 - 1) > 1u )
          {
            v18 = 74LL;
            goto LABEL_31;
          }
          if ( 4LL * v29[1] != v30 - 4LL )
          {
            v18 = 76LL;
LABEL_31:
            v9 = -2147024809;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v18,
              (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\autogameprofile.cpp",
              (const char *)0x80070057LL);
LABEL_32:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x117,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
              (const char *)(unsigned int)v9);
            v19 = *a2;
            if ( !*a2 )
              return (unsigned int)v9;
            *a2 = 0LL;
            v12 = *(void (**)(void))(*(_QWORD *)v19 + 16LL);
            goto LABEL_6;
          }
          GameProfileFromRawData = AutoGameProfile::GetGameProfileFromRawData(
                                     (AutoGameProfile *)*v29,
                                     v30 - 4,
                                     (int)v29 + 4,
                                     (const unsigned __int8 *)ActiveProcessorCount,
                                     (unsigned int)&v24,
                                     (unsigned int *)&v25[4],
                                     (unsigned __int64 *)v25,
                                     (unsigned int *)&v33,
                                     &v36,
                                     v21);
          v9 = GameProfileFromRawData;
          if ( GameProfileFromRawData < 0 )
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x4E,
              (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\autogameprofile.cpp",
              (const char *)(unsigned int)GameProfileFromRawData);
          if ( v9 < 0 )
            goto LABEL_32;
          break;
        case 322:
          sourceString = v29;
          v5 = v30;
          break;
      }
      if ( ++v4 >= v23 )
      {
        v6 = *(_DWORD *)v25;
        v7 = v33;
        v8 = v36;
        goto LABEL_25;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10B,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
      (const char *)(unsigned int)v14);
    v11 = *a2;
    if ( !*a2 )
      return (unsigned int)v9;
    *a2 = 0LL;
    goto LABEL_5;
  }
LABEL_25:
  v17 = v35;
  WindowsDeleteString(*v35);
  *v17 = 0LL;
  v9 = JsonDocumentFromGameConfigValues(v24, *(HSTRING *)&v25[4], v6, v8, v7, v22, v5 >> 1, sourceString, v17);
  if ( v9 < 0 )
  {
    v10 = 302LL;
    goto LABEL_3;
  }
  v20 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return 0LL;
}
