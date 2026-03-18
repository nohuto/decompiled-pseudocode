/*
 * XREFs of NtUserProcessConnect @ 0x1C00F94B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z @ 0x1C00F9908 (-InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

NTSTATUS __fastcall NtUserProcessConnect(HANDLE Handle, volatile void *a2, __int64 a3, __int64 a4)
{
  _OWORD *v5; // rdi
  __int64 ProcessPeb; // r14
  __int64 v7; // r15
  size_t v8; // r12
  _OWORD *v9; // rbx
  int *p_Src; // rax
  __int64 v11; // rcx
  NTSTATUS result; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  PVOID CurrentProcess; // rax
  struct _KPROCESS *v18; // rsi
  int inited; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  signed __int64 v24; // rdi
  _OWORD *v25; // rdi
  char *v26; // rax
  signed __int32 v27[8]; // [rsp+0h] [rbp-358h] BYREF
  char v28; // [rsp+30h] [rbp-328h]
  PVOID Object; // [rsp+38h] [rbp-320h] BYREF
  _OWORD *v30; // [rsp+40h] [rbp-318h]
  __int64 v31; // [rsp+48h] [rbp-310h]
  volatile void *Address; // [rsp+50h] [rbp-308h]
  volatile void *v33[2]; // [rsp+58h] [rbp-300h]
  volatile void *v34; // [rsp+78h] [rbp-2E0h]
  int Src; // [rsp+B0h] [rbp-2A8h] BYREF
  char v36; // [rsp+B8h] [rbp-2A0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+2F0h] [rbp-68h] BYREF

  Address = a2;
  v5 = 0LL;
  ProcessPeb = 0LL;
  if ( gpepCSRSS != PsGetCurrentProcess(Handle, a2, a3, a4) )
    return -1073741823;
  if ( (int)IsSysEntryApiExtSupported() < 0 )
    return -1073741637;
  v7 = 4LL;
  v8 = 576LL;
  v9 = Address;
  ProbeForWrite(Address, 0x240uLL, 4u);
  p_Src = &Src;
  v11 = 4LL;
  do
  {
    *(_OWORD *)p_Src = *v9;
    *((_OWORD *)p_Src + 1) = v9[1];
    *((_OWORD *)p_Src + 2) = v9[2];
    *((_OWORD *)p_Src + 3) = v9[3];
    *((_OWORD *)p_Src + 4) = v9[4];
    *((_OWORD *)p_Src + 5) = v9[5];
    *((_OWORD *)p_Src + 6) = v9[6];
    p_Src += 32;
    *((_OWORD *)p_Src - 1) = v9[7];
    v9 += 8;
    --v11;
  }
  while ( v11 );
  *(_OWORD *)p_Src = *v9;
  *((_OWORD *)p_Src + 1) = v9[1];
  *((_OWORD *)p_Src + 2) = v9[2];
  *((_OWORD *)p_Src + 3) = v9[3];
  if ( Src != (unsigned int)SysEntryGetDispatchTableValues() )
    return -1073741811;
  result = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  if ( result >= 0 )
  {
    CurrentProcess = (PVOID)PsGetCurrentProcess(v14, v13, v15, v16);
    v18 = (struct _KPROCESS *)Object;
    if ( Object == CurrentProcess
      || !(unsigned int)PsIsProtectedProcess(Object)
      || (unsigned int)PsIsProtectedProcessLight(v18) )
    {
      v28 = 0;
    }
    else
    {
      v30 = 0LL;
      v33[0] = 0LL;
      v33[1] = 0LL;
      inited = PsAcquireProcessExitSynchronization(v18);
      if ( inited < 0 )
      {
LABEL_15:
        ObfDereferenceObject(Object);
        return inited;
      }
      v28 = 1;
      ProcessPeb = PsGetProcessPeb(v18);
      v31 = ProcessPeb;
      KeStackAttachProcess(v18, &ApcState);
      _m_prefetchw((const void *)(ProcessPeb + 88));
      v24 = _InterlockedAnd64((volatile signed __int64 *)(ProcessPeb + 88), 0xFFFFFFFFFFFFFFFEuLL);
      v30 = (_OWORD *)v24;
      if ( (v24 & 1) == 0
        || (v25 = (_OWORD *)(v24 & 0xFFFFFFFFFFFFFFFEuLL),
            v30 = v25,
            ProbeForRead(v25, 0x10uLL, 4u),
            *(_OWORD *)v33 = *v25,
            LODWORD(v33[0]) != 568) )
      {
        inited = -1073741823;
LABEL_13:
        if ( v28 )
        {
          KeUnstackDetachProcess(&ApcState);
          PsReleaseProcessExitSynchronization(Object);
        }
        goto LABEL_15;
      }
      v5 = v33[1];
      v34 = v33[1];
      ProbeForWrite(v33[1], 0x238uLL, 4u);
    }
    EnterCrit(0LL, 1LL);
    inited = InitMapSharedSection((struct _EPROCESS *)Object, (struct _USERCONNECT *)&Src);
    UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
    if ( inited >= 0 )
    {
      if ( v28 )
      {
        v26 = &v36;
        do
        {
          *v5 = *(_OWORD *)v26;
          v5[1] = *((_OWORD *)v26 + 1);
          v5[2] = *((_OWORD *)v26 + 2);
          v5[3] = *((_OWORD *)v26 + 3);
          v5[4] = *((_OWORD *)v26 + 4);
          v5[5] = *((_OWORD *)v26 + 5);
          v5[6] = *((_OWORD *)v26 + 6);
          v5 += 8;
          *(v5 - 1) = *((_OWORD *)v26 + 7);
          v26 += 128;
          --v7;
        }
        while ( v7 );
        *v5 = *(_OWORD *)v26;
        v5[1] = *((_OWORD *)v26 + 1);
        v5[2] = *((_OWORD *)v26 + 2);
        *((_QWORD *)v5 + 6) = *((_QWORD *)v26 + 6);
        _InterlockedOr(v27, 0);
        *(_QWORD *)(ProcessPeb + 88) = 0LL;
        KeUnstackDetachProcess(&ApcState);
        PsReleaseProcessExitSynchronization(Object);
        v28 = 0;
        v8 = 8LL;
      }
      memmove((void *)Address, &Src, v8);
    }
    goto LABEL_13;
  }
  return result;
}
