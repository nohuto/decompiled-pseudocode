/*
 * XREFs of KiAbIoBoostOwners @ 0x1400C5B84
 * Callers:
 *     KiAbProcessContextSwitch @ 0x1400423B0 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x1400C5ED0 (KiAbProcessThreadLocks.c)
 *     KiAbForceProcessLockEntry @ 0x14016BC24 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     KiAbSetMinimumThreadPriority @ 0x1400C6EA8 (KiAbSetMinimumThreadPriority.c)
 */

__int64 __fastcall KiAbIoBoostOwners(__int64 a1, char a2, int a3, int a4, __int64 a5)
{
  char v5; // al
  __int64 v7; // r14
  _QWORD *v10; // rbx
  __int64 result; // rax
  _QWORD *v12; // rcx
  __int64 *v13; // rcx
  char v14; // [rsp+60h] [rbp+8h] BYREF
  int v15; // [rsp+68h] [rbp+10h] BYREF

  v15 = 0;
  v5 = 0;
  v7 = a5;
  v10 = *(_QWORD **)(a1 + 56);
  if ( (a2 & 1) != 0 )
    v5 = 2;
  BYTE1(v15) = v5;
  result = BYTE2(v15);
  if ( (a2 & 2) != 0 )
    result = 1LL;
  BYTE2(v15) = result;
  while ( v10 )
  {
    KiAbSetMinimumThreadPriority((_DWORD)v10, (unsigned int)&v15, a3, a4, v7, (__int64)&v14);
    result = v10[1];
    v12 = v10;
    if ( result )
    {
      v13 = *(__int64 **)result;
      v10 = (_QWORD *)v10[1];
      if ( *(_QWORD *)result )
      {
        do
        {
          result = *v13;
          v10 = v13;
          v13 = (__int64 *)result;
        }
        while ( result );
      }
    }
    else
    {
      while ( 1 )
      {
        v10 = (_QWORD *)(v10[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v10 || (_QWORD *)*v10 == v12 )
          break;
        v12 = v10;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 25) & 1) == 0 )
    return KiAbSetMinimumThreadPriority(a1, (unsigned int)&v15, a3, a4, v7, (__int64)&v14);
  return result;
}
