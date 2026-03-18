/*
 * XREFs of ?bAppend@EPATHOBJ@@QEAAHPEAV1@PEAU_POINTFIX@@@Z @ 0x1C00C0E40
 * Callers:
 *     <none>
 * Callees:
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C001BA10 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C001BB64 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 */

__int64 __fastcall EPATHOBJ::bAppend(EPATHOBJ *this, struct EPATHOBJ *a2, struct _POINTFIX *a3)
{
  __int64 *i; // rdi
  int v7; // ecx
  int v8; // ebp
  unsigned int v9; // edx
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+24h] [rbp-24h]
  __int64 *v13; // [rsp+28h] [rbp-20h]
  struct _POINTL v14; // [rsp+58h] [rbp+10h] BYREF

  for ( i = *(__int64 **)(*((_QWORD *)a2 + 1) + 32LL); ; i = (__int64 *)*i )
  {
    if ( !i )
    {
      v9 = *(_DWORD *)this & 0xFFFFFFFD;
      *(_DWORD *)this = v9;
      if ( (*(_DWORD *)a2 & 1) != 0 )
        *(_DWORD *)this = v9 | 1;
      result = 1LL;
      *((_DWORD *)this + 1) += *((_DWORD *)a2 + 1);
      return result;
    }
    v7 = *((_DWORD *)i + 4);
    v8 = *((_DWORD *)i + 5);
    v12 = v8;
    v11 = v7 & 0x10;
    v13 = i + 3;
    if ( (v7 & 1) != 0 )
    {
      v14.x = a3->x + *((_DWORD *)i + 6);
      v14.y = a3->y + *((_DWORD *)i + 7);
      EPATHOBJ::bMoveTo(this, 0LL, &v14);
      v12 = --v8;
      v13 = i + 4;
    }
    if ( v8 )
      break;
LABEL_7:
    if ( (i[2] & 8) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 40LL) + 16LL) |= 8u;
      *(_DWORD *)(*((_QWORD *)this + 1) + 80LL) |= 1u;
    }
  }
  while ( (unsigned int)EPATHOBJ::createrec(this, 0LL, (struct _PATHDATAL *)&v11, a3) )
  {
    if ( !v12 )
      goto LABEL_7;
  }
  return 0LL;
}
