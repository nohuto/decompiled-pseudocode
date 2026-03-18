/*
 * XREFs of ?UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z @ 0x1C02A4F40
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C004FD7C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C004FEC0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00503C4 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00506CC (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00777AC (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?bSandboxedClient@UMPDOBJ@@QEAAHXZ @ 0x1C01651D8 (-bSandboxedClient@UMPDOBJ@@QEAAHXZ.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_J@Z @ 0x1C02A22EC (-ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_J@Z.c)
 *     ?ProbeAndReadFD_KERNINGPAIR@@YAPEAU_FD_KERNINGPAIR@@PEBU1@H_K@Z @ 0x1C02A2584 (-ProbeAndReadFD_KERNINGPAIR@@YAPEAU_FD_KERNINGPAIR@@PEBU1@H_K@Z.c)
 *     ?UMPDMyDrvFree@@YAXPEAVUMPDOBJ@@PEAUDHPDEV__@@PEAXK@Z @ 0x1C02A5ED4 (-UMPDMyDrvFree@@YAXPEAVUMPDOBJ@@PEAUDHPDEV__@@PEAXK@Z.c)
 *     ?bIsFreeHooked@@YAHPEAUDHPDEV__@@PEAVUMPDOBJ@@@Z @ 0x1C02A6030 (-bIsFreeHooked@@YAHPEAUDHPDEV__@@PEAVUMPDOBJ@@@Z.c)
 */

struct _FD_GLYPHSET *__fastcall UMPDDrvQueryFontTree(
        struct DHPDEV__ *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5)
{
  struct _FD_GLYPHSET *v6; // rdi
  struct _FD_GLYPHSET *v7; // rsi
  __int64 v11; // r9
  UMPDOBJ *v12; // rbx
  __int64 v13; // rax
  int v14; // r14d
  unsigned int v15; // r15d
  WCRUN *v16; // r12
  char *KernelPtr; // rax
  char *v18; // rdx
  char *v19; // rax
  WCRUN *v20; // rsi
  __int64 v21; // r9
  __int64 v22; // r9
  struct _FD_GLYPHSET *FD_GLYPHSET; // rax
  const struct _FD_KERNINGPAIR *v24; // rcx
  struct DHPDEV__ *v25; // r14
  size_t Size; // [rsp+20h] [rbp-A1h]
  void *v28; // [rsp+38h] [rbp-89h] BYREF
  UMPDOBJ *v29; // [rsp+40h] [rbp-81h] BYREF
  struct DHPDEV__ *v30; // [rsp+48h] [rbp-79h]
  _BYTE v31[32]; // [rsp+50h] [rbp-71h] BYREF
  _QWORD v32[10]; // [rsp+70h] [rbp-51h] BYREF

  v30 = a1;
  v6 = 0LL;
  v28 = 0LL;
  v7 = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v29);
  memset(v32, 0, 0x48uLL);
  v12 = v29;
  if ( !v29 )
  {
LABEL_28:
    v6 = v7;
    goto LABEL_29;
  }
  v32[0] = 0x1B00000048LL;
  v13 = *(_QWORD *)v29;
  v32[3] = a1;
  v14 = 1;
  v32[2] = v13;
  v32[4] = a2;
  v32[5] = __PAIR64__(a4, a3);
  v32[6] = UMPDOBJ::_AllocUserMem(v29, 4LL, 1LL, v11);
  LODWORD(v32[7]) = 0;
  v32[8] = 0LL;
  if ( v32[6] )
  {
    LODWORD(Size) = 8;
    v15 = -1;
    if ( (unsigned int)UMPDOBJ::Thunk(v12, v32, 72LL, &v28, Size) != -1 )
    {
      v16 = (WCRUN *)v28;
      if ( v28 )
      {
        KernelPtr = UMPDOBJ::GetKernelPtr(v12, (char *)v32[6]);
        v18 = (char *)v32[8];
        *a5 = *(_DWORD *)KernelPtr;
        if ( !*((_DWORD *)v12 + 106) || !v18 || !LODWORD(v32[7]) )
          v14 = 0;
        v19 = UMPDOBJ::GetKernelPtr(v12, v18);
        if ( a4 == 3 )
        {
          v20 = v16;
          if ( v14 )
          {
            v15 = v32[7];
            v20 = (WCRUN *)v19;
          }
          if ( (unsigned int)UMPDOBJ::bSandboxedClient(v12) && (v21 = *((_QWORD *)v12 + 49)) != 0 )
            v22 = *(_QWORD *)(v21 + 48);
          else
            v22 = 0LL;
          FD_GLYPHSET = ProbeAndReadFD_GLYPHSET(v20, v14, v15, v22);
        }
        else
        {
          if ( a4 != 2 )
          {
LABEL_22:
            v25 = v30;
            if ( (unsigned int)bIsFreeHooked(v30, v12) )
            {
              memset(v31, 0, sizeof(v31));
              if ( v7 )
                PushThreadGuardedObject(v31, v7, Win32FreePool);
              UMPDMyDrvFree(v12, v25, v16, *a5);
              if ( v7 )
                PopThreadGuardedObject(v31);
            }
            *a5 = (unsigned int)v7;
            goto LABEL_28;
          }
          v24 = (const struct _FD_KERNINGPAIR *)v16;
          if ( v14 )
          {
            v15 = v32[7];
            v24 = (const struct _FD_KERNINGPAIR *)v19;
          }
          FD_GLYPHSET = (struct _FD_GLYPHSET *)ProbeAndReadFD_KERNINGPAIR(v24, v14, v15);
        }
        v7 = FD_GLYPHSET;
        goto LABEL_22;
      }
    }
  }
LABEL_29:
  XUMPDOBJ::~XUMPDOBJ(&v29);
  return v6;
}
