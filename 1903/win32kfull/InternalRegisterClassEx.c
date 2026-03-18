/*
 * XREFs of InternalRegisterClassEx @ 0x1C0097760
 * Callers:
 *     RegisterDefaultClass @ 0x1C0096080 (RegisterDefaultClass.c)
 *     _RegisterClassEx @ 0x1C0096AB8 (_RegisterClassEx.c)
 *     RegisterIconTitleClass @ 0x1C0122218 (RegisterIconTitleClass.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z @ 0x1C0094478 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x1C00944B8 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 *     MapClientToServerPfn @ 0x1C0095CD0 (MapClientToServerPfn.c)
 *     ??$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z @ 0x1C0095EE8 (--$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z.c)
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C0095F48 (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCLS@@PEAX@Z @ 0x1C0096014 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagC.c)
 *     ?ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z @ 0x1C009603C (-ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z.c)
 *     ?ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z @ 0x1C0097F14 (-ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C00BE55C (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C00BE728 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     _InnerGetClassPtr @ 0x1C00BEB50 (_InnerGetClassPtr.c)
 *     ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1C0123AD4 (-ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z.c)
 *     AllocateUnicodeString @ 0x1C012E354 (AllocateUnicodeString.c)
 */

__int64 __fastcall InternalRegisterClassEx(__int64 a1, __int16 a2, unsigned int a3, _DWORD *a4)
{
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int16 Atom; // r12
  __int64 *ClassPtr; // r13
  struct tagDESKTOP *v15; // rsi
  unsigned int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // rcx
  __int64 v20; // r9
  int v21; // r15d
  __int64 v22; // rcx
  unsigned __int16 v23; // ax
  __int64 v24; // rcx
  unsigned __int16 v25; // ax
  const WCHAR *v26; // rdx
  int v27; // r15d
  char *v28; // rax
  __int64 v29; // r9
  const WCHAR *v30; // rdx
  __int64 *v32; // r12
  __int64 v33; // rax
  int v34; // r8d
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rax
  unsigned int v39; // r8d
  _QWORD *v40; // r9
  __int64 v41; // r8
  int v42; // edx
  __int64 v43; // rcx
  __int64 v44; // rcx
  _QWORD v45[2]; // [rsp+20h] [rbp-C8h] BYREF
  int v46; // [rsp+30h] [rbp-B8h]
  int v47; // [rsp+34h] [rbp-B4h]
  struct tagDESKTOP *v48; // [rsp+38h] [rbp-B0h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-A8h] BYREF
  _STRING v50; // [rsp+50h] [rbp-98h] BYREF
  unsigned int v51; // [rsp+60h] [rbp-88h]
  __int64 v52; // [rsp+68h] [rbp-80h] BYREF
  __int64 v53; // [rsp+70h] [rbp-78h] BYREF
  __int64 v54; // [rsp+78h] [rbp-70h]
  __int128 v55; // [rsp+90h] [rbp-58h] BYREF
  _QWORD v56[9]; // [rsp+A0h] [rbp-48h] BYREF
  int v57; // [rsp+F0h] [rbp+8h]

  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v45);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&v50.Length = 0LL;
  v50.Buffer = 0LL;
  v9 = 0LL;
  v47 = 0;
  v46 = 0;
  v10 = *(_QWORD *)(a1 + 24);
  v11 = a3 & 1;
  v57 = a3 & 1;
  if ( (a3 & 1) == 0 && v10 == hModuleWin && *(_WORD *)(gptiCurrent + 624LL) >= 0x400u )
  {
LABEL_80:
    v35 = 87LL;
    goto LABEL_63;
  }
  v12 = *(_QWORD *)(a1 + 80);
  if ( (v12 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    Atom = UserFindAtom(v12);
    LODWORD(v11) = a3 & 1;
  }
  else
  {
    Atom = *(_QWORD *)(a1 + 80);
  }
  if ( a4 )
    *a4 = 0;
  if ( Atom && !(_DWORD)v11 )
  {
    v48 = *(struct tagDESKTOP **)(gptiCurrent + 416LL);
    ClassPtr = (__int64 *)InnerGetClassPtr(Atom, (char *)v48 + 344, v10);
    if ( ClassPtr )
    {
      if ( (unsigned int)PsGetWin32KFilterSet() != 5 )
        goto LABEL_62;
      if ( a4 )
        *a4 = 1;
      v9 = *ClassPtr;
      goto LABEL_46;
    }
    if ( (*(_DWORD *)(a1 + 4) & 0x4000) != 0 )
    {
      v32 = (__int64 *)InnerGetClassPtr(Atom, (char *)v48 + 352, 0LL);
      if ( v32 )
      {
        if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
        {
          if ( a4 )
            *a4 = 1;
          v9 = *v32;
          goto LABEL_46;
        }
LABEL_62:
        v35 = 1410LL;
LABEL_63:
        UserSetLastError(v35, v11, v7, v8);
        goto LABEL_46;
      }
    }
  }
  v15 = 0LL;
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 4) == 0 )
    v15 = *(struct tagDESKTOP **)(gptiCurrent + 448LL);
  v48 = v15;
  v16 = (a3 & 8) != 0 ? 96 : 88;
  v11 = v16 + *(_DWORD *)(a1 + 16);
  if ( (unsigned int)v11 < v16 )
    goto LABEL_80;
  v51 = v16 + *(_DWORD *)(a1 + 16);
  v17 = ClassAlloc((PVOID *)v15, v11);
  v18 = v17;
  if ( v17 && !InitLookAsideRef<tagCLS>(v17) )
  {
    ClassFree((PVOID *)v15, (PVOID *)v18);
    v18 = 0LL;
  }
  if ( v18 != *(_QWORD *)v45[0] )
  {
    if ( v45[0] != gSmartObjNullRef && !--*(_DWORD *)(v45[0] + 8LL) )
    {
      if ( *(_BYTE *)(v45[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v45[0]);
    }
    if ( v18 )
    {
      v45[0] = *(_QWORD *)(v18 + 128);
      ++*(_DWORD *)(v45[0] + 8LL);
    }
    else
    {
      v45[0] = gSmartObjNullRef;
    }
  }
  if ( *(_QWORD *)v45[0] )
  {
    LockObjectAssignment(*(_QWORD *)v45[0] + 32LL, v15);
    *(_QWORD *)(*(_QWORD *)v45[0] + 56LL) = *(_QWORD *)v45[0];
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 8LL) + 8LL) = *(_DWORD *)(a1 + 4);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 8LL) + 32LL) = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 8LL) + 12LL) = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 8LL) + 80LL) = *(_DWORD *)(a1 + 20);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 8LL) + 64LL) = *(_QWORD *)(a1 + 24);
    *(_OWORD *)(*(_QWORD *)v45[0] + 80LL) = *(_OWORD *)(a1 + 32);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 8LL) + 72LL) = *(_QWORD *)(a1 + 48);
    v19 = *(_QWORD *)v45[0];
    *(_OWORD *)(v19 + 96) = *(_OWORD *)(a1 + 56);
    *(_QWORD *)(v19 + 112) = *(_QWORD *)(a1 + 72);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 8LL) + 84LL) = *(_DWORD *)(a1 + 88);
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 8LL) + 6LL) = a3;
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 8LL) + 4LL) = a2;
    if ( a2 )
    {
      v33 = *(_QWORD *)(*(_QWORD *)v45[0] + 8LL);
      if ( *(_DWORD *)(a1 + 92) == 1 )
        v34 = *(_DWORD *)(v33 + 84);
      else
        v34 = *(_DWORD *)(v33 + 80);
      *(_WORD *)(gpsi + 2LL * ((a2 & 0x3FFFu) - 666) + 328) = v34 + 320;
    }
    if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 8LL) + 6LL) & 1) == 0 )
    {
      v20 = MapClientToServerPfn(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 8LL) + 32LL));
      if ( v20 )
      {
        v39 = 0;
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 8LL) + 6LL) |= 1u;
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 8LL) + 6LL) &= ~2u;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 8LL) + 32LL) = v20;
        v40 = &unk_1C02D6A60;
        while ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 8LL) + 32LL) != *v40 )
        {
          ++v39;
          v40 += 6;
          if ( v39 >= 8 )
            goto LABEL_25;
        }
        v41 = 6LL * v39;
        v42 = dword_1C02D6A68[2 * v41];
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 8LL) + 80LL) >= v42 )
        {
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 8LL) + 84LL) = v42;
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 8LL) + 80LL) -= dword_1C02D6A68[2 * v41];
        }
      }
    }
LABEL_25:
    v21 = (a3 >> 6) & 1;
    if ( (unsigned int)ValidateAndLockCursor((struct tagCURSOR **)(*(_QWORD *)v45[0] + 88LL), v21) )
    {
      if ( (unsigned int)ValidateAndLockCursor((struct tagCURSOR **)(*(_QWORD *)v45[0] + 80LL), v21) )
      {
        if ( (unsigned int)ValidateAndLockCursor((struct tagCURSOR **)(*(_QWORD *)v45[0] + 112LL), v21) )
        {
          v55 = *(_OWORD *)LockPointer(v56, *(_QWORD *)v45[0] + 112LL, *(__int64 **)(*(_QWORD *)v45[0] + 112LL));
          HMAssignmentLock(&v55);
          v22 = *(_QWORD *)(a1 + 64);
          if ( (v22 & 0xFFFFFFFFFFFF0000uLL) != 0 )
          {
            v47 = 1;
            v23 = UserAddAtomEx(v22, 0LL, 2LL);
          }
          else
          {
            v23 = ValidateClassAtomForRegisterClass(*(struct tagPROCESSINFO **)(gptiCurrent + 416LL), v22);
          }
          if ( v23 )
          {
            *(_WORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 8LL) + 2LL) = v23;
            v24 = *(_QWORD *)(a1 + 80);
            if ( (v24 & 0xFFFFFFFFFFFF0000uLL) != 0 )
            {
              v46 = 1;
              v25 = UserAddAtomEx(v24, 0LL, 2LL);
            }
            else
            {
              v25 = ValidateClassAtomForRegisterClass(*(struct tagPROCESSINFO **)(gptiCurrent + 416LL), v24);
            }
            if ( v25 )
            {
              **(_WORD **)(*(_QWORD *)v45[0] + 8LL) = v25;
              v26 = *(const WCHAR **)(a1 + 64);
              if ( ((unsigned __int64)v26 & 0xFFFFFFFFFFFF0000uLL) != 0 )
              {
                RtlInitUnicodeString(&DestinationString, v26);
                v27 = DestinationString.Length + 1;
              }
              else
              {
                v27 = 7;
              }
              v28 = (char *)ClassAllocString((PVOID *)v15, v27);
              if ( v28 )
              {
                if ( v15 )
                {
                  v29 = *(_QWORD *)v45[0];
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 8LL) + 48LL) = &v28[-(*(_QWORD *)(*(_QWORD *)v45[0] + 8LL)
                                                                                  - *(_QWORD *)(*(_QWORD *)v45[0] + 16LL))];
                  *(_QWORD *)(v29 + 104) = v28;
                }
                else
                {
                  *(_QWORD *)(*(_QWORD *)v45[0] + 104LL) = v28;
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 8LL) + 48LL) = 0LL;
                }
                if ( (*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFF0000uLL) != 0 )
                {
                  v50.Length = 0;
                  v50.MaximumLength = v27;
                  v50.Buffer = *(PCHAR *)(*(_QWORD *)v45[0] + 104LL);
                  RtlUnicodeStringToAnsiString(&v50, &DestinationString, 0);
                }
                else
                {
                  **(_BYTE **)(*(_QWORD *)v45[0] + 104LL) = 35;
                  RtlIntegerToChar(
                    *(unsigned __int16 *)(a1 + 64),
                    0xAu,
                    v27 - 1,
                    (PCHAR)(*(_QWORD *)(*(_QWORD *)v45[0] + 104LL) + 1LL));
                }
                v30 = *(const WCHAR **)(*(_QWORD *)v45[0] + 96LL);
                if ( !v30 || ((unsigned __int64)v30 & 0xFFFFFFFFFFFF0000uLL) == 0 )
                {
LABEL_42:
                  if ( v57 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 8LL) + 8LL) & 0x4000) != 0 )
                  {
                    **(_QWORD **)v45[0] = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 352LL);
                    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 352LL) = *(_QWORD *)v45[0];
                  }
                  else
                  {
                    **(_QWORD **)v45[0] = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 344LL);
                    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 344LL) = *(_QWORD *)v45[0];
                  }
                  v9 = *(_QWORD *)v45[0];
                  goto LABEL_46;
                }
                RtlInitUnicodeString(&DestinationString, v30);
                if ( !DestinationString.Length )
                {
                  v43 = *(_QWORD *)v45[0];
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 8LL) + 40LL) = 0LL;
                  *(_QWORD *)(v43 + 96) = 0LL;
                  goto LABEL_42;
                }
                v53 = 0LL;
                v54 = 0LL;
                if ( (unsigned int)AllocateUnicodeString(&v53, &DestinationString) )
                {
                  v36 = *(_QWORD *)v45[0];
                  v37 = v54;
                  v38 = *(_QWORD *)(*(_QWORD *)v45[0] + 8LL);
                  if ( (v54 & 0xFFFFFFFFFFFF0000uLL) != 0 )
                    *(_QWORD *)(v38 + 40) = -1LL;
                  else
                    *(_QWORD *)(v38 + 40) = v54;
                  *(_QWORD *)(v36 + 96) = v37;
                  goto LABEL_42;
                }
                ClassFree((PVOID *)v15, *(char **)(*(_QWORD *)v45[0] + 104LL));
              }
              if ( v46 )
                UserDeleteAtom(**(unsigned __int16 **)(*(_QWORD *)v45[0] + 8LL));
            }
            if ( v47 )
              UserDeleteAtom(*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v45[0] + 8LL) + 2LL));
          }
          v44 = *(_QWORD *)v45[0] + 112LL;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 8LL) + 56LL) = 0LL;
          HMAssignmentUnlock(v44);
        }
        HMAssignmentUnlock(*(_QWORD *)v45[0] + 80LL);
      }
      HMAssignmentUnlock(*(_QWORD *)v45[0] + 88LL);
    }
    v52 = *(_QWORD *)(*(_QWORD *)v45[0] + 32LL);
    *(_QWORD *)(*(_QWORD *)v45[0] + 32LL) = 0LL;
    ClassFree((PVOID *)v15, *(PVOID **)v45[0]);
    UnlockObjectAssignment(&v52);
  }
LABEL_46:
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v45);
  return v9;
}
