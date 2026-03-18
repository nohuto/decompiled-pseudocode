/*
 * XREFs of xxxSetClassData @ 0x1C010B0CC
 * Callers:
 *     xxxSetClassLongPtr @ 0x1C010B038 (xxxSetClassLongPtr.c)
 *     xxxSetClassLong @ 0x1C01B2CAC (xxxSetClassLong.c)
 * Callees:
 *     DwmGetClassStyle @ 0x1C0009C60 (DwmGetClassStyle.c)
 *     MapClientToServerPfn @ 0x1C0019ACC (MapClientToServerPfn.c)
 *     MapClientNeuterToClientPfn @ 0x1C002227C (MapClientNeuterToClientPfn.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00262E4 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     GetCPD @ 0x1C0030A18 (GetCPD.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     HMValidateHandleNoRip @ 0x1C006CF60 (HMValidateHandleNoRip.c)
 *     DwmAsyncChildStyleChange @ 0x1C00C3FCC (DwmAsyncChildStyleChange.c)
 *     ClassLock @ 0x1C00ECB2C (ClassLock.c)
 *     xxxClientWOWGetProcModule @ 0x1C00ED040 (xxxClientWOWGetProcModule.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C00F6A00 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     AllocateUnicodeString @ 0x1C010321C (AllocateUnicodeString.c)
 *     MapServerToClientPfn @ 0x1C0134804 (MapServerToClientPfn.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z @ 0x1C0138FB0 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01B25B4 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 */

unsigned __int64 __fastcall xxxSetClassData(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int64 v10; // rdi
  int v11; // ebx
  __int64 v12; // rbx
  _DWORD *v13; // rax
  char v14; // cl
  __int64 v15; // r15
  __int64 v16; // rbx
  unsigned __int64 v17; // r12
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // r11d
  __int64 v22; // rax
  __int64 v23; // rcx
  int ClassStyle; // ebx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  void *v28; // rax
  _DWORD *v29; // rax
  char v30; // cl
  __int64 v31; // rbx
  __int64 v32; // rbx
  const WCHAR *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  PWSTR Buffer; // rdx
  __int64 v37; // rax
  __int64 v38; // r9
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // r8
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // r11
  unsigned int v44; // r9d
  _DWORD *v45; // r10
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rbx
  __int64 v51; // rcx
  __int64 *CPD; // rax
  __int64 v53; // rax
  __int64 v54; // rbx
  __int64 v55; // rsi
  __int64 v57; // rdx
  struct _CALLPROCDATA **v58; // rbx
  __int64 ThreadWin32Thread; // rax
  struct _CALLPROCDATA **v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // rax
  _QWORD v63[2]; // [rsp+20h] [rbp-C8h] BYREF
  unsigned int v64; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v65; // [rsp+40h] [rbp-A8h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-98h] BYREF
  struct _UNICODE_STRING v67; // [rsp+68h] [rbp-80h] BYREF
  __int64 v68[3]; // [rsp+78h] [rbp-70h] BYREF
  __int64 v69[11]; // [rsp+90h] [rbp-58h] BYREF

  v64 = a2;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v63, *((_QWORD *)a1 + 14));
  v10 = 0LL;
  switch ( a2 )
  {
    case 0xFFFFFFE8:
      v19 = *(_QWORD *)v63[0];
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 6LL) & 1) != 0 )
      {
        v15 = MapServerToClientPfn(*(_QWORD *)(*(_QWORD *)(v19 + 8) + 32LL), a4, v9);
        v20 = *(_QWORD *)v63[0];
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 6LL) &= ~1u;
        if ( a4 )
        {
          v20 = *(_QWORD *)v63[0];
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 6LL) |= 2u;
        }
      }
      else
      {
        v15 = MapClientNeuterToClientPfn(v19, 0LL, a4);
        if ( v15 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 32LL)
          && a4 != ((*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 6LL) >> 1) & 1) )
        {
          v21 = 2 - (a4 != 0);
        }
      }
      if ( v21 )
      {
        CPD = GetCPD(*(_QWORD *)v63[0], v21 | 0x10u, v15);
        if ( CPD )
          v15 = (__int64)CPD;
      }
      if ( (a3 & 0xFFFF0000) == 0xFFFF0000 )
      {
        LOBYTE(v20) = 7;
        v53 = HMValidateHandleNoRip(a3, v20);
        if ( v53 )
          a3 = *(_QWORD *)(*(_QWORD *)(v53 + 40) + 16LL);
      }
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 32LL) = a3;
      v22 = MapClientToServerPfn(a3);
      if ( v22 )
      {
        v8 = *(_QWORD *)v63[0];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 32LL) = v22;
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 6LL) |= 1u;
      }
      else if ( a4 )
      {
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 6LL) |= 2u;
LABEL_35:
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 6LL) & 8) != 0 )
        {
          v54 = *(int *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 12LL);
          v55 = *(_QWORD *)(*(_QWORD *)v63[0] + 8LL);
          if ( (unsigned int)ClassLock(*(_QWORD *)v63[0], v68) )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 6LL) & 1) == 0 )
              LOWORD(v10) = xxxClientWOWGetProcModule(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 32LL));
            *(_WORD *)(v54 + v55 + 94) = v10;
            v58 = *(struct _CALLPROCDATA ***)v63[0];
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v57);
            *(_QWORD *)(ThreadWin32Thread + 16) = v68[0];
            ClassUnlockWorker(v58);
          }
          else
          {
            UserSetLastError(5LL, v57);
            *(_WORD *)(v54 + v55 + 94) = 0;
          }
        }
        goto LABEL_24;
      }
      *(_WORD *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 6LL) &= ~2u;
      goto LABEL_35;
    case 0xFFFFFFDE:
LABEL_115:
      if ( (unsigned int)ClassLock(*(_QWORD *)v63[0], v69) )
      {
        v10 = xxxSetClassCursor(a1, *(struct tagCLS **)v63[0], a2, a3);
        v60 = *(struct _CALLPROCDATA ***)v63[0];
        v62 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v61);
        *(_QWORD *)(v62 + 16) = v69[0];
        ClassUnlockWorker(v60);
        goto LABEL_25;
      }
      v51 = 5LL;
      goto LABEL_118;
    case 0xFFFFFFE3:
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 6LL) & 8) != 0 )
      {
        v8 = *(_QWORD *)v63[0];
        *(_DWORD *)(*(int *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 12LL) + *(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 88LL) = a3;
      }
      goto LABEL_119;
  }
  if ( a2 != -20 )
  {
    if ( a2 == -18 )
    {
      v43 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 80LL)
                         + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 84LL));
      v44 = 0;
      v45 = &gDefaultServerClasses;
      while ( 1 )
      {
        v8 = *(_QWORD *)(*(_QWORD *)v63[0] + 8LL);
        if ( *(_WORD *)v8 == *(_WORD *)(gpsi + 2LL * ((*v45 >> 3) & 0x1F) + 868) )
          break;
        ++v44;
        v45 += 12;
        if ( v44 >= 8 )
          goto LABEL_93;
      }
      v8 = *((unsigned int *)&gDefaultServerClasses + 12 * v44 + 6);
      v46 = *(_QWORD *)(*(_QWORD *)v63[0] + 8LL);
      if ( a3 >= v8 )
      {
        *(_DWORD *)(v46 + 84) = v8;
        LODWORD(a3) = a3 - *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 84LL);
      }
      else
      {
        if ( (*(_WORD *)(v46 + 6) & 0x200) != 0 )
        {
          v23 = 5LL;
          goto LABEL_90;
        }
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 84LL) = 0;
      }
LABEL_93:
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 80LL) = a3;
      v10 = v43;
      goto LABEL_25;
    }
    if ( a2 != -14 && a2 != -12 )
    {
      if ( a2 != -8 )
      {
        if ( a2 == -32 )
        {
          v23 = 87LL;
        }
        else
        {
          v11 = a2 + 34;
          if ( v11 >= 0 )
          {
            _mm_lfence();
            v8 = v11;
            v65 = v11;
            if ( byte_1C02DE560[v11] )
            {
              v12 = *(_QWORD *)(*(_QWORD *)v63[0] + 56LL);
              if ( v12 != *(_QWORD *)v63[0] )
              {
                if ( v63[0] != gSmartObjNullRef && !--*(_DWORD *)(v63[0] + 8LL) )
                {
                  if ( *(_BYTE *)(v63[0] + 12LL) )
                  {
                    Win32FreeToPagedLookasideList(gpStackRefLookAside, v63[0]);
                    v8 = v65;
                  }
                }
                if ( v12 )
                {
                  v63[0] = *(_QWORD *)(v12 + 128);
                  ++*(_DWORD *)(v63[0] + 8LL);
                }
                else
                {
                  v63[0] = gSmartObjNullRef;
                }
              }
              v13 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + byte_1C02DE560[v8]);
              v14 = byte_1C02DE588[v8];
              if ( v14 == 4 )
              {
                v15 = (unsigned int)*v13;
                *v13 = a3;
                if ( (_DWORD)v15 != (_DWORD)a3 && a2 == -26 && (unsigned int)IsWindowDesktopComposed(a1) )
                {
                  ClassStyle = DwmGetClassStyle((__int64)a1);
                  v28 = (void *)ReferenceDwmApiPort(v26, v25, v27);
                  DwmAsyncChildStyleChange(v28, *(_QWORD *)a1, v64, ClassStyle);
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
              v16 = *(_QWORD *)(*(_QWORD *)v63[0] + 64LL);
              if ( v16 != *(_QWORD *)v63[0] )
              {
                if ( v63[0] != gSmartObjNullRef && !--*(_DWORD *)(v63[0] + 8LL) )
                {
                  if ( *(_BYTE *)(v63[0] + 12LL) )
                    Win32FreeToPagedLookasideList(gpStackRefLookAside, v63[0]);
                }
                if ( v16 )
                {
                  v63[0] = *(_QWORD *)(v16 + 128);
                  ++*(_DWORD *)(v63[0] + 8LL);
                }
                else
                {
                  v63[0] = gSmartObjNullRef;
                }
              }
              v17 = v65;
              v8 = 0x1C0000000uLL;
              while ( *(_QWORD *)v63[0] )
              {
                v29 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + byte_1C02DE560[v17]);
                v30 = byte_1C02DE588[v17];
                if ( v30 == 4 )
                {
                  v15 = (unsigned int)*v29;
                  *v29 = a3;
                }
                else if ( v30 == 8 )
                {
                  v15 = *(_QWORD *)v29;
                  *(_QWORD *)v29 = a3;
                }
                else
                {
                  v15 = *(unsigned __int16 *)v29;
                  *(_WORD *)v29 = a3;
                }
                v31 = **(_QWORD **)v63[0];
                if ( v31 != *(_QWORD *)v63[0] )
                {
                  if ( v63[0] != gSmartObjNullRef && !--*(_DWORD *)(v63[0] + 8LL) )
                  {
                    if ( *(_BYTE *)(v63[0] + 12LL) )
                    {
                      Win32FreeToPagedLookasideList(gpStackRefLookAside, v63[0]);
                      v8 = 0x1C0000000uLL;
                    }
                  }
                  if ( v31 )
                  {
                    v63[0] = *(_QWORD *)(v31 + 128);
                    ++*(_DWORD *)(v63[0] + 8LL);
                  }
                  else
                  {
                    v63[0] = gSmartObjNullRef;
                  }
                }
              }
LABEL_24:
              v10 = v15;
LABEL_25:
              SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v63, v8);
              return v10;
            }
          }
          v23 = 1413LL;
        }
LABEL_90:
        UserSetLastError(v23, v8);
        goto LABEL_25;
      }
      v32 = *(_QWORD *)(*(_QWORD *)v63[0] + 96LL);
      v33 = *(const WCHAR **)(*(_QWORD *)(a3 + 16) + 8LL);
      if ( ((unsigned __int64)v33 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        v38 = *(_QWORD *)v63[0];
        v39 = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL);
        v40 = v39;
        if ( (v39 & 0xFFFFFFFFFFFF0000uLL) != 0 )
          v40 = -1LL;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 40LL) = v40;
        *(_QWORD *)(v38 + 96) = v39;
        goto LABEL_78;
      }
      RtlInitUnicodeString(&DestinationString, v33);
      if ( !DestinationString.Length )
      {
        v34 = *(_QWORD *)v63[0];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 40LL) = 0LL;
        *(_QWORD *)(v34 + 96) = 0LL;
LABEL_78:
        *(_QWORD *)(a3 + 16) = 0LL;
        if ( (v32 & 0xFFFFFFFFFFFF0000uLL) != 0 )
          Win32FreePool(v32);
        v41 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 16LL);
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 16LL) = *(_QWORD *)a3;
        *(_QWORD *)a3 = v41;
        v42 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 24LL);
        v8 = *(_QWORD *)(*(_QWORD *)v63[0] + 8LL);
        *(_QWORD *)(v8 + 24) = *(_QWORD *)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v42;
        if ( a4 )
          v10 = *(_QWORD *)a3;
        else
          v10 = v42;
        goto LABEL_25;
      }
      if ( (unsigned int)AllocateUnicodeString(&v67, (const void **)&DestinationString) )
      {
        v35 = *(_QWORD *)v63[0];
        Buffer = v67.Buffer;
        v37 = (__int64)v67.Buffer;
        if ( ((unsigned __int64)v67.Buffer & 0xFFFFFFFFFFFF0000uLL) != 0 )
          v37 = -1LL;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 40LL) = v37;
        *(_QWORD *)(v35 + 96) = Buffer;
        goto LABEL_78;
      }
      *(_QWORD *)(a3 + 16) = 0LL;
      goto LABEL_119;
    }
    goto LABEL_115;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 6LL) & 8) == 0 )
  {
    v51 = 87LL;
LABEL_118:
    UserSetLastError(v51, v8);
LABEL_119:
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v63, v8);
    return 0LL;
  }
  v47 = *(_QWORD *)v63[0];
  v48 = *(int *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 12LL);
  v49 = *(_QWORD *)(*(_QWORD *)v63[0] + 8LL);
  if ( (*(_BYTE *)(v49 + 6) & 0x10) != 0 )
  {
    v10 = *(unsigned __int16 *)(v48 + v49 + 92);
    v8 = *(_QWORD *)v63[0];
    *(_WORD *)(*(int *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 12LL) + *(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 92LL) = a3;
    goto LABEL_25;
  }
  *(_WORD *)(v48 + v49 + 92) = a3;
  *(_WORD *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 6LL) |= 0x10u;
  v50 = *(int *)(*(_QWORD *)(*(_QWORD *)v63[0] + 8LL) + 12LL);
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v63, v47);
  return v50;
}
