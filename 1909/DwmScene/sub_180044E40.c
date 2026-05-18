/*
 * XREFs of sub_180044E40 @ 0x180044E40
 * Callers:
 *     sub_180044550 @ 0x180044550 (sub_180044550.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180044E40(__int64 a1)
{
  volatile signed __int32 *v2; // rdi
  __int64 result; // rax
  volatile signed __int32 *v4; // rdi
  __int128 v5; // [rsp+20h] [rbp-18h]

  *(_DWORD *)(a1 + 136) = 3;
  *(_QWORD *)(a1 + 104) = 0LL;
  v2 = *(volatile signed __int32 **)(a1 + 112);
  *(_QWORD *)(a1 + 112) = 0LL;
  if ( v2 )
  {
    result = (unsigned int)_InterlockedDecrement(v2 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      result = (unsigned int)_InterlockedDecrement(v2 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  *(_QWORD *)(a1 + 120) = 0LL;
  v4 = *(volatile signed __int32 **)(a1 + 128);
  *(_QWORD *)(a1 + 128) = 0LL;
  if ( v4 )
  {
    result = (unsigned int)_InterlockedDecrement(v4 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      result = (unsigned int)_InterlockedDecrement(v4 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  *(_QWORD *)&v5 = 0LL;
  BYTE8(v5) = 1;
  *(_OWORD *)(a1 + 144) = v5;
  return result;
}
