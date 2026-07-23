/*
 * XREFs of KiAbCpuBoostOwners @ 0x140025190
 * Callers:
 *     KiAbProcessThreadLocks @ 0x140023C40 (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiAbForceProcessLockEntry @ 0x140166280 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     KiAbSetMinimumThreadPriority @ 0x1400245F0 (KiAbSetMinimumThreadPriority.c)
 */

void __fastcall KiAbCpuBoostOwners(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // rbx
  __int64 v8; // r15
  _QWORD **v11; // rcx
  unsigned __int64 v12; // rax
  _QWORD *i; // rcx
  int v14; // [rsp+60h] [rbp+8h] BYREF
  int v15; // [rsp+68h] [rbp+10h] BYREF

  v15 = 0;
  v6 = *(_QWORD *)(a1 + 56);
  v8 = a5;
  LOBYTE(v15) = a2;
  while ( v6 && *(char *)(v6 + 48) < a2 )
  {
    KiAbSetMinimumThreadPriority(v6, (__int64)&v15, a3, a4, v8, &v14);
    v11 = *(_QWORD ***)(v6 + 8);
    v12 = v6;
    *(_BYTE *)(v6 + 48) = a2;
    if ( v11 )
    {
      v6 = (unsigned __int64)v11;
      for ( i = *v11; i; i = (_QWORD *)*i )
        v6 = (unsigned __int64)i;
    }
    else
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v6 || *(_QWORD *)v6 == v12 )
          break;
        v12 = v6;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 25) & 1) == 0 )
    KiAbSetMinimumThreadPriority(a1, (__int64)&v15, a3, a4, v8, &v14);
}
