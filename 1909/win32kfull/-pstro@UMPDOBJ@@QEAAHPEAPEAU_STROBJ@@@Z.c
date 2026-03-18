/*
 * XREFs of ?pstro@UMPDOBJ@@QEAAHPEAPEAU_STROBJ@@@Z @ 0x1C00991D4
 * Callers:
 *     ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C009A240 (-UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRU.c)
 * Callees:
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C00996D0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C0099A50 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C009A1A8 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

_BOOL8 __fastcall UMPDOBJ::pstro(UMPDOBJ *this, struct _STROBJ **a2)
{
  _QWORD *v2; // rbx
  __int128 v5; // rdi
  __int128 v6; // xmm1
  _QWORD *KernelPtr; // rax
  __int64 i; // r8
  __int64 v10; // rdx
  void *v11; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v12[3]; // [rsp+38h] [rbp-38h] BYREF

  v2 = *a2;
  if ( !*a2 )
    return 1LL;
  *((_QWORD *)&v5 + 1) = v2[5];
  v11 = (void *)*((_QWORD *)&v5 + 1);
  if ( *((_QWORD *)&v5 + 1) )
  {
    if ( !(unsigned int)UMPDOBJ::ThunkMemBlock(this, &v11, 2 * *(_DWORD *)v2) )
      return 0LL;
    *((_QWORD *)&v5 + 1) = v11;
  }
  *(_QWORD *)&v5 = v2[4];
  v11 = (void *)v5;
  if ( (_QWORD)v5 )
  {
    if ( !(unsigned int)UMPDOBJ::ThunkMemBlock(this, &v11, 24 * *(_DWORD *)v2) )
      return 0LL;
    *(_QWORD *)&v5 = v11;
    KernelPtr = UMPDOBJ::GetKernelPtr(this, v11);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)v2; KernelPtr[v10 + 1] = 0LL )
    {
      v10 = 3 * i;
      i = (unsigned int)(i + 1);
    }
  }
  v6 = *((_OWORD *)v2 + 1);
  v12[0] = *(_OWORD *)v2;
  v12[1] = v6;
  v12[2] = v5;
  return (unsigned int)UMPDOBJ::ThunkDDIOBJ(this, (UMPDOBJ *)((char *)this + 192), (void **)a2, 0x30u, v12) != 0;
}
