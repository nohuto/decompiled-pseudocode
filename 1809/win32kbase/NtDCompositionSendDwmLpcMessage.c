/*
 * XREFs of NtDCompositionSendDwmLpcMessage @ 0x1C00AD8C0
 * Callers:
 *     <none>
 * Callees:
 *     GreUnlockDwmState @ 0x1C002AA20 (GreUnlockDwmState.c)
 *     UserReferenceDwmProcess @ 0x1C00487F0 (UserReferenceDwmProcess.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C0048854 (CheckOrAcquireDwmStateLock.c)
 *     UserReferenceDwmApiPort @ 0x1C00488E0 (UserReferenceDwmApiPort.c)
 *     UserDereferenceDwmProcess @ 0x1C0071530 (UserDereferenceDwmProcess.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

__int64 __fastcall NtDCompositionSendDwmLpcMessage(char *Src, size_t Size)
{
  PVOID v4; // r12
  signed int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r14
  size_t *v9; // r13
  __int64 CurrentProcess; // rax
  signed int v11; // eax
  __int64 i; // rcx
  void *v13; // rcx
  int v15; // [rsp+38h] [rbp-110h]
  char v16; // [rsp+40h] [rbp-108h]
  struct _KPROCESS *PROCESS; // [rsp+48h] [rbp-100h]
  _DWORD *v18; // [rsp+50h] [rbp-F8h]
  _DWORD *v19; // [rsp+58h] [rbp-F0h]
  PVOID v20; // [rsp+60h] [rbp-E8h]
  size_t v21; // [rsp+68h] [rbp-E0h]
  void *v22; // [rsp+70h] [rbp-D8h]
  char *v23; // [rsp+80h] [rbp-C8h]
  size_t v24; // [rsp+88h] [rbp-C0h]
  _DWORD v25[20]; // [rsp+90h] [rbp-B8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E0h] [rbp-68h] BYREF

  v22 = Src;
  v23 = Src;
  v24 = Size;
  v21 = Size;
  v18 = 0LL;
  v19 = 0LL;
  v4 = 0LL;
  v20 = 0LL;
  PROCESS = 0LL;
  v16 = 0;
  memset(v25, 0, 0x48uLL);
  v5 = Size > 0x20 ? 0xC000000D : 0;
  if ( Size <= 0x20 )
  {
    if ( &Src[Size] < Src || (unsigned __int64)&Src[Size] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(&v25[10], Src, Size);
  }
  v6 = 0LL;
  if ( Size <= 0x20 )
  {
    if ( v25[10] == 1073741899 )
    {
      if ( Size == 32 )
      {
        v18 = &v25[11];
        v6 = 1LL;
        goto LABEL_23;
      }
    }
    else
    {
      if ( v25[10] == 1073741941 )
      {
        if ( Size == 28 )
        {
          v18 = &v25[13];
          v19 = &v25[15];
        }
        else
        {
          v5 = -1073741811;
        }
        if ( v21 == 28 )
          v6 = 2LL;
        goto LABEL_23;
      }
      if ( (unsigned int)(v25[10] - 1073741944) <= 1 )
      {
        if ( Size == 28 )
          v18 = &v25[13];
        else
          v5 = -1073741811;
        LOBYTE(v6) = Size == 28;
LABEL_23:
        if ( v5 >= 0 )
        {
          v4 = UserReferenceDwmApiPort();
          v20 = v4;
          if ( !v4 )
            v5 = -1073741823;
        }
        goto LABEL_26;
      }
    }
    v5 = -1073741811;
    goto LABEL_23;
  }
LABEL_26:
  if ( v5 >= 0 )
  {
    if ( CheckOrAcquireDwmStateLock() )
    {
      v16 = 1;
    }
    else
    {
      v16 = 0;
      v5 = -1073741823;
    }
    if ( v5 >= 0 )
    {
      PROCESS = (struct _KPROCESS *)UserReferenceDwmProcess();
      if ( !PROCESS )
        v5 = -1073741823;
      if ( v5 >= 0 && v6 )
      {
        v8 = 0LL;
        while ( 1 )
        {
          v9 = (size_t *)(&v18)[v8];
          v21 = *v9;
          if ( v21 )
          {
            CurrentProcess = PsGetCurrentProcess(v7);
            LOBYTE(v15) = 1;
            v5 = ObDuplicateObject(CurrentProcess, v21, PROCESS, v9, 0, 0, 6, v15);
            if ( v5 < 0 )
              break;
          }
          if ( ++v8 >= v6 )
            goto LABEL_44;
        }
        KeStackAttachProcess(PROCESS, &ApcState);
        while ( v8 > 0 )
          ObCloseHandle(*(HANDLE *)(&v18)[--v8], 1);
        KeUnstackDetachProcess(&ApcState);
      }
    }
  }
LABEL_44:
  if ( PROCESS )
    UserDereferenceDwmProcess(PROCESS);
  if ( v16 )
    GreUnlockDwmState();
  if ( v5 >= 0 )
  {
    LOWORD(v25[0]) = Size;
    HIWORD(v25[0]) = Size + 40;
    LOWORD(v25[1]) = 0x8000;
    v11 = LpcRequestWaitReplyPortEx(v4, v25, v25);
    v5 = v11;
    if ( v11 == 192 || v11 == 258 )
      v5 = -1073741823;
    if ( v5 >= 0 )
    {
      if ( v6 )
      {
        for ( i = 0LL; i < v6; ++i )
          *(_QWORD *)(&v18)[i] = 0LL;
      }
      v13 = v22;
      if ( (unsigned __int64)v22 + Size > MmUserProbeAddress || (char *)v22 + Size <= v22 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v13, &v25[10], Size);
    }
  }
  if ( v4 )
    ObfDereferenceObject(v4);
  return (unsigned int)v5;
}
