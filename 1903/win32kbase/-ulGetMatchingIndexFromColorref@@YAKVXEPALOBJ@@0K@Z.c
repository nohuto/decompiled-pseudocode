/*
 * XREFs of ?ulGetMatchingIndexFromColorref@@YAKVXEPALOBJ@@0K@Z @ 0x1C0054734
 * Callers:
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C00542E0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 * Callees:
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C00547C0 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 */

__int64 __fastcall ulGetMatchingIndexFromColorref(struct PALETTE *a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // r8
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned int v9; // ecx
  struct PALETTE *v10; // [rsp+40h] [rbp+20h] BYREF
  __int64 v11; // [rsp+48h] [rbp+28h] BYREF
  unsigned int v12; // [rsp+50h] [rbp+30h]

  v11 = a2;
  v10 = a1;
  v12 = a3;
  if ( !a1 || (*((_DWORD *)a1 + 6) & 0x800) != 0 )
  {
    if ( (a3 & 0x3000000) != 0 )
    {
      if ( (a3 & 0x1000000) != 0 )
      {
        result = (unsigned __int16)a3;
        if ( (unsigned int)(unsigned __int16)a3 >= *(_DWORD *)(a2 + 28) )
          result = 0LL;
      }
      else
      {
        v7 = *(unsigned int *)(a2 + 96);
        HIBYTE(v12) = 0;
        result = XEPALOBJ::ulDispatchGFPEFunction(&v11, v7, v12);
      }
      if ( (struct PALETTE *)a2 == ppalDefault )
      {
        if ( (unsigned int)result >= 0xA )
          return (unsigned int)(result + 236);
        return result;
      }
      if ( a1 )
        v8 = *(_QWORD *)(a2 + 80);
      else
        v8 = *(_QWORD *)(a2 + 72);
      if ( v8 )
        return *(unsigned __int8 *)((unsigned int)result + v8 + 4);
      a3 = *(_DWORD *)(*(_QWORD *)(a2 + 112) + 4LL * (unsigned int)result);
      v12 = a3;
      if ( HIBYTE(a3) == 2 )
        return (unsigned __int8)a3;
    }
    if ( (a3 & 0x10FF0000) == 0x10FF0000 )
      return (unsigned __int8)a3;
    HIBYTE(v12) = 0;
    v9 = v12;
    if ( v12 == 0xFFFFFF )
    {
      v9 = 19;
    }
    else
    {
      if ( v12 )
      {
        v10 = ppalDefault;
        v9 = XEPALOBJ::ulDispatchGFPEFunction(&v10, *((unsigned int *)ppalDefault + 25), v12);
      }
      if ( v9 - 10 > 0xFFFFFFF4 )
        return v9;
    }
    v9 += 236;
    return v9;
  }
  if ( (a3 & 0x1000000) != 0 )
  {
    v5 = *(unsigned int *)(*(_QWORD *)(a2 + 112)
                         + 4LL * ((unsigned int)(unsigned __int16)a3 < *(_DWORD *)(a2 + 28) ? a3 : 0));
  }
  else
  {
    if ( (a3 & 0x10FF0000) == 0x10FF0000 )
      return (unsigned __int8)a3 & (unsigned int)-((unsigned int)(unsigned __int8)a3 < *((_DWORD *)a1 + 7));
    HIBYTE(v12) = 0;
    v5 = v12;
  }
  return XEPALOBJ::ulDispatchGFPEFunction(&v10, *((unsigned int *)a1 + 25), v5);
}
