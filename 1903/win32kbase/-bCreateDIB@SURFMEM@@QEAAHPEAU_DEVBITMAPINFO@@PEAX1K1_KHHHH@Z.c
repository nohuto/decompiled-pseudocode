/*
 * XREFs of ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C002D110
 * Callers:
 *     GreCreateBitmap @ 0x1C002CF20 (GreCreateBitmap.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C0054100 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     pProcessDfbSurfacesInternal @ 0x1C0058BB0 (pProcessDfbSurfacesInternal.c)
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C008DD14 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00148AC (PALLOCMEM2.c)
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C00169E0 (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0016FD0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     EngFreeUserMem @ 0x1C0038BD0 (EngFreeUserMem.c)
 *     EngAllocUserMemEx @ 0x1C0038CA8 (EngAllocUserMemEx.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C0053858 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ?Allocate@SURFACE@@SAPEAV1@_KG@Z @ 0x1C00539F8 (-Allocate@SURFACE@@SAPEAV1@_KG@Z.c)
 *     ?vInit@W32PIDLOCK@@QEAAXXZ @ 0x1C0055D9C (-vInit@W32PIDLOCK@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C0058824 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C005B2A0 (--1EPALOBJ@@QEAA@XZ.c)
 *     Win32CreateSection @ 0x1C005FB08 (Win32CreateSection.c)
 *     ?vUnmapKernelSectionForUserMapping@@YAXPEAU_EPROCESS@@PEAX@Z @ 0x1C006173C (-vUnmapKernelSectionForUserMapping@@YAXPEAU_EPROCESS@@PEAX@Z.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C007777C (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00784B8 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     ?AllocateKernelSection@@YAJKKPEAPEAX@Z @ 0x1C0125268 (-AllocateKernelSection@@YAJKKPEAPEAX@Z.c)
 *     ?AllocateSharedSection@@YAJKKPEAPEAX00@Z @ 0x1C0125320 (-AllocateSharedSection@@YAJKKPEAPEAX00@Z.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C0125520 (-vFreeKernelSection@@YAXPEAX@Z.c)
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
  PVOID v22; // rcx
  unsigned __int64 v23; // rcx
  __int64 v24; // r15
  int v25; // eax
  int v26; // eax
  PVOID v27; // rax
  int v28; // r8d
  void *v30; // rax
  volatile signed __int32 *BugCheckParameter4; // r15
  struct SURFACE *v32; // rax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rbx
  struct _EPROCESS *v37; // rax
  PVOID v38; // rcx
  HPALETTE v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rax
  unsigned int CurrentProcessId; // eax
  __int64 ThreadWin32Thread; // rax
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  signed __int32 v50; // ecx
  __int64 v51; // rax
  bool v52; // r9
  __int64 v53; // rdx
  struct _SLIST_ENTRY *v54; // rcx
  int v55; // eax
  __int64 v56; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  __int128 v58; // xmm0
  _OWORD *v59; // rax
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  PVOID Object; // [rsp+50h] [rbp-71h] BYREF
  int v63; // [rsp+58h] [rbp-69h]
  void *v64; // [rsp+60h] [rbp-61h] BYREF
  __int64 v65; // [rsp+68h] [rbp-59h] BYREF
  _DWORD v66[2]; // [rsp+70h] [rbp-51h] BYREF
  PEPROCESS Process; // [rsp+78h] [rbp-49h] BYREF
  struct _SLIST_ENTRY *v68; // [rsp+80h] [rbp-41h] BYREF
  _OWORD v69[7]; // [rsp+88h] [rbp-39h] BYREF
  char v70; // [rsp+110h] [rbp+4Fh]
  volatile signed __int32 *v71; // [rsp+118h] [rbp+57h] BYREF
  PVOID pv; // [rsp+120h] [rbp+5Fh] BYREF
  void *v73; // [rsp+128h] [rbp+67h]

  v73 = a4;
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
  LODWORD(v71) = SURFACE::tSize;
  memset(v69, 0, 0x30uLL);
  v63 = 0;
  v64 = 0LL;
  v70 = 0;
  if ( pv )
  {
    if ( a9 )
    {
      v22 = v15 ? (PVOID)*((unsigned int *)a2 + 3) : (PVOID)(v16 * v18);
      if ( (unsigned __int64)v22 > 0x7FFFFFFF )
        return 0LL;
    }
    if ( (*((_DWORD *)a2 + 6) & 0x800) == 0 )
      goto LABEL_58;
    W32PIDLOCK::vInit((W32PIDLOCK *)v69);
    BugCheckParameter4 = 0LL;
    if ( *((_QWORD *)&v69[2] + 1) )
    {
      LOWORD(v14) = 2048;
      v63 = 1;
      goto LABEL_59;
    }
    return 0LL;
  }
  if ( v15 )
    v23 = *((unsigned int *)a2 + 3);
  else
    v23 = v16 * v18;
  v24 = v23 + (unsigned int)v71;
  if ( v24 < v23 || (unsigned __int64)v24 > 0x7FFFFFFF )
    return 0LL;
  v25 = *((_DWORD *)a2 + 6);
  if ( (v25 & 0x40000) != 0 && v24 > 4096 )
  {
    v25 |= 8u;
    *((_DWORD *)a2 + 6) = v25;
  }
  if ( (v25 & 8) != 0 )
  {
    if ( (v25 & 0x80u) == 0 )
      v26 = EngAllocUserMemEx((int)v24, v21, &pv);
    else
      v26 = AllocateSharedSection(v24, v21, &Object, &v64, &pv);
    if ( v26 < 0 )
      return 0LL;
    v22 = pv;
    v27 = Object;
LABEL_46:
    if ( !v22 && !v27 )
      goto LABEL_48;
LABEL_58:
    BugCheckParameter4 = 0LL;
    goto LABEL_59;
  }
  if ( (v25 & 0x810) == 0 )
    goto LABEL_48;
  if ( (v25 & 0x800) == 0 )
  {
    AllocateKernelSection(v24, v21, &pv);
    v27 = Object;
    goto LABEL_43;
  }
  W32PIDLOCK::vInit((W32PIDLOCK *)v69);
  if ( !*((_QWORD *)&v69[2] + 1) )
    return 0LL;
  v66[1] = 0;
  v66[0] = v24 - (_DWORD)v71;
  Win32CreateSection((unsigned int)&Object, 6, v28, (unsigned int)v66);
  v27 = Object;
  if ( !Object )
  {
    W32PIDLOCK::vCleanUp((W32PIDLOCK *)v69);
    return 0LL;
  }
LABEL_43:
  v22 = pv;
  if ( pv || v27 )
  {
    v14 = *((_DWORD *)a2 + 6) & 0x800 | 0x10;
    goto LABEL_46;
  }
LABEL_48:
  v70 = 1;
  v30 = PALLOCMEM2((unsigned int)(v24 - (_DWORD)v71), 0x6D627047u, ((*((_DWORD *)a2 + 6) >> 1) & 1) == 0);
  BugCheckParameter4 = 0LL;
  pv = v30;
  if ( !v30 )
    return 0LL;
LABEL_59:
  v32 = SURFACE::Allocate((unsigned __int64)v22, v21);
  *(_QWORD *)this = v32;
  if ( !v32 )
  {
    v17 = 0;
    goto LABEL_61;
  }
  v71 = *(volatile signed __int32 **)((char *)a2 + 4);
  *((_QWORD *)v32 + 7) = v71;
  *(_WORD *)(*(_QWORD *)this + 100LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 144LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 224LL) = 0LL;
  v39 = (HPALETTE)*((_QWORD *)a2 + 2);
  if ( v39 )
  {
    EPALOBJ::EPALOBJ((EPALOBJ *)&v65, v39);
    v40 = *(_QWORD *)this;
    if ( v65 )
    {
      *(_QWORD *)(v40 + 128) = v65;
      v65 = 0LL;
    }
    else
    {
      *(_QWORD *)(v40 + 128) = 0LL;
    }
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v65);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)this + 128LL) = 0LL;
  }
  *(_QWORD *)(*(_QWORD *)this + 72LL) = pv;
  v41 = *(_QWORD *)this;
  pv = 0LL;
  *(_BYTE *)(v41 + 688) = v70;
  *(_DWORD *)(*(_QWORD *)this + 96LL) = *(_DWORD *)a2;
  *(_WORD *)(*(_QWORD *)this + 102LL) = v14 | *((_WORD *)a2 + 12) & 0x89;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  BugCheckParameter4 = a6;
  v71 = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 208LL) = CurrentProcessId & 0xFFFFFFFC;
  *(_QWORD *)(*(_QWORD *)this + 184LL) = v73;
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
  v44 = (_QWORD *)(*(_QWORD *)this + 232LL);
  v44[1] = v44;
  *v44 = v44;
  *(_DWORD *)(*(_QWORD *)this + 320LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 324LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 632LL) = 0LL;
  v45 = (_QWORD *)(*(_QWORD *)this + 528LL);
  v45[1] = v45;
  *v45 = v45;
  *(_QWORD *)(*(_QWORD *)this + 624LL) = 0LL;
  if ( v63 )
    *(_DWORD *)(*(_QWORD *)this + 116LL) |= 1u;
  if ( BugCheckParameter4 )
  {
    BugCheckParameter4 = 0LL;
    if ( !a10 )
      *(_WORD *)(*(_QWORD *)this + 102LL) |= 4u;
  }
  v46 = *(_QWORD *)this;
  if ( (unsigned int)(*(_DWORD *)a2 - 7) > 3 )
  {
    *(_DWORD *)(v46 + 64) = v16 * *((_DWORD *)a2 + 2);
    v47 = *(_QWORD *)this;
    if ( (*((_DWORD *)a2 + 6) & 1) == 0 )
    {
      *(_DWORD *)(v47 + 88) = -v16;
      *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 72LL)
                                          + *(_DWORD *)(*(_QWORD *)this + 64LL)
                                          - v16;
      goto LABEL_90;
    }
    *(_DWORD *)(v47 + 88) = v16;
    goto LABEL_88;
  }
  *(_WORD *)(v46 + 102) &= ~0x800u;
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
    *(_QWORD *)(*(_QWORD *)this + 592LL) = v64;
    *(_QWORD *)(*(_QWORD *)this + 600LL) = (char *)v64
                                         + *(_QWORD *)(*(_QWORD *)this + 80LL)
                                         - *(_QWORD *)(*(_QWORD *)this + 72LL);
    *(_DWORD *)(*(_QWORD *)this + 608LL) = 1;
    v48 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( v48 && (v49 = *(_QWORD *)(v48 + 72)) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)this + 612LL) = *(_DWORD *)(v49 + 8);
      *(_DWORD *)(*(_QWORD *)this + 616LL) = 1;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)this + 612LL) = (_DWORD)BugCheckParameter4;
      *(_DWORD *)(*(_QWORD *)this + 616LL) = (_DWORD)BugCheckParameter4;
    }
  }
  v50 = _InterlockedExchangeAdd((volatile signed __int32 *)&_ulGlobalSurfaceUnique, 1u);
  v51 = *(_QWORD *)this;
  v71 = BugCheckParameter4;
  v52 = a8 != (_DWORD)BugCheckParameter4;
  *(_DWORD *)(v51 + 92) = v50 + 1;
  if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v71, *(struct OBJECT **)this, 1, v52, 5u) )
  {
    v55 = a11;
    *((_DWORD *)this + 3) = a11;
    if ( v55 )
      _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)this + 12LL), 1u);
    v56 = *(_QWORD *)this;
    *(_QWORD *)(v56 + 32) = **(_QWORD **)this;
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v56, v53);
    SURFACE::vAppContainerOwner(*(SURFACE **)this, CurrentProcess);
  }
  else
  {
    v54 = *(struct _SLIST_ENTRY **)this;
    if ( *(_QWORD *)(*(_QWORD *)this + 128LL) )
    {
      v68 = *(struct _SLIST_ENTRY **)(*(_QWORD *)this + 128LL);
      XEPALOBJ::vUnrefPalette(&v68);
      *(_QWORD *)(*(_QWORD *)this + 128LL) = BugCheckParameter4;
      v54 = *(struct _SLIST_ENTRY **)this;
    }
    SURFACE::Free(v54);
    *(_QWORD *)this = BugCheckParameter4;
    v17 = (unsigned int)BugCheckParameter4;
  }
  if ( v71 )
    _InterlockedDecrement(v71 + 3);
  if ( v17 )
  {
    if ( (*(_WORD *)(*(_QWORD *)this + 102LL) & 0x800) != 0
      && *((volatile signed __int32 **)&v69[2] + 1) != BugCheckParameter4 )
    {
      v58 = v69[0];
      *(_QWORD *)(*(_QWORD *)this + 248LL) = Object;
      v59 = *(_OWORD **)this;
      v60 = v69[1];
      v59[17] = v58;
      v61 = v69[2];
      v59[18] = v60;
      v59[19] = v61;
      *(_QWORD *)(*(_QWORD *)this + 72LL) = BugCheckParameter4;
      *(_QWORD *)(*(_QWORD *)this + 80LL) = BugCheckParameter4;
      *(_DWORD *)(*(_QWORD *)this + 112LL) |= 0x200u;
    }
    return v17;
  }
LABEL_61:
  if ( !pv && Object == BugCheckParameter4 )
    return v17;
  v33 = *((_DWORD *)a2 + 6);
  if ( (v33 & 8) != 0 )
  {
    if ( (v33 & 0x80u) == 0 )
    {
      EngFreeUserMem(pv);
    }
    else
    {
      v36 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      if ( *(volatile signed __int32 **)(v36 + 72) != BugCheckParameter4 )
      {
        v37 = (struct _EPROCESS *)PsGetCurrentProcess(v35, v34);
        vUnmapKernelSectionForUserMapping(v37, pv);
        if ( PsLookupProcessByProcessId((HANDLE)*(int *)(*(_QWORD *)(v36 + 72) + 8LL), &Process) >= 0 )
        {
          vUnmapKernelSectionForUserMapping(Process, v64);
          ObfDereferenceObject(Process);
        }
        v38 = Object;
        if ( !Object )
          KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, (ULONG_PTR)BugCheckParameter4);
LABEL_113:
        ObfDereferenceObject(v38);
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
      else if ( v70 != (_BYTE)BugCheckParameter4 && pv )
      {
        Win32FreePool((__int64)pv);
      }
      return v17;
    }
    W32PIDLOCK::vCleanUp((W32PIDLOCK *)v69);
    if ( v63 == (_DWORD)BugCheckParameter4 )
    {
      v38 = Object;
      if ( !Object )
        KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, (ULONG_PTR)BugCheckParameter4);
      goto LABEL_113;
    }
  }
  return v17;
}
