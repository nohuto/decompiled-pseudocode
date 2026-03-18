/*
 * XREFs of ?NotifyOnChanged@CCompositionLight@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18005E6B0
 * Callers:
 *     <none>
 * Callees:
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800A2C30 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionLight::NotifyOnChanged(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // rbp
  char v8; // r14
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v4 = 0LL;
  v5 = a3;
  if ( a3 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 168LL))(a1);
    if ( v5 == result )
    {
      if ( a2 == 1 )
        return result;
      a2 = 11;
      v5 = a1;
    }
  }
  if ( a2 == 11 || a2 == 1 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 224LL))(a1);
    v8 = result;
    if ( !(_BYTE)result || !*(_BYTE *)(a1 + 152) )
    {
      v9 = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 32) = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(v9 + 2)) & 6;
      if ( (((unsigned __int8)v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(v9 + 2)) & 6) & 6) == 2
        && (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 144LL))(a1, a2, v5) )
      {
        v10 = *(_QWORD *)(a1 + 24);
        if ( (v10 & 2) != 0 )
          v10 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          LODWORD(v10) = v10 & 1;
        if ( (_DWORD)v10 )
        {
          v11 = (unsigned int)v10;
          do
          {
            v12 = CPtrArrayBase::operator[](a1 + 24, v4);
            (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a1 + 72LL))(a1, v12, a2, v5);
            ++v4;
            --v11;
          }
          while ( v11 );
        }
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
      result = (*(_DWORD *)(a1 + 32) ^ (2 * (*(_DWORD *)(a1 + 32) >> 1) - 2)) & 6;
      *(_DWORD *)(a1 + 32) ^= result;
    }
    *(_BYTE *)(a1 + 152) = v8;
  }
  return result;
}
