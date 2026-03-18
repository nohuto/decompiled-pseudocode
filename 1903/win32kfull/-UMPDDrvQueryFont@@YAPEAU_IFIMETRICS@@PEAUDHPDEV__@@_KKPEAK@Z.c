/*
 * XREFs of ?UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z @ 0x1C02A4B90
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C004FD7C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C004FEC0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00503C4 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00506CC (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00777AC (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z @ 0x1C02A26C8 (-ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z.c)
 *     ?UMPDMyDrvFree@@YAXPEAVUMPDOBJ@@PEAUDHPDEV__@@PEAXK@Z @ 0x1C02A5ED4 (-UMPDMyDrvFree@@YAXPEAVUMPDOBJ@@PEAUDHPDEV__@@PEAXK@Z.c)
 *     ?bIsFreeHooked@@YAHPEAUDHPDEV__@@PEAVUMPDOBJ@@@Z @ 0x1C02A6030 (-bIsFreeHooked@@YAHPEAUDHPDEV__@@PEAVUMPDOBJ@@@Z.c)
 */

struct _IFIMETRICS *__fastcall UMPDDrvQueryFont(struct DHPDEV__ *a1, __int64 a2, int a3, unsigned int *a4)
{
  struct _IFIMETRICS *IFIMETRICS; // rdi
  __int64 v9; // r9
  UMPDOBJ *v10; // rbx
  char *v11; // rax
  char *KernelPtr; // rax
  char *v13; // rsi
  int v14; // edi
  char *v15; // rax
  unsigned __int64 v16; // r8
  size_t Size; // [rsp+20h] [rbp-79h]
  UMPDOBJ *v19; // [rsp+30h] [rbp-69h] BYREF
  void *v20; // [rsp+38h] [rbp-61h] BYREF
  _BYTE v21[32]; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v22[10]; // [rsp+60h] [rbp-39h] BYREF

  IFIMETRICS = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v19);
  memset(v22, 0, 0x48uLL);
  v10 = v19;
  if ( v19 )
  {
    v22[0] = 0x1A00000048LL;
    v22[2] = *(_QWORD *)v19;
    v22[3] = a1;
    v22[4] = a2;
    LODWORD(v22[5]) = a3;
    v11 = UMPDOBJ::_AllocUserMem(v19, 4LL, 1LL, v9);
    LODWORD(v22[7]) = 0;
    v22[8] = 0LL;
    v22[6] = v11;
    if ( !v11 || (LODWORD(Size) = 8, (unsigned int)UMPDOBJ::Thunk(v10, v22, 72LL, &v20, Size) == -1) )
    {
      v13 = 0LL;
    }
    else
    {
      KernelPtr = UMPDOBJ::GetKernelPtr(v10, (char *)v22[6]);
      v13 = (char *)v20;
      *a4 = *(_DWORD *)KernelPtr;
      if ( !v13 )
      {
LABEL_14:
        *a4 = (unsigned int)IFIMETRICS;
        goto LABEL_17;
      }
      if ( a3 )
      {
        v14 = *((_DWORD *)v10 + 106);
        v15 = v13;
        if ( v14 )
        {
          v15 = UMPDOBJ::GetKernelPtr(v10, (char *)v22[8]);
          v16 = LODWORD(v22[7]);
        }
        else
        {
          v16 = -1LL;
        }
        IFIMETRICS = ProbeAndReadIFIMETRICS((struct _IFIMETRICS *)v15, v14 == 0, v16);
        if ( (unsigned int)bIsFreeHooked(a1, v10) )
        {
          memset(v21, 0, sizeof(v21));
          if ( IFIMETRICS )
            PushThreadGuardedObject(v21, IFIMETRICS, Win32FreePool);
          UMPDMyDrvFree(v10, a1, v13, *a4);
          if ( IFIMETRICS )
            PopThreadGuardedObject(v21);
        }
        goto LABEL_14;
      }
    }
    IFIMETRICS = (struct _IFIMETRICS *)v13;
  }
LABEL_17:
  XUMPDOBJ::~XUMPDOBJ(&v19);
  return IFIMETRICS;
}
