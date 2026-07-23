/*
 * XREFs of MiMirrorReduceBlackWrites @ 0x140152EE0
 * Callers:
 *     MmDuplicateMemory @ 0x14056D274 (MmDuplicateMemory.c)
 * Callees:
 *     MiIsDecayPfn @ 0x140118C7C (MiIsDecayPfn.c)
 *     MiMirrorNodeLargePages @ 0x140152CA8 (MiMirrorNodeLargePages.c)
 *     MiMirrorOmitPagesFromCopy @ 0x1401530FC (MiMirrorOmitPagesFromCopy.c)
 */

void __fastcall MiMirrorReduceBlackWrites(__int64 a1, __int64 a2, char a3, int a4)
{
  unsigned int v4; // r15d
  __int64 v5; // rbp
  bool v7; // cf
  unsigned __int64 v8; // r8
  __int64 v9; // rbx
  ULONG_PTR *v10; // rsi
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rdi
  __int64 v14; // rdi
  _QWORD *v15; // rax
  unsigned __int64 i; // rcx
  _QWORD *j; // rax
  _QWORD **v18; // rax
  unsigned __int64 v19; // rdx
  _QWORD *v20; // rdx
  _QWORD **v21; // rax
  unsigned __int64 v22; // rdx
  _QWORD *v23; // rdx
  __int64 v24; // [rsp+68h] [rbp+10h]
  int v25; // [rsp+70h] [rbp+18h]
  int v26; // [rsp+78h] [rbp+20h]

  if ( (a3 & 0xD) == 0 )
    return;
  v26 = a4;
  v4 = 0;
  v25 = 0;
  v5 = 0LL;
  v7 = (a3 & 8) != 0;
  v8 = 0xFFFFFA8000000000uLL;
  v9 = 2LL - v7;
LABEL_3:
  v24 = v9;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v9 > 1 )
        v10 = &MiSystemPartition + 4 * v4 + v4 + 296;
      else
        v10 = (ULONG_PTR *)(*(&MiSystemPartition + v9 + 264) + 40 * v5);
      v11 = v10[2];
      if ( v11 != 0xFFFFFFFFFLL )
      {
        while ( 1 )
        {
          v12 = v8;
          if ( v9 == 2 && MiIsDecayPfn(v11) )
          {
            v13 = *(_QWORD *)(v12 + 48 * v11 + 16);
            if ( qword_14043B180 && (v13 & 0x10) == 0 )
              v13 &= ~qword_14043B180;
            v14 = (v13 >> 12) & 0xFFFFFFFFFLL;
            if ( v14 == v11 )
              goto LABEL_11;
            do
            {
              MiMirrorOmitPagesFromCopy(a1, v14, 1LL);
              v14 = *(_QWORD *)(48 * v14 - 0x58000000000LL) & 0xFFFFFFFFFLL;
            }
            while ( v14 != v11 );
            v9 = v24;
          }
          else
          {
            MiMirrorOmitPagesFromCopy(a1, v11, 1LL);
          }
          v8 = 0xFFFFFA8000000000uLL;
LABEL_11:
          v11 = *(_QWORD *)(v12 + 48 * v11) & 0xFFFFFFFFFLL;
          if ( v11 == 0xFFFFFFFFFLL )
          {
            v4 = v25;
            a4 = v26;
            break;
          }
        }
      }
      if ( v9 > 1 )
        break;
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= dword_14043B14C )
      {
        v5 = 0LL;
        break;
      }
    }
    if ( !v9 )
      break;
    if ( v9 == 2 )
    {
      v25 = ++v4;
      if ( v4 != a4 )
        continue;
    }
    --v9;
    goto LABEL_3;
  }
  MiMirrorNodeLargePages(a1, (__int64)&MiSystemPartition, 1LL);
  v15 = (_QWORD *)qword_14043B7B0;
  i = 0LL;
  while ( v15 )
  {
    i = (unsigned __int64)v15;
    v15 = (_QWORD *)*v15;
  }
  while ( i )
  {
    v18 = *(_QWORD ***)(i + 8);
    v19 = i;
    *(_BYTE *)(i + 70) = 1;
    if ( v18 )
    {
      v20 = *v18;
      for ( i = (unsigned __int64)v18; v20; v20 = (_QWORD *)*v20 )
        i = (unsigned __int64)v20;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v19 )
          break;
        v19 = i;
      }
    }
  }
  for ( j = (_QWORD *)qword_14043B7A0; j; j = (_QWORD *)*j )
    i = (unsigned __int64)j;
  while ( i )
  {
    v21 = *(_QWORD ***)(i + 8);
    v22 = i;
    *(_BYTE *)(i + 70) = 1;
    if ( v21 )
    {
      v23 = *v21;
      for ( i = (unsigned __int64)v21; v23; v23 = (_QWORD *)*v23 )
        i = (unsigned __int64)v23;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v22 )
          break;
        v22 = i;
      }
    }
  }
}
