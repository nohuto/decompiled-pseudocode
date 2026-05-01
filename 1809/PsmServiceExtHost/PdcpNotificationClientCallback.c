/*
 * XREFs of PdcpNotificationClientCallback @ 0x180071BB0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180049A1A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 *     PdcPortSendMessage @ 0x180071E9C (PdcPortSendMessage.c)
 */

__int64 __fastcall PdcpNotificationClientCallback(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rbp
  __int64 v6; // rdi
  unsigned int v7; // ebx
  int v8; // eax
  DWORD CurrentThreadId; // eax
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  int v15; // ebx
  __int64 v16; // rcx
  unsigned int v17; // eax
  _BYTE v19[40]; // [rsp+20h] [rbp-328h] BYREF
  int v20; // [rsp+48h] [rbp-300h]
  int v21; // [rsp+58h] [rbp-2F0h]
  int v22; // [rsp+60h] [rbp-2E8h]

  if ( a1 )
  {
    if ( (unsigned int)(*(_DWORD *)(a2 + 40) - 2) > 1 )
      return (unsigned int)-1073740030;
    if ( *(_DWORD *)a1 == 1315136592 )
    {
      v5 = a1 + 8;
      AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
      *(_DWORD *)(v5 + 8) = GetCurrentThreadId();
      if ( *(_BYTE *)(a1 + 80) )
      {
        if ( *(_DWORD *)(a2 + 40) == 3 )
        {
          if ( !*(_DWORD *)(a1 + 92) )
          {
            if ( *(_QWORD *)(a1 + 72) )
            {
              v6 = *(_QWORD *)(a1 + 40);
              *(_DWORD *)(a1 + 92) = 1;
              v7 = *(_DWORD *)(a2 + 56);
              *(_DWORD *)(v5 + 8) = 0;
              ReleaseSRWLockExclusive((PSRWLOCK)v5);
              (*(void (__fastcall **)(__int64, _QWORD))(a1 + 72))(v6, v7);
              AcquireSRWLockExclusive((PSRWLOCK)v5);
              *(_DWORD *)(v5 + 8) = GetCurrentThreadId();
              --*(_DWORD *)(a1 + 92);
            }
            v4 = 0;
            goto LABEL_22;
          }
        }
        else if ( !*(_DWORD *)(a1 + 88) )
        {
          v8 = *(_DWORD *)(a2 + 64);
          v4 = 0;
          *(_BYTE *)(a1 + 96) = 0;
          *(_DWORD *)(a1 + 88) = 1;
          *(_DWORD *)(a1 + 84) = v8;
          CurrentThreadId = GetCurrentThreadId();
          v10 = *(_QWORD *)(a1 + 32);
          *(_DWORD *)(a1 + 100) = CurrentThreadId;
          *(_DWORD *)(v10 + 156) = GetCurrentThreadId();
          *(_DWORD *)(v5 + 8) = 0;
          ReleaseSRWLockExclusive((PSRWLOCK)v5);
          v12 = *(_QWORD *)(a1 + 40);
          v13 = *(unsigned int *)(a2 + 56);
          if ( *(_DWORD *)(a1 + 48) == 1 )
          {
            v14 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 56))(v12, v13);
          }
          else
          {
            LOBYTE(v11) = *(_BYTE *)(a2 + 60);
            v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 64))(v12, v13, v11);
          }
          v15 = v14;
          AcquireSRWLockExclusive((PSRWLOCK)v5);
          *(_DWORD *)(v5 + 8) = GetCurrentThreadId();
          *(_DWORD *)(*(_QWORD *)(a1 + 32) + 156LL) = 0;
          *(_DWORD *)(a1 + 100) = 0;
          if ( *(_BYTE *)(a1 + 96) )
            v15 = *(_DWORD *)(a1 + 104);
          if ( v15 != 259 )
          {
            memset_0(v19, 0, 0x320uLL);
            v16 = *(_QWORD *)(a1 + 32);
            v22 = *(_DWORD *)(a1 + 84);
            v20 = 2;
            v21 = v15;
            v17 = PdcPortSendMessage(v16, v19);
            --*(_DWORD *)(a1 + 88);
            v4 = v17;
          }
          goto LABEL_22;
        }
        v4 = -1073740030;
      }
      else
      {
        v4 = -1073741431;
      }
LABEL_22:
      *(_DWORD *)(v5 + 8) = 0;
      ReleaseSRWLockExclusive((PSRWLOCK)v5);
      return v4;
    }
  }
  return (unsigned int)-1073741585;
}
