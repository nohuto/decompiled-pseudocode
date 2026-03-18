/*
 * XREFs of MxSwitchDescriptors @ 0x140A3D51C
 * Callers:
 *     MxGetNextPage @ 0x1409F3930 (MxGetNextPage.c)
 * Callees:
 *     MiPageToNode @ 0x1400C53C4 (MiPageToNode.c)
 *     MiInitializeBootMemoryDescriptor @ 0x1409F3A20 (MiInitializeBootMemoryDescriptor.c)
 */

unsigned __int64 *__fastcall MxSwitchDescriptors(unsigned int a1)
{
  __int64 v1; // r15
  unsigned __int64 v2; // rbx
  __int64 v3; // rbp
  unsigned __int64 *v4; // rsi
  unsigned __int64 v5; // rdi
  int v6; // eax
  unsigned int v7; // eax
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 *result; // rax

  v1 = KeLoaderBlock_0;
  v2 = a1;
  v3 = KeLoaderBlock_0 + 32;
  v4 = (unsigned __int64 *)&qword_140A525F0[5 * a1];
  v5 = v4[4];
  while ( 2 )
  {
    if ( !v5 )
    {
      v5 = *(_QWORD *)(v1 + 40);
      goto LABEL_14;
    }
    while ( 1 )
    {
      v5 = *(_QWORD *)(v5 + 8);
LABEL_14:
      if ( v5 == v3 )
        break;
      v6 = *(_DWORD *)(v5 + 16);
      if ( v6 == 2 || v6 == 24 )
      {
        v7 = 0;
        if ( KeNumberNodes )
        {
          v8 = qword_140A51C10;
          do
          {
            if ( v5 == *v8 )
              break;
            ++v7;
            v8 += 5;
          }
          while ( v7 < (unsigned __int16)KeNumberNodes );
        }
        if ( v7 >= (unsigned __int16)KeNumberNodes )
        {
          if ( (unsigned int)MiPageToNode(*(_QWORD *)(v5 + 24), 0) == (_DWORD)v2
            || (v9 = MxBootDescriptorAnyNode, _bittest64(&v9, v2)) )
          {
            MiInitializeBootMemoryDescriptor(v4, v5, *(_QWORD *)(v5 + 24), *(_QWORD *)(v5 + 32));
            *(_DWORD *)(v5 + 16) |= 0x40000000u;
            result = v4;
            MxFreeDescriptor[v2] = (__int64)v4;
            return result;
          }
        }
      }
    }
    v10 = MxBootDescriptorAnyNode;
    if ( !_bittest64(&v10, v2) )
    {
      v4[4] = 0LL;
      MxBootDescriptorAnyNode = v10 | (1LL << v2);
      v5 = 0LL;
      continue;
    }
    return 0LL;
  }
}
