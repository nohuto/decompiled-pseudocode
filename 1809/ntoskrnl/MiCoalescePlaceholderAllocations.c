/*
 * XREFs of MiCoalescePlaceholderAllocations @ 0x140852C58
 * Callers:
 *     MmFreeVirtualMemory @ 0x1405F04F0 (MmFreeVirtualMemory.c)
 * Callees:
 *     MiDeleteVad @ 0x140065E00 (MiDeleteVad.c)
 *     MiReferenceVad @ 0x140075590 (MiReferenceVad.c)
 *     MiUnlockVad @ 0x1400784A0 (MiUnlockVad.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140088CC8 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiRemovePlaceholderVad @ 0x1402C50AC (MiRemovePlaceholderVad.c)
 *     MiUnlockVadRange @ 0x140605A50 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x140605B60 (MiLockVadRange.c)
 *     MiCheckSecuredVad @ 0x140619974 (MiCheckSecuredVad.c)
 */

__int64 __fastcall MiCoalescePlaceholderAllocations(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  char v4; // di
  unsigned __int64 v7; // r12
  unsigned __int64 Address; // rax
  __int64 v9; // rsi
  ULONG_PTR i; // rbx
  int v11; // r15d
  __int64 v12; // rax
  int v13; // edi
  _QWORD **v14; // rax
  ULONG_PTR v15; // r13
  ULONG_PTR v16; // rcx
  _QWORD *v17; // rcx
  _QWORD *v18; // rbx
  unsigned int *v19; // r14
  _QWORD *v20; // rax
  _QWORD *v21; // rcx
  __int64 j; // rbx
  unsigned __int64 v23; // rdi
  _QWORD *v24; // rax
  _QWORD *v25; // rcx
  __int64 k; // rdi
  __int64 v27; // rcx
  unsigned int *v28; // rcx
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp+18h]

  v4 = a4;
  CurrentThread = KeGetCurrentThread();
  v7 = MiLockVadRange(a1, a2, a3 & 0xFFFFFFFFFFFFF000uLL, 1);
  if ( v7 >= 2 )
  {
    Address = MiLocateAddress(a2);
    v9 = Address;
    if ( (*(unsigned int *)(Address + 24) | ((unsigned __int64)*(unsigned __int8 *)(Address + 32) << 32)) << 12 == a2 )
    {
      i = Address;
      v11 = 0;
      while ( 1 )
      {
        v12 = *(unsigned int *)(i + 52);
        LODWORD(v12) = v12 & 0x7FFFFFFF;
        if ( (v12 | ((unsigned __int64)*(unsigned __int8 *)(i + 34) << 31)) != 0x7FFFFFFFDLL )
          break;
        if ( (*(_DWORD *)(i + 48) & 0x8000000) != 0 )
        {
          v13 = MiCheckSecuredVad(
                  i,
                  (*(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32)) << 12,
                  ((*(unsigned int *)(i + 28) | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32))
                 - (*(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32))
                 + 1) << 12,
                  0x55u,
                  v4);
          if ( v13 < 0 )
            goto LABEL_39;
          v4 = a4;
        }
        v14 = *(_QWORD ***)(i + 8);
        v15 = i;
        v16 = i;
        if ( v14 )
        {
          v17 = *v14;
          for ( i = *(_QWORD *)(i + 8); v17; v17 = (_QWORD *)*v17 )
            i = (ULONG_PTR)v17;
        }
        else
        {
          while ( 1 )
          {
            i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !i || *(_QWORD *)i == v16 )
              break;
            v16 = i;
          }
        }
        if ( (unsigned int)++v11 >= v7 )
        {
          if ( (((*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32)) << 12) | 0xFFF) != a3 )
            break;
          v18 = *(_QWORD **)(v9 + 8);
          v19 = 0LL;
          v20 = (_QWORD *)v9;
          if ( v18 )
          {
            v21 = (_QWORD *)*v18;
            if ( *v18 )
            {
              do
              {
                v18 = v21;
                v21 = (_QWORD *)*v21;
              }
              while ( v21 );
            }
          }
          else
          {
            for ( j = *(_QWORD *)(v9 + 16); ; j = v18[2] )
            {
              v18 = (_QWORD *)(j & 0xFFFFFFFFFFFFFFFCuLL);
              if ( !v18 || (_QWORD *)*v18 == v20 )
                break;
              v20 = v18;
            }
          }
          while ( 1 )
          {
            v23 = v18[1];
            v24 = v18;
            if ( v23 )
            {
              v25 = *(_QWORD **)v23;
              if ( *(_QWORD *)v23 )
              {
                do
                {
                  v23 = (unsigned __int64)v25;
                  v25 = (_QWORD *)*v25;
                }
                while ( v25 );
              }
            }
            else
            {
              for ( k = v18[2]; ; k = *(_QWORD *)(v23 + 16) )
              {
                v23 = k & 0xFFFFFFFFFFFFFFFCuLL;
                if ( !v23 || *(_QWORD **)v23 == v24 )
                  break;
                v24 = (_QWORD *)v23;
              }
            }
            MiReferenceVad((__int64)v18);
            MiRemovePlaceholderVad(v27);
            *v18 = v19;
            v19 = (unsigned int *)v18;
            if ( v18 == (_QWORD *)v15 )
              break;
            v18 = (_QWORD *)v23;
          }
          *(_DWORD *)(v9 + 28) = a3 >> 12;
          *(_BYTE *)(v9 + 33) = a3 >> 44;
          UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, a1);
          do
          {
            v28 = v19;
            v19 = *(unsigned int **)v19;
            MiDeleteVad(v28, 0LL, 0x40000000);
          }
          while ( v19 );
          MiUnlockVad((__int64)CurrentThread, v9);
          return 0;
        }
      }
    }
  }
  v13 = -1073741800;
LABEL_39:
  MiUnlockVadRange(a1, a2, v7, 1);
  return (unsigned int)v13;
}
