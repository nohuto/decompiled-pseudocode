/*
 * XREFs of InternalRegisterClassEx @ 0x1C0021AE8
 * Callers:
 *     _RegisterClassEx @ 0x1C0022834 (_RegisterClassEx.c)
 *     RegisterDefaultClass @ 0x1C00230C8 (RegisterDefaultClass.c)
 *     RegisterIconTitleClass @ 0x1C0119D7C (RegisterIconTitleClass.c)
 * Callees:
 *     ?ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z @ 0x1C00222C8 (-ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z.c)
 *     _InnerGetClassPtr @ 0x1C0022530 (_InnerGetClassPtr.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C0022754 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z @ 0x1C0023484 (-ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCLS@@PEAX@Z @ 0x1C00234C8 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagC.c)
 *     ??$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z @ 0x1C00234F0 (--$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z.c)
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C0023550 (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     MapClientToServerPfn @ 0x1C00FC6AC (MapClientToServerPfn.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C01070EC (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x1C010D500 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z @ 0x1C0116A3C (-ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z.c)
 *     ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1C011B8F0 (-ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z.c)
 *     AllocateUnicodeString @ 0x1C0124434 (AllocateUnicodeString.c)
 */

__int64 __fastcall InternalRegisterClassEx(__int64 a1, __int16 a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v7; // r8d
  __int64 v8; // rbx
  __int64 v9; // r13
  int v10; // ecx
  __int64 v11; // rdi
  __int64 *ClassPtr; // r13
  __int64 *v13; // rdi
  struct tagDESKTOP *v14; // rdi
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // eax
  struct tagCLS *v18; // rax
  struct tagCLS *v19; // r13
  int v20; // r12d
  __int64 v21; // rcx
  __int64 v22; // r9
  int v23; // r15d
  __int64 v24; // rax
  int v25; // r13d
  unsigned __int16 v26; // ax
  __int64 v27; // rax
  unsigned __int16 v28; // ax
  unsigned int v29; // r8d
  const WCHAR *v30; // rdx
  int v31; // r15d
  char *v32; // rax
  __int64 v33; // r9
  const WCHAR *v34; // rdx
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
  if ( (a3 & 1) == 0 && v9 == hModuleWin && *(_WORD *)(gptiCurrent + 632LL) >= 0x400u )
  {
LABEL_83:
    v38 = 87LL;
    goto LABEL_63;
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
    v51 = *(struct tagDESKTOP **)(gptiCurrent + 424LL);
    ClassPtr = (__int64 *)InnerGetClassPtr((unsigned __int16)v11, (char *)v51 + 352, v9);
    if ( ClassPtr )
    {
      if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
      {
        if ( a4 )
          *a4 = 1;
        v8 = *ClassPtr;
        goto LABEL_49;
      }
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 4) & 0x4000) == 0 )
        goto LABEL_12;
      v13 = (__int64 *)InnerGetClassPtr((unsigned __int16)v11, (char *)v51 + 360, 0LL);
      if ( !v13 )
        goto LABEL_12;
      if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
      {
        if ( a4 )
          *a4 = 1;
        v8 = *v13;
        goto LABEL_49;
      }
    }
    v38 = 1410LL;
LABEL_63:
    UserSetLastError(v38);
    goto LABEL_49;
  }
LABEL_12:
  v14 = 0LL;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) == 0 )
    v14 = *(struct tagDESKTOP **)(gptiCurrent + 456LL);
  v51 = v14;
  v15 = (a3 & 8) != 0 ? 96 : 88;
  v16 = v15 + *(_DWORD *)(a1 + 16);
  v17 = -1;
  if ( v16 >= v15 )
    v17 = v15 + *(_DWORD *)(a1 + 16);
  v53 = v17;
  if ( v16 < v15 )
    goto LABEL_83;
  v18 = (struct tagCLS *)ClassAlloc(v14, v17, v7);
  v19 = v18;
  if ( v18 && !(unsigned __int8)InitLookAsideRef<tagCLS>(v18) )
  {
    ClassFree(v14, v19);
    v19 = 0LL;
  }
  if ( v19 == *(struct tagCLS **)v48[0] )
  {
    v20 = 1;
  }
  else
  {
    if ( v48[0] != gSmartObjNullRef && !--*(_DWORD *)(v48[0] + 8LL) )
    {
      if ( *(_BYTE *)(v48[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v48[0]);
    }
    v20 = 1;
    if ( v19 )
    {
      v48[0] = *((_QWORD *)v19 + 16);
      ++*(_DWORD *)(v48[0] + 8LL);
    }
    else
    {
      v48[0] = gSmartObjNullRef;
    }
  }
  if ( *(_QWORD *)v48[0] )
  {
    LockObjectAssignment(*(_QWORD *)v48[0] + 32LL, v14);
    *(_QWORD *)(*(_QWORD *)v48[0] + 56LL) = *(_QWORD *)v48[0];
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 8LL) = *(_DWORD *)(a1 + 4);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 32LL) = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 12LL) = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 80LL) = *(_DWORD *)(a1 + 20);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 64LL) = *(_QWORD *)(a1 + 24);
    *(_OWORD *)(*(_QWORD *)v48[0] + 80LL) = *(_OWORD *)(a1 + 32);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 72LL) = *(_QWORD *)(a1 + 48);
    v21 = *(_QWORD *)v48[0];
    *(_OWORD *)(v21 + 96) = *(_OWORD *)(a1 + 56);
    *(_QWORD *)(v21 + 112) = *(_QWORD *)(a1 + 72);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 84LL) = *(_DWORD *)(a1 + 88);
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 6LL) = a3;
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 4LL) = a2;
    if ( a2 )
    {
      v36 = *(_QWORD *)(*(_QWORD *)v48[0] + 8LL);
      if ( *(_DWORD *)(a1 + 92) == 1 )
        v37 = *(_DWORD *)(v36 + 84);
      else
        v37 = *(_DWORD *)(v36 + 80);
      *(_WORD *)(gpsi + 2LL * ((a2 & 0x2FFFu) - 666) + 328) = v37 + 320;
    }
    if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 6LL) & 1) == 0 )
    {
      v22 = MapClientToServerPfn(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 32LL));
      if ( v22 )
      {
        v42 = 0;
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 6LL) |= 1u;
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 6LL) &= ~2u;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 32LL) = v22;
        v43 = &unk_1C02C3610;
        while ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 32LL) != *v43 )
        {
          ++v42;
          v43 += 6;
          if ( v42 >= 8 )
            goto LABEL_28;
        }
        v44 = 6LL * v42;
        v45 = dword_1C02C3618[2 * v44];
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 80LL) >= v45 )
        {
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 84LL) = v45;
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 80LL) -= dword_1C02C3618[2 * v44];
        }
      }
    }
LABEL_28:
    v23 = (a3 >> 6) & 1;
    if ( !(unsigned int)ValidateAndLockCursor((struct tagCURSOR **)(*(_QWORD *)v48[0] + 88LL), v23) )
      goto LABEL_99;
    if ( !(unsigned int)ValidateAndLockCursor((struct tagCURSOR **)(*(_QWORD *)v48[0] + 80LL), v23) )
    {
LABEL_98:
      HMAssignmentUnlock(*(_QWORD *)v48[0] + 88LL);
LABEL_99:
      v54 = *(_QWORD *)(*(_QWORD *)v48[0] + 32LL);
      *(_QWORD *)(*(_QWORD *)v48[0] + 32LL) = 0LL;
      ClassFree(v14, *(struct tagCLS **)v48[0]);
      UnlockObjectAssignment(&v54);
      goto LABEL_49;
    }
    if ( !(unsigned int)ValidateAndLockCursor((struct tagCURSOR **)(*(_QWORD *)v48[0] + 112LL), v23) )
    {
LABEL_97:
      HMAssignmentUnlock(*(_QWORD *)v48[0] + 80LL);
      goto LABEL_98;
    }
    v56 = *(_OWORD *)LockPointer(v59, *(_QWORD *)v48[0] + 112LL, *(_QWORD *)(*(_QWORD *)v48[0] + 112LL));
    HMAssignmentLock(&v56);
    v24 = *(_QWORD *)(a1 + 64);
    if ( (v24 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v25 = 1;
      v49 = 1;
      v26 = UserAddAtomEx(v24, 0LL, 2LL);
    }
    else
    {
      v26 = ValidateClassAtomForRegisterClass(*(struct tagPROCESSINFO **)(gptiCurrent + 424LL), v24);
      v25 = 0;
    }
    if ( !v26 )
    {
LABEL_96:
      v47 = *(_QWORD *)v48[0] + 112LL;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 56LL) = 0LL;
      HMAssignmentUnlock(v47);
      goto LABEL_97;
    }
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 2LL) = v26;
    v27 = *(_QWORD *)(a1 + 80);
    if ( (v27 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v28 = UserAddAtomEx(v27, 0LL, 2LL);
    }
    else
    {
      v28 = ValidateClassAtomForRegisterClass(*(struct tagPROCESSINFO **)(gptiCurrent + 424LL), v27);
      v20 = 0;
    }
    if ( !v28 )
    {
LABEL_94:
      if ( v25 )
        UserDeleteAtom(*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 2LL));
      goto LABEL_96;
    }
    **(_WORD **)(*(_QWORD *)v48[0] + 8LL) = v28;
    v30 = *(const WCHAR **)(a1 + 64);
    if ( ((unsigned __int64)v30 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      RtlInitUnicodeString(&DestinationString, v30);
      v31 = DestinationString.Length + 1;
    }
    else
    {
      v31 = 7;
    }
    v32 = (char *)ClassAllocString(v14, v31, v29);
    if ( v32 )
    {
      if ( v14 )
      {
        v33 = *(_QWORD *)v48[0];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 48LL) = &v32[-(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL)
                                                                        - *(_QWORD *)(*(_QWORD *)v48[0] + 16LL))];
        *(_QWORD *)(v33 + 104) = v32;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v48[0] + 104LL) = v32;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 48LL) = 0LL;
      }
      if ( (*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        v55.Length = 0;
        v55.MaximumLength = v31;
        v55.Buffer = *(PCHAR *)(*(_QWORD *)v48[0] + 104LL);
        RtlUnicodeStringToAnsiString(&v55, &DestinationString, 0);
      }
      else
      {
        **(_BYTE **)(*(_QWORD *)v48[0] + 104LL) = 35;
        RtlIntegerToChar(
          *(unsigned __int16 *)(a1 + 64),
          0xAu,
          v31 - 1,
          (PCHAR)(*(_QWORD *)(*(_QWORD *)v48[0] + 104LL) + 1LL));
      }
      v34 = *(const WCHAR **)(*(_QWORD *)v48[0] + 96LL);
      if ( v34 && ((unsigned __int64)v34 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        RtlInitUnicodeString(&DestinationString, v34);
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
            goto LABEL_45;
          }
          ClassFree(v14, *(char **)(*(_QWORD *)v48[0] + 104LL));
          goto LABEL_92;
        }
        v46 = *(_QWORD *)v48[0];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 40LL) = 0LL;
        *(_QWORD *)(v46 + 96) = 0LL;
      }
LABEL_45:
      if ( v50 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v48[0] + 8LL) + 8LL) & 0x4000) != 0 )
      {
        **(_QWORD **)v48[0] = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 360LL);
        *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 360LL) = *(_QWORD *)v48[0];
      }
      else
      {
        **(_QWORD **)v48[0] = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 352LL);
        *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 352LL) = *(_QWORD *)v48[0];
      }
      v8 = *(_QWORD *)v48[0];
      goto LABEL_49;
    }
LABEL_92:
    if ( v20 )
      UserDeleteAtom(**(unsigned __int16 **)(*(_QWORD *)v48[0] + 8LL));
    goto LABEL_94;
  }
LABEL_49:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v48);
  return v8;
}
