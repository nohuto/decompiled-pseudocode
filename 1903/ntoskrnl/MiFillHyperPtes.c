/*
 * XREFs of MiFillHyperPtes @ 0x14001F650
 * Callers:
 *     MiMakeHyperRangeAccessible @ 0x1400524E0 (MiMakeHyperRangeAccessible.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x140021630 (MiMakeSystemAddressValid.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MiMakeHyperPteDemandZero @ 0x1401238A0 (MiMakeHyperPteDemandZero.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

struct _KTHREAD *__fastcall MiFillHyperPtes(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v6; // r10
  unsigned __int64 *v7; // r9
  struct _KTHREAD *result; // rax
  ULONG_PTR *v9; // rsi
  ULONG_PTR v10; // rbx
  ULONG_PTR v11; // rdi
  _KPROCESS *Process; // r14
  __int64 v13; // rdx
  ULONG_PTR *v14; // [rsp+30h] [rbp-98h]
  __int64 v15; // [rsp+38h] [rbp-90h]
  char v16; // [rsp+48h] [rbp-80h] BYREF
  char v17; // [rsp+78h] [rbp-50h] BYREF

  v4 = 4LL;
  v15 = 4LL;
  v6 = 4LL;
  v7 = (unsigned __int64 *)&v16;
  do
  {
    *(v7 - 1) = a1;
    *v7 = a2;
    a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    result = (struct _KTHREAD *)0xFFFFF68000000000LL;
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v7 += 2;
    --v6;
  }
  while ( v6 );
  v9 = (ULONG_PTR *)&v17;
  v14 = (ULONG_PTR *)&v17;
  do
  {
    v10 = *(v9 - 1);
    v11 = *v9;
    if ( *(_DWORD *)a4 )
    {
      result = KeGetCurrentThread();
      Process = result->ApcState.Process;
      if ( v10 <= v11 )
      {
        do
        {
          MiMakeSystemAddressValid(v10, 0);
          do
          {
            if ( !MI_READ_PTE_LOCK_FREE(v10) )
              MiMakeHyperPteDemandZero(v10, v13, a4);
            v10 += 8LL;
          }
          while ( v10 <= v11 && (v10 & 0xFFF) != 0 );
          result = (struct _KTHREAD *)MiUnlockPageTableInternal(&Process[1].IdealNode[6]);
        }
        while ( v10 <= v11 );
        v9 = v14;
        v4 = v15;
      }
    }
    else
    {
      *(_QWORD *)(a4 + 8) += ((__int64)(v11 - v10) >> 3) + 1;
    }
    v9 -= 2;
    --v4;
    v14 = v9;
    v15 = v4;
  }
  while ( v4 );
  return result;
}
