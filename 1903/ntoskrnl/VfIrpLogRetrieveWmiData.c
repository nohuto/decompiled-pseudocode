/*
 * XREFs of VfIrpLogRetrieveWmiData @ 0x140980D80
 * Callers:
 *     ViDdiDispatchWmiQueryAllData @ 0x140965E18 (ViDdiDispatchWmiQueryAllData.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObQueryNameString @ 0x140627DC0 (ObQueryNameString.c)
 */

__int64 __fastcall VfIrpLogRetrieveWmiData(unsigned int a1, __int64 a2, int *a3, _DWORD *a4, ULONG *a5, ULONG *a6)
{
  __int64 v7; // rbx
  _OBJECT_NAME_INFORMATION *PoolWithTag; // rsi
  int v10; // ecx
  _QWORD *v11; // r12
  _QWORD *v12; // rdi
  _QWORD *v13; // rdx
  __int64 v14; // rbp
  _DWORD *v15; // r15
  _WORD *v16; // r14
  NTSTATUS v17; // ebx
  _OBJECT_NAME_INFORMATION *v18; // rax
  void *v19; // rcx
  unsigned __int16 v20; // ax
  unsigned int v21; // edi
  __int64 v22; // r15
  _OWORD *v23; // r14
  int v24; // ebp
  ULONG v25; // edi
  __int64 v26; // r8
  ULONG v27; // r13d
  char *v28; // rsi
  int v29; // r14d
  __int64 *v30; // r15
  __int64 *v31; // rcx
  __int64 **v32; // r12
  ULONG *v33; // r13
  int v34; // eax
  unsigned int v35; // edx
  int v36; // ebp
  char *v37; // rsi
  size_t v38; // rbx
  ULONG ReturnLength; // [rsp+20h] [rbp-68h] BYREF
  ULONG Length[2]; // [rsp+28h] [rbp-60h]
  int v41; // [rsp+30h] [rbp-58h]
  _QWORD *v42; // [rsp+38h] [rbp-50h]
  _DWORD *v43; // [rsp+40h] [rbp-48h]
  __int64 v44; // [rsp+48h] [rbp-40h]

  v7 = a1;
  *a3 = 0;
  *a4 = 0;
  *a5 = 0;
  *a6 = 0;
  *(_QWORD *)Length = 16LL;
  PoolWithTag = (_OBJECT_NAME_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74496656u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v44 = 3 * v7;
  v10 = 0;
  v11 = (_QWORD *)(ViIrpLogDatabase + 8 + 24 * v7);
  v12 = (_QWORD *)*v11;
  if ( (_QWORD *)*v11 != v11 )
  {
    v13 = (_QWORD *)*v11;
    do
    {
      ++v10;
      v13 = (_QWORD *)*v13;
    }
    while ( v13 != v11 );
  }
  v42 = (_QWORD *)(ViIrpLogDatabase + 8 + 24 * v7);
  v14 = (unsigned int)(8 * v10 + 60 + 4 * v10);
  v15 = (_DWORD *)(a2 + (unsigned int)(8 * v10 + 60));
  v16 = (_WORD *)(a2 + v14);
  v41 = 8 * v10 + 60;
  v17 = 0;
  while ( v12 != v11 )
  {
    v17 = ObQueryNameString((PVOID)*(v12 - 1), PoolWithTag, Length[0], &ReturnLength);
    if ( v17 == -1073741820 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      v18 = (_OBJECT_NAME_INFORMATION *)ExAllocatePoolWithTag(PagedPool, ReturnLength, 0x74496656u);
      PoolWithTag = v18;
      if ( !v18 )
        return (unsigned int)-1073741670;
      v19 = (void *)*(v12 - 1);
      Length[0] = ReturnLength;
      v17 = ObQueryNameString(v19, v18, ReturnLength, &ReturnLength);
    }
    if ( v17 < 0 )
      break;
    v20 = PoolWithTag->Name.Length;
    if ( PoolWithTag->Name.Length )
    {
      if ( a2 )
      {
        *v15 = v14;
        v20 = PoolWithTag->Name.Length;
      }
      v21 = v20 + 18;
      v43 = v15 + 1;
      v22 = v21 >> 1;
      if ( a2 )
        *v16 = v21;
      v23 = v16 + 1;
      v24 = v14 + 2;
      if ( a2 )
      {
        *v23 = *(_OWORD *)L"VERIFIER";
        memmove(v23 + 1, PoolWithTag->Name.Buffer, PoolWithTag->Name.Length);
        *((_WORD *)v23 + (unsigned int)(v22 - 1)) = 0;
      }
      v16 = (_WORD *)v23 + v22;
      LODWORD(v14) = v21 + v24;
      v15 = v43;
    }
    else
    {
      *((_DWORD *)v12 + 4) |= 2u;
    }
    v42 = (_QWORD *)*v42;
    v12 = (_QWORD *)*v42;
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( v17 < 0 )
    return (unsigned int)v17;
  v25 = (v14 + 7) & 0xFFFFFFF8;
  v26 = a2;
  v27 = v25;
  v28 = (char *)(a2 + v25);
  Length[0] = v25;
  v29 = 0;
  v30 = (__int64 *)(ViIrpLogDatabase + 8 * (v44 + 1));
  v31 = (__int64 *)*v30;
  v32 = (__int64 **)v30;
  if ( (__int64 *)*v30 != v30 )
  {
    v33 = (ULONG *)(a2 + 60);
    do
    {
      v34 = *((_DWORD *)v31 + 4);
      if ( (v34 & 2) == 0 )
      {
        ++v29;
        if ( (v34 & 1) != 0 )
          v35 = *((_DWORD *)v31 + 6);
        else
          v35 = *((_DWORD *)v31 + 7);
        v36 = 40 * v35;
        if ( v26 )
        {
          *v33 = v25;
          v33[1] = v36 + 8;
          v33 += 2;
          *(_DWORD *)v28 = *((_DWORD *)v31 + 5);
          *((_DWORD *)v28 + 1) = v35;
          v37 = v28 + 8;
          v38 = 40LL * v35;
          memmove(v37, v31 + 4, v38);
          v26 = a2;
          v28 = &v37[v38];
        }
        v31 = *v32;
        v25 += v36 + 8;
      }
      v32 = (__int64 **)v31;
      v31 = (__int64 *)*v31;
    }
    while ( v31 != v30 );
    v27 = Length[0];
  }
  *a3 = v41;
  *a4 = v29;
  *a5 = v27;
  *a6 = v25;
  return 0LL;
}
