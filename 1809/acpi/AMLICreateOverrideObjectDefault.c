/*
 * XREFs of AMLICreateOverrideObjectDefault @ 0x1C00627C8
 * Callers:
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C0062558 (AMLIAddNextNamespaceOverrideObject.c)
 * Callees:
 *     NewObjData @ 0x1C000A678 (NewObjData.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall AMLICreateOverrideObjectDefault(_BYTE *Src, size_t Size, __int64 a3)
{
  size_t v3; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  unsigned int v9; // edx
  _BYTE *v10; // rcx
  void *v11; // rax
  __int128 v12; // xmm1
  __int64 v13; // xmm0_8
  _OWORD v15[3]; // [rsp+20h] [rbp-30h] BYREF

  v3 = (unsigned int)Size;
  memset(v15, 0, 0x28uLL);
  v8 = 0;
  if ( (_DWORD)v3 == 4 )
  {
    LODWORD(v15[1]) = (_DWORD)Src;
    goto LABEL_14;
  }
  if ( (_DWORD)v3 == 8 )
  {
    *(_QWORD *)&v15[1] = Src;
LABEL_14:
    WORD1(v15[0]) = 1;
    goto LABEL_15;
  }
  v9 = 0;
  if ( (_DWORD)v3 )
  {
    v10 = Src;
    do
    {
      if ( !*v10 )
        break;
      ++v9;
      ++v10;
    }
    while ( v9 < (unsigned int)v3 );
  }
  if ( v9 != (_DWORD)v3 - 1 )
    return (unsigned int)-1073741637;
  DWORD2(v15[1]) = v3;
  WORD1(v15[0]) = 2;
  v11 = (void *)NewObjData((struct _SLIST_ENTRY *)gpheapGlobal, (__int64)v15, v6, v7);
  *(_QWORD *)&v15[2] = v11;
  if ( v11 )
  {
    memmove(v11, Src, v3);
LABEL_15:
    v12 = v15[1];
    *(_OWORD *)a3 = v15[0];
    v13 = *(_QWORD *)&v15[2];
    *(_OWORD *)(a3 + 16) = v12;
    *(_QWORD *)(a3 + 32) = v13;
    return v8;
  }
  return (unsigned int)-1073741670;
}
