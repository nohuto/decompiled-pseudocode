/*
 * XREFs of ?AllocateSharedSection@@YAJKKPEAPEAX00@Z @ 0x1C00F88F8
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00440A0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     ?MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z @ 0x1C005DE2C (-MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z.c)
 *     Win32CreateSection @ 0x1C006CD4C (Win32CreateSection.c)
 */

__int64 __fastcall AllocateSharedSection(unsigned int a1, __int64 a2, void **a3, void **a4, void **a5)
{
  void **v5; // r14
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rbp
  struct _EPROCESS *CurrentProcess; // rax
  int v12; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rcx
  int v15; // esi
  void *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // [rsp+20h] [rbp-48h]
  PEPROCESS Process; // [rsp+80h] [rbp+18h] BYREF

  v5 = a5;
  a5 = (void **)a1;
  *v5 = 0LL;
  *a3 = 0LL;
  *a4 = 0LL;
  result = Win32CreateSection(a3, 6LL, (__int64)a3, (__int64)&a5, v18, 138412032);
  if ( (int)result >= 0 )
  {
    v10 = (unsigned int)a5;
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v9);
    v12 = MapKernelSectionForUserMapping(*a3, CurrentProcess, (unsigned int)v10, v5);
    if ( v12 < 0 )
    {
      if ( *a3 )
      {
        ObfDereferenceObject(*a3);
        *a3 = 0LL;
        return (unsigned int)v12;
      }
LABEL_8:
      KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v15 = PsLookupProcessByProcessId((HANDLE)*(int *)(*(_QWORD *)(ThreadWin32Thread + 72) + 8LL), &Process);
    if ( v15 < 0
      || (v15 = MapKernelSectionForUserMapping(*a3, Process, v10, a4), ObfDereferenceObject(Process), v15 < 0) )
    {
      v16 = *v5;
      v17 = PsGetCurrentProcess(v14);
      MmUnmapViewOfSection(v17, v16);
      if ( !*a3 )
        goto LABEL_8;
      ObfDereferenceObject(*a3);
      *a3 = 0LL;
      *v5 = 0LL;
    }
    return (unsigned int)v15;
  }
  return result;
}
