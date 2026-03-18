/*
 * XREFs of xxxSetClassData @ 0x1C00FC374
 * Callers:
 *     xxxSetClassLongPtr @ 0x1C00FC2D8 (xxxSetClassLongPtr.c)
 *     xxxSetClassLong @ 0x1C01D53F0 (xxxSetClassLong.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C000DBA0 (DwmAsyncChildStyleChange.c)
 *     xxxClientWOWGetProcModule @ 0x1C001B1E4 (xxxClientWOWGetProcModule.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C0022754 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     MapClientNeuterToClientPfn @ 0x1C0069E6C (MapClientNeuterToClientPfn.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     HMValidateHandleNoRip @ 0x1C00B6440 (HMValidateHandleNoRip.c)
 *     DwmGetClassStyle @ 0x1C00C818C (DwmGetClassStyle.c)
 *     GetCPD @ 0x1C00F86FC (GetCPD.c)
 *     MapClientToServerPfn @ 0x1C00FC6AC (MapClientToServerPfn.c)
 *     ClassLock @ 0x1C0104ADC (ClassLock.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C0109790 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     AllocateUnicodeString @ 0x1C0124434 (AllocateUnicodeString.c)
 *     MapServerToClientPfn @ 0x1C01568E0 (MapServerToClientPfn.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z @ 0x1C015D904 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01D4CB8 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 */

unsigned __int64 __fastcall xxxSetClassData(struct tagWND *a1, int a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rdi
  __int64 v12; // r14
  _DWORD *v13; // rax
  char v14; // cl
  unsigned __int64 v15; // r15
  __int64 v16; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // r11d
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rcx
  int ClassStyle; // ebx
  __int64 v25; // rdx
  __int64 v26; // rcx
  void *v27; // rax
  _DWORD *v28; // rax
  char v29; // cl
  __int64 v30; // rbx
  __int64 v31; // rbx
  const WCHAR *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // r9
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // r8
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // r11
  _DWORD *v43; // r10
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rcx
  __int64 *CPD; // rax
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  struct tagCLS *v56; // rbx
  __int64 ThreadWin32Thread; // rax
  struct tagCLS *v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rax
  _QWORD v61[4]; // [rsp+20h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-88h] BYREF
  char v63[8]; // [rsp+58h] [rbp-70h] BYREF
  __int64 v64; // [rsp+60h] [rbp-68h]
  __int64 v65[3]; // [rsp+68h] [rbp-60h] BYREF
  __int64 v66[4]; // [rsp+80h] [rbp-48h] BYREF
  unsigned __int64 v67; // [rsp+D0h] [rbp+8h]

  v6 = a2;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v61, *((_QWORD *)a1 + 14));
  v11 = 0LL;
  switch ( (_DWORD)v6 )
  {
    case 0xFFFFFFE8:
      v18 = *(_QWORD *)v61[0];
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 6LL) & 1) != 0 )
      {
        v21 = MapServerToClientPfn(*(_QWORD *)(*(_QWORD *)(v18 + 8) + 32LL), a4);
        v19 = *(_QWORD *)v61[0];
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 6LL) &= ~1u;
        if ( a4 )
        {
          v19 = *(_QWORD *)v61[0];
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 6LL) |= 2u;
        }
      }
      else
      {
        v21 = MapClientNeuterToClientPfn(v18, 0LL, a4);
        if ( v21 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 32LL)
          && a4 != ((*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 6LL) >> 1) & 1) )
        {
          v20 = 2 - (a4 != 0);
        }
      }
      if ( v20 )
      {
        CPD = GetCPD(*(_QWORD *)v61[0], v20 | 0x10u, v21);
        if ( CPD )
          v21 = (__int64)CPD;
      }
      if ( (a3 & 0xFFFF0000) == 0xFFFF0000 )
      {
        LOBYTE(v19) = 7;
        v50 = HMValidateHandleNoRip(a3, v19);
        if ( v50 )
          a3 = *(_QWORD *)(*(_QWORD *)(v50 + 40) + 16LL);
      }
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 32LL) = a3;
      v22 = MapClientToServerPfn(a3);
      if ( v22 )
      {
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 32LL) = v22;
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 6LL) |= 1u;
      }
      else if ( a4 )
      {
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 6LL) |= 2u;
        goto LABEL_36;
      }
      *(_WORD *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 6LL) &= ~2u;
LABEL_36:
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 6LL) & 8) != 0 )
      {
        v51 = *(int *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 12LL);
        v52 = *(_QWORD *)(*(_QWORD *)v61[0] + 8LL);
        if ( (unsigned int)ClassLock(*(_QWORD *)v61[0], v65) )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 6LL) & 1) == 0 )
            LOWORD(v11) = xxxClientWOWGetProcModule(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 32LL));
          *(_WORD *)(v51 + v52 + 94) = v11;
          v56 = *(struct tagCLS **)v61[0];
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v53);
          *(_QWORD *)(ThreadWin32Thread + 16) = v65[0];
          ClassUnlockWorker(v56);
        }
        else
        {
          UserSetLastError(5LL, v53, v54, v55);
          *(_WORD *)(v51 + v52 + 94) = 0;
        }
      }
      v11 = v21;
      goto LABEL_24;
    case 0xFFFFFFDE:
LABEL_114:
      if ( (unsigned int)ClassLock(*(_QWORD *)v61[0], v66) )
      {
        v11 = xxxSetClassCursor(a1, *(struct tagCLS **)v61[0], v6, a3);
        v58 = *(struct tagCLS **)v61[0];
        v60 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v59);
        *(_QWORD *)(v60 + 16) = v66[0];
        ClassUnlockWorker(v58);
        goto LABEL_24;
      }
      v48 = 5LL;
      goto LABEL_117;
    case 0xFFFFFFE3:
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 6LL) & 8) != 0 )
        *(_DWORD *)(*(int *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 12LL) + *(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 88LL) = a3;
      goto LABEL_118;
  }
  if ( (_DWORD)v6 != -20 )
  {
    if ( (_DWORD)v6 == -18 )
    {
      v42 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 80LL)
                         + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 84LL));
      v10 = 0LL;
      v43 = &gDefaultServerClasses;
      while ( 1 )
      {
        v9 = (*v43 >> 3) & 0x1F;
        if ( **(_WORD **)(*(_QWORD *)v61[0] + 8LL) == *(_WORD *)(gpsi + 2 * v9 + 868) )
          break;
        v10 = (unsigned int)(v10 + 1);
        v43 += 12;
        if ( (unsigned int)v10 >= 8 )
          goto LABEL_92;
      }
      v8 = *((unsigned int *)&gDefaultServerClasses + 12 * (unsigned int)v10 + 6);
      v44 = *(_QWORD *)(*(_QWORD *)v61[0] + 8LL);
      if ( a3 >= v8 )
      {
        *(_DWORD *)(v44 + 84) = v8;
        LODWORD(a3) = a3 - *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 84LL);
      }
      else
      {
        if ( (*(_WORD *)(v44 + 6) & 0x200) != 0 )
        {
          v23 = 5LL;
          goto LABEL_89;
        }
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 84LL) = 0;
      }
LABEL_92:
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 80LL) = a3;
      v11 = v42;
      goto LABEL_24;
    }
    if ( (_DWORD)v6 != -14 && (_DWORD)v6 != -12 )
    {
      if ( (_DWORD)v6 != -8 )
      {
        if ( (_DWORD)v6 == -32 )
        {
          v23 = 87LL;
        }
        else
        {
          if ( (int)v6 + 34 >= 0 )
          {
            _mm_lfence();
            v8 = v6;
            v67 = v6;
            v9 = 0x1C0000000uLL;
            if ( byte_1C02CF782[v6] )
            {
              v12 = *(_QWORD *)(*(_QWORD *)v61[0] + 56LL);
              if ( v12 != *(_QWORD *)v61[0] )
              {
                if ( v61[0] != gSmartObjNullRef && !--*(_DWORD *)(v61[0] + 8LL) )
                {
                  if ( *(_BYTE *)(v61[0] + 12LL) )
                  {
                    Win32FreeToPagedLookasideList(gpStackRefLookAside, v61[0]);
                    v8 = v6;
                  }
                }
                if ( v12 )
                {
                  v61[0] = *(_QWORD *)(v12 + 128);
                  ++*(_DWORD *)(v61[0] + 8LL);
                }
                else
                {
                  v61[0] = gSmartObjNullRef;
                }
              }
              v13 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + (unsigned __int8)byte_1C02CF782[v8]);
              v14 = byte_1C02CF7AA[v8];
              if ( v14 == 4 )
              {
                v15 = (unsigned int)*v13;
                *v13 = a3;
                if ( (_DWORD)v15 != (_DWORD)a3 && (_DWORD)v6 == -26 && (unsigned int)IsWindowDesktopComposed(a1) )
                {
                  ClassStyle = DwmGetClassStyle((__int64)a1);
                  v27 = (void *)ReferenceDwmApiPort(v26, v25);
                  DwmAsyncChildStyleChange(v27, *(_QWORD *)a1, -26, ClassStyle);
                }
              }
              else if ( v14 == 8 )
              {
                v15 = *(_QWORD *)v13;
                *(_QWORD *)v13 = a3;
              }
              else
              {
                v15 = *(unsigned __int16 *)v13;
                *(_WORD *)v13 = a3;
              }
              v16 = *(_QWORD *)(*(_QWORD *)v61[0] + 64LL);
              if ( v16 != *(_QWORD *)v61[0] )
              {
                if ( v61[0] != gSmartObjNullRef && !--*(_DWORD *)(v61[0] + 8LL) )
                {
                  if ( *(_BYTE *)(v61[0] + 12LL) )
                    Win32FreeToPagedLookasideList(gpStackRefLookAside, v61[0]);
                }
                if ( v16 )
                {
                  v61[0] = *(_QWORD *)(v16 + 128);
                  ++*(_DWORD *)(v61[0] + 8LL);
                }
                else
                {
                  v61[0] = gSmartObjNullRef;
                }
              }
              while ( *(_QWORD *)v61[0] )
              {
                v28 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + (unsigned __int8)byte_1C02CF782[v67]);
                v29 = byte_1C02CF7AA[v67];
                if ( v29 == 4 )
                {
                  v15 = (unsigned int)*v28;
                  *v28 = a3;
                }
                else if ( v29 == 8 )
                {
                  v15 = *(_QWORD *)v28;
                  *(_QWORD *)v28 = a3;
                }
                else
                {
                  v15 = *(unsigned __int16 *)v28;
                  *(_WORD *)v28 = a3;
                }
                v30 = **(_QWORD **)v61[0];
                if ( v30 != *(_QWORD *)v61[0] )
                {
                  if ( v61[0] != gSmartObjNullRef && !--*(_DWORD *)(v61[0] + 8LL) )
                  {
                    if ( *(_BYTE *)(v61[0] + 12LL) )
                      Win32FreeToPagedLookasideList(gpStackRefLookAside, v61[0]);
                  }
                  if ( v30 )
                  {
                    v61[0] = *(_QWORD *)(v30 + 128);
                    ++*(_DWORD *)(v61[0] + 8LL);
                  }
                  else
                  {
                    v61[0] = gSmartObjNullRef;
                  }
                }
              }
              v11 = v15;
              goto LABEL_24;
            }
          }
          v23 = 1413LL;
        }
LABEL_89:
        UserSetLastError(v23, v8, v9, v10);
LABEL_24:
        SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>((__int64)v61);
        return v11;
      }
      v31 = *(_QWORD *)(*(_QWORD *)v61[0] + 96LL);
      v32 = *(const WCHAR **)(*(_QWORD *)(a3 + 16) + 8LL);
      if ( ((unsigned __int64)v32 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        v37 = *(_QWORD *)v61[0];
        v38 = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL);
        v39 = v38;
        if ( (v38 & 0xFFFFFFFFFFFF0000uLL) != 0 )
          v39 = -1LL;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 40LL) = v39;
        *(_QWORD *)(v37 + 96) = v38;
        goto LABEL_77;
      }
      RtlInitUnicodeString(&DestinationString, v32);
      if ( !DestinationString.Length )
      {
        v33 = *(_QWORD *)v61[0];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 40LL) = 0LL;
        *(_QWORD *)(v33 + 96) = 0LL;
LABEL_77:
        *(_QWORD *)(a3 + 16) = 0LL;
        if ( (v31 & 0xFFFFFFFFFFFF0000uLL) != 0 )
          Win32FreePool(v31);
        v40 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 16LL);
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 16LL) = *(_QWORD *)a3;
        *(_QWORD *)a3 = v40;
        v41 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 24LL);
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 24LL) = *(_QWORD *)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v41;
        if ( a4 )
          v11 = *(_QWORD *)a3;
        else
          v11 = v41;
        goto LABEL_24;
      }
      if ( (unsigned int)AllocateUnicodeString(v63, &DestinationString) )
      {
        v34 = *(_QWORD *)v61[0];
        v35 = v64;
        v36 = v64;
        if ( (v64 & 0xFFFFFFFFFFFF0000uLL) != 0 )
          v36 = -1LL;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 40LL) = v36;
        *(_QWORD *)(v34 + 96) = v35;
        goto LABEL_77;
      }
      *(_QWORD *)(a3 + 16) = 0LL;
      goto LABEL_118;
    }
    goto LABEL_114;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 6LL) & 8) == 0 )
  {
    v48 = 87LL;
LABEL_117:
    UserSetLastError(v48, v8, v9, v10);
LABEL_118:
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>((__int64)v61);
    return 0LL;
  }
  v45 = *(int *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 12LL);
  v46 = *(_QWORD *)(*(_QWORD *)v61[0] + 8LL);
  if ( (*(_BYTE *)(v46 + 6) & 0x10) != 0 )
  {
    v11 = *(unsigned __int16 *)(v45 + v46 + 92);
    *(_WORD *)(*(int *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 12LL) + *(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 92LL) = a3;
    goto LABEL_24;
  }
  *(_WORD *)(v45 + v46 + 92) = a3;
  *(_WORD *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 6LL) |= 0x10u;
  v47 = *(int *)(*(_QWORD *)(*(_QWORD *)v61[0] + 8LL) + 12LL);
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>((__int64)v61);
  return v47;
}
