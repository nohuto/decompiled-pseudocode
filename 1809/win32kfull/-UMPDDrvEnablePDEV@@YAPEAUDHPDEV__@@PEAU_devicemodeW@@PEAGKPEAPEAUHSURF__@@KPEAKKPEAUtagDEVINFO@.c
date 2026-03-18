/*
 * XREFs of ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C01170D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C008B9C4 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C008DB54 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C008DD04 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C008E148 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C008E570 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00E2AC4 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C010209C (-SETFLAG@@YAXHAECKK@Z.c)
 *     ?UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C010F160 (-UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z @ 0x1C01177A8 (-ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

struct DHPDEV__ *__fastcall UMPDDrvEnablePDEV(
        struct _devicemodeW *a1,
        struct DHPDEV__ *a2,
        unsigned int a3,
        HSURF *a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int a7,
        struct tagDEVINFO *a8,
        HDEV a9,
        unsigned __int16 *a10,
        void *a11)
{
  UMPDOBJ *v14; // rbx
  struct DHPDEV__ *v15; // rsi
  unsigned int v16; // r12d
  char *v18; // rax
  size_t v19; // rdi
  char *KernelPtr; // rax
  unsigned int v21; // edi
  char *v22; // rax
  char *v23; // r13
  PVOID v24; // r12
  PVOID v25; // r15
  PVOID v26; // rdi
  size_t v27; // rcx
  size_t v28; // r8
  ULONG64 v29; // rcx
  size_t v30; // rax
  const void *v31; // rdx
  size_t v32; // rax
  void *v33; // rdx
  void *v34; // rdi
  char *v35; // rax
  size_t v36; // [rsp+20h] [rbp-168h]
  UMPDOBJ *v37; // [rsp+38h] [rbp-150h] BYREF
  size_t Size; // [rsp+40h] [rbp-148h]
  unsigned int v39; // [rsp+48h] [rbp-140h]
  PVOID v40; // [rsp+50h] [rbp-138h]
  PVOID v41; // [rsp+58h] [rbp-130h]
  struct DHPDEV__ *v42; // [rsp+60h] [rbp-128h] BYREF
  void *v43; // [rsp+68h] [rbp-120h]
  void *Src; // [rsp+70h] [rbp-118h]
  PVOID pv; // [rsp+78h] [rbp-110h]
  unsigned int *v46; // [rsp+80h] [rbp-108h]
  _QWORD v47[22]; // [rsp+90h] [rbp-F8h] BYREF

  v39 = a3;
  v42 = a2;
  LODWORD(Size) = a5;
  v46 = a6;
  v43 = a8;
  v41 = a10;
  v40 = a11;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v37);
  memset(v47, 0, sizeof(v47));
  v14 = v37;
  v15 = 0LL;
  if ( !v37 )
    goto LABEL_11;
  v47[0] = 176LL;
  v47[2] = *(_QWORD *)v37;
  v47[3] = *((_QWORD *)a9 + 225);
  v47[4] = a1;
  v47[5] = v42;
  LODWORD(v47[6]) = a3;
  v47[7] = a4;
  LODWORD(v47[8]) = a5;
  LODWORD(v47[10]) = a7;
  v47[12] = *((_QWORD *)a9 + 2);
  v47[13] = v41;
  v47[14] = v40;
  LODWORD(v47[15]) = *((_DWORD *)v37 + 106);
  if ( LODWORD(v47[15]) )
    HIDWORD(v47[15]) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  else
    v47[15] = 0LL;
  v16 = a1 ? a1->dmSize + a1->dmDriverExtra : 0;
  if ( a4 )
  {
    if ( a3 <= 0x1FFFFFFF )
    {
      v47[7] = UMPDOBJ::_AllocUserMem(v14, 8 * a3, 1);
      if ( !v47[7] )
        goto LABEL_11;
    }
  }
  if ( a6 && (v47[9] = UMPDOBJ::_AllocUserMem(v14, (unsigned int)Size, 1)) == 0LL
    || v43 && (v47[11] = UMPDOBJ::_AllocUserMem(v14, a7, 1)) == 0LL
    || (v18 = UMPDOBJ::_AllocUserMem(v14, 196608LL, 1)) == 0LL
    || (v47[17] = v18,
        v47[18] = v18 + 0x10000,
        v47[19] = v18 + 0x20000,
        !(unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v47[4], v16))
    || !(unsigned int)UMPDOBJ::ThunkStringW(v14, (unsigned __int16 **)&v47[5])
    || !(unsigned int)UMPDOBJ::ThunkStringW(v14, (unsigned __int16 **)&v47[13])
    || (LODWORD(v36) = 8, (unsigned int)UMPDOBJ::Thunk(v14, v47, 0xB0u, &v42, v36) == -1) )
  {
LABEL_11:
    XUMPDOBJ::~XUMPDOBJ(&v37);
    return 0LL;
  }
  if ( a4 )
  {
    v19 = 8LL * v39;
    KernelPtr = UMPDOBJ::GetKernelPtr(v14, (char *)v47[7]);
    memmove(a4, KernelPtr, v19);
  }
  if ( a6 )
  {
    v21 = Size;
    v22 = UMPDOBJ::GetKernelPtr(v14, (char *)v47[9]);
    memmove(a6, v22, v21);
    if ( a6[59] == 18 && a6[68] <= 0x100 && a6[69] <= 0x100 )
    {
      SETFLAG(1, (volatile unsigned int *)a9 + 10, 0x400000);
      LODWORD(v47[20]) = *((_QWORD *)a6 + 35) != 0LL;
      HIDWORD(v47[20]) = *((_QWORD *)a6 + 36) != 0LL;
      LODWORD(v47[21]) = *((_QWORD *)a6 + 37) != 0LL;
      *((_QWORD *)a6 + 35) = 0LL;
      *((_QWORD *)a6 + 36) = 0LL;
      *((_QWORD *)a6 + 37) = 0LL;
      v23 = UMPDOBJ::GetKernelPtr(v14, (char *)v47[17]);
      Size = (size_t)UMPDOBJ::GetKernelPtr(v14, (char *)v47[18]);
      Src = UMPDOBJ::GetKernelPtr(v14, (char *)v47[19]);
      v24 = 0LL;
      pv = 0LL;
      v25 = 0LL;
      v40 = 0LL;
      v26 = 0LL;
      v41 = 0LL;
      if ( LODWORD(v47[20]) )
      {
        v24 = EngAllocUserMem(a6[68] * a6[69], 0x706D7547u);
        pv = v24;
      }
      if ( HIDWORD(v47[20]) )
      {
        v25 = EngAllocUserMem(a6[68] * a6[69], 0x706D7547u);
        v40 = v25;
      }
      if ( LODWORD(v47[21]) )
      {
        v26 = EngAllocUserMem(a6[68] * a6[69], 0x706D7547u);
        v41 = v26;
      }
      if ( v24 )
      {
        v39 = *((_DWORD *)v14 + 106);
        v27 = a6[68] * a6[69];
        v28 = v27;
        if ( v39 )
        {
          memmove(v24, v23, v27);
          if ( v25 )
            memmove(v25, (const void *)Size, a6[68] * a6[69]);
          if ( v26 )
            memmove(v26, Src, a6[68] * a6[69]);
        }
        else
        {
          v29 = (ULONG64)&v23[v27];
          if ( v29 < (unsigned __int64)v23 || v29 > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v24, v23, v28);
          if ( v25 )
          {
            v30 = a6[68] * a6[69];
            v31 = (const void *)Size;
            if ( v30 + Size < Size || v30 + Size > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v25, v31, v30);
          }
          if ( v26 )
          {
            v32 = a6[68] * a6[69];
            v33 = Src;
            if ( (char *)Src + v32 < Src || (unsigned __int64)Src + v32 > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v26, v33, v32);
          }
        }
        *((_QWORD *)a6 + 35) = v24;
        *((_QWORD *)a6 + 36) = v25;
        *((_QWORD *)a6 + 37) = v26;
      }
      else
      {
        a6[59] = 17;
      }
    }
  }
  v34 = v43;
  if ( v43 )
  {
    v35 = UMPDOBJ::GetKernelPtr(v14, (char *)v47[11]);
    if ( !*((_QWORD *)v35 + 37) )
    {
      if ( v42 )
        UMPDDrvDisablePDEV(v42);
      goto LABEL_60;
    }
    memmove(v34, v35, a7);
  }
  v15 = v42;
LABEL_60:
  XUMPDOBJ::~XUMPDOBJ(&v37);
  return v15;
}
