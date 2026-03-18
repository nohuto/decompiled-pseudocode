/*
 * XREFs of KiAbCpuBoostOwners @ 0x1400C5C80
 * Callers:
 *     KiAbProcessContextSwitch @ 0x1400423B0 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x1400C5ED0 (KiAbProcessThreadLocks.c)
 *     KiAbForceProcessLockEntry @ 0x14016BC24 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     KiAbSetMinimumThreadPriority @ 0x1400C6EA8 (KiAbSetMinimumThreadPriority.c)
 */

void __fastcall KiAbCpuBoostOwners(__int64 a1, char a2, int a3, int a4, __int64 a5)
{
  unsigned __int64 i; // rbx
  __int64 v8; // r15
  _QWORD **v11; // rax
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rcx
  char v14; // [rsp+60h] [rbp+8h] BYREF
  int v15; // [rsp+68h] [rbp+10h] BYREF

  v15 = 0;
  i = *(_QWORD *)(a1 + 56);
  v8 = a5;
  LOBYTE(v15) = a2;
  while ( i && *(char *)(i + 48) < a2 )
  {
    KiAbSetMinimumThreadPriority(i, (unsigned int)&v15, a3, a4, v8, (__int64)&v14);
    v11 = *(_QWORD ***)(i + 8);
    v12 = i;
    *(_BYTE *)(i + 48) = a2;
    if ( v11 )
    {
      v13 = *v11;
      for ( i = (unsigned __int64)v11; v13; v13 = (_QWORD *)*v13 )
        i = (unsigned __int64)v13;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v12 )
          break;
        v12 = i;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 25) & 1) == 0 )
    KiAbSetMinimumThreadPriority(a1, (unsigned int)&v15, a3, a4, v8, (__int64)&v14);
}
