/*
 * XREFs of NtUserProcessConnect @ 0x1C00DEEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z @ 0x1C00DF2DC (-InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

NTSTATUS __fastcall NtUserProcessConnect(HANDLE Handle, volatile void *a2)
{
  _OWORD *v3; // rdi
  __int64 ProcessPeb; // r14
  __int64 v5; // r15
  size_t v6; // r12
  _OWORD *v7; // rbx
  int *p_Src; // rax
  __int64 v9; // rcx
  NTSTATUS result; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID CurrentProcess; // rax
  struct _KPROCESS *v14; // rsi
  int inited; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  signed __int64 v20; // rdi
  _OWORD *v21; // rdi
  char *v22; // rax
  signed __int32 v23[8]; // [rsp+0h] [rbp-358h] BYREF
  char v24; // [rsp+30h] [rbp-328h]
  PVOID Object; // [rsp+38h] [rbp-320h] BYREF
  _OWORD *v26; // [rsp+40h] [rbp-318h]
  __int64 v27; // [rsp+48h] [rbp-310h]
  volatile void *Address; // [rsp+50h] [rbp-308h]
  volatile void *v29[2]; // [rsp+58h] [rbp-300h]
  volatile void *v30; // [rsp+78h] [rbp-2E0h]
  int Src; // [rsp+B0h] [rbp-2A8h] BYREF
  char v32; // [rsp+B8h] [rbp-2A0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+2F0h] [rbp-68h] BYREF

  Address = a2;
  v3 = 0LL;
  ProcessPeb = 0LL;
  if ( gpepCSRSS != PsGetCurrentProcess(Handle, a2) )
    return -1073741823;
  if ( (int)IsSysEntryApiExtSupported() < 0 )
    return -1073741637;
  v5 = 4LL;
  v6 = 576LL;
  v7 = Address;
  ProbeForWrite(Address, 0x240uLL, 4u);
  p_Src = &Src;
  v9 = 4LL;
  do
  {
    *(_OWORD *)p_Src = *v7;
    *((_OWORD *)p_Src + 1) = v7[1];
    *((_OWORD *)p_Src + 2) = v7[2];
    *((_OWORD *)p_Src + 3) = v7[3];
    *((_OWORD *)p_Src + 4) = v7[4];
    *((_OWORD *)p_Src + 5) = v7[5];
    *((_OWORD *)p_Src + 6) = v7[6];
    p_Src += 32;
    *((_OWORD *)p_Src - 1) = v7[7];
    v7 += 8;
    --v9;
  }
  while ( v9 );
  *(_OWORD *)p_Src = *v7;
  *((_OWORD *)p_Src + 1) = v7[1];
  *((_OWORD *)p_Src + 2) = v7[2];
  *((_OWORD *)p_Src + 3) = v7[3];
  if ( Src != (unsigned int)SysEntryGetDispatchTableValues() )
    return -1073741811;
  result = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  if ( result >= 0 )
  {
    CurrentProcess = (PVOID)PsGetCurrentProcess(v12, v11);
    v14 = (struct _KPROCESS *)Object;
    if ( Object == CurrentProcess
      || !(unsigned int)PsIsProtectedProcess(Object)
      || (unsigned int)PsIsProtectedProcessLight(v14) )
    {
      v24 = 0;
    }
    else
    {
      v26 = 0LL;
      v29[0] = 0LL;
      v29[1] = 0LL;
      inited = PsAcquireProcessExitSynchronization(v14);
      if ( inited < 0 )
      {
LABEL_15:
        ObfDereferenceObject(Object);
        return inited;
      }
      v24 = 1;
      ProcessPeb = PsGetProcessPeb(v14);
      v27 = ProcessPeb;
      KeStackAttachProcess(v14, &ApcState);
      _m_prefetchw((const void *)(ProcessPeb + 88));
      v20 = _InterlockedAnd64((volatile signed __int64 *)(ProcessPeb + 88), 0xFFFFFFFFFFFFFFFEuLL);
      v26 = (_OWORD *)v20;
      if ( (v20 & 1) == 0
        || (v21 = (_OWORD *)(v20 & 0xFFFFFFFFFFFFFFFEuLL),
            v26 = v21,
            ProbeForRead(v21, 0x10uLL, 4u),
            *(_OWORD *)v29 = *v21,
            LODWORD(v29[0]) != 568) )
      {
        inited = -1073741823;
LABEL_13:
        if ( v24 )
        {
          KeUnstackDetachProcess(&ApcState);
          PsReleaseProcessExitSynchronization(Object);
        }
        goto LABEL_15;
      }
      v3 = v29[1];
      v30 = v29[1];
      ProbeForWrite(v29[1], 0x238uLL, 4u);
    }
    EnterCrit(0LL, 1LL);
    inited = InitMapSharedSection((struct _EPROCESS *)Object, (struct _USERCONNECT *)&Src);
    UserSessionSwitchLeaveCrit(v17, v16, v18, v19);
    if ( inited >= 0 )
    {
      if ( v24 )
      {
        v22 = &v32;
        do
        {
          *v3 = *(_OWORD *)v22;
          v3[1] = *((_OWORD *)v22 + 1);
          v3[2] = *((_OWORD *)v22 + 2);
          v3[3] = *((_OWORD *)v22 + 3);
          v3[4] = *((_OWORD *)v22 + 4);
          v3[5] = *((_OWORD *)v22 + 5);
          v3[6] = *((_OWORD *)v22 + 6);
          v3 += 8;
          *(v3 - 1) = *((_OWORD *)v22 + 7);
          v22 += 128;
          --v5;
        }
        while ( v5 );
        *v3 = *(_OWORD *)v22;
        v3[1] = *((_OWORD *)v22 + 1);
        v3[2] = *((_OWORD *)v22 + 2);
        *((_QWORD *)v3 + 6) = *((_QWORD *)v22 + 6);
        _InterlockedOr(v23, 0);
        *(_QWORD *)(ProcessPeb + 88) = 0LL;
        KeUnstackDetachProcess(&ApcState);
        PsReleaseProcessExitSynchronization(Object);
        v24 = 0;
        v6 = 8LL;
      }
      memmove((void *)Address, &Src, v6);
    }
    goto LABEL_13;
  }
  return result;
}
