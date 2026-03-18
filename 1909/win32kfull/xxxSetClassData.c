/*
 * XREFs of xxxSetClassData @ 0x1C010F818
 * Callers:
 *     xxxSetClassLongPtr @ 0x1C010F77C (xxxSetClassLongPtr.c)
 *     xxxSetClassLong @ 0x1C015E198 (xxxSetClassLong.c)
 * Callees:
 *     DwmGetClassStyle @ 0x1C00103CC (DwmGetClassStyle.c)
 *     MapClientNeuterToClientPfn @ 0x1C001EFB4 (MapClientNeuterToClientPfn.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     MapClientToServerPfn @ 0x1C0036A08 (MapClientToServerPfn.c)
 *     xxxClientWOWGetProcModule @ 0x1C0051758 (xxxClientWOWGetProcModule.c)
 *     HMValidateHandleNoRip @ 0x1C00559FC (HMValidateHandleNoRip.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C005FE08 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     GetCPD @ 0x1C005FF0C (GetCPD.c)
 *     DwmAsyncChildStyleChange @ 0x1C0089A4C (DwmAsyncChildStyleChange.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ClassLock @ 0x1C00E5AC0 (ClassLock.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C00EC850 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     AllocateUnicodeString @ 0x1C01095E4 (AllocateUnicodeString.c)
 *     MapServerToClientPfn @ 0x1C015E238 (MapServerToClientPfn.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z @ 0x1C0165248 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01EA31C (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 */

unsigned __int64 __fastcall xxxSetClassData(struct tagWND *a1, int a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v6; // rbx
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rdi
  __int64 v12; // r12
  __int64 v13; // r14
  _DWORD *v14; // rax
  char v15; // cl
  __int64 v16; // r15
  __int64 v17; // rbx
  __int64 v19; // rcx
  int v20; // r11d
  __int64 v21; // rax
  __int64 v22; // rcx
  int ClassStyle; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  void *v27; // rax
  _DWORD *v28; // rax
  char v29; // cl
  __int64 v30; // rbx
  __int64 v31; // rbx
  const WCHAR *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  PWSTR Buffer; // rdx
  __int64 v36; // rax
  __int64 v37; // r8
  unsigned __int64 v38; // r11
  _DWORD *v39; // r10
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rcx
  __int64 *CPD; // rax
  __int64 v47; // rax
  __int64 v48; // rbx
  __int64 v49; // rsi
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  struct _CALLPROCDATA **v54; // rbx
  __int64 ThreadWin32Thread; // rax
  struct _CALLPROCDATA **v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // rax
  _QWORD v60[3]; // [rsp+20h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-90h] BYREF
  struct _UNICODE_STRING v62; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v63[3]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v64[5]; // [rsp+78h] [rbp-50h] BYREF

  v6 = a2;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v60, *((_QWORD *)a1 + 17));
  v11 = 0LL;
  memset(v64, 0, 24);
  *(_QWORD *)&v62.Length = 0LL;
  v62.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  switch ( (_DWORD)v6 )
  {
    case 0xFFFFFFE8:
      v19 = *(_QWORD *)v60[0];
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v60[0] + 8LL) + 6LL) & 1) != 0 )
      {
        v16 = MapServerToClientPfn(*(_QWORD *)(*(_QWORD *)(v19 + 8) + 32LL), a4, v9);
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v60[0] + 8LL) + 6LL) &= ~1u;
        if ( a4 )
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)v60[0] + 8LL) + 6LL) |= 2u;
      }
      else
      {
        v16 = MapClientNeuterToClientPfn(v19, 0LL, a4);
        if ( v16 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v60[0] + 8LL) + 32LL)
          && a4 != ((*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v60[0] + 8LL) + 6LL) >> 1) & 1) )
        {
          v20 = 2 - (a4 != 0);
        }
      }
      if ( v20 )
      {
        CPD = GetCPD(*(_QWORD *)v60[0], v20 | 0x10u, v16);
        if ( CPD )
          v16 = (__int64)CPD;
      }
      if ( (a3 & 0xFFFF0000) == 0xFFFF0000 )
      {
        v47 = HMValidateHandleNoRip(a3, 7);
        if ( v47 )
          a3 = *(_QWORD *)(*(_QWORD *)(v47 + 40) + 16LL);
      }
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v60[0] + 8LL) + 32LL) = a3;
      v21 = MapClientToServerPfn(a3);
      if ( v21 )
      {
        v8 = *(_QWORD *)v60[0];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v60[0] + 8LL) + 32LL) = v21;
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v60[0] + 8LL) + 6LL) |= 1u;
      }
      else if ( a4 )
      {
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v60[0] + 8LL) + 6LL) |= 2u;
LABEL_36:
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v60[0] + 8LL) + 6LL) & 8) != 0 )
        {
          v48 = *(int *)(*(_QWORD *)(*(_QWORD *)v60[0] + 8LL) + 12LL);
          v49 = *(_QWORD *)(*(_QWORD *)v60[0] + 8LL);
          memset(v63, 0, sizeof(v63));
          if ( (unsigned int)ClassLock(*(_QWORD *)v60[0], v63) )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v60[0] + 8LL) + 6LL) & 1) == 0 )
              LOWORD(v11) = xxxClientWOWGetProcModule(
                              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v60[0] + 8LL) + 32LL),
                              v51,
                              v52);
            *(_WORD *)(v48 + v49 + 94) = v11;
            v54 = *(struct _CALLPROCDATA ***)v60[0];
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v51, v52);
            *(_QWORD *)(ThreadWin32Thread + 16) = v63[0];
            ClassUnlockWorker(v54);
          }
          else
          {
            UserSetLastError(5LL, v51, v52, v53);
            *(_WORD *)(v48 + v49 + 94) = 0;
          }
        }
        goto LABEL_23;
      }
      *(_WORD *)(*(_QWORD *)(*(_QWORD *)v60[0] + 8LL) + 6LL) &= ~2u;
      goto LABEL_36;
    case 0xFFFFFFDE:
LABEL_114:
      if ( (unsigned int)ClassLock(*(_QWORD *)v60[0], v64) )
      {
        v11 = xxxSetClassCursor(a1, *(struct tagCLS **)v60[0], v6, a3);
        v56 = *(struct _CALLPROCDATA ***)v60[0];
        v59 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v57, v58);
        *(_QWORD *)(v59 + 16) = v64[0];
        ClassUnlockWorker(v56);
        goto LABEL_24;
      }
      v45 = 5LL;
      goto LABEL_117;
    case 0xFFFFFFE3:
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v60[0] + 8LL) + 6LL) & 8) != 0 )
      {
        v8 = *(_QWORD *)v60[0];
        *(_DWORD *)(*(int *)(*(_QWORD *)(*(_QWORD *)v60[0] + 8LL) + 12LL) + *(_QWORD *)(*(_QWORD *)v60[0] + 8LL) + 88LL) = a3;
      }
      goto LABEL_118;
  }
  if ( (_DWORD)v6 != -20 )
  {
    if ( (_DWORD)v6 == -18 )
    {
      v38 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v60[0] + 8LL) + 80LL)
                         + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v60[0] + 8LL) + 84LL));
      v10 = 0LL;
      v39 = &gDefaultServerClasses;
      while ( 1 )
      {
        v9 = (*v39 >> 3) & 0x1F;
        v8 = *(_QWORD *)(*(_QWORD *)v60[0] + 8LL);
        if ( *(_WORD *)v8 == *(_WORD *)(gpsi + 2 * v9 + 868) )
          break;
        v10 = (unsigned int)(v10 + 1);
        v39 += 12;
        if ( (unsigned int)v10 >= 8 )
          goto LABEL_92;
      }
      v8 = *((unsigned int *)&gDefaultServerClasses + 12 * (unsigned int)v10 + 6);
      v40 = *(_QWORD *)(*(_QWORD *)v60[0] + 8LL);
      if ( a3 >= v8 )
      {
        *(_DWORD *)(v40 + 84) = v8;
        LODWORD(a3) = a3 - *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v60[0] + 8LL) + 84LL);
      }
      else
      {
        if ( (*(_WORD *)(v40 + 6) & 0x200) != 0 )
        {
          v22 = 5LL;
          goto LABEL_89;
        }
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v60[0] + 8LL) + 84LL) = 0;
      }
LABEL_92:
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v60[0] + 8LL) + 80LL) = a3;
      v11 = v38;
      goto LABEL_24;
    }
    if ( (_DWORD)v6 != -14 && (_DWORD)v6 != -12 )
    {
      if ( (_DWORD)v6 != -8 )
      {
        if ( (_DWORD)v6 == -32 )
        {
          v22 = 87LL;
        }
        else
        {
          if ( (int)v6 + 34 >= 0 )
          {
            _mm_lfence();
            v12 = v6;
            v8 = 0x1C0000000uLL;
            if ( *((_BYTE *)&dword_1C02E0DF4[23] + v6 + 2) )
            {
              v13 = *(_QWORD *)(*(_QWORD *)v60[0] + 56LL);
              if ( v13 != *(_QWORD *)v60[0] )
              {
                if ( v60[0] != gSmartObjNullRef && !--*(_DWORD *)(v60[0] + 8LL) )
                {
                  if ( *(_BYTE *)(v60[0] + 12LL) )
                  {
                    Win32FreeToPagedLookasideList(gpStackRefLookAside, v60[0]);
                    v8 = 0x1C0000000uLL;
                  }
                }
                if ( v13 )
                {
                  v60[0] = *(_QWORD *)(v13 + 128);
                  ++*(_DWORD *)(v60[0] + 8LL);
                }
                else
                {
                  v60[0] = gSmartObjNullRef;
                }
              }
              v14 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)v60[0] + 8LL) + *((unsigned __int8 *)&dword_1C02E0DF4[23] + v6 + 2));
              v15 = byte_1C02E0E7A[v6];
              if ( v15 == 4 )
              {
                v16 = (unsigned int)*v14;
                *v14 = a3;
                if ( (_DWORD)v16 != (_DWORD)a3 && (_DWORD)v6 == -26 && (unsigned int)IsWindowDesktopComposed(a1) )
                {
                  ClassStyle = DwmGetClassStyle((__int64)a1);
                  v27 = (void *)ReferenceDwmApiPort(v25, v24, v26);
                  DwmAsyncChildStyleChange(v27, *(_QWORD *)a1, -26, ClassStyle);
                }
              }
              else if ( v15 == 8 )
              {
                v16 = *(_QWORD *)v14;
                *(_QWORD *)v14 = a3;
              }
              else
              {
                v16 = *(unsigned __int16 *)v14;
                *(_WORD *)v14 = a3;
              }
              v17 = *(_QWORD *)(*(_QWORD *)v60[0] + 64LL);
              if ( v17 != *(_QWORD *)v60[0] )
              {
                if ( v60[0] != gSmartObjNullRef && !--*(_DWORD *)(v60[0] + 8LL) )
                {
                  if ( *(_BYTE *)(v60[0] + 12LL) )
                    Win32FreeToPagedLookasideList(gpStackRefLookAside, v60[0]);
                }
                if ( v17 )
                {
                  v60[0] = *(_QWORD *)(v17 + 128);
                  ++*(_DWORD *)(v60[0] + 8LL);
                }
                else
                {
                  v60[0] = gSmartObjNullRef;
                }
              }
              while ( *(_QWORD *)v60[0] )
              {
                v28 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)v60[0] + 8LL)
                               + *((unsigned __int8 *)&dword_1C02E0DF4[23] + v12 + 2));
                v29 = byte_1C02E0E7A[v12];
                if ( v29 == 4 )
                {
                  v16 = (unsigned int)*v28;
                  *v28 = a3;
                }
                else if ( v29 == 8 )
                {
                  v16 = *(_QWORD *)v28;
                  *(_QWORD *)v28 = a3;
                }
                else
                {
                  v16 = *(unsigned __int16 *)v28;
                  *(_WORD *)v28 = a3;
                }
                v30 = **(_QWORD **)v60[0];
                if ( v30 != *(_QWORD *)v60[0] )
                {
                  if ( v60[0] != gSmartObjNullRef && !--*(_DWORD *)(v60[0] + 8LL) )
                  {
                    if ( *(_BYTE *)(v60[0] + 12LL) )
                      Win32FreeToPagedLookasideList(gpStackRefLookAside, v60[0]);
                  }
                  if ( v30 )
                  {
                    v60[0] = *(_QWORD *)(v30 + 128);
                    ++*(_DWORD *)(v60[0] + 8LL);
                  }
                  else
                  {
                    v60[0] = gSmartObjNullRef;
                  }
                }
              }
LABEL_23:
              v11 = v16;
LABEL_24:
              SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>((__int64)v60, v8, v9);
              return v11;
            }
          }
          v22 = 1413LL;
        }
LABEL_89:
        UserSetLastError(v22, v8, v9, v10);
        goto LABEL_24;
      }
      v31 = *(_QWORD *)(*(_QWORD *)v60[0] + 96LL);
      v32 = *(const WCHAR **)(*(_QWORD *)(a3 + 16) + 8LL);
      if ( ((unsigned __int64)v32 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        RtlInitUnicodeString(&DestinationString, v32);
        if ( !DestinationString.Length )
        {
          v33 = *(_QWORD *)v60[0];
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v60[0] + 8LL) + 40LL) = 0LL;
          *(_QWORD *)(v33 + 96) = 0LL;
LABEL_77:
          *(_QWORD *)(a3 + 16) = 0LL;
          if ( (v31 & 0xFFFFFFFFFFFF0000uLL) != 0 )
            Win32FreePool(v31);
          v37 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v60[0] + 8LL) + 16LL);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v60[0] + 8LL) + 16LL) = *(_QWORD *)a3;
          *(_QWORD *)a3 = v37;
          v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v60[0] + 8LL) + 24LL);
          v8 = *(_QWORD *)(*(_QWORD *)v60[0] + 8LL);
          *(_QWORD *)(v8 + 24) = *(_QWORD *)(a3 + 8);
          *(_QWORD *)(a3 + 8) = v9;
          if ( a4 )
            v11 = *(_QWORD *)a3;
          else
            v11 = v9;
          goto LABEL_24;
        }
        if ( !(unsigned int)AllocateUnicodeString(&v62, &DestinationString.Length) )
        {
          *(_QWORD *)(a3 + 16) = 0LL;
LABEL_118:
          SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>((__int64)v60, v8, v9);
          return 0LL;
        }
        v34 = *(_QWORD *)v60[0];
        Buffer = v62.Buffer;
      }
      else
      {
        v34 = *(_QWORD *)v60[0];
        Buffer = *(PWSTR *)(*(_QWORD *)(a3 + 16) + 8LL);
      }
      v36 = *(_QWORD *)(v34 + 8);
      if ( ((unsigned __int64)Buffer & 0xFFFFFFFFFFFF0000uLL) != 0 )
        *(_QWORD *)(v36 + 40) = -1LL;
      else
        *(_QWORD *)(v36 + 40) = Buffer;
      *(_QWORD *)(v34 + 96) = Buffer;
      goto LABEL_77;
    }
    goto LABEL_114;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v60[0] + 8LL) + 6LL) & 8) == 0 )
  {
    v45 = 87LL;
LABEL_117:
    UserSetLastError(v45, v8, v9, v10);
    goto LABEL_118;
  }
  v9 = 16LL;
  v41 = *(_QWORD *)v60[0];
  v42 = *(int *)(*(_QWORD *)(*(_QWORD *)v60[0] + 8LL) + 12LL);
  v43 = *(_QWORD *)(*(_QWORD *)v60[0] + 8LL);
  if ( (*(_BYTE *)(v43 + 6) & 0x10) != 0 )
  {
    v11 = *(unsigned __int16 *)(v42 + v43 + 92);
    v8 = *(_QWORD *)v60[0];
    *(_WORD *)(*(int *)(*(_QWORD *)(*(_QWORD *)v60[0] + 8LL) + 12LL) + *(_QWORD *)(*(_QWORD *)v60[0] + 8LL) + 92LL) = a3;
    goto LABEL_24;
  }
  *(_WORD *)(v42 + v43 + 92) = a3;
  *(_WORD *)(*(_QWORD *)(*(_QWORD *)v60[0] + 8LL) + 6LL) |= 0x10u;
  v44 = *(int *)(*(_QWORD *)(*(_QWORD *)v60[0] + 8LL) + 12LL);
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>((__int64)v60, v41, 16LL);
  return v44;
}
