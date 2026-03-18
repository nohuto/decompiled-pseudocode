/*
 * XREFs of ?bClone@EPATHOBJ@@QEAAHAEAV1@@Z @ 0x1C0072930
 * Callers:
 *     <none>
 * Callees:
 *     ?newpathrec@EPATHOBJ@@IEAAHPEAPEAU_PATHRECORD@@PEAKK@Z @ 0x1C001B8A4 (-newpathrec@EPATHOBJ@@IEAAHPEAPEAU_PATHRECORD@@PEAKK@Z.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 */

__int64 __fastcall EPATHOBJ::bClone(EPATHOBJ *this, struct EPATHOBJ *a2)
{
  _QWORD *v3; // r15
  __int64 *i; // rdi
  unsigned int v5; // esi
  char *v6; // r12
  int v7; // ebp
  struct _PATHRECORD *v8; // rbx
  unsigned int v9; // r8d
  __int64 v10; // rax
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF
  struct _PATHRECORD *v13; // [rsp+58h] [rbp+10h] BYREF

  *(_DWORD *)this = *(_DWORD *)a2;
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = 0LL;
  *(_QWORD *)(*((_QWORD *)this + 1) + 40LL) = 0LL;
  v3 = 0LL;
  *(_OWORD *)(*((_QWORD *)this + 1) + 48LL) = *(_OWORD *)(*((_QWORD *)a2 + 1) + 48LL);
  *(_QWORD *)(*((_QWORD *)this + 1) + 64LL) = *(_QWORD *)(*((_QWORD *)a2 + 1) + 64LL);
  *(_DWORD *)(*((_QWORD *)this + 1) + 80LL) = *(_DWORD *)(*((_QWORD *)a2 + 1) + 80LL);
  for ( i = *(__int64 **)(*((_QWORD *)a2 + 1) + 32LL); ; i = (__int64 *)*i )
  {
    if ( !i )
      return 1LL;
    v5 = *((_DWORD *)i + 5);
    v6 = (char *)(i + 3);
    v7 = *((_DWORD *)i + 4);
    if ( v5 )
      break;
LABEL_10:
    ;
  }
  while ( (unsigned int)EPATHOBJ::newpathrec(this, &v13, &v12, v5) )
  {
    v8 = v13;
    v9 = v12;
    *((_DWORD *)v13 + 4) = v7;
    *((_QWORD *)v8 + 1) = v3;
    *(_QWORD *)v8 = 0LL;
    if ( v5 > v9 )
    {
      if ( (v7 & 0x10) != 0 )
      {
        if ( (v7 & 1) != 0 )
          v9 = 3 * ((v9 - 1) / 3) + 1;
        else
          v9 = 3 * (v9 / 3);
        v12 = v9;
      }
      *((_DWORD *)v8 + 5) = v9;
      *((_DWORD *)v8 + 4) &= 0xFFFFFFF5;
      v7 &= 0xFFFFFFFA;
    }
    else
    {
      *((_DWORD *)v8 + 5) = v5;
    }
    *(_QWORD *)(*((_QWORD *)this + 1) + 40LL) = v8;
    if ( v3 )
      *v3 = v8;
    else
      *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = v8;
    memmove((char *)v8 + 24, v6, 8LL * *((unsigned int *)v8 + 5));
    v3 = v8;
    v10 = 8LL * *((unsigned int *)v8 + 5);
    v6 += v10;
    v5 -= *((_DWORD *)v8 + 5);
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 8LL) = (char *)v8 + v10 + 24;
    if ( !v5 )
      goto LABEL_10;
  }
  return 0LL;
}
