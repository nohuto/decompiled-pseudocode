/*
 * XREFs of PortPassThroughExBuildSrbEx @ 0x1C0075F74
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C00762B4 (PortPassThroughExSendAsync.c)
 * Callees:
 *     memmove @ 0x1C0024A80 (memmove.c)
 *     memset @ 0x1C0024DC0 (memset.c)
 */

_DWORD *__fastcall PortPassThroughExBuildSrbEx(PIRP Irp, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  PVOID v6; // rbp
  int v9; // ecx
  int v10; // eax
  int v11; // r15d
  unsigned int v12; // esi
  unsigned int v13; // esi
  SIZE_T v14; // r14
  _DWORD *PoolWithTag; // rax
  _DWORD *v16; // rbx
  unsigned __int8 v17; // al
  PVOID v18; // rax
  char v19; // al
  int v20; // eax
  char v21; // dl
  int v22; // ecx
  __int64 v23; // rax
  int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // r8d
  char *v27; // rcx
  void *v28; // rcx
  int v29; // eax
  unsigned int v30; // eax
  char *v31; // rcx
  __int64 v32; // rax

  v6 = 0LL;
  if ( *(_BYTE *)(a2 + 18) == 3 && *(_DWORD *)(a2 + 32) && *(_DWORD *)(a2 + 36) )
  {
    v9 = 176;
    v10 = 208;
    v11 = 136;
  }
  else
  {
    v9 = 144;
    v10 = 176;
    v11 = 128;
  }
  v12 = *(_DWORD *)(a2 + 8);
  if ( v12 > 0x10 )
  {
    if ( v12 > 0x20 )
      v13 = ((v12 + 38) & 0xFFFFFFF8) + 8;
    else
      v13 = 56;
  }
  else
  {
    v13 = 40;
  }
  if ( !a6 )
    v10 = v9;
  v14 = v13 + v10;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x69506C50u);
  v16 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)v14);
    v17 = *(_BYTE *)(a2 + 17);
    if ( v17 )
    {
      v18 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v17, 0x69506C50u);
      v6 = v18;
      if ( !v18 )
      {
        ExFreePoolWithTag(v16, 0x69506C50u);
        return 0LL;
      }
      memset(v18, 0, *(unsigned __int8 *)(a2 + 17));
    }
    v16[5] = 0;
    *v16 = 2621448;
    v16[2] = 1397899864;
    v16[3] = 1;
    v16[4] = v14;
    v19 = *(_BYTE *)(a2 + 18);
    if ( v19 )
    {
      if ( v19 == 1 )
      {
        v16[6] = 64;
      }
      else if ( v19 == 3 )
      {
        v16[6] = 192;
      }
    }
    else
    {
      v16[6] = 128;
    }
    v20 = v16[6];
    if ( !v6 )
      v20 |= 0x20u;
    v16[6] = v20 | 0x100;
    *((_WORD *)v16 + 18) = IoGetIoPriorityHint(Irp);
    v16[10] = *(_DWORD *)(a2 + 20);
    v16[13] = v11;
    v16[14] = (v11 != 128) + 1;
    if ( a6 )
      v16[14] = (v11 != 128) + 2;
    v21 = *(_BYTE *)(a2 + 18);
    if ( v21 == 1 )
      v22 = *(_DWORD *)(a2 + 36);
    else
      v22 = *(_DWORD *)(a2 + 32);
    v23 = a4;
    if ( v21 != 1 )
      v23 = a3;
    v16[15] = v22;
    *((_QWORD *)v16 + 8) = v23;
    v24 = v16[13] + 16;
    *((_QWORD *)v16 + 10) = Irp;
    v16[30] = v24;
    v25 = v16[14];
    if ( v25 >= 2 )
    {
      v16[31] = v24 + v13;
      v25 = v16[14];
    }
    if ( v25 == 3 )
      v16[32] = v16[31] + 24;
    *(_OWORD *)((char *)v16 + (unsigned int)v16[13]) = *(_OWORD *)((char *)&Irp->AssociatedIrp.MasterIrp->Type
                                                                 + *(unsigned int *)(a2 + 24));
    v26 = *(_DWORD *)(a2 + 8);
    v27 = (char *)v16 + (unsigned int)v16[30];
    if ( v26 > 0x10 )
    {
      if ( v26 > 0x20 )
      {
        *(_DWORD *)v27 = 66;
        v29 = *(_DWORD *)(a2 + 8) + 24;
        v27[8] = 0;
        *((_DWORD *)v27 + 1) = v29;
        v27[9] = *(_BYTE *)(a2 + 17);
        *((_DWORD *)v27 + 3) = *(_DWORD *)(a2 + 8);
        *((_QWORD *)v27 + 3) = v6;
        v28 = v27 + 32;
        goto LABEL_43;
      }
      *(_DWORD *)v27 = 65;
      *((_DWORD *)v27 + 1) = 48;
    }
    else
    {
      *(_DWORD *)v27 = 64;
      *((_DWORD *)v27 + 1) = 32;
    }
    v27[8] = 0;
    v27[9] = *(_BYTE *)(a2 + 17);
    v27[10] = *(_BYTE *)(a2 + 8);
    *((_QWORD *)v27 + 2) = v6;
    v28 = v27 + 24;
LABEL_43:
    memmove(v28, (const void *)(a2 + 56), *(unsigned int *)(a2 + 8));
    v30 = v16[14];
    if ( v30 >= 2 )
    {
      v31 = (char *)v16 + (unsigned int)v16[31];
      *(_DWORD *)v31 = 1;
      *((_DWORD *)v31 + 1) = 16;
      *((_DWORD *)v31 + 2) = *(_DWORD *)(a2 + 36);
      *((_QWORD *)v31 + 2) = a4;
      v30 = v16[14];
    }
    if ( v30 == 3 )
    {
      v32 = (unsigned int)v16[32];
      *(_DWORD *)((char *)v16 + v32) = 160;
      *(_DWORD *)((char *)v16 + v32 + 4) = 24;
      *(_QWORD *)((char *)v16 + v32 + 8) = a6;
    }
  }
  return v16;
}
