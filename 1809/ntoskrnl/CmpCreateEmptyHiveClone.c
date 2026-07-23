/*
 * XREFs of CmpCreateEmptyHiveClone @ 0x1407F77D8
 * Callers:
 *     CmpReorganizeHive @ 0x1405A7F70 (CmpReorganizeHive.c)
 * Callees:
 *     CmpHiveInitialize @ 0x1405A817C (CmpHiveInitialize.c)
 *     CmpAllocate @ 0x1405A82D0 (CmpAllocate.c)
 *     ObDuplicateObject @ 0x1405D1B70 (ObDuplicateObject.c)
 *     CmpDestroyHive @ 0x1407F7978 (CmpDestroyHive.c)
 *     HvHiveStartEmptyClone @ 0x1407F8454 (HvHiveStartEmptyClone.c)
 */

__int64 __fastcall CmpCreateEmptyHiveClone(_QWORD *a1, __int64 a2)
{
  char *v4; // rax
  char *v5; // rbx
  int started; // esi
  void **v7; // r14
  unsigned int v8; // ebp
  __int64 v9; // r15
  _QWORD *v10; // rcx
  __int64 v11; // rcx

  v4 = (char *)CmpAllocate(0x12F8uLL, 0, 0x30314D43u);
  v5 = v4;
  if ( v4 )
  {
    CmpHiveInitialize((__int64)v4);
    v7 = (void **)(a2 + 1536);
    v8 = 0;
    *((_DWORD *)v5 + 1038) = *(_DWORD *)(a2 + 4152) & 0xFFFEFFFF;
    v9 = 2LL;
    while ( 1 )
    {
      if ( *v7 )
      {
        started = ObDuplicateObject(
                    (ULONG_PTR)PsInitialSystemProcess,
                    *v7,
                    0LL,
                    (__int64 *)&v5[8 * v8 + 1536],
                    0,
                    512,
                    2,
                    0);
        if ( started < 0 )
          break;
      }
      ++v8;
      ++v7;
      if ( v8 >= 6 )
      {
        v10 = v5 + 1800;
        *((_DWORD *)v5 + 446) = *(_DWORD *)(a2 + 1784);
        *((_QWORD *)v5 + 224) = *(_QWORD *)(a2 + 1792);
        do
        {
          *v10 = *(_QWORD *)((char *)v10 + a2 - (_QWORD)v5);
          ++v10;
          --v9;
        }
        while ( v9 );
        *((_QWORD *)v5 + 522) = *(_QWORD *)(a2 + 4176);
        *((_QWORD *)v5 + 523) = *(_QWORD *)(a2 + 4184);
        *((_QWORD *)v5 + 528) = *(_QWORD *)(a2 + 4224);
        v11 = *(_QWORD *)(a2 + 4848);
        if ( v11 )
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v11 + 24)) <= 1 )
            __fastfail(0xEu);
          *((_QWORD *)v5 + 606) = *(_QWORD *)(a2 + 4848);
        }
        started = HvHiveStartEmptyClone(v5, a2);
        if ( started >= 0 )
        {
          *a1 = v5;
          v5 = 0LL;
          started = 0;
        }
        break;
      }
    }
    if ( v5 )
      CmpDestroyHive(v5);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)started;
}
