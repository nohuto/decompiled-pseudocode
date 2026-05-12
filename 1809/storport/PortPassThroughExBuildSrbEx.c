/*
 * XREFs of PortPassThroughExBuildSrbEx @ 0x1C0075DB4
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C006F178 (PortPassThroughExSendAsync.c)
 * Callees:
 *     RtlULongAdd @ 0x1C001D248 (RtlULongAdd.c)
 *     memmove @ 0x1C002C080 (memmove.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 */

_DWORD *__fastcall PortPassThroughExBuildSrbEx(IRP *a1, __int64 a2, __int64 a3, __int64 a4, ULONG ulAugend, __int64 a6)
{
  PVOID v6; // r12
  int v8; // r13d
  ULONG v9; // r9d
  unsigned int v10; // edx
  ULONG v11; // esi
  int v12; // r10d
  NTSTATUS v13; // ebp
  ULONG v14; // r15d
  _DWORD *PoolWithTag; // rax
  _DWORD *v16; // rbx
  unsigned __int8 v17; // al
  PVOID v18; // rax
  char v19; // al
  int v20; // eax
  __int16 IoPriorityHint; // ax
  __int64 v22; // rbp
  char v23; // dl
  int v24; // ecx
  __int64 v25; // r15
  __int64 v26; // rax
  unsigned int v27; // eax
  unsigned int v28; // r8d
  char *v29; // rcx
  void *v30; // rcx
  int v31; // eax
  unsigned int v32; // eax
  char *v33; // rcx
  __int64 v34; // rax
  ULONG pulResult; // [rsp+78h] [rbp+10h] BYREF
  __int64 v38; // [rsp+80h] [rbp+18h]
  __int64 v39; // [rsp+88h] [rbp+20h]

  v39 = a4;
  v38 = a3;
  v6 = 0LL;
  if ( *(_BYTE *)(a2 + 18) == 3 && *(_DWORD *)(a2 + 32) && *(_DWORD *)(a2 + 36) )
  {
    v8 = 136;
    v9 = 176;
  }
  else
  {
    v8 = 128;
    v9 = 144;
  }
  v10 = *(_DWORD *)(a2 + 8);
  ulAugend = v9;
  if ( v10 > 0x10 )
  {
    if ( v10 > 0x20 )
    {
      if ( RtlULongAdd(0x28u, v10 - 1, &pulResult) < 0 )
        return 0LL;
      v11 = v12 + ((pulResult - 1) & 0xFFFFFFF8);
    }
    else
    {
      v11 = 56;
    }
  }
  else
  {
    v11 = 40;
  }
  v13 = RtlULongAdd(v9, v11, &ulAugend);
  if ( v13 >= 0 )
  {
    if ( !a6 || (v13 = RtlULongAdd(ulAugend, 0x20u, &ulAugend), v13 >= 0) )
    {
      v14 = ulAugend;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, ulAugend, 0x69506C50u);
      v16 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v14);
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
      }
      else
      {
        v13 = -1073741670;
      }
      if ( v13 < 0 )
        return v16;
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
      {
        v20 |= 0x20u;
        v16[6] = v20;
      }
      v16[6] = v20 | 0x100;
      IoPriorityHint = IoGetIoPriorityHint(a1);
      v22 = a6;
      *((_WORD *)v16 + 18) = IoPriorityHint;
      v16[10] = *(_DWORD *)(a2 + 20);
      v16[13] = v8;
      v16[14] = (v8 != 128) + 1;
      if ( v22 )
        v16[14] = (v8 != 128) + 2;
      v23 = *(_BYTE *)(a2 + 18);
      if ( v23 == 1 )
        v24 = *(_DWORD *)(a2 + 36);
      else
        v24 = *(_DWORD *)(a2 + 32);
      v25 = v39;
      v26 = v39;
      if ( v23 != 1 )
        v26 = v38;
      v16[15] = v24;
      *((_QWORD *)v16 + 8) = v26;
      *((_QWORD *)v16 + 10) = a1;
      v16[30] = v8 + 16;
      v27 = v16[14];
      if ( v27 >= 2 )
      {
        v16[31] = v8 + 16 + v11;
        v27 = v16[14];
      }
      if ( v27 == 3 )
        v16[32] = v16[31] + 24;
      *(_OWORD *)((char *)v16 + (unsigned int)v16[13]) = *(_OWORD *)((char *)&a1->AssociatedIrp.MasterIrp->Type
                                                                   + *(unsigned int *)(a2 + 24));
      v28 = *(_DWORD *)(a2 + 8);
      v29 = (char *)v16 + (unsigned int)v16[30];
      if ( v28 > 0x10 )
      {
        if ( v28 > 0x20 )
        {
          *(_DWORD *)v29 = 66;
          v31 = *(_DWORD *)(a2 + 8) + 24;
          v29[8] = 0;
          *((_DWORD *)v29 + 1) = v31;
          v29[9] = *(_BYTE *)(a2 + 17);
          *((_DWORD *)v29 + 3) = *(_DWORD *)(a2 + 8);
          *((_QWORD *)v29 + 3) = v6;
          v30 = v29 + 32;
          goto LABEL_47;
        }
        *(_DWORD *)v29 = 65;
        *((_DWORD *)v29 + 1) = 48;
      }
      else
      {
        *(_DWORD *)v29 = 64;
        *((_DWORD *)v29 + 1) = 32;
      }
      v29[8] = 0;
      v29[9] = *(_BYTE *)(a2 + 17);
      v29[10] = *(_BYTE *)(a2 + 8);
      *((_QWORD *)v29 + 2) = v6;
      v30 = v29 + 24;
LABEL_47:
      memmove(v30, (const void *)(a2 + 56), *(unsigned int *)(a2 + 8));
      v32 = v16[14];
      if ( v32 >= 2 )
      {
        v33 = (char *)v16 + (unsigned int)v16[31];
        *(_DWORD *)v33 = 1;
        *((_DWORD *)v33 + 1) = 16;
        *((_DWORD *)v33 + 2) = *(_DWORD *)(a2 + 36);
        *((_QWORD *)v33 + 2) = v25;
        v32 = v16[14];
      }
      if ( v32 == 3 )
      {
        v34 = (unsigned int)v16[32];
        *(_DWORD *)((char *)v16 + v34) = 160;
        *(_DWORD *)((char *)v16 + v34 + 4) = 24;
        *(_QWORD *)((char *)v16 + v34 + 8) = v22;
      }
      return v16;
    }
  }
  return 0LL;
}
