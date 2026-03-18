/*
 * XREFs of ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C011CB60
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C004FD7C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C004FEC0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00503C4 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00506CC (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C005093C (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00777AC (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C01084E0 (-SETFLAG@@YAXHAECKK@Z.c)
 *     ?UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C011A640 (-UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z @ 0x1C011CEF8 (-ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     memset @ 0x1C0166840 (memset.c)
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
  __int64 v12; // r13
  __int64 v14; // r9
  UMPDOBJ *v15; // rbx
  struct DHPDEV__ *v16; // rsi
  unsigned int v17; // edi
  char *v18; // rax
  char *KernelPtr; // rax
  unsigned int v20; // edi
  char *v21; // rax
  void *v22; // rdi
  char *v23; // rax
  char *v25; // r13
  PVOID v26; // r15
  PVOID v27; // r12
  PVOID v28; // rdi
  size_t v29; // r8
  size_t v30; // rax
  void *v31; // rdx
  size_t v32; // rax
  void *v33; // rdx
  size_t v34; // [rsp+20h] [rbp-158h]
  UMPDOBJ *v35; // [rsp+38h] [rbp-140h] BYREF
  size_t Size; // [rsp+40h] [rbp-138h]
  PVOID pv; // [rsp+48h] [rbp-130h]
  PVOID v38; // [rsp+50h] [rbp-128h]
  struct DHPDEV__ *v39; // [rsp+58h] [rbp-120h] BYREF
  void *v40; // [rsp+60h] [rbp-118h]
  void *Src; // [rsp+68h] [rbp-110h]
  void *v42; // [rsp+70h] [rbp-108h]
  unsigned int *v43; // [rsp+78h] [rbp-100h]
  _QWORD v44[22]; // [rsp+80h] [rbp-F8h] BYREF

  v12 = a3;
  v39 = a2;
  LODWORD(Size) = a5;
  v43 = a6;
  v40 = a8;
  v38 = a10;
  pv = a11;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v35);
  memset(v44, 0, sizeof(v44));
  v15 = v35;
  v16 = 0LL;
  if ( v35 )
  {
    v44[0] = 176LL;
    v44[2] = *(_QWORD *)v35;
    v44[3] = *((_QWORD *)a9 + 225);
    v44[4] = a1;
    v44[5] = v39;
    LODWORD(v44[6]) = v12;
    v44[7] = a4;
    LODWORD(v44[8]) = a5;
    LODWORD(v44[10]) = a7;
    v44[12] = *((_QWORD *)a9 + 2);
    v44[13] = v38;
    v44[14] = pv;
    LODWORD(v44[15]) = *((_DWORD *)v35 + 106);
    if ( LODWORD(v44[15]) )
      HIDWORD(v44[15]) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    else
      v44[15] = 0LL;
    v17 = a1 ? a1->dmSize + a1->dmDriverExtra : 0;
    if ( (!a4
       || (unsigned int)v12 > 0x1FFFFFFF
       || (v44[7] = UMPDOBJ::_AllocUserMem(v15, (unsigned int)(8 * v12), 1LL, v14)) != 0LL)
      && (!a6 || (v44[9] = UMPDOBJ::_AllocUserMem(v15, (unsigned int)Size, 1LL, v14)) != 0LL)
      && (!v40 || (v44[11] = UMPDOBJ::_AllocUserMem(v15, a7, 1LL, v14)) != 0LL) )
    {
      v18 = UMPDOBJ::_AllocUserMem(v15, 196608LL, 1LL, v14);
      if ( v18 )
      {
        v44[17] = v18;
        v44[18] = v18 + 0x10000;
        v44[19] = v18 + 0x20000;
        if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v15, (const void **)&v44[4], v17) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkStringW(v15, (unsigned __int16 **)&v44[5]) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkStringW(v15, (unsigned __int16 **)&v44[13]) )
            {
              LODWORD(v34) = 8;
              if ( (unsigned int)UMPDOBJ::Thunk(v15, v44, 176LL, &v39, v34) != -1 )
              {
                if ( a4 )
                {
                  KernelPtr = UMPDOBJ::GetKernelPtr(v15, (char *)v44[7]);
                  memmove(a4, KernelPtr, 8 * v12);
                }
                if ( a6 )
                {
                  v20 = Size;
                  v21 = UMPDOBJ::GetKernelPtr(v15, (char *)v44[9]);
                  memmove(a6, v21, v20);
                  if ( a6[59] == 18 && a6[68] <= 0x100 && a6[69] <= 0x100 )
                  {
                    SETFLAG(1, (volatile unsigned int *)a9 + 10, 0x400000);
                    LODWORD(v44[20]) = *((_QWORD *)a6 + 35) != 0LL;
                    HIDWORD(v44[20]) = *((_QWORD *)a6 + 36) != 0LL;
                    LODWORD(v44[21]) = *((_QWORD *)a6 + 37) != 0LL;
                    *((_QWORD *)a6 + 35) = 0LL;
                    *((_QWORD *)a6 + 36) = 0LL;
                    *((_QWORD *)a6 + 37) = 0LL;
                    v25 = UMPDOBJ::GetKernelPtr(v15, (char *)v44[17]);
                    Src = UMPDOBJ::GetKernelPtr(v15, (char *)v44[18]);
                    v42 = UMPDOBJ::GetKernelPtr(v15, (char *)v44[19]);
                    v26 = 0LL;
                    Size = 0LL;
                    v27 = 0LL;
                    pv = 0LL;
                    v28 = 0LL;
                    v38 = 0LL;
                    if ( LODWORD(v44[20]) )
                    {
                      v26 = EngAllocUserMem(a6[68] * a6[69], 0x706D7547u);
                      Size = (size_t)v26;
                    }
                    if ( HIDWORD(v44[20]) )
                    {
                      v27 = EngAllocUserMem(a6[68] * a6[69], 0x706D7547u);
                      pv = v27;
                    }
                    if ( LODWORD(v44[21]) )
                    {
                      v28 = EngAllocUserMem(a6[68] * a6[69], 0x706D7547u);
                      v38 = v28;
                    }
                    if ( v26 )
                    {
                      v29 = a6[68] * a6[69];
                      if ( &v25[v29] < v25 || (unsigned __int64)&v25[v29] > MmUserProbeAddress )
                        *(_BYTE *)MmUserProbeAddress = 0;
                      memmove(v26, v25, v29);
                      if ( v27 )
                      {
                        v30 = a6[68] * a6[69];
                        v31 = Src;
                        if ( (char *)Src + v30 < Src || (unsigned __int64)Src + v30 > MmUserProbeAddress )
                          *(_BYTE *)MmUserProbeAddress = 0;
                        memmove(v27, v31, v30);
                      }
                      if ( v28 )
                      {
                        v32 = a6[68] * a6[69];
                        v33 = v42;
                        if ( (char *)v42 + v32 < v42 || (unsigned __int64)v42 + v32 > MmUserProbeAddress )
                          *(_BYTE *)MmUserProbeAddress = 0;
                        memmove(v28, v33, v32);
                      }
                      *((_QWORD *)a6 + 35) = v26;
                      *((_QWORD *)a6 + 36) = v27;
                      *((_QWORD *)a6 + 37) = v28;
                    }
                    else
                    {
                      a6[59] = 17;
                    }
                  }
                }
                v22 = v40;
                if ( v40 )
                {
                  v23 = UMPDOBJ::GetKernelPtr(v15, (char *)v44[11]);
                  if ( !*((_QWORD *)v23 + 37) )
                  {
                    if ( v39 )
                      UMPDDrvDisablePDEV(v39);
                    goto LABEL_26;
                  }
                  memmove(v22, v23, a7);
                }
                v16 = v39;
LABEL_26:
                XUMPDOBJ::~XUMPDOBJ(&v35);
                return v16;
              }
            }
          }
        }
      }
    }
  }
  XUMPDOBJ::~XUMPDOBJ(&v35);
  return 0LL;
}
