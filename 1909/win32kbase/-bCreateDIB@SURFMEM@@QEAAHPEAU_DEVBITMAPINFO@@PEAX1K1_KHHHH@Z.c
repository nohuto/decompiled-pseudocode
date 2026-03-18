/*
 * XREFs of ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00163D0
 * Callers:
 *     GreCreateBitmap @ 0x1C0016C90 (GreCreateBitmap.c)
 *     pProcessDfbSurfacesInternal @ 0x1C0069D50 (pProcessDfbSurfacesInternal.c)
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C0089864 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C008CED0 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 * Callees:
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C000EF58 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ?Allocate@SURFACE@@SAPEAV1@_KG@Z @ 0x1C000F0F8 (-Allocate@SURFACE@@SAPEAV1@_KG@Z.c)
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C0012D70 (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0012FFC (PALLOCMEM2.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00186C0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C001AA60 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C001AAB8 (--1EPALOBJ@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 *     EngFreeUserMem @ 0x1C0037B60 (EngFreeUserMem.c)
 *     EngAllocUserMemEx @ 0x1C0037C38 (EngAllocUserMemEx.c)
 *     Win32CreateSection @ 0x1C005D8D8 (Win32CreateSection.c)
 *     ?vUnmapKernelSectionForUserMapping@@YAXPEAU_EPROCESS@@PEAX@Z @ 0x1C007080C (-vUnmapKernelSectionForUserMapping@@YAXPEAU_EPROCESS@@PEAX@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00717D8 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?vInit@W32PIDLOCK@@QEAAXXZ @ 0x1C0093ED0 (-vInit@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C0098F48 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     ?AllocateKernelSection@@YAJKKPEAPEAX@Z @ 0x1C01229F8 (-AllocateKernelSection@@YAJKKPEAPEAX@Z.c)
 *     ?AllocateSharedSection@@YAJKKPEAPEAX00@Z @ 0x1C0122AB0 (-AllocateSharedSection@@YAJKKPEAPEAX00@Z.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C0122CB0 (-vFreeKernelSection@@YAXPEAX@Z.c)
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
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // r15
  int v24; // eax
  int v25; // eax
  PVOID v26; // rcx
  PVOID v27; // rax
  int v28; // r8d
  void *v30; // rax
  volatile signed __int32 *BugCheckParameter4; // r15
  unsigned __int64 v32; // rcx
  struct _SLIST_ENTRY *v33; // rax
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rbx
  struct _EPROCESS *v38; // rax
  PVOID v39; // rcx
  HPALETTE v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rax
  unsigned int CurrentProcessId; // eax
  __int64 ThreadWin32Thread; // rax
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  signed __int32 v51; // ecx
  __int64 v52; // rax
  char v53; // r9
  __int64 v54; // rdx
  struct _SLIST_ENTRY *v55; // rcx
  int v56; // eax
  __int64 v57; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  __int128 v59; // xmm0
  _OWORD *v60; // rax
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  PVOID Object; // [rsp+50h] [rbp-71h] BYREF
  int v64; // [rsp+58h] [rbp-69h]
  void *v65; // [rsp+60h] [rbp-61h] BYREF
  __int64 v66; // [rsp+68h] [rbp-59h] BYREF
  _DWORD v67[2]; // [rsp+70h] [rbp-51h] BYREF
  PEPROCESS Process; // [rsp+78h] [rbp-49h] BYREF
  __int64 v69; // [rsp+80h] [rbp-41h] BYREF
  _OWORD v70[7]; // [rsp+88h] [rbp-39h] BYREF
  char v71; // [rsp+110h] [rbp+4Fh]
  volatile signed __int32 *v72; // [rsp+118h] [rbp+57h] BYREF
  PVOID pv; // [rsp+120h] [rbp+5Fh] BYREF
  void *v74; // [rsp+128h] [rbp+67h]

  v74 = a4;
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
  LODWORD(v72) = SURFACE::tSize;
  memset(v70, 0, 0x30uLL);
  v64 = 0;
  v65 = 0LL;
  v71 = 0;
  if ( pv )
  {
    if ( a9 )
    {
      v32 = v15 ? *((unsigned int *)a2 + 3) : v16 * v18;
      if ( v32 > 0x7FFFFFFF )
        return 0LL;
    }
    if ( (*((_DWORD *)a2 + 6) & 0x800) == 0 )
      goto LABEL_58;
    W32PIDLOCK::vInit((W32PIDLOCK *)v70);
    BugCheckParameter4 = 0LL;
    if ( *((_QWORD *)&v70[2] + 1) )
    {
      LOWORD(v14) = 2048;
      v64 = 1;
      goto LABEL_59;
    }
    return 0LL;
  }
  if ( v15 )
    v22 = *((unsigned int *)a2 + 3);
  else
    v22 = v16 * v18;
  v23 = v22 + (unsigned int)v72;
  if ( v23 < v22 || (unsigned __int64)v23 > 0x7FFFFFFF )
    return 0LL;
  v24 = *((_DWORD *)a2 + 6);
  if ( (v24 & 0x40000) != 0 && v23 > 4096 )
  {
    v24 |= 8u;
    *((_DWORD *)a2 + 6) = v24;
  }
  if ( (v24 & 8) != 0 )
  {
    if ( (v24 & 0x80u) == 0 )
      v25 = EngAllocUserMemEx((int)v23, v21, &pv);
    else
      v25 = AllocateSharedSection(v23, v21, &Object, &v65, &pv);
    if ( v25 < 0 )
      return 0LL;
    v26 = pv;
    v27 = Object;
LABEL_46:
    if ( !v26 && !v27 )
      goto LABEL_48;
LABEL_58:
    BugCheckParameter4 = 0LL;
    goto LABEL_59;
  }
  if ( (v24 & 0x810) == 0 )
    goto LABEL_48;
  if ( (v24 & 0x800) == 0 )
  {
    AllocateKernelSection(v23, v21, &pv);
    v27 = Object;
    goto LABEL_43;
  }
  W32PIDLOCK::vInit((W32PIDLOCK *)v70);
  if ( !*((_QWORD *)&v70[2] + 1) )
    return 0LL;
  v67[1] = 0;
  v67[0] = v23 - (_DWORD)v72;
  Win32CreateSection((unsigned int)&Object, 6, v28, (unsigned int)v67);
  v27 = Object;
  if ( !Object )
  {
    W32PIDLOCK::vCleanUp((W32PIDLOCK *)v70);
    return 0LL;
  }
LABEL_43:
  v26 = pv;
  if ( pv || v27 )
  {
    v14 = *((_DWORD *)a2 + 6) & 0x800 | 0x10;
    goto LABEL_46;
  }
LABEL_48:
  v71 = 1;
  v30 = PALLOCMEM2((unsigned int)(v23 - (_DWORD)v72), 0x6D627047u, ((*((_DWORD *)a2 + 6) >> 1) & 1) == 0);
  BugCheckParameter4 = 0LL;
  pv = v30;
  if ( !v30 )
    return 0LL;
LABEL_59:
  v33 = SURFACE::Allocate();
  *(_QWORD *)this = v33;
  if ( !v33 )
  {
    v17 = 0;
    goto LABEL_61;
  }
  v72 = *(volatile signed __int32 **)((char *)a2 + 4);
  *((_QWORD *)&v33[3].Next + 1) = v72;
  *(_WORD *)(*(_QWORD *)this + 100LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 144LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 224LL) = 0LL;
  v40 = (HPALETTE)*((_QWORD *)a2 + 2);
  if ( v40 )
  {
    EPALOBJ::EPALOBJ((EPALOBJ *)&v66, v40);
    v41 = *(_QWORD *)this;
    if ( v66 )
    {
      *(_QWORD *)(v41 + 128) = v66;
      v66 = 0LL;
    }
    else
    {
      *(_QWORD *)(v41 + 128) = 0LL;
    }
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v66);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)this + 128LL) = 0LL;
  }
  *(_QWORD *)(*(_QWORD *)this + 72LL) = pv;
  v42 = *(_QWORD *)this;
  pv = 0LL;
  *(_BYTE *)(v42 + 688) = v71;
  *(_DWORD *)(*(_QWORD *)this + 96LL) = *(_DWORD *)a2;
  *(_WORD *)(*(_QWORD *)this + 102LL) = v14 | *((_WORD *)a2 + 12) & 0x89;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  BugCheckParameter4 = a6;
  v72 = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 208LL) = CurrentProcessId & 0xFFFFFFFC;
  *(_QWORD *)(*(_QWORD *)this + 184LL) = v74;
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
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
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
  v45 = (_QWORD *)(*(_QWORD *)this + 232LL);
  v45[1] = v45;
  *v45 = v45;
  *(_DWORD *)(*(_QWORD *)this + 320LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 324LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 632LL) = 0LL;
  v46 = (_QWORD *)(*(_QWORD *)this + 528LL);
  v46[1] = v46;
  *v46 = v46;
  *(_QWORD *)(*(_QWORD *)this + 624LL) = 0LL;
  if ( v64 )
    *(_DWORD *)(*(_QWORD *)this + 116LL) |= 1u;
  if ( BugCheckParameter4 )
  {
    BugCheckParameter4 = 0LL;
    if ( !a10 )
      *(_WORD *)(*(_QWORD *)this + 102LL) |= 4u;
  }
  v47 = *(_QWORD *)this;
  if ( (unsigned int)(*(_DWORD *)a2 - 7) > 3 )
  {
    *(_DWORD *)(v47 + 64) = v16 * *((_DWORD *)a2 + 2);
    v48 = *(_QWORD *)this;
    if ( (*((_DWORD *)a2 + 6) & 1) == 0 )
    {
      *(_DWORD *)(v48 + 88) = -v16;
      *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL)
                                          + *(_DWORD *)(*(_QWORD *)this + 64LL)
                                          - v16;
      goto LABEL_90;
    }
    *(_DWORD *)(v48 + 88) = v16;
    goto LABEL_88;
  }
  *(_WORD *)(v47 + 102) &= ~0x800u;
  *(_DWORD *)(*(_QWORD *)this + 88LL) = (_DWORD)BugCheckParameter4;
  *(_DWORD *)(*(_QWORD *)this + 64LL) = *((_DWORD *)a2 + 3);
  if ( (unsigned int)(*(_DWORD *)a2 - 9) > 1 )
  {
LABEL_88:
    *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL);
    goto LABEL_90;
  }
  *(_QWORD *)(*(_QWORD *)this + 80LL) = BugCheckParameter4;
LABEL_90:
  if ( *(char *)(*(_QWORD *)this + 102LL) < 0 )
  {
    *(_QWORD *)(*(_QWORD *)this + 584LL) = Object;
    *(_QWORD *)(*(_QWORD *)this + 592LL) = v65;
    *(_QWORD *)(*(_QWORD *)this + 600LL) = (char *)v65
                                         + *(_QWORD *)(*(_QWORD *)this + 80LL)
                                         - *(_QWORD *)(*(_QWORD *)this + 72LL);
    *(_DWORD *)(*(_QWORD *)this + 608LL) = 1;
    v49 = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( v49 && (v50 = *(_QWORD *)(v49 + 72)) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)this + 612LL) = *(_DWORD *)(v50 + 8);
      *(_DWORD *)(*(_QWORD *)this + 616LL) = 1;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)this + 612LL) = (_DWORD)BugCheckParameter4;
      *(_DWORD *)(*(_QWORD *)this + 616LL) = (_DWORD)BugCheckParameter4;
    }
  }
  v51 = _InterlockedExchangeAdd((volatile signed __int32 *)&_ulGlobalSurfaceUnique, 1u);
  v52 = *(_QWORD *)this;
  v72 = BugCheckParameter4;
  v53 = a8 != (_DWORD)BugCheckParameter4;
  *(_DWORD *)(v52 + 92) = v51 + 1;
  if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v72, *(struct OBJECT **)this, 1u, v53, 5u) )
  {
    v56 = a11;
    *((_DWORD *)this + 3) = a11;
    if ( v56 )
      _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)this + 12LL), 1u);
    v57 = *(_QWORD *)this;
    *(_QWORD *)(v57 + 32) = **(_QWORD **)this;
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v57, v54);
    SURFACE::vAppContainerOwner(*(SURFACE **)this, CurrentProcess);
  }
  else
  {
    v55 = *(struct _SLIST_ENTRY **)this;
    if ( *(_QWORD *)(*(_QWORD *)this + 128LL) )
    {
      v69 = *(_QWORD *)(*(_QWORD *)this + 128LL);
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v69);
      *(_QWORD *)(*(_QWORD *)this + 128LL) = BugCheckParameter4;
      v55 = *(struct _SLIST_ENTRY **)this;
    }
    SURFACE::Free(v55);
    *(_QWORD *)this = BugCheckParameter4;
    v17 = (unsigned int)BugCheckParameter4;
  }
  if ( v72 )
    _InterlockedDecrement(v72 + 3);
  if ( v17 )
  {
    if ( (*(_WORD *)(*(_QWORD *)this + 102LL) & 0x800) != 0
      && *((volatile signed __int32 **)&v70[2] + 1) != BugCheckParameter4 )
    {
      v59 = v70[0];
      *(_QWORD *)(*(_QWORD *)this + 248LL) = Object;
      v60 = *(_OWORD **)this;
      v61 = v70[1];
      v60[17] = v59;
      v62 = v70[2];
      v60[18] = v61;
      v60[19] = v62;
      *(_QWORD *)(*(_QWORD *)this + 72LL) = BugCheckParameter4;
      *(_QWORD *)(*(_QWORD *)this + 80LL) = BugCheckParameter4;
      *(_DWORD *)(*(_QWORD *)this + 112LL) |= 0x200u;
    }
    return v17;
  }
LABEL_61:
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
      v37 = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( *(volatile signed __int32 **)(v37 + 72) != BugCheckParameter4 )
      {
        v38 = (struct _EPROCESS *)PsGetCurrentProcess(v36, v35);
        vUnmapKernelSectionForUserMapping(v38, pv);
        if ( PsLookupProcessByProcessId((HANDLE)*(int *)(*(_QWORD *)(v37 + 72) + 8LL), &Process) >= 0 )
        {
          vUnmapKernelSectionForUserMapping(Process, v65);
          ObfDereferenceObject(Process);
        }
        v39 = Object;
        if ( !Object )
          KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, (ULONG_PTR)BugCheckParameter4);
LABEL_113:
        ObfDereferenceObject(v39);
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
      else if ( v71 != (_BYTE)BugCheckParameter4 && pv )
      {
        Win32FreePool((__int64)pv);
      }
      return v17;
    }
    W32PIDLOCK::vCleanUp((W32PIDLOCK *)v70);
    if ( v64 == (_DWORD)BugCheckParameter4 )
    {
      v39 = Object;
      if ( !Object )
        KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, (ULONG_PTR)BugCheckParameter4);
      goto LABEL_113;
    }
  }
  return v17;
}
