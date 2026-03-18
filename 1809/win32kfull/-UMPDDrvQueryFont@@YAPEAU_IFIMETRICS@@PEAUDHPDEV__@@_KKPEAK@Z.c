/*
 * XREFs of ?UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z @ 0x1C028EC60
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C008DB54 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C008DD04 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C008E148 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C008E570 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00E2AC4 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z @ 0x1C028C6A4 (-ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z.c)
 *     ?UMPDMyDrvFree@@YAXPEAVUMPDOBJ@@PEAUDHPDEV__@@PEAXK@Z @ 0x1C028FFD0 (-UMPDMyDrvFree@@YAXPEAVUMPDOBJ@@PEAUDHPDEV__@@PEAXK@Z.c)
 *     ?bIsFreeHooked@@YAHPEAUDHPDEV__@@PEAVUMPDOBJ@@@Z @ 0x1C0290164 (-bIsFreeHooked@@YAHPEAUDHPDEV__@@PEAVUMPDOBJ@@@Z.c)
 */

struct _IFIMETRICS *__fastcall UMPDDrvQueryFont(struct DHPDEV__ *a1, __int64 a2, int a3, unsigned int *a4)
{
  struct _IFIMETRICS *IFIMETRICS; // rdi
  UMPDOBJ *v9; // rbx
  char *v10; // rax
  char *KernelPtr; // rax
  char *v12; // rsi
  int v13; // edi
  char *v14; // rax
  unsigned __int64 v15; // r8
  size_t Size; // [rsp+20h] [rbp-79h]
  UMPDOBJ *v18; // [rsp+30h] [rbp-69h] BYREF
  void *v19; // [rsp+38h] [rbp-61h] BYREF
  _BYTE v20[32]; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v21[10]; // [rsp+60h] [rbp-39h] BYREF

  IFIMETRICS = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v18);
  memset(v21, 0, 0x48uLL);
  v9 = v18;
  if ( v18 )
  {
    v21[0] = 0x1A00000048LL;
    v21[2] = *(_QWORD *)v18;
    v21[3] = a1;
    v21[4] = a2;
    LODWORD(v21[5]) = a3;
    v10 = UMPDOBJ::_AllocUserMem(v18, 4LL, 1);
    LODWORD(v21[7]) = 0;
    v21[8] = 0LL;
    v21[6] = v10;
    if ( !v10 || (LODWORD(Size) = 8, (unsigned int)UMPDOBJ::Thunk(v9, v21, 0x48u, &v19, Size) == -1) )
    {
      v12 = 0LL;
    }
    else
    {
      KernelPtr = UMPDOBJ::GetKernelPtr(v9, (char *)v21[6]);
      v12 = (char *)v19;
      *a4 = *(_DWORD *)KernelPtr;
      if ( !v12 )
      {
LABEL_14:
        *a4 = (unsigned int)IFIMETRICS;
        goto LABEL_17;
      }
      if ( a3 )
      {
        v13 = *((_DWORD *)v9 + 106);
        v14 = v12;
        if ( v13 )
        {
          v14 = UMPDOBJ::GetKernelPtr(v9, (char *)v21[8]);
          v15 = LODWORD(v21[7]);
        }
        else
        {
          v15 = -1LL;
        }
        IFIMETRICS = ProbeAndReadIFIMETRICS((struct _IFIMETRICS *)v14, v13 == 0, v15);
        if ( (unsigned int)bIsFreeHooked(a1, v9) )
        {
          memset(v20, 0, sizeof(v20));
          if ( IFIMETRICS )
            PushThreadGuardedObject(v20, IFIMETRICS, Win32FreePool);
          UMPDMyDrvFree(v9, a1, v12, *a4);
          if ( IFIMETRICS )
            PopThreadGuardedObject(v20);
        }
        goto LABEL_14;
      }
    }
    IFIMETRICS = (struct _IFIMETRICS *)v12;
  }
LABEL_17:
  XUMPDOBJ::~XUMPDOBJ(&v18);
  return IFIMETRICS;
}
