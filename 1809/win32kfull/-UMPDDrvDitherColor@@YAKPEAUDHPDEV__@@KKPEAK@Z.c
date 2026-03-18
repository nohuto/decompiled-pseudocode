/*
 * XREFs of ?UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z @ 0x1C028CDA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C008DB54 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C008DD04 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C008E148 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C008E570 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00E2AC4 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall UMPDDrvDitherColor(struct DHPDEV__ *a1, unsigned int a2, unsigned int a3, unsigned int *a4)
{
  UMPDOBJ *v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // ecx
  unsigned __int64 v13; // rcx
  unsigned int v14; // esi
  char *KernelPtr; // rax
  size_t Size; // [rsp+20h] [rbp-98h]
  UMPDOBJ *v18; // [rsp+30h] [rbp-88h] BYREF
  _DWORD v19[2]; // [rsp+38h] [rbp-80h] BYREF
  _QWORD v20[6]; // [rsp+40h] [rbp-78h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v18);
  memset(v20, 0, sizeof(v20));
  v8 = v18;
  v9 = 0;
  if ( !v18 )
  {
LABEL_17:
    XUMPDOBJ::~XUMPDOBJ(&v18);
    return 0LL;
  }
  v10 = *((_QWORD *)a1 + 225);
  v20[0] = 0xD00000030LL;
  v20[2] = *(_QWORD *)v18;
  v20[3] = v10;
  v20[4] = __PAIR64__(a3, a2);
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
  v12 = dword_1C02DE408[v11 - 1];
LABEL_7:
  if ( !v12 )
    goto LABEL_17;
  v13 = (((v12 * (unsigned int)*((unsigned __int16 *)a1 + 1056) + 31) >> 3) & 0x1FFFFFFC)
      * (unsigned __int64)*((unsigned __int16 *)a1 + 1057);
  v14 = -1;
  if ( v13 <= 0xFFFFFFFF )
    v14 = v13;
  v19[1] = v14;
  if ( v13 > 0xFFFFFFFF )
    goto LABEL_17;
  v20[5] = UMPDOBJ::_AllocUserMem(v18, v14, 0);
  if ( v20[5] )
  {
    LODWORD(Size) = 4;
    if ( (unsigned int)UMPDOBJ::Thunk(v8, v20, 0x30u, v19, Size) != -1 )
    {
      if ( v20[5] )
      {
        KernelPtr = UMPDOBJ::GetKernelPtr(v8, (char *)v20[5]);
        memmove(a4, KernelPtr, v14);
      }
      v9 = v19[0];
    }
  }
  XUMPDOBJ::~XUMPDOBJ(&v18);
  return v9;
}
