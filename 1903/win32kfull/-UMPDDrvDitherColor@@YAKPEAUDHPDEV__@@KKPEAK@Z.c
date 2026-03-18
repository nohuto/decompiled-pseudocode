/*
 * XREFs of ?UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z @ 0x1C02A2DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C004FD7C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C004FEC0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00503C4 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00506CC (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00777AC (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall UMPDDrvDitherColor(struct DHPDEV__ *a1, unsigned int a2, unsigned int a3, unsigned int *a4)
{
  __int64 v8; // r9
  UMPDOBJ *v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // rcx
  int v12; // ecx
  int v13; // ecx
  unsigned __int64 v14; // rsi
  char *KernelPtr; // rax
  size_t Size; // [rsp+20h] [rbp-98h]
  UMPDOBJ *v18; // [rsp+30h] [rbp-88h] BYREF
  _DWORD v19[2]; // [rsp+38h] [rbp-80h] BYREF
  _QWORD v20[6]; // [rsp+40h] [rbp-78h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v18);
  memset(v20, 0, sizeof(v20));
  v9 = v18;
  v10 = 0;
  if ( !v18 )
    goto LABEL_15;
  v11 = *((_QWORD *)a1 + 225);
  v20[0] = 0xD00000030LL;
  v20[2] = *(_QWORD *)v18;
  v20[3] = v11;
  v20[4] = __PAIR64__(a3, a2);
  if ( a2 == 2 )
  {
    v12 = 1;
  }
  else
  {
    v12 = *((_DWORD *)a1 + 527);
    if ( (unsigned int)(v12 - 1) > 7 )
    {
      v13 = 0;
      goto LABEL_7;
    }
  }
  v13 = dword_1C02F1130[v12 - 1];
LABEL_7:
  if ( !v13
    || (v14 = (((v13 * (unsigned int)*((unsigned __int16 *)a1 + 1056) + 31) >> 3) & 0x1FFFFFFC)
            * (unsigned __int64)*((unsigned __int16 *)a1 + 1057),
        v14 > 0xFFFFFFFF) )
  {
LABEL_15:
    XUMPDOBJ::~XUMPDOBJ(&v18);
    return 0LL;
  }
  v19[1] = v14;
  v20[5] = UMPDOBJ::_AllocUserMem(v18, (unsigned int)v14, 0LL, v8);
  if ( v20[5] )
  {
    LODWORD(Size) = 4;
    if ( (unsigned int)UMPDOBJ::Thunk(v9, v20, 48LL, v19, Size) != -1 )
    {
      if ( v20[5] )
      {
        KernelPtr = UMPDOBJ::GetKernelPtr(v9, (char *)v20[5]);
        memmove(a4, KernelPtr, (unsigned int)v14);
      }
      v10 = v19[0];
    }
  }
  XUMPDOBJ::~XUMPDOBJ(&v18);
  return v10;
}
