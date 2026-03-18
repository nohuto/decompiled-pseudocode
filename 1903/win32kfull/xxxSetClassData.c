/*
 * XREFs of xxxSetClassData @ 0x1C0134CC8
 * Callers:
 *     xxxSetClassLongPtr @ 0x1C0134C2C (xxxSetClassLongPtr.c)
 *     xxxSetClassLong @ 0x1C015D1E8 (xxxSetClassLong.c)
 * Callees:
 *     MapClientNeuterToClientPfn @ 0x1C001F124 (MapClientNeuterToClientPfn.c)
 *     DwmAsyncChildStyleChange @ 0x1C004507C (DwmAsyncChildStyleChange.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     MapClientToServerPfn @ 0x1C0095CD0 (MapClientToServerPfn.c)
 *     xxxClientWOWGetProcModule @ 0x1C00B08F8 (xxxClientWOWGetProcModule.c)
 *     HMValidateHandleNoRip @ 0x1C00B4C50 (HMValidateHandleNoRip.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C00BE728 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     GetCPD @ 0x1C00BE82C (GetCPD.c)
 *     DwmGetClassStyle @ 0x1C00D9C0C (DwmGetClassStyle.c)
 *     ClassLock @ 0x1C010B520 (ClassLock.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C01119A0 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     AllocateUnicodeString @ 0x1C012E354 (AllocateUnicodeString.c)
 *     MapServerToClientPfn @ 0x1C015D288 (MapServerToClientPfn.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z @ 0x1C0164278 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01EA49C (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
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
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // r11d
  __int64 v24; // rax
  __int64 v25; // rcx
  int ClassStyle; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  void *v30; // rax
  _DWORD *v31; // rax
  char v32; // cl
  __int64 v33; // rbx
  __int64 v34; // rbx
  const WCHAR *v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rcx
  PWSTR Buffer; // rdx
  __int64 v39; // rax
  __int64 v40; // r8
  unsigned __int64 v41; // r11
  _DWORD *v42; // r10
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rcx
  __int64 *CPD; // rax
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // rsi
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  struct _CALLPROCDATA **v57; // rbx
  __int64 ThreadWin32Thread; // rax
  struct _CALLPROCDATA **v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rax
  _QWORD v64[3]; // [rsp+20h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-90h] BYREF
  struct _UNICODE_STRING v66; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v67[3]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v68[5]; // [rsp+78h] [rbp-50h] BYREF

  v6 = a2;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v64, *((_QWORD *)a1 + 17));
  v11 = 0LL;
  memset(v68, 0, 24);
  *(_QWORD *)&v66.Length = 0LL;
  v66.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  switch ( (_DWORD)v6 )
  {
    case 0xFFFFFFE8:
      v19 = *(_QWORD *)v64[0];
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL) + 6LL) & 1) != 0 )
      {
        v16 = MapServerToClientPfn(*(_QWORD *)(*(_QWORD *)(v19 + 8) + 32LL), a4, v9);
        v20 = *(_QWORD *)v64[0];
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL) + 6LL) &= ~1u;
        if ( a4 )
        {
          v20 = *(_QWORD *)v64[0];
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL) + 6LL) |= 2u;
        }
      }
      else
      {
        v16 = MapClientNeuterToClientPfn(v19, 0LL, a4);
        if ( v16 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL) + 32LL)
          && a4 != ((*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL) + 6LL) >> 1) & 1) )
        {
          v23 = 2 - (a4 != 0);
        }
      }
      if ( v23 )
      {
        CPD = GetCPD(*(_QWORD *)v64[0], v23 | 0x10u, v16, v22);
        if ( CPD )
          v16 = (__int64)CPD;
      }
      if ( (a3 & 0xFFFF0000) == 0xFFFF0000 )
      {
        LOBYTE(v20) = 7;
        v50 = HMValidateHandleNoRip(a3, v20, v21, v22);
        if ( v50 )
          a3 = *(_QWORD *)(*(_QWORD *)(v50 + 40) + 16LL);
      }
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL) + 32LL) = a3;
      v24 = MapClientToServerPfn(a3);
      if ( v24 )
      {
        v8 = *(_QWORD *)v64[0];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL) + 32LL) = v24;
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL) + 6LL) |= 1u;
      }
      else if ( a4 )
      {
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL) + 6LL) |= 2u;
LABEL_36:
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL) + 6LL) & 8) != 0 )
        {
          v51 = *(int *)(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL) + 12LL);
          v52 = *(_QWORD *)(*(_QWORD *)v64[0] + 8LL);
          memset(v67, 0, sizeof(v67));
          if ( (unsigned int)ClassLock(*(_QWORD *)v64[0], v67) )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL) + 6LL) & 1) == 0 )
              LOWORD(v11) = xxxClientWOWGetProcModule(
                              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL) + 32LL),
                              v54,
                              v55,
                              v56);
            *(_WORD *)(v51 + v52 + 94) = v11;
            v57 = *(struct _CALLPROCDATA ***)v64[0];
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v54, v55, v56);
            *(_QWORD *)(ThreadWin32Thread + 16) = v67[0];
            ClassUnlockWorker(v57);
          }
          else
          {
            UserSetLastError(5LL, v54, v55, v56);
            *(_WORD *)(v51 + v52 + 94) = 0;
          }
        }
        goto LABEL_23;
      }
      *(_WORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL) + 6LL) &= ~2u;
      goto LABEL_36;
    case 0xFFFFFFDE:
LABEL_114:
      if ( (unsigned int)ClassLock(*(_QWORD *)v64[0], v68) )
      {
        v11 = xxxSetClassCursor(a1, *(struct tagCLS **)v64[0], v6, a3);
        v59 = *(struct _CALLPROCDATA ***)v64[0];
        v63 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v60, v61, v62);
        *(_QWORD *)(v63 + 16) = v68[0];
        ClassUnlockWorker(v59);
        goto LABEL_24;
      }
      v48 = 5LL;
      goto LABEL_117;
    case 0xFFFFFFE3:
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL) + 6LL) & 8) != 0 )
      {
        v8 = *(_QWORD *)v64[0];
        *(_DWORD *)(*(int *)(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL) + 12LL) + *(_QWORD *)(*(_QWORD *)v64[0] + 8LL) + 88LL) = a3;
      }
      goto LABEL_118;
  }
  if ( (_DWORD)v6 != -20 )
  {
    if ( (_DWORD)v6 == -18 )
    {
      v41 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL) + 80LL)
                         + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL) + 84LL));
      v10 = 0LL;
      v42 = &gDefaultServerClasses;
      while ( 1 )
      {
        v9 = (*v42 >> 3) & 0x1F;
        v8 = *(_QWORD *)(*(_QWORD *)v64[0] + 8LL);
        if ( *(_WORD *)v8 == *(_WORD *)(gpsi + 2 * v9 + 868) )
          break;
        v10 = (unsigned int)(v10 + 1);
        v42 += 12;
        if ( (unsigned int)v10 >= 8 )
          goto LABEL_92;
      }
      v8 = *((unsigned int *)&gDefaultServerClasses + 12 * (unsigned int)v10 + 6);
      v43 = *(_QWORD *)(*(_QWORD *)v64[0] + 8LL);
      if ( a3 >= v8 )
      {
        *(_DWORD *)(v43 + 84) = v8;
        LODWORD(a3) = a3 - *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL) + 84LL);
      }
      else
      {
        if ( (*(_WORD *)(v43 + 6) & 0x200) != 0 )
        {
          v25 = 5LL;
          goto LABEL_89;
        }
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL) + 84LL) = 0;
      }
LABEL_92:
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL) + 80LL) = a3;
      v11 = v41;
      goto LABEL_24;
    }
    if ( (_DWORD)v6 != -14 && (_DWORD)v6 != -12 )
    {
      if ( (_DWORD)v6 != -8 )
      {
        if ( (_DWORD)v6 == -32 )
        {
          v25 = 87LL;
        }
        else
        {
          if ( (int)v6 + 34 >= 0 )
          {
            _mm_lfence();
            v12 = v6;
            v8 = 0x1C0000000uLL;
            if ( *((_BYTE *)&dword_1C02E1834[23] + v6 + 2) )
            {
              v13 = *(_QWORD *)(*(_QWORD *)v64[0] + 56LL);
              if ( v13 != *(_QWORD *)v64[0] )
              {
                if ( v64[0] != gSmartObjNullRef && !--*(_DWORD *)(v64[0] + 8LL) )
                {
                  if ( *(_BYTE *)(v64[0] + 12LL) )
                  {
                    Win32FreeToPagedLookasideList(gpStackRefLookAside, v64[0]);
                    v8 = 0x1C0000000uLL;
                  }
                }
                if ( v13 )
                {
                  v64[0] = *(_QWORD *)(v13 + 128);
                  ++*(_DWORD *)(v64[0] + 8LL);
                }
                else
                {
                  v64[0] = gSmartObjNullRef;
                }
              }
              v14 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL) + *((unsigned __int8 *)&dword_1C02E1834[23] + v6 + 2));
              v15 = byte_1C02E18BA[v6];
              if ( v15 == 4 )
              {
                v16 = (unsigned int)*v14;
                *v14 = a3;
                if ( (_DWORD)v16 != (_DWORD)a3 && (_DWORD)v6 == -26 && (unsigned int)IsWindowDesktopComposed(a1) )
                {
                  ClassStyle = DwmGetClassStyle((__int64)a1);
                  v30 = (void *)ReferenceDwmApiPort(v28, v27, v29);
                  DwmAsyncChildStyleChange(v30, *(_QWORD *)a1, -26, ClassStyle);
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
              v17 = *(_QWORD *)(*(_QWORD *)v64[0] + 64LL);
              if ( v17 != *(_QWORD *)v64[0] )
              {
                if ( v64[0] != gSmartObjNullRef && !--*(_DWORD *)(v64[0] + 8LL) )
                {
                  if ( *(_BYTE *)(v64[0] + 12LL) )
                    Win32FreeToPagedLookasideList(gpStackRefLookAside, v64[0]);
                }
                if ( v17 )
                {
                  v64[0] = *(_QWORD *)(v17 + 128);
                  ++*(_DWORD *)(v64[0] + 8LL);
                }
                else
                {
                  v64[0] = gSmartObjNullRef;
                }
              }
              while ( *(_QWORD *)v64[0] )
              {
                v31 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL)
                               + *((unsigned __int8 *)&dword_1C02E1834[23] + v12 + 2));
                v32 = byte_1C02E18BA[v12];
                if ( v32 == 4 )
                {
                  v16 = (unsigned int)*v31;
                  *v31 = a3;
                }
                else if ( v32 == 8 )
                {
                  v16 = *(_QWORD *)v31;
                  *(_QWORD *)v31 = a3;
                }
                else
                {
                  v16 = *(unsigned __int16 *)v31;
                  *(_WORD *)v31 = a3;
                }
                v33 = **(_QWORD **)v64[0];
                if ( v33 != *(_QWORD *)v64[0] )
                {
                  if ( v64[0] != gSmartObjNullRef && !--*(_DWORD *)(v64[0] + 8LL) )
                  {
                    if ( *(_BYTE *)(v64[0] + 12LL) )
                      Win32FreeToPagedLookasideList(gpStackRefLookAside, v64[0]);
                  }
                  if ( v33 )
                  {
                    v64[0] = *(_QWORD *)(v33 + 128);
                    ++*(_DWORD *)(v64[0] + 8LL);
                  }
                  else
                  {
                    v64[0] = gSmartObjNullRef;
                  }
                }
              }
LABEL_23:
              v11 = v16;
LABEL_24:
              SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>((__int64)v64, v8, v9, v10);
              return v11;
            }
          }
          v25 = 1413LL;
        }
LABEL_89:
        UserSetLastError(v25, v8, v9, v10);
        goto LABEL_24;
      }
      v34 = *(_QWORD *)(*(_QWORD *)v64[0] + 96LL);
      v35 = *(const WCHAR **)(*(_QWORD *)(a3 + 16) + 8LL);
      if ( ((unsigned __int64)v35 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        RtlInitUnicodeString(&DestinationString, v35);
        if ( !DestinationString.Length )
        {
          v36 = *(_QWORD *)v64[0];
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL) + 40LL) = 0LL;
          *(_QWORD *)(v36 + 96) = 0LL;
LABEL_77:
          *(_QWORD *)(a3 + 16) = 0LL;
          if ( (v34 & 0xFFFFFFFFFFFF0000uLL) != 0 )
            Win32FreePool(v34);
          v40 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL) + 16LL);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL) + 16LL) = *(_QWORD *)a3;
          *(_QWORD *)a3 = v40;
          v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL) + 24LL);
          v8 = *(_QWORD *)(*(_QWORD *)v64[0] + 8LL);
          *(_QWORD *)(v8 + 24) = *(_QWORD *)(a3 + 8);
          *(_QWORD *)(a3 + 8) = v9;
          if ( a4 )
            v11 = *(_QWORD *)a3;
          else
            v11 = v9;
          goto LABEL_24;
        }
        if ( !(unsigned int)AllocateUnicodeString(&v66, &DestinationString.Length) )
        {
          *(_QWORD *)(a3 + 16) = 0LL;
LABEL_118:
          SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>((__int64)v64, v8, v9, v10);
          return 0LL;
        }
        v37 = *(_QWORD *)v64[0];
        Buffer = v66.Buffer;
      }
      else
      {
        v37 = *(_QWORD *)v64[0];
        Buffer = *(PWSTR *)(*(_QWORD *)(a3 + 16) + 8LL);
      }
      v39 = *(_QWORD *)(v37 + 8);
      if ( ((unsigned __int64)Buffer & 0xFFFFFFFFFFFF0000uLL) != 0 )
        *(_QWORD *)(v39 + 40) = -1LL;
      else
        *(_QWORD *)(v39 + 40) = Buffer;
      *(_QWORD *)(v37 + 96) = Buffer;
      goto LABEL_77;
    }
    goto LABEL_114;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL) + 6LL) & 8) == 0 )
  {
    v48 = 87LL;
LABEL_117:
    UserSetLastError(v48, v8, v9, v10);
    goto LABEL_118;
  }
  v9 = 16LL;
  v44 = *(_QWORD *)v64[0];
  v45 = *(int *)(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL) + 12LL);
  v46 = *(_QWORD *)(*(_QWORD *)v64[0] + 8LL);
  if ( (*(_BYTE *)(v46 + 6) & 0x10) != 0 )
  {
    v11 = *(unsigned __int16 *)(v45 + v46 + 92);
    v8 = *(_QWORD *)v64[0];
    *(_WORD *)(*(int *)(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL) + 12LL) + *(_QWORD *)(*(_QWORD *)v64[0] + 8LL) + 92LL) = a3;
    goto LABEL_24;
  }
  *(_WORD *)(v45 + v46 + 92) = a3;
  *(_WORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL) + 6LL) |= 0x10u;
  v47 = *(int *)(*(_QWORD *)(*(_QWORD *)v64[0] + 8LL) + 12LL);
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>((__int64)v64, v44, 16LL, v10);
  return v47;
}
