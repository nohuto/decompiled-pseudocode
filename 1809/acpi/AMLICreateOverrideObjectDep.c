/*
 * XREFs of AMLICreateOverrideObjectDep @ 0x1C00628BC
 * Callers:
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C0062558 (AMLIAddNextNamespaceOverrideObject.c)
 * Callees:
 *     FreeObjData @ 0x1C0002EB0 (FreeObjData.c)
 *     NewObjData @ 0x1C000A678 (NewObjData.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall AMLICreateOverrideObjectDep(_BYTE *Src, unsigned int a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r14d
  unsigned int i; // ecx
  _BYTE *v11; // rdx
  __int64 v12; // rax
  _DWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *v16; // r15
  __int64 v17; // rdi
  unsigned int *v18; // rsi
  __int64 v19; // rax
  void *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int128 v24; // xmm1
  __int64 v25; // xmm0_8
  _OWORD v27[3]; // [rsp+20h] [rbp-48h] BYREF

  v6 = 0;
  memset(v27, 0, 0x28uLL);
  v9 = 0;
  if ( a2 && Src[a2 - 1] )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    for ( i = 0; i < a2; i += v12 + 1 )
    {
      v11 = &Src[i];
      if ( !*v11 )
        break;
      v12 = -1LL;
      do
        ++v12;
      while ( v11[v12] );
      ++v9;
    }
    WORD1(v27[0]) = 4;
    DWORD2(v27[1]) = 40 * v9 + 48;
    v13 = (_DWORD *)NewObjData((struct _SLIST_ENTRY *)gpheapGlobal, (__int64)v27, v7, v8);
    *(_QWORD *)&v27[2] = v13;
    v16 = v13;
    if ( v13 )
    {
      LODWORD(v17) = 0;
      *v13 = v9;
      if ( v9 )
      {
        v18 = v13 + 8;
        while ( 1 )
        {
          *((_WORD *)v18 - 11) = 2;
          v19 = -1LL;
          do
            ++v19;
          while ( Src[v19] );
          *v18 = v19 + 1;
          v20 = (void *)NewObjData((struct _SLIST_ENTRY *)gpheapGlobal, (__int64)(v18 - 6), v14, v15);
          *((_QWORD *)v18 + 1) = v20;
          if ( !v20 )
            break;
          memmove(v20, Src, *v18);
          LODWORD(v17) = v17 + 1;
          Src += *v18;
          v18 += 10;
          if ( (unsigned int)v17 >= v9 )
            goto LABEL_17;
        }
        v6 = -1073741670;
        while ( (_DWORD)v17 )
        {
          v17 = (unsigned int)(v17 - 1);
          FreeObjData((__int64)&v16[8 * v17 + 2 + 2 * (unsigned int)v17], v21, v22, v23);
        }
        FreeObjData((__int64)v27, v21, v22, v23);
      }
      else
      {
LABEL_17:
        v24 = v27[1];
        *(_OWORD *)a3 = v27[0];
        v25 = *(_QWORD *)&v27[2];
        *(_OWORD *)(a3 + 16) = v24;
        *(_QWORD *)(a3 + 32) = v25;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v6;
}
