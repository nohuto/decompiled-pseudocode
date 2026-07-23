/*
 * XREFs of CmpDumpOneKeyBody @ 0x1407F20A4
 * Callers:
 *     CmpDumpKeyBodyList @ 0x1407F1F70 (CmpDumpKeyBodyList.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     PsLookupProcessByProcessId @ 0x140647C40 (PsLookupProcessByProcessId.c)
 */

int __fastcall CmpDumpOneKeyBody(struct _KPROCESS *a1, __int64 a2, const void **a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  PEPROCESS v7; // rcx
  _DWORD *v8; // rdi
  int v9; // esi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  PEPROCESS v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = (unsigned __int64)&retaddr;
  v12 = a1;
  if ( a4 )
  {
    v8 = *(_DWORD **)(a4 + 8);
    if ( *(_QWORD *)(a4 + 32) != a2 )
    {
      v9 = *(unsigned __int16 *)a3 + 24;
      *(_DWORD *)(a4 + 16) += v9;
      if ( *(int *)(a4 + 20) >= 0 )
      {
        if ( (unsigned int)(v9 + *(_DWORD *)(a4 + 24)) <= *(_DWORD *)a4 )
        {
          *(_QWORD *)&v8[6 * *v8 + 2] = *(_QWORD *)(a2 + 24);
          LOWORD(v8[6 * *v8 + 4]) = *(_WORD *)a3;
          HIWORD(v8[6 * *v8 + 4]) = *(_WORD *)a3;
          *(_QWORD *)&v8[6 * *v8 + 6] = *(_QWORD *)(a4 + 40) - *(unsigned __int16 *)a3;
          memmove(*(void **)&v8[6 * *v8 + 6], a3[1], *(unsigned __int16 *)a3);
          v4 = *(unsigned __int16 *)a3;
          *(_QWORD *)(a4 + 40) -= v4;
          *(_DWORD *)(a4 + 24) += v9;
        }
        else
        {
          *(_DWORD *)(a4 + 20) = -2147483643;
        }
      }
      ++*v8;
    }
  }
  else
  {
    LODWORD(v4) = PsLookupProcessByProcessId(*(HANDLE *)(a2 + 24), &v12);
    v7 = v12;
    if ( (v4 & 0x80000000) != 0LL )
      v7 = 0LL;
    if ( v7 )
      LODWORD(v4) = ObfDereferenceObjectWithTag(v7, 0x746C6644u);
  }
  return v4;
}
