/*
 * XREFs of ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z @ 0x1C002A360
 * Callers:
 *     BuildHwndList @ 0x1C002A170 (BuildHwndList.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

struct tagBWL *__fastcall InternalRebuildHwndListForIMEClass(struct tagBWL *a1)
{
  struct tagBWL *v1; // r13
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD *v4; // r12
  _QWORD *v5; // r15
  unsigned __int64 v6; // rbx
  char *v7; // rsi
  __int64 *v8; // r14
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int16 v10; // di
  __int64 v11; // r9
  __int64 v12; // r8
  unsigned __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 *v15; // rbp
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 *v18; // rax
  __int64 v19; // rcx
  signed __int64 v20; // rsi

  v1 = a1;
  v4 = (_QWORD *)Win32AllocPool(*((_QWORD *)a1 + 2) - (_QWORD)a1 + 8LL, 1819767637LL);
  v5 = v4;
  if ( v4 )
  {
    v6 = *((_QWORD *)v1 + 4);
    v7 = (char *)v1 + 32;
    v8 = (__int64 *)((char *)v1 + 32);
    if ( v6 != 1 )
    {
      do
      {
        CurrentThread = KeGetCurrentThread();
        v10 = v6;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v3, v2) && PsGetThreadWin32Thread(CurrentThread) )
          v10 = v6;
        v12 = v10;
        if ( (unsigned __int64)v10 < *(_QWORD *)(gpsi + 8LL)
          && ((v13 = v6 >> 16,
               v14 = gSharedInfo[1] + (unsigned int)v10 * LODWORD(gSharedInfo[2]),
               v2 = 3 * ((__int64)(unsigned int)(v12 * LODWORD(gSharedInfo[2])) >> 5),
               v15 = (__int64 *)(gpKernelHandleTable + 24
                                                     * ((__int64)(unsigned int)(v12 * LODWORD(gSharedInfo[2])) >> 5)),
               (_WORD)v13 == *(_WORD *)(v14 + 26))
           || (_WORD)v13 == 0xFFFF
           || !(_WORD)v13 && PsGetCurrentProcessWow64Process(gpKernelHandleTable, v2, v12, v11))
          && (*(_BYTE *)(v14 + 25) & 1) == 0
          && *(_BYTE *)(v14 + 24) == 1
          && (v16 = *v15) != 0 )
        {
          while ( 1 )
          {
            v17 = *(_QWORD *)(*(_QWORD *)(v16 + 112) + 8LL);
            if ( (*(_BYTE *)(v17 + 10) & 1) != 0 )
              break;
            v2 = gpsi;
            if ( *(_WORD *)v17 == *(_WORD *)(gpsi + 898LL) )
              break;
            v16 = *(_QWORD *)(v16 + 96);
            if ( !v16 )
              goto LABEL_17;
          }
        }
        else
        {
LABEL_17:
          v16 = 0LL;
        }
        v3 = *v8;
        if ( v16 )
        {
          *v5++ = v3;
        }
        else
        {
          *(_QWORD *)v7 = v3;
          v7 += 8;
        }
        v6 = v8[1];
        ++v8;
      }
      while ( v6 != 1 );
      v1 = a1;
    }
    v18 = v4;
    *v5 = 0LL;
    v19 = *v4;
    if ( *v4 )
    {
      v20 = v7 - (char *)v4;
      do
      {
        *(__int64 *)((char *)v18++ + v20) = v19;
        v19 = *v18;
      }
      while ( *v18 );
    }
    Win32FreePool(v4);
  }
  return v1;
}
