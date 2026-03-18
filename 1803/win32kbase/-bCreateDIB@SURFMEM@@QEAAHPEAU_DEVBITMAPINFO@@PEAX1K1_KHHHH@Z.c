/*
 * XREFs of ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C003EE00
 * Callers:
 *     GreCreateBitmap @ 0x1C003D960 (GreCreateBitmap.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C0041298 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     pProcessDfbSurfacesInternal @ 0x1C0049C10 (pProcessDfbSurfacesInternal.c)
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C0069C68 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C001CB70 (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C001CEC4 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     EngFreeUserMem @ 0x1C003C200 (EngFreeUserMem.c)
 *     EngAllocUserMemEx @ 0x1C003C2AC (EngAllocUserMemEx.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C003E480 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C003F93C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003F968 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?Allocate@SURFACE@@SAPEAV1@_KG@Z @ 0x1C0043A7C (-Allocate@SURFACE@@SAPEAV1@_KG@Z.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C0044C10 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ?vInit@W32PIDLOCK@@QEAAXXZ @ 0x1C005BEC8 (-vInit@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C005BF4C (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     Win32CreateSection @ 0x1C0068E58 (Win32CreateSection.c)
 *     ?vUnmapKernelSectionForUserMapping@@YAXPEAU_EPROCESS@@PEAX@Z @ 0x1C006D2DC (-vUnmapKernelSectionForUserMapping@@YAXPEAU_EPROCESS@@PEAX@Z.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?AllocateKernelSection@@YAJKKPEAPEAX@Z @ 0x1C00C21E0 (-AllocateKernelSection@@YAJKKPEAPEAX@Z.c)
 *     ?AllocateSharedSection@@YAJKKPEAPEAX00@Z @ 0x1C00C228C (-AllocateSharedSection@@YAJKKPEAPEAX00@Z.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C00C249C (-vFreeKernelSection@@YAXPEAX@Z.c)
 */

__int64 __fastcall SURFMEM::bCreateDIB(
        SURFMEM *this,
        struct _DEVBITMAPINFO *a2,
        void *a3,
        void *a4,
        unsigned int a5,
        volatile signed __int32 *a6,
        unsigned __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  unsigned int v13; // ecx
  int v14; // r13d
  int v15; // r15d
  unsigned int v16; // edi
  unsigned int v17; // r14d
  __int64 v18; // r12
  int v19; // eax
  int v20; // edi
  unsigned __int16 v21; // dx
  PVOID v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // r15
  int v26; // eax
  int v27; // eax
  PVOID v28; // rax
  int v29; // r8d
  __int64 result; // rax
  void *v31; // rax
  volatile signed __int32 *BugCheckParameter4; // r15
  struct SURFACE *v33; // rax
  int v34; // eax
  __int64 v35; // rbx
  struct _EPROCESS *v36; // rax
  PVOID v37; // rcx
  HPALETTE v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rax
  unsigned int CurrentProcessId; // eax
  __int64 ThreadWin32Thread; // rax
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  signed __int32 v49; // ecx
  __int64 v50; // rax
  bool v51; // r9
  struct _SLIST_ENTRY *v52; // rcx
  int v53; // eax
  unsigned __int64 CurrentProcess; // rax
  __int128 v55; // xmm0
  _OWORD *v56; // rax
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  PVOID Object; // [rsp+50h] [rbp-71h] BYREF
  int v60; // [rsp+58h] [rbp-69h]
  void *v61; // [rsp+60h] [rbp-61h] BYREF
  __int64 v62; // [rsp+68h] [rbp-59h] BYREF
  _DWORD v63[2]; // [rsp+70h] [rbp-51h] BYREF
  PEPROCESS Process; // [rsp+78h] [rbp-49h] BYREF
  __int64 v65; // [rsp+80h] [rbp-41h] BYREF
  _OWORD v66[7]; // [rsp+88h] [rbp-39h] BYREF
  char v67; // [rsp+110h] [rbp+4Fh]
  volatile signed __int32 *v68; // [rsp+118h] [rbp+57h] BYREF
  PVOID pv; // [rsp+120h] [rbp+5Fh] BYREF
  void *v70; // [rsp+128h] [rbp+67h]

  v70 = a4;
  pv = a3;
  *(_QWORD *)this = 0LL;
  *((_BYTE *)this + 8) = 8;
  v13 = *((_DWORD *)a2 + 1);
  LOWORD(v14) = 0;
  v15 = 0;
  v16 = 0;
  v17 = 1;
  if ( v13 > 0x7FFFFFFF )
    return 0LL;
  v18 = *((unsigned int *)a2 + 2);
  if ( (unsigned int)v18 > 0x7FFFFFFF )
    return 0LL;
  v19 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 1 )
  {
    v16 = ((v13 + 31) >> 3) & 0x1FFFFFFC;
    goto LABEL_21;
  }
  switch ( v19 )
  {
    case 2:
      v16 = ((v13 + 7) >> 1) & 0x7FFFFFFC;
      break;
    case 3:
      v20 = v13 + 3;
LABEL_18:
      v16 = v20 & 0xFFFFFFFC;
      break;
    case 4:
      if ( v13 + 1 >= 0x7FFFFFFF )
        return 0LL;
      v20 = 2 * v13 + 2;
      goto LABEL_18;
    case 5:
      if ( v13 >= 0x55555554 )
        return 0LL;
      v20 = 3 * (v13 + 1);
      goto LABEL_18;
    case 6:
      if ( v13 >= 0x3FFFFFFF )
        return 0LL;
      v16 = 4 * v13;
      break;
    default:
      if ( (unsigned int)(v19 - 7) > 3 )
        return 0LL;
      v15 = 1;
      break;
  }
LABEL_21:
  Object = 0LL;
  LODWORD(v68) = SURFACE::tSize;
  memset(v66, 0, 0x30uLL);
  v60 = 0;
  v61 = 0LL;
  v67 = 0;
  if ( !pv )
  {
    if ( v15 )
      v23 = *((unsigned int *)a2 + 3);
    else
      v23 = v16 * v18;
    v24 = v23 + (unsigned int)v68;
    if ( v24 < v23 )
      return 0LL;
    v25 = v23 + (unsigned int)v68;
    if ( v24 > 0x7FFFFFFF )
      return 0LL;
    v26 = *((_DWORD *)a2 + 6);
    if ( (v26 & 0x40000) != 0 && v25 > 4096 )
    {
      v26 |= 8u;
      *((_DWORD *)a2 + 6) = v26;
    }
    if ( (v26 & 8) != 0 )
    {
      if ( (v26 & 0x80u) == 0 )
        v27 = EngAllocUserMemEx((int)v25, v23, &pv);
      else
        v27 = AllocateSharedSection(v25, v23, &Object, &v61, &pv);
      if ( v27 < 0 )
        return 0LL;
      v22 = pv;
      v28 = Object;
LABEL_47:
      if ( !v22 && !v28 )
        goto LABEL_49;
LABEL_59:
      BugCheckParameter4 = 0LL;
      goto LABEL_60;
    }
    if ( (v26 & 0x810) == 0 )
      goto LABEL_49;
    if ( (v26 & 0x800) != 0 )
    {
      W32PIDLOCK::vInit((W32PIDLOCK *)v66);
      result = 0LL;
      if ( !*((_QWORD *)&v66[2] + 1) )
        return result;
      Object = 0LL;
      v63[1] = 0;
      v63[0] = v25 - (_DWORD)v68;
      Win32CreateSection((unsigned int)&Object, 6, v29, (unsigned int)v63);
      v28 = Object;
      if ( !Object )
      {
        W32PIDLOCK::vCleanUp((W32PIDLOCK *)v66);
        return 0LL;
      }
    }
    else
    {
      AllocateKernelSection(v25, v23, &pv);
      v28 = Object;
    }
    v22 = pv;
    if ( !pv && !v28 )
    {
LABEL_49:
      v67 = 1;
      v31 = PALLOCMEM2((unsigned int)(v25 - (_DWORD)v68), 0x6D627047u, ((*((_DWORD *)a2 + 6) >> 1) & 1) == 0);
      BugCheckParameter4 = 0LL;
      pv = v31;
      if ( !v31 )
        return 0LL;
LABEL_60:
      v33 = SURFACE::Allocate((unsigned __int64)v22, v21);
      *(_QWORD *)this = v33;
      if ( !v33 )
      {
        v17 = 0;
        goto LABEL_62;
      }
      v68 = *(volatile signed __int32 **)((char *)a2 + 4);
      *((_QWORD *)v33 + 7) = v68;
      *(_WORD *)(*(_QWORD *)this + 100LL) = 0;
      *(_QWORD *)(*(_QWORD *)this + 144LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 224LL) = 0LL;
      v38 = (HPALETTE)*((_QWORD *)a2 + 2);
      if ( v38 )
      {
        EPALOBJ::EPALOBJ((EPALOBJ *)&v62, v38);
        v39 = *(_QWORD *)this;
        if ( v62 )
        {
          *(_QWORD *)(v39 + 128) = v62;
          v62 = 0LL;
        }
        else
        {
          *(_QWORD *)(v39 + 128) = 0LL;
        }
        EPALOBJ::~EPALOBJ((EPALOBJ *)&v62);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)this + 128LL) = 0LL;
      }
      *(_QWORD *)(*(_QWORD *)this + 72LL) = pv;
      v40 = *(_QWORD *)this;
      pv = 0LL;
      *(_BYTE *)(v40 + 688) = v67;
      *(_DWORD *)(*(_QWORD *)this + 96LL) = *(_DWORD *)a2;
      *(_WORD *)(*(_QWORD *)this + 102LL) = v14 | *((_WORD *)a2 + 12) & 0x89;
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      BugCheckParameter4 = a6;
      v68 = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 208LL) = CurrentProcessId & 0xFFFFFFFC;
      *(_QWORD *)(*(_QWORD *)this + 184LL) = v70;
      *(_DWORD *)(*(_QWORD *)this + 212LL) = a5;
      *(_QWORD *)(*(_QWORD *)this + 192LL) = BugCheckParameter4;
      *(_QWORD *)(*(_QWORD *)this + 200LL) = a7;
      *(_DWORD *)(*(_QWORD *)this + 216LL) = a10;
      *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 40LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 112LL) = *((_DWORD *)a2 + 6) & 0x40000;
      *(_QWORD *)(*(_QWORD *)this + 136LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 152LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 160LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 168LL) = 0;
      *(_QWORD *)(*(_QWORD *)this + 176LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 104LL) = 0LL;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      if ( ThreadWin32Thread )
        *(_QWORD *)(ThreadWin32Thread + 304) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 248LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 256LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 264LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 648LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 656LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 116LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 120LL) = 0;
      *(_QWORD *)(*(_QWORD *)this + 568LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 560LL) = 0LL;
      v43 = (_QWORD *)(*(_QWORD *)this + 232LL);
      v43[1] = v43;
      *v43 = v43;
      *(_DWORD *)(*(_QWORD *)this + 320LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 324LL) = 0;
      *(_QWORD *)(*(_QWORD *)this + 632LL) = 0LL;
      v44 = (_QWORD *)(*(_QWORD *)this + 528LL);
      v44[1] = v44;
      *v44 = v44;
      *(_QWORD *)(*(_QWORD *)this + 624LL) = 0LL;
      if ( v60 )
        *(_DWORD *)(*(_QWORD *)this + 116LL) |= 1u;
      if ( BugCheckParameter4 )
      {
        BugCheckParameter4 = 0LL;
        if ( !a10 )
          *(_WORD *)(*(_QWORD *)this + 102LL) |= 4u;
      }
      v45 = *(_QWORD *)this;
      if ( (unsigned int)(*(_DWORD *)a2 - 7) <= 3 )
      {
        *(_WORD *)(v45 + 102) &= ~0x800u;
        *(_DWORD *)(*(_QWORD *)this + 88LL) = (_DWORD)BugCheckParameter4;
        *(_DWORD *)(*(_QWORD *)this + 64LL) = *((_DWORD *)a2 + 3);
        if ( (unsigned int)(*(_DWORD *)a2 - 9) <= 1 )
        {
          *(_QWORD *)(*(_QWORD *)this + 80LL) = BugCheckParameter4;
LABEL_91:
          if ( *(char *)(*(_QWORD *)this + 102LL) < 0 )
          {
            *(_QWORD *)(*(_QWORD *)this + 584LL) = Object;
            *(_QWORD *)(*(_QWORD *)this + 592LL) = v61;
            *(_QWORD *)(*(_QWORD *)this + 600LL) = (char *)v61
                                                 + *(_QWORD *)(*(_QWORD *)this + 80LL)
                                                 - *(_QWORD *)(*(_QWORD *)this + 72LL);
            *(_DWORD *)(*(_QWORD *)this + 608LL) = 1;
            v47 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            if ( v47 && (v48 = *(_QWORD *)(v47 + 72)) != 0 )
            {
              *(_DWORD *)(*(_QWORD *)this + 612LL) = *(_DWORD *)(v48 + 8);
              *(_DWORD *)(*(_QWORD *)this + 616LL) = 1;
            }
            else
            {
              *(_DWORD *)(*(_QWORD *)this + 612LL) = (_DWORD)BugCheckParameter4;
              *(_DWORD *)(*(_QWORD *)this + 616LL) = (_DWORD)BugCheckParameter4;
            }
          }
          v49 = _InterlockedExchangeAdd((volatile signed __int32 *)&_ulGlobalSurfaceUnique, 1u);
          v50 = *(_QWORD *)this;
          v68 = BugCheckParameter4;
          v51 = a8 != (_DWORD)BugCheckParameter4;
          *(_DWORD *)(v50 + 92) = v49 + 1;
          if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v68, *(struct OBJECT **)this, 1, v51, 5u) )
          {
            v53 = a11;
            *((_DWORD *)this + 3) = a11;
            if ( v53 )
              _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)this + 12LL), 1u);
            *(_QWORD *)(*(_QWORD *)this + 32LL) = **(_QWORD **)this;
            CurrentProcess = PsGetCurrentProcess();
            SURFACE::vAppContainerOwner(*(SURFACE **)this, CurrentProcess);
          }
          else
          {
            v52 = *(struct _SLIST_ENTRY **)this;
            if ( *(_QWORD *)(*(_QWORD *)this + 128LL) )
            {
              v65 = *(_QWORD *)(*(_QWORD *)this + 128LL);
              XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v65);
              *(_QWORD *)(*(_QWORD *)this + 128LL) = BugCheckParameter4;
              v52 = *(struct _SLIST_ENTRY **)this;
            }
            SURFACE::Free(v52);
            *(_QWORD *)this = BugCheckParameter4;
            v17 = (unsigned int)BugCheckParameter4;
          }
          if ( v68 )
            _InterlockedDecrement(v68 + 3);
          if ( v17 )
          {
            if ( (*(_WORD *)(*(_QWORD *)this + 102LL) & 0x800) != 0
              && *((volatile signed __int32 **)&v66[2] + 1) != BugCheckParameter4 )
            {
              v55 = v66[0];
              *(_QWORD *)(*(_QWORD *)this + 248LL) = Object;
              v56 = *(_OWORD **)this;
              v57 = v66[1];
              v56[17] = v55;
              v58 = v66[2];
              v56[18] = v57;
              v56[19] = v58;
              *(_QWORD *)(*(_QWORD *)this + 72LL) = BugCheckParameter4;
              *(_QWORD *)(*(_QWORD *)this + 80LL) = BugCheckParameter4;
              *(_DWORD *)(*(_QWORD *)this + 112LL) |= 0x200u;
            }
            return v17;
          }
LABEL_62:
          if ( !pv && Object == BugCheckParameter4 )
            return v17;
          v34 = *((_DWORD *)a2 + 6);
          if ( (v34 & 8) != 0 )
          {
            if ( (v34 & 0x80u) == 0 )
            {
              EngFreeUserMem(pv);
            }
            else
            {
              v35 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              if ( *(volatile signed __int32 **)(v35 + 72) != BugCheckParameter4 )
              {
                v36 = (struct _EPROCESS *)PsGetCurrentProcess();
                vUnmapKernelSectionForUserMapping(v36, pv);
                if ( PsLookupProcessByProcessId((HANDLE)*(int *)(*(_QWORD *)(v35 + 72) + 8LL), &Process) >= 0 )
                {
                  vUnmapKernelSectionForUserMapping(Process, v61);
                  ObfDereferenceObject(Process);
                }
                v37 = Object;
                if ( !Object )
                  KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, (ULONG_PTR)BugCheckParameter4);
LABEL_114:
                ObfDereferenceObject(v37);
              }
            }
          }
          else
          {
            if ( (v14 & 0x800) == 0 )
            {
              if ( (v14 & 0x10) != 0 )
              {
                vFreeKernelSection(pv);
              }
              else if ( v67 != (_BYTE)BugCheckParameter4 && pv )
              {
                Win32FreePool((__int64)pv);
              }
              return v17;
            }
            W32PIDLOCK::vCleanUp((W32PIDLOCK *)v66);
            if ( v60 == (_DWORD)BugCheckParameter4 )
            {
              v37 = Object;
              if ( !Object )
                KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, (ULONG_PTR)BugCheckParameter4);
              goto LABEL_114;
            }
          }
          return v17;
        }
      }
      else
      {
        *(_DWORD *)(v45 + 64) = v16 * *((_DWORD *)a2 + 2);
        v46 = *(_QWORD *)this;
        if ( (*((_DWORD *)a2 + 6) & 1) == 0 )
        {
          *(_DWORD *)(v46 + 88) = -v16;
          *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL)
                                              + *(_DWORD *)(*(_QWORD *)this + 64LL)
                                              - v16;
          goto LABEL_91;
        }
        *(_DWORD *)(v46 + 88) = v16;
      }
      *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL);
      goto LABEL_91;
    }
    v14 = *((_DWORD *)a2 + 6) & 0x800 | 0x10;
    goto LABEL_47;
  }
  if ( a9 )
  {
    v22 = v15 ? (PVOID)*((unsigned int *)a2 + 3) : (PVOID)(v16 * v18);
    if ( (unsigned __int64)v22 > 0x7FFFFFFF )
      return 0LL;
  }
  if ( (*((_DWORD *)a2 + 6) & 0x800) == 0 )
    goto LABEL_59;
  W32PIDLOCK::vInit((W32PIDLOCK *)v66);
  BugCheckParameter4 = 0LL;
  if ( *((_QWORD *)&v66[2] + 1) )
  {
    LOWORD(v14) = 2048;
    v60 = 1;
    goto LABEL_60;
  }
  return 0LL;
}
