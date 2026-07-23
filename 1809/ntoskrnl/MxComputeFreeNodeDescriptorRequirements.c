/*
 * XREFs of MxComputeFreeNodeDescriptorRequirements @ 0x1409BCBFC
 * Callers:
 *     MiFindLargestLoaderDescriptor @ 0x1409BC2C8 (MiFindLargestLoaderDescriptor.c)
 * Callees:
 *     MiPageToNode @ 0x14009CF50 (MiPageToNode.c)
 *     MiRestrictRangeToNode @ 0x14017F3EC (MiRestrictRangeToNode.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MxComputePfnPagesNeeded @ 0x1409BCDE0 (MxComputePfnPagesNeeded.c)
 */

__int64 __fastcall MxComputeFreeNodeDescriptorRequirements(__int64 a1, void *a2)
{
  unsigned int v4; // r12d
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 *v7; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  __int64 result; // rax
  unsigned int v16; // [rsp+60h] [rbp+8h]
  unsigned __int64 v17; // [rsp+68h] [rbp+10h]
  __int64 *v18; // [rsp+70h] [rbp+18h]

  memset(a2, 0, 0x200uLL);
  v4 = -1;
  v5 = -1LL;
  v6 = -1LL;
  v7 = *(__int64 **)(a1 + 32);
  v18 = (__int64 *)(a1 + 32);
  if ( v7 != (__int64 *)(a1 + 32) )
  {
    while ( 1 )
    {
      v8 = *((int *)v7 + 4);
      if ( (unsigned int)v8 > 0x22 || (v9 = 0x5C0C00048LL, !_bittest64(&v9, v8)) )
      {
        v10 = v7[4];
        v11 = v7[3];
        if ( v10 )
          break;
      }
LABEL_9:
      v7 = (__int64 *)*v7;
      if ( v7 == v18 )
        goto LABEL_10;
    }
    while ( 1 )
    {
      v17 = MiRestrictRangeToNode(v11, v10);
      v12 = v17;
      v13 = MiPageToNode(v11, 0);
      v16 = v13;
      v14 = v13;
      if ( v6 != -1 )
      {
        if ( v13 == v4
          && (((unsigned __int64)(48 * v6) >> 18) & 0x3FFFFFF8) - 0x904BFFFFFF8LL >= (((48 * v11) >> 18) & 0x3FFFFFF8)
                                                                                   - 0x904C0000000LL )
        {
          goto LABEL_8;
        }
        *((_QWORD *)a2 + v4) += MxComputePfnPagesNeeded(v5, v6);
        v12 = v17;
        v14 = v16;
      }
      v5 = v11;
LABEL_8:
      v6 = v12 + v11;
      v4 = v14;
      v11 += v12;
      v10 -= v12;
      if ( !v10 )
        goto LABEL_9;
    }
  }
LABEL_10:
  result = MxComputePfnPagesNeeded(v5, v6);
  *((_QWORD *)a2 + v4) += result;
  return result;
}
