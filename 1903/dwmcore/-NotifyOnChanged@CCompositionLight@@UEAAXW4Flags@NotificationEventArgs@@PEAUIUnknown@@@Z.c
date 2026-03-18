/*
 * XREFs of ?NotifyOnChanged@CCompositionLight@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800B65E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionLight::NotifyOnChanged(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbp
  char v6; // r12
  int v7; // ecx
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rdx
  unsigned __int64 *v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx

  v3 = a3;
  if ( a3 && a3 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 208LL))(a1) )
  {
    if ( a2 == 1 )
      return;
    a2 = 11;
    v3 = a1;
  }
  else if ( a2 != 11 && a2 != 1 )
  {
    return;
  }
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 264LL))(a1);
  if ( !v6 || !*(_BYTE *)(a1 + 160) )
  {
    v7 = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 32) = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(v7 + 2)) & 6;
    if ( (((unsigned __int8)v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(v7 + 2)) & 6) & 6) == 2
      && (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 184LL))(a1, a2, v3) )
    {
      v8 = *(_QWORD *)(a1 + 24);
      if ( (v8 & 2) != 0 )
        v8 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v8) = v8 & 1;
      if ( (_DWORD)v8 )
      {
        v9 = 0LL;
        v10 = (unsigned int)v8;
        v11 = 2LL;
        do
        {
          v12 = *(_QWORD *)(a1 + 24);
          v13 = (unsigned __int64 *)(v12 & 0xFFFFFFFFFFFFFFFCuLL);
          if ( (v12 & 2) != 0 )
            v14 = *v13;
          else
            v14 = v12 & 1;
          if ( v9 >= v14 )
          {
            v15 = 0LL;
          }
          else if ( v14 == 1 )
          {
            v15 = v12 & 0xFFFFFFFFFFFFFFFCuLL;
          }
          else
          {
            v15 = v13[v11];
          }
          (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64))(*(_QWORD *)a1 + 72LL))(a1, v15, a2, v3);
          ++v9;
          ++v11;
          --v10;
        }
        while ( v10 );
      }
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
    *(_DWORD *)(a1 + 32) ^= ((unsigned __int8)*(_DWORD *)(a1 + 32) ^ (unsigned __int8)(2 * (*(_DWORD *)(a1 + 32) >> 1)
                                                                                     - 2)) & 6;
  }
  *(_BYTE *)(a1 + 160) = v6;
}
