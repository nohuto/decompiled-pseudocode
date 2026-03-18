/*
 * XREFs of ObCreateSymbolicLink @ 0x1406D8F48
 * Callers:
 *     NtCreateSymbolicLinkObject @ 0x1406D8C30 (NtCreateSymbolicLinkObject.c)
 *     MiCreateMemoryEvent @ 0x14074FA64 (MiCreateMemoryEvent.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     RtlIsSandboxedToken @ 0x1405D82D0 (RtlIsSandboxedToken.c)
 *     ObCreateObjectEx @ 0x1405D9B00 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1405D9D60 (ObInsertObjectEx.c)
 */

__int64 __fastcall ObCreateSymbolicLink(__int64 *a1, ACCESS_MASK a2, int a3, __int64 a4, char a5)
{
  int inserted; // esi
  _DWORD *v9; // rbx
  PVOID PoolWithTag; // rax
  __int64 v12; // [rsp+20h] [rbp-48h]
  PVOID Object; // [rsp+50h] [rbp-18h] BYREF
  __int64 v14; // [rsp+58h] [rbp-10h] BYREF

  Object = 0LL;
  inserted = ObCreateObjectEx(a5, ObpSymbolicLinkObjectType, a3, a5, v12, 40, 0, 0, &Object, 0LL);
  if ( inserted < 0 )
  {
    v9 = Object;
  }
  else
  {
    v9 = Object;
    *(_QWORD *)Object = MEMORY[0xFFFFF78000000014];
    v9[6] = 0;
    v9[7] = 0;
    if ( (*(_DWORD *)a4 & 1) != 0 )
    {
      v9[7] = 16;
      *((_QWORD *)v9 + 1) = *(_QWORD *)(a4 + 8);
      *((_QWORD *)v9 + 2) = *(_QWORD *)(a4 + 16);
    }
    else
    {
      *((_WORD *)v9 + 5) = *(_WORD *)(a4 + 10);
      *((_WORD *)v9 + 4) = *(_WORD *)(a4 + 8);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)(a4 + 10), 0x746D7953u);
      *((_QWORD *)v9 + 2) = PoolWithTag;
      if ( !PoolWithTag )
      {
        inserted = -1073741801;
        goto LABEL_9;
      }
      memmove(PoolWithTag, *(const void **)(a4 + 16), *(unsigned __int16 *)(a4 + 10));
    }
    if ( RtlIsSandboxedToken(0LL, a5) )
      v9[7] |= 2u;
    inserted = ObInsertObjectEx(v9, 0LL, a2, 0, 0, 0LL, &v14);
    v9 = 0LL;
    Object = 0LL;
    if ( inserted >= 0 )
    {
      *a1 = v14;
      inserted = 0;
    }
  }
LABEL_9:
  if ( v9 )
    ObfDereferenceObject(v9);
  return (unsigned int)inserted;
}
