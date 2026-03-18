/*
 * XREFs of ?UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z @ 0x1C02A28E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00952BC (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C009958C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C00996D0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0099C30 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C0099F38 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall UMPDDrvDitherColor(struct DHPDEV__ *a1, unsigned int a2, unsigned int a3, unsigned int *a4)
{
  UMPDOBJ *v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // ecx
  unsigned __int64 v13; // rsi
  char *KernelPtr; // rax
  size_t Size; // [rsp+20h] [rbp-98h]
  UMPDOBJ *v17; // [rsp+30h] [rbp-88h] BYREF
  _DWORD v18[2]; // [rsp+38h] [rbp-80h] BYREF
  _QWORD v19[6]; // [rsp+40h] [rbp-78h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v17);
  memset(v19, 0, sizeof(v19));
  v8 = v17;
  v9 = 0;
  if ( !v17 )
    goto LABEL_15;
  v10 = *((_QWORD *)a1 + 225);
  v19[0] = 0xD00000030LL;
  v19[2] = *(_QWORD *)v17;
  v19[3] = v10;
  v19[4] = __PAIR64__(a3, a2);
  if ( a2 == 2 )
  {
    v11 = 1;
  }
  else
  {
    v11 = *((_DWORD *)a1 + 527);
    if ( (unsigned int)(v11 - 1) > 7 )
    {
      v12 = 0;
      goto LABEL_7;
    }
  }
  v12 = dword_1C02F01C0[v11 - 1];
LABEL_7:
  if ( !v12
    || (v13 = (((v12 * (unsigned int)*((unsigned __int16 *)a1 + 1056) + 31) >> 3) & 0x1FFFFFFC)
            * (unsigned __int64)*((unsigned __int16 *)a1 + 1057),
        v13 > 0xFFFFFFFF) )
  {
LABEL_15:
    XUMPDOBJ::~XUMPDOBJ(&v17);
    return 0LL;
  }
  v18[1] = v13;
  v19[5] = UMPDOBJ::_AllocUserMem(v17, v13, 0);
  if ( v19[5] )
  {
    LODWORD(Size) = 4;
    if ( (unsigned int)UMPDOBJ::Thunk(v8, v19, 48LL, v18, Size) != -1 )
    {
      if ( v19[5] )
      {
        KernelPtr = UMPDOBJ::GetKernelPtr(v8, (char *)v19[5]);
        memmove(a4, KernelPtr, (unsigned int)v13);
      }
      v9 = v18[0];
    }
  }
  XUMPDOBJ::~XUMPDOBJ(&v17);
  return v9;
}
