/*
 * XREFs of ?AllocateSharedSection@@YAJKKPEAPEAX00@Z @ 0x1C0125320
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C002D110 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     Win32CreateSection @ 0x1C005FB08 (Win32CreateSection.c)
 *     ?MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z @ 0x1C0061440 (-MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z.c)
 */

__int64 __fastcall AllocateSharedSection(unsigned int a1, __int64 a2, void **a3, void **a4, void **a5)
{
  void **v5; // r14
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbp
  struct _EPROCESS *CurrentProcess; // rax
  int v13; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // esi
  __int64 v18; // rax
  __int64 v19; // [rsp+20h] [rbp-48h]
  PEPROCESS Process; // [rsp+80h] [rbp+18h] BYREF

  v5 = a5;
  a5 = (void **)a1;
  *v5 = 0LL;
  *a3 = 0LL;
  *a4 = 0LL;
  result = Win32CreateSection(a3, 6LL, (__int64)a3, (__int64)&a5, v19, 138412032);
  if ( (int)result >= 0 )
  {
    v11 = (unsigned int)a5;
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v10, v9);
    v13 = MapKernelSectionForUserMapping(*a3, CurrentProcess, (unsigned int)v11, v5);
    if ( v13 < 0 )
    {
      if ( *a3 )
      {
        ObfDereferenceObject(*a3);
        *a3 = 0LL;
        return (unsigned int)v13;
      }
LABEL_8:
      KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v17 = PsLookupProcessByProcessId((HANDLE)*(int *)(*(_QWORD *)(ThreadWin32Thread + 72) + 8LL), &Process);
    if ( v17 < 0
      || (v17 = MapKernelSectionForUserMapping(*a3, Process, v11, a4), ObfDereferenceObject(Process), v17 < 0) )
    {
      v18 = PsGetCurrentProcess(v16, v15);
      MmUnmapViewOfSection(v18);
      if ( !*a3 )
        goto LABEL_8;
      ObfDereferenceObject(*a3);
      *a3 = 0LL;
      *v5 = 0LL;
    }
    return (unsigned int)v17;
  }
  return result;
}
