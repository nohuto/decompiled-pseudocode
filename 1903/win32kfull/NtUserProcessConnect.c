/*
 * XREFs of NtUserProcessConnect @ 0x1C0025DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z @ 0x1C00262D0 (-InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

NTSTATUS __fastcall NtUserProcessConnect(HANDLE Handle, volatile void *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _OWORD *v7; // rdi
  __int64 ProcessPeb; // r14
  size_t v9; // r12
  _OWORD *v10; // rbx
  int *p_Src; // rax
  __int64 v12; // rcx
  NTSTATUS result; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  PVOID CurrentProcess; // rax
  struct _KPROCESS *v19; // rsi
  int inited; // ebx
  __int64 v21; // rcx
  int v22; // edx
  int v23; // ecx
  signed __int64 v24; // rdi
  _OWORD *v25; // rdi
  char *v26; // rax
  __int64 v27; // rcx
  signed __int32 v28[8]; // [rsp+0h] [rbp-358h] BYREF
  char v29; // [rsp+30h] [rbp-328h]
  PVOID Object; // [rsp+38h] [rbp-320h] BYREF
  _OWORD *v31; // [rsp+40h] [rbp-318h]
  __int64 v32; // [rsp+48h] [rbp-310h]
  volatile void *Address; // [rsp+50h] [rbp-308h]
  volatile void *v34[2]; // [rsp+58h] [rbp-300h]
  volatile void *v35; // [rsp+78h] [rbp-2E0h]
  int Src; // [rsp+B0h] [rbp-2A8h] BYREF
  char v37; // [rsp+B8h] [rbp-2A0h] BYREF
  _KAPC_STATE ApcState; // [rsp+2F0h] [rbp-68h] BYREF

  Address = a2;
  memset(&ApcState, 0, sizeof(ApcState));
  v7 = 0LL;
  ProcessPeb = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_(v4, v3, 3, 16, (__int64)&WPP_d004ad31927635d751620a95da27af8f_Traceguids);
  }
  if ( gpepCSRSS != PsGetCurrentProcess(v4, v3, v5, v6) )
    return -1073741823;
  if ( (int)IsSysEntryApiExtSupported() < 0 )
    return -1073741637;
  v9 = 576LL;
  v10 = Address;
  ProbeForWrite(Address, 0x240uLL, 4u);
  p_Src = &Src;
  v12 = 4LL;
  do
  {
    *(_OWORD *)p_Src = *v10;
    *((_OWORD *)p_Src + 1) = v10[1];
    *((_OWORD *)p_Src + 2) = v10[2];
    *((_OWORD *)p_Src + 3) = v10[3];
    *((_OWORD *)p_Src + 4) = v10[4];
    *((_OWORD *)p_Src + 5) = v10[5];
    *((_OWORD *)p_Src + 6) = v10[6];
    p_Src += 32;
    *((_OWORD *)p_Src - 1) = v10[7];
    v10 += 8;
    --v12;
  }
  while ( v12 );
  *(_OWORD *)p_Src = *v10;
  *((_OWORD *)p_Src + 1) = v10[1];
  *((_OWORD *)p_Src + 2) = v10[2];
  *((_OWORD *)p_Src + 3) = v10[3];
  if ( Src != (unsigned int)SysEntryGetDispatchTableValues() )
    return -1073741811;
  result = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  if ( result >= 0 )
  {
    CurrentProcess = (PVOID)PsGetCurrentProcess(v15, v14, v16, v17);
    v19 = (struct _KPROCESS *)Object;
    if ( Object == CurrentProcess
      || !(unsigned int)PsIsProtectedProcess(Object)
      || (unsigned int)PsIsProtectedProcessLight(v19) )
    {
      v29 = 0;
    }
    else
    {
      v31 = 0LL;
      v34[0] = 0LL;
      v34[1] = 0LL;
      inited = PsAcquireProcessExitSynchronization(v19);
      if ( inited < 0 )
      {
LABEL_17:
        ObfDereferenceObject(Object);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v22) = 4;
          WPP_RECORDER_SF_(v23, v22, 3, 17, (__int64)&WPP_d004ad31927635d751620a95da27af8f_Traceguids);
        }
        return inited;
      }
      v29 = 1;
      ProcessPeb = PsGetProcessPeb(v19);
      v32 = ProcessPeb;
      KeStackAttachProcess(v19, &ApcState);
      _m_prefetchw((const void *)(ProcessPeb + 88));
      v24 = _InterlockedAnd64((volatile signed __int64 *)(ProcessPeb + 88), 0xFFFFFFFFFFFFFFFEuLL);
      v31 = (_OWORD *)v24;
      if ( (v24 & 1) == 0
        || (v25 = (_OWORD *)(v24 & 0xFFFFFFFFFFFFFFFEuLL),
            v31 = v25,
            ProbeForRead(v25, 0x10uLL, 4u),
            *(_OWORD *)v34 = *v25,
            LODWORD(v34[0]) != 568) )
      {
        inited = -1073741823;
LABEL_15:
        if ( v29 )
        {
          KeUnstackDetachProcess(&ApcState);
          PsReleaseProcessExitSynchronization(Object);
        }
        goto LABEL_17;
      }
      v7 = v34[1];
      v35 = v34[1];
      ProbeForWrite(v34[1], 0x238uLL, 4u);
    }
    EnterCrit(0LL, 1LL);
    inited = InitMapSharedSection((struct _EPROCESS *)Object, (struct _USERCONNECT *)&Src);
    UserSessionSwitchLeaveCrit(v21);
    if ( inited >= 0 )
    {
      if ( v29 )
      {
        v26 = &v37;
        v27 = 4LL;
        do
        {
          *v7 = *(_OWORD *)v26;
          v7[1] = *((_OWORD *)v26 + 1);
          v7[2] = *((_OWORD *)v26 + 2);
          v7[3] = *((_OWORD *)v26 + 3);
          v7[4] = *((_OWORD *)v26 + 4);
          v7[5] = *((_OWORD *)v26 + 5);
          v7[6] = *((_OWORD *)v26 + 6);
          v7 += 8;
          *(v7 - 1) = *((_OWORD *)v26 + 7);
          v26 += 128;
          --v27;
        }
        while ( v27 );
        *v7 = *(_OWORD *)v26;
        v7[1] = *((_OWORD *)v26 + 1);
        v7[2] = *((_OWORD *)v26 + 2);
        *((_QWORD *)v7 + 6) = *((_QWORD *)v26 + 6);
        _InterlockedOr(v28, 0);
        *(_QWORD *)(ProcessPeb + 88) = 0LL;
        KeUnstackDetachProcess(&ApcState);
        PsReleaseProcessExitSynchronization(Object);
        v29 = 0;
        v9 = 8LL;
      }
      memmove((void *)Address, &Src, v9);
    }
    goto LABEL_15;
  }
  return result;
}
