/*
 * XREFs of KiSystemStartup @ 0x140566010
 * Callers:
 *     <none>
 * Callees:
 *     KiIdleLoop @ 0x1401C0680 (KiIdleLoop.c)
 *     KiInitializeBootStructures @ 0x140570E10 (KiInitializeBootStructures.c)
 *     KiInitializeKernel @ 0x140572310 (KiInitializeKernel.c)
 *     KiInitializeXSave @ 0x1405742C0 (KiInitializeXSave.c)
 *     KdInitSystem @ 0x140916140 (KdInitSystem.c)
 */

// write access to const memory has been detected, the output may be wrong!
NTSTATUS __stdcall __noreturn KiSystemStartup(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  unsigned int *v2; // r10
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r8
  __int64 v8; // r8
  unsigned __int64 v10; // rdx
  void *v11; // rsp
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  struct _KTHREAD *CurrentThread; // rcx
  bool v21; // zf

  KeLoaderBlock_0 = (__int64)DriverObject;
  if ( !*((_DWORD *)DriverObject->MajorFunction[3] + 9) )
    KdInitSystem(0xFFFFFFFFLL, KeLoaderBlock_0);
  v2 = *(unsigned int **)(KeLoaderBlock_0 + 136);
  _RDX = v2 - 96;
  *((_QWORD *)_RDX + 3) = _RDX;
  *((_QWORD *)_RDX + 4) = v2;
  v4 = __readcr0();
  *((_QWORD *)v2 + 32) = v4;
  v5 = __readcr2();
  *((_QWORD *)v2 + 33) = v5;
  v6 = __readcr3();
  *((_QWORD *)v2 + 34) = v6;
  v7 = __readcr4();
  *((_QWORD *)v2 + 35) = v7;
  __sgdt((char *)v2 + 342);
  v8 = *((_QWORD *)v2 + 43);
  *(_QWORD *)_RDX = v8;
  __sidt((char *)v2 + 358);
  *((_QWORD *)_RDX + 7) = *((_QWORD *)v2 + 45);
  __asm
  {
    str     word ptr [rdx+2F0h]
    sldt    word ptr [rdx+2F2h]
  }
  *v2 = 8064;
  _mm_setcsr(*v2);
  if ( !v2[9] )
    *(_WORD *)(v8 + 80) = 15360;
  if ( !VslVsmEnabled )
  {
    _AX = 0;
    __asm { lldt    ax }
  }
  *MK_FP(43, _RDX + 2) = *MK_FP(43, v8 + 66);
  *MK_FP(43, (char *)_RDX + 10) = *MK_FP(43, v8 + 68);
  *MK_FP(43, (char *)_RDX + 11) = *MK_FP(43, v8 + 71);
  *MK_FP(43, _RDX + 3) = *MK_FP(43, v8 + 72);
  v10 = (unsigned __int64)_RDX >> 32;
  __writemsr(0xC0000101, __PAIR64__(v10, (int)v2 - 384));
  __writemsr(0xC0000102, __PAIR64__(v10, (int)v2 - 384));
  if ( !*MK_FP(43, v2 + 9) )
  {
    _guard_dispatch_icall_fptr = (__int64 (__fastcall *)())&guard_dispatch_icall;
    _guard_check_icall_fptr[0] = (__int64 (__fastcall *)())guard_check_icall;
  }
  KiInitializeBootStructures(KeLoaderBlock_0);
  if ( !*MK_FP(43, *MK_FP(43, KeLoaderBlock_0 + 136) + 36LL) )
    KdInitSystem(0LL, KeLoaderBlock_0);
  KiInitializeXSave(KeLoaderBlock_0, (unsigned int)*MK_FP(43, *MK_FP(43, KeLoaderBlock_0 + 136) + 36LL));
  __writecr8(0xFuLL);
  v11 = alloca((unsigned int)KiXSaveAreaLength);
  v12 = *MK_FP(43, KeLoaderBlock_0 + 144);
  v13 = *MK_FP(43, KeLoaderBlock_0 + 152);
  if ( (KiKvaShadow & 1) != 0 )
  {
    v14 = *MK_FP(43, *MK_FP(43, &KeGetPcr()->IdtBase) + 4216LL);
    __writegsqword(0x7008u, v14);
  }
  else
  {
    v14 = *MK_FP(43, *MK_FP(43, &KeGetPcr()->TssBase) + 4LL);
  }
  __writegsqword(0x1A8u, v14);
  KiInitializeKernel(v12, v13);
  if ( !*MK_FP(43, &KeGetPcr()->Prcb.Number) )
  {
    v18 = __rdtsc();
    v15 = __ROR8__(v18, 49);
    v19 = __ROL8__(ExpSecurityCookieRandomData ^ v15 ^ v18, 16);
    LOWORD(v19) = 0;
    _security_cookie = __ROR8__(v19, 16);
    _security_cookie_complement = ~_security_cookie;
  }
  CurrentThread = KeGetCurrentThread();
  *MK_FP(43, &CurrentThread->WaitBlockFill11[70]) = 2;
  do
  {
    v21 = KiBarrierWait == 0;
    _mm_pause();
  }
  while ( !v21 );
  KiIdleLoop((__int64)CurrentThread, v15, v16, v17);
}
