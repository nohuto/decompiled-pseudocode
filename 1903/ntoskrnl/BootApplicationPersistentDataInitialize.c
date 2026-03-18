/*
 * XREFs of BootApplicationPersistentDataInitialize @ 0x140A1B344
 * Callers:
 *     InitBootProcessor @ 0x140A0816C (InitBootProcessor.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall BootApplicationPersistentDataInitialize(__int64 a1)
{
  _QWORD **v1; // rdi
  _QWORD *v2; // rsi
  _QWORD *v3; // rbp
  _QWORD *PoolWithTag; // rbx
  PVOID v5; // rax
  _QWORD *v6; // rax

  qword_140508B10 = &qword_140508B08;
  qword_140508B08 = (__int64)&qword_140508B08;
  v1 = (_QWORD **)(*(_QWORD *)(a1 + 240) + 216LL);
  v2 = *v1;
  while ( v2 != v1 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    if ( *((_DWORD *)v3 + 6) )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1CuLL, 0x64506142u);
      if ( !PoolWithTag )
        return;
      v5 = ExAllocatePoolWithTag(NonPagedPoolNx, *((unsigned int *)v3 + 6), 0x64506142u);
      if ( !v5 )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        return;
      }
      *((_DWORD *)PoolWithTag + 6) = *((_DWORD *)v3 + 6);
      PoolWithTag[2] = v5;
      memmove(v5, (const void *)v3[2], *((unsigned int *)v3 + 6));
      v6 = qword_140508B10;
      if ( *(__int64 **)qword_140508B10 != &qword_140508B08 )
        __fastfail(3u);
      *PoolWithTag = &qword_140508B08;
      PoolWithTag[1] = v6;
      *v6 = PoolWithTag;
      qword_140508B10 = PoolWithTag;
    }
  }
}
