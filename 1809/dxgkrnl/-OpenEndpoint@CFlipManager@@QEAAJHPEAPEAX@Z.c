/*
 * XREFs of ?OpenEndpoint@CFlipManager@@QEAAJHPEAPEAX@Z @ 0x1C005A64C
 * Callers:
 *     ?OpenEndpoint@FlipManagerObject@@QEAAJ_NPEAPEAX1@Z @ 0x1C0059518 (-OpenEndpoint@FlipManagerObject@@QEAAJ_NPEAPEAX1@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipManager::OpenEndpoint(CFlipManager *this, int a2, void **a3)
{
  unsigned __int64 v6; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 CurrentProcess; // rdi
  __int64 v9; // rax
  NTSTATUS v10; // ebx
  HANDLE v11; // rcx
  HANDLE Handle; // [rsp+78h] [rbp+20h] BYREF

  Handle = 0LL;
  v6 = -(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( a2
    || (Global = DXGGLOBAL::GetGlobal((__int64)this), !(*(unsigned int (**)(void))(*((_QWORD *)Global + 2541) + 256LL))()) )
  {
    CurrentProcess = PsGetCurrentProcess();
  }
  else
  {
    CurrentProcess = (unsigned int)(a2 + 1);
  }
  v9 = *(_QWORD *)((char *)this + v6 + 48);
  if ( !v9 || v9 == CurrentProcess )
  {
    v10 = ObOpenObjectByPointer(
            *(PVOID *)((char *)this + (a2 != 0 ? 8 : 0) + 232),
            0,
            0LL,
            0x100000u,
            (POBJECT_TYPE)ExEventObjectType,
            1,
            &Handle);
    if ( v10 >= 0 )
    {
      if ( a2 )
        *((_QWORD *)this + 5) = CurrentProcess;
      else
        *((_QWORD *)this + 6) = CurrentProcess;
      v11 = 0LL;
      *a3 = Handle;
      Handle = 0LL;
      goto LABEL_9;
    }
  }
  else
  {
    v10 = -1073741790;
  }
  v11 = Handle;
LABEL_9:
  if ( v11 )
    ObCloseHandle(v11, 1);
  return (unsigned int)v10;
}
