/*
 * XREFs of ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z @ 0x1C0070FA0
 * Callers:
 *     BuildHwndList @ 0x1C0070DA0 (BuildHwndList.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

struct tagBWL *__fastcall InternalRebuildHwndListForIMEClass(struct tagBWL *a1)
{
  struct tagBWL *v1; // r13
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD *v4; // r12
  _QWORD *v5; // r15
  unsigned __int64 v6; // rbx
  char *v7; // rdi
  __int64 *v8; // r14
  struct _KTHREAD *CurrentThread; // rsi
  int v10; // r8d
  unsigned __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 *v13; // rbp
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 *v16; // rax
  __int64 v17; // rcx
  signed __int64 v18; // rdi

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
        if ( !(unsigned int)IsThreadCrossSessionAttached(v3, v2) )
          PsGetThreadWin32Thread(CurrentThread);
        v10 = (unsigned __int16)v6;
        if ( (unsigned __int64)(unsigned __int16)v6 < *(_QWORD *)(gpsi + 8LL)
          && ((v11 = v6 >> 16,
               v12 = *((_QWORD *)&gSharedInfo + 1) + (unsigned int)(v10 * *((_DWORD *)&gSharedInfo + 4)),
               v2 = 3 * ((__int64)(unsigned int)(v10 * *((_DWORD *)&gSharedInfo + 4)) >> 5),
               v13 = (__int64 *)(gpKernelHandleTable
                               + 24 * ((__int64)(unsigned int)(v10 * *((_DWORD *)&gSharedInfo + 4)) >> 5)),
               (_WORD)v11 == *(_WORD *)(v12 + 26))
           || (_WORD)v11 == 0xFFFF
           || !(_WORD)v11 && PsGetCurrentProcessWow64Process(gpKernelHandleTable))
          && (*(_BYTE *)(v12 + 25) & 1) == 0
          && *(_BYTE *)(v12 + 24) == 1
          && (v14 = *v13) != 0 )
        {
          while ( 1 )
          {
            v15 = *(_QWORD *)(*(_QWORD *)(v14 + 112) + 8LL);
            if ( (*(_BYTE *)(v15 + 10) & 1) != 0 )
              break;
            v2 = gpsi;
            if ( *(_WORD *)v15 == *(_WORD *)(gpsi + 898LL) )
              break;
            v14 = *(_QWORD *)(v14 + 96);
            if ( !v14 )
              goto LABEL_16;
          }
        }
        else
        {
LABEL_16:
          v14 = 0LL;
        }
        v3 = *v8;
        if ( v14 )
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
    v16 = v4;
    *v5 = 0LL;
    v17 = *v4;
    if ( *v4 )
    {
      v18 = v7 - (char *)v4;
      do
      {
        *(__int64 *)((char *)v16++ + v18) = v17;
        v17 = *v16;
      }
      while ( *v16 );
    }
    Win32FreePool(v4);
  }
  return v1;
}
