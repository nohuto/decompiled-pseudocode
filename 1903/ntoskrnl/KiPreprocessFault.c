/*
 * XREFs of KiPreprocessFault @ 0x140016318
 * Callers:
 *     KiDispatchException @ 0x140015DB0 (KiDispatchException.c)
 * Callees:
 *     KiOpDecode @ 0x140015A94 (KiOpDecode.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KiOpPreprocessSecureFault @ 0x1402A5EB0 (KiOpPreprocessSecureFault.c)
 *     KiCheckForAtlThunk @ 0x1402B3704 (KiCheckForAtlThunk.c)
 */

char __fastcall KiPreprocessFault(ULONG_PTR a1, ULONG_PTR a2, char a3)
{
  __int16 v6; // ax
  void *v7; // rcx
  void *v8; // rdx
  bool v9; // cf
  int v10; // esi
  int v11; // eax
  __int64 v12; // rbp
  char v13; // di
  unsigned __int16 v15; // ax
  struct _KTHREAD *CurrentThread; // rcx
  void *v17; // rax
  unsigned __int16 SListFaultCount; // ax
  _QWORD v19[14]; // [rsp+30h] [rbp-78h] BYREF

  memset(v19, 0, 0x68uLL);
  switch ( *(_DWORD *)a1 )
  {
    case 0x10000001:
      v10 = 0x80000000;
      break;
    case 0x10000002:
      v10 = 0x40000000;
      *(_DWORD *)a1 = -1073741795;
      goto LABEL_10;
    case 0x10000003:
      v10 = 0x20000000;
      *(_DWORD *)a1 = -1073741676;
      goto LABEL_10;
    case 0x10000004:
LABEL_5:
      v6 = *(_WORD *)(a2 + 56);
      if ( v6 == 16 )
      {
        v7 = &ExpInterlockedPopEntrySListFault;
        v8 = &ExpInterlockedPopEntrySListResume;
      }
      else
      {
        if ( v6 != 51 )
          goto LABEL_8;
        v7 = (void *)KeUserPopEntrySListFault;
        v8 = (void *)KeUserPopEntrySListResume;
      }
      if ( *(void **)(a2 + 248) != v7 )
      {
LABEL_8:
        v9 = *(_DWORD *)(a1 + 24) < 2u;
        v10 = 0x10000000;
        *(_DWORD *)a1 = -1073741819;
        if ( v9 || (*(_BYTE *)(a1 + 32) & 8) == 0 )
          goto LABEL_10;
        if ( a3 )
        {
          v10 = 0x8000000;
          goto LABEL_10;
        }
        return 0;
      }
      if ( v6 != 16 )
      {
        CurrentThread = KeGetCurrentThread();
        v17 = *(void **)(a1 + 40);
        if ( v17 == CurrentThread->SListFaultAddress )
        {
          SListFaultCount = CurrentThread->SListFaultCount;
          if ( SListFaultCount > 0x400u )
          {
            CurrentThread->SListFaultCount = 0;
            goto LABEL_8;
          }
          v15 = SListFaultCount + 1;
        }
        else
        {
          CurrentThread->SListFaultAddress = v17;
          v15 = 0;
        }
        CurrentThread->SListFaultCount = v15;
      }
      *(_QWORD *)(a2 + 248) = v8;
      return 1;
    case 0x10000006:
      if ( (unsigned __int8)KiOpPreprocessSecureFault(a1, a2) )
        return 1;
      goto LABEL_5;
    case 0x10000007:
      v10 = 0x4000000;
      break;
    default:
      return 0;
  }
  *(_DWORD *)a1 = -1073741819;
LABEL_10:
  v11 = KiOpDecode(a1, a2, a3, v10, v19);
  if ( v11 < 0 )
  {
    v12 = 0LL;
  }
  else
  {
    v12 = v19[11];
    if ( v19[11] )
      v11 = (*(__int64 (__fastcall **)(_QWORD *))(v19[11] + 16LL))(v19);
  }
  v13 = 0;
  if ( v11 < 0 || !v12 || (v13 = v19[12]) == 0 )
  {
    if ( v10 == 0x80000000 )
    {
      if ( *(_DWORD *)a1 == -1073741819 && !BYTE1(v19[12]) )
      {
        *(_DWORD *)(a1 + 24) = 2;
        *(_QWORD *)(a1 + 40) = -1LL;
        *(_QWORD *)(a1 + 32) = 0LL;
      }
    }
    else if ( v10 == 0x8000000 && (int)KiCheckForAtlThunk(v19) >= 0 )
    {
      return v19[12];
    }
  }
  return v13;
}
