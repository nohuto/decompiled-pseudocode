/*
 * XREFs of InternalRegisterClassEx @ 0x1C001B870
 * Callers:
 *     RegisterDefaultClass @ 0x1C001A8C0 (RegisterDefaultClass.c)
 *     _RegisterClassEx @ 0x1C001B1C4 (_RegisterClassEx.c)
 *     RegisterIconTitleClass @ 0x1C00FBFF0 (RegisterIconTitleClass.c)
 * Callees:
 *     MapClientToServerPfn @ 0x1C0019ACC (MapClientToServerPfn.c)
 *     ?ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z @ 0x1C001C018 (-ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z.c)
 *     ?ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z @ 0x1C001C07C (-ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCLS@@PEAX@Z @ 0x1C001C0B4 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagC.c)
 *     ??$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z @ 0x1C001C0DC (--$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z.c)
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C001C134 (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00262E4 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     _InnerGetClassPtr @ 0x1C0030F30 (_InnerGetClassPtr.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x1C00F10AC (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z @ 0x1C00F8A60 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z.c)
 *     ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1C00FD164 (-ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z.c)
 *     AllocateUnicodeString @ 0x1C010321C (AllocateUnicodeString.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C0138FD0 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 */

__int64 __fastcall InternalRegisterClassEx(__int64 a1, __int16 a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v7; // r8d
  __int64 v8; // rbx
  __int64 v9; // r13
  int v10; // ecx
  __int64 v11; // rdi
  __int64 *ClassPtr; // r13
  struct tagDESKTOP *v13; // rdi
  unsigned int v14; // edx
  unsigned int v15; // ecx
  unsigned int v16; // eax
  struct tagCLS *v17; // rax
  struct tagCLS *v18; // r13
  int v19; // r12d
  __int64 v20; // rcx
  __int64 v21; // r9
  int v22; // r15d
  __int64 v23; // rax
  int v24; // r13d
  unsigned __int16 v25; // ax
  __int64 v26; // rax
  unsigned __int16 v27; // ax
  unsigned int v28; // r8d
  const WCHAR *v29; // rdx
  int v30; // r15d
  char *v31; // rax
  __int64 v32; // r9
  const WCHAR *v33; // rdx
  __int64 *v35; // rdi
  __int64 v36; // rax
  int v37; // r8d
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rax
  unsigned int v42; // r8d
  _QWORD *v43; // r9
  __int64 v44; // r8
  int v45; // edx
  __int64 v46; // rcx
  __int64 v47; // rcx
  _QWORD v48[2]; // [rsp+20h] [rbp-C8h] BYREF
  int v49; // [rsp+30h] [rbp-B8h]
  int v50; // [rsp+34h] [rbp-B4h]
  struct tagDESKTOP *v51; // [rsp+38h] [rbp-B0h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int v53; // [rsp+50h] [rbp-98h]
  __int64 v54; // [rsp+58h] [rbp-90h] BYREF
  _STRING v55; // [rsp+60h] [rbp-88h] BYREF
  __int128 v56; // [rsp+80h] [rbp-68h] BYREF
  char v57[8]; // [rsp+90h] [rbp-58h] BYREF
  __int64 v58; // [rsp+98h] [rbp-50h]
  char v59[72]; // [rsp+A0h] [rbp-48h] BYREF

  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v48);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v8 = 0LL;
  v49 = 0;
  v9 = *(_QWORD *)(a1 + 24);
  v10 = a3 & 1;
  v50 = v10;
  if ( (a3 & 1) == 0 && v9 == hModuleWin && *(_WORD *)(gptiCurrent + 624LL) >= 0x400u )
  {
LABEL_83:
    v38 = 87LL;
    goto LABEL_70;
  }
  v11 = *(_QWORD *)(a1 + 80);
  if ( (v11 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    LOWORD(v11) = UserFindAtom(*(_QWORD *)(a1 + 80));
    v10 = v50;
  }
  if ( a4 )
    *a4 = 0;
  if ( (_WORD)v11 && !v10 )
  {
    v51 = *(struct tagDESKTOP **)(gptiCurrent + 416LL);
    ClassPtr = (__int64 *)InnerGetClassPtr((unsigned __int16)v11, (char *)v51 + 344, v9);
    if ( ClassPtr )
    {
      if ( (unsigned int)PsGetWin32KFilterSet() != 5 )
        goto LABEL_69;
      if ( a4 )
        *a4 = 1;
      v8 = *ClassPtr;
      goto LABEL_48;
    }
    if ( (*(_DWORD *)(a1 + 4) & 0x4000) != 0 )
    {
      v35 = (__int64 *)InnerGetClassPtr((unsigned __int16)v11, (char *)v51 + 352, 0LL);
      if ( v35 )
      {
        if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
        {
          if ( a4 )
            *a4 = 1;
          v8 = *v35;
          goto LABEL_48;
        }
LABEL_69:
        v38 = 1410LL;
LABEL_70:
        UserSetLastError(v38);
        goto LABEL_48;
      }
    }
  }
  v13 = 0LL;
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 4) == 0 )
    v13 = *(struct tagDESKTOP **)(gptiCurrent + 448LL);
  v51 = v13;
  v14 = (a3 & 8) != 0 ? 96 : 88;
  v15 = v14 + *(_DWORD *)(a1 + 16);
  v16 = -1;
  if ( v15 >= v14 )
    v16 = v14 + *(_DWORD *)(a1 + 16);
  v53 = v16;
  if ( v15 < v14 )
    goto LABEL_83;
  v17 = (struct tagCLS *)ClassAlloc(v13, v16, v7);
  v18 = v17;
  if ( v17 && !(unsigned __int8)InitLookAsideRef<tagCLS>(v17) )
  {
    ClassFree(v13, v18);
    v18 = 0LL;
  }
  if ( v18 == *(struct tagCLS **)v48[0] )
  {
    v19 = 1;
  }
  else
  {
    if ( v48[0] != gSmartObjNullRef && !--*(_DWORD *)(v48[0] + 8LL) )
    {
      if ( *(_BYTE *)(v48[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v48[0]);
    }
    v19 = 1;
    if ( v18 )
    {
      v48[0] = *((_QWORD *)v18 + 16);
      ++*(_DWORD *)(v48[0] + 8LL);
    }
    else
    {
      v48[0] = gSmartObjNullRef;
    }
  }
  if ( *(_QWORD *)v48[0] )
  {
    LockObjectAssignment(*(_QWORD *)v48[0] + 32LL, v13);
    *(_QWORD *)(*(_QWORD *)v48[0] + 56LL) = *(_QWORD *)v48[0];
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 8LL) = *(_DWORD *)(a1 + 4);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 32LL) = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 12LL) = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 80LL) = *(_DWORD *)(a1 + 20);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 64LL) = *(_QWORD *)(a1 + 24);
    *(_OWORD *)(*(_QWORD *)v48[0] + 80LL) = *(_OWORD *)(a1 + 32);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 72LL) = *(_QWORD *)(a1 + 48);
    v20 = *(_QWORD *)v48[0];
    *(_OWORD *)(v20 + 96) = *(_OWORD *)(a1 + 56);
    *(_QWORD *)(v20 + 112) = *(_QWORD *)(a1 + 72);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 84LL) = *(_DWORD *)(a1 + 88);
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 6LL) = a3;
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 4LL) = a2;
    if ( a2 )
    {
      v36 = *(_QWORD *)(*(_QWORD *)v48[0] + 8LL);
      if ( *(_DWORD *)(a1 + 92) == 1 )
        v37 = *(_DWORD *)(v36 + 84);
      else
        LOWORD(v37) = *(_WORD *)(v36 + 80);
      *(_WORD *)(gpsi + 2LL * ((a2 & 0x3FFFu) - 666) + 328) = v37 + 312;
    }
    if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 6LL) & 1) == 0 )
    {
      v21 = MapClientToServerPfn(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 32LL));
      if ( v21 )
      {
        v42 = 0;
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 6LL) |= 1u;
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 6LL) &= ~2u;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 32LL) = v21;
        v43 = &unk_1C02D25A0;
        while ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 32LL) != *v43 )
        {
          ++v42;
          v43 += 6;
          if ( v42 >= 8 )
            goto LABEL_27;
        }
        v44 = 6LL * v42;
        v45 = dword_1C02D25A8[2 * v44];
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 80LL) >= v45 )
        {
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 84LL) = v45;
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 80LL) -= dword_1C02D25A8[2 * v44];
        }
      }
    }
LABEL_27:
    v22 = (a3 >> 6) & 1;
    if ( !(unsigned int)ValidateAndLockCursor((struct tagCURSOR **)(*(_QWORD *)v48[0] + 88LL), v22) )
      goto LABEL_99;
    if ( !(unsigned int)ValidateAndLockCursor((struct tagCURSOR **)(*(_QWORD *)v48[0] + 80LL), v22) )
    {
LABEL_98:
      HMAssignmentUnlock(*(_QWORD *)v48[0] + 88LL);
LABEL_99:
      v54 = *(_QWORD *)(*(_QWORD *)v48[0] + 32LL);
      *(_QWORD *)(*(_QWORD *)v48[0] + 32LL) = 0LL;
      ClassFree(v13, *(struct tagCLS **)v48[0]);
      UnlockObjectAssignment(&v54);
      goto LABEL_48;
    }
    if ( !(unsigned int)ValidateAndLockCursor((struct tagCURSOR **)(*(_QWORD *)v48[0] + 112LL), v22) )
    {
LABEL_97:
      HMAssignmentUnlock(*(_QWORD *)v48[0] + 80LL);
      goto LABEL_98;
    }
    v56 = *(_OWORD *)LockPointer(v59, *(_QWORD *)v48[0] + 112LL, *(_QWORD *)(*(_QWORD *)v48[0] + 112LL));
    HMAssignmentLock(&v56);
    v23 = *(_QWORD *)(a1 + 64);
    if ( (v23 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v24 = 1;
      v49 = 1;
      v25 = UserAddAtomEx(v23, 0LL, 2LL);
    }
    else
    {
      v25 = ValidateClassAtomForRegisterClass(*(struct tagPROCESSINFO **)(gptiCurrent + 416LL), v23);
      v24 = 0;
    }
    if ( !v25 )
    {
LABEL_96:
      v47 = *(_QWORD *)v48[0] + 112LL;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 56LL) = 0LL;
      HMAssignmentUnlock(v47);
      goto LABEL_97;
    }
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 2LL) = v25;
    v26 = *(_QWORD *)(a1 + 80);
    if ( (v26 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v27 = UserAddAtomEx(v26, 0LL, 2LL);
    }
    else
    {
      v27 = ValidateClassAtomForRegisterClass(*(struct tagPROCESSINFO **)(gptiCurrent + 416LL), v26);
      v19 = 0;
    }
    if ( !v27 )
    {
LABEL_94:
      if ( v24 )
        UserDeleteAtom(*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 2LL));
      goto LABEL_96;
    }
    **(_WORD **)(*(_QWORD *)v48[0] + 8LL) = v27;
    v29 = *(const WCHAR **)(a1 + 64);
    if ( ((unsigned __int64)v29 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      RtlInitUnicodeString(&DestinationString, v29);
      v30 = DestinationString.Length + 1;
    }
    else
    {
      v30 = 7;
    }
    v31 = (char *)ClassAllocString(v13, v30, v28);
    if ( v31 )
    {
      if ( v13 )
      {
        v32 = *(_QWORD *)v48[0];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 48LL) = &v31[-(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL)
                                                                        - *(_QWORD *)(*(_QWORD *)v48[0] + 16LL))];
        *(_QWORD *)(v32 + 104) = v31;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v48[0] + 104LL) = v31;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 48LL) = 0LL;
      }
      if ( (*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        v55.Length = 0;
        v55.MaximumLength = v30;
        v55.Buffer = *(PCHAR *)(*(_QWORD *)v48[0] + 104LL);
        RtlUnicodeStringToAnsiString(&v55, &DestinationString, 0);
      }
      else
      {
        **(_BYTE **)(*(_QWORD *)v48[0] + 104LL) = 35;
        RtlIntegerToChar(
          *(unsigned __int16 *)(a1 + 64),
          0xAu,
          v30 - 1,
          (PCHAR)(*(_QWORD *)(*(_QWORD *)v48[0] + 104LL) + 1LL));
      }
      v33 = *(const WCHAR **)(*(_QWORD *)v48[0] + 96LL);
      if ( v33 && ((unsigned __int64)v33 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        RtlInitUnicodeString(&DestinationString, v33);
        if ( DestinationString.Length )
        {
          if ( (unsigned int)AllocateUnicodeString(v57, &DestinationString) )
          {
            v39 = *(_QWORD *)v48[0];
            v40 = v58;
            v41 = v58;
            if ( (v58 & 0xFFFFFFFFFFFF0000uLL) != 0 )
              v41 = -1LL;
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 40LL) = v41;
            *(_QWORD *)(v39 + 96) = v40;
            goto LABEL_44;
          }
          ClassFree(v13, *(char **)(*(_QWORD *)v48[0] + 104LL));
          goto LABEL_92;
        }
        v46 = *(_QWORD *)v48[0];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 40LL) = 0LL;
        *(_QWORD *)(v46 + 96) = 0LL;
      }
LABEL_44:
      if ( v50 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 8LL) & 0x4000) != 0 )
      {
        **(_QWORD **)v48[0] = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 352LL);
        *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 352LL) = *(_QWORD *)v48[0];
      }
      else
      {
        **(_QWORD **)v48[0] = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 344LL);
        *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 344LL) = *(_QWORD *)v48[0];
      }
      v8 = *(_QWORD *)v48[0];
      goto LABEL_48;
    }
LABEL_92:
    if ( v19 )
      UserDeleteAtom(**(unsigned __int16 **)(*(_QWORD *)v48[0] + 8LL));
    goto LABEL_94;
  }
LABEL_48:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v48);
  return v8;
}
