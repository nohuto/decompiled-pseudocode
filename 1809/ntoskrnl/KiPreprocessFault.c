/*
 * XREFs of KiPreprocessFault @ 0x1400A33D0
 * Callers:
 *     KiDispatchException @ 0x1400A2E90 (KiDispatchException.c)
 * Callees:
 *     KiOpDecode @ 0x1400A3588 (KiOpDecode.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KiOpPreprocessSecureFault @ 0x14028F6A0 (KiOpPreprocessSecureFault.c)
 *     KiCheckForAtlThunk @ 0x14029C5EC (KiCheckForAtlThunk.c)
 */

char __fastcall KiPreprocessFault(ULONG_PTR a1, ULONG_PTR a2, char a3)
{
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int16 v10; // ax
  void *v11; // rcx
  void *v12; // rdx
  bool v13; // cf
  int v14; // esi
  int v15; // eax
  __int64 v16; // rbp
  char v17; // di
  int v19; // ecx
  unsigned __int16 v20; // ax
  struct _KTHREAD *CurrentThread; // rcx
  void *v22; // rax
  unsigned __int16 SListFaultCount; // ax
  _BYTE v24[88]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v25; // [rsp+88h] [rbp-20h]
  char v26; // [rsp+90h] [rbp-18h]
  char v27; // [rsp+91h] [rbp-17h]

  v6 = *(_DWORD *)a1 - 268435457;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( !v7 )
    {
      v14 = 0x40000000;
      *(_DWORD *)a1 = -1073741795;
      goto LABEL_10;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v14 = 0x20000000;
      *(_DWORD *)a1 = -1073741676;
      goto LABEL_10;
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
LABEL_5:
      v10 = *(_WORD *)(a2 + 56);
      if ( v10 == 16 )
      {
        v11 = &ExpInterlockedPopEntrySListFault;
        v12 = &ExpInterlockedPopEntrySListResume;
      }
      else
      {
        if ( v10 != 51 )
          goto LABEL_8;
        v11 = (void *)KeUserPopEntrySListFault;
        v12 = (void *)KeUserPopEntrySListResume;
      }
      if ( *(void **)(a2 + 248) != v11 )
      {
LABEL_8:
        v13 = *(_DWORD *)(a1 + 24) < 2u;
        v14 = 0x10000000;
        *(_DWORD *)a1 = -1073741819;
        if ( v13 || (*(_BYTE *)(a1 + 32) & 8) == 0 )
          goto LABEL_10;
        if ( a3 )
        {
          v14 = 0x8000000;
          goto LABEL_10;
        }
        return 0;
      }
      if ( v10 != 16 )
      {
        CurrentThread = KeGetCurrentThread();
        v22 = *(void **)(a1 + 40);
        if ( v22 == CurrentThread->SListFaultAddress )
        {
          SListFaultCount = CurrentThread->SListFaultCount;
          if ( SListFaultCount > 0x400u )
          {
            CurrentThread->SListFaultCount = 0;
            goto LABEL_8;
          }
          v20 = SListFaultCount + 1;
        }
        else
        {
          CurrentThread->SListFaultAddress = v22;
          v20 = 0;
        }
        CurrentThread->SListFaultCount = v20;
      }
      *(_QWORD *)(a2 + 248) = v12;
      return 1;
    }
    v19 = v9 - 2;
    if ( !v19 )
    {
      if ( (unsigned __int8)KiOpPreprocessSecureFault(a1, a2) )
        return 1;
      goto LABEL_5;
    }
    if ( v19 != 1 )
      return 0;
    v14 = 0x4000000;
  }
  else
  {
    v14 = 0x80000000;
  }
  *(_DWORD *)a1 = -1073741819;
LABEL_10:
  v15 = KiOpDecode(a1, a2, a3, v14, v24);
  if ( v15 < 0 )
  {
    v16 = 0LL;
  }
  else
  {
    v16 = v25;
    if ( v25 )
      v15 = (*(__int64 (__fastcall **)(_BYTE *))(v25 + 16))(v24);
  }
  v17 = 0;
  if ( v15 < 0 || !v16 || (v17 = v26) == 0 )
  {
    if ( v14 == 0x80000000 )
    {
      if ( *(_DWORD *)a1 == -1073741819 && !v27 )
      {
        *(_DWORD *)(a1 + 24) = 2;
        *(_QWORD *)(a1 + 40) = -1LL;
        *(_QWORD *)(a1 + 32) = 0LL;
      }
    }
    else if ( v14 == 0x8000000 && (int)KiCheckForAtlThunk(v24) >= 0 )
    {
      return v26;
    }
  }
  return v17;
}
