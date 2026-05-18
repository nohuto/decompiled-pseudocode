/*
 * XREFs of sub_18009D810 @ 0x18009D810
 * Callers:
 *     sub_1800F4A60 @ 0x1800F4A60 (sub_1800F4A60.c)
 * Callees:
 *     sub_1800641B0 @ 0x1800641B0 (sub_1800641B0.c)
 *     sub_1800642F0 @ 0x1800642F0 (sub_1800642F0.c)
 *     sub_180064320 @ 0x180064320 (sub_180064320.c)
 *     sub_1800643AC @ 0x1800643AC (sub_1800643AC.c)
 *     sub_18006CDB8 @ 0x18006CDB8 (sub_18006CDB8.c)
 *     sub_180078098 @ 0x180078098 (sub_180078098.c)
 *     sub_18009E7AC @ 0x18009E7AC (sub_18009E7AC.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_18009D810(__int64 a1, __int64 *a2)
{
  unsigned int v4; // eax
  __int64 *v5; // r8
  unsigned int v6; // edi
  __int64 *v7; // rcx
  __int64 *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 (__fastcall ***v11)(_QWORD, __int64); // rcx

  LOBYTE(v4) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !(_BYTE)v4 )
  {
    v4 = sub_18006CDB8(*a2);
    v5 = *(__int64 **)(a1 + 112);
    v6 = v4;
    v7 = v5;
    v8 = (__int64 *)v5[1];
    if ( *((_BYTE *)v8 + 25) )
      goto LABEL_9;
    do
    {
      if ( *((_DWORD *)v8 + 8) >= v4 )
      {
        v7 = v8;
        v8 = (__int64 *)*v8;
      }
      else
      {
        v8 = (__int64 *)v8[2];
      }
    }
    while ( !*((_BYTE *)v8 + 25) );
    if ( v7 == v5 || v4 < *((_DWORD *)v7 + 8) )
LABEL_9:
      v7 = *(__int64 **)(a1 + 112);
    if ( v7 == v5 || !v7[5] )
    {
      LOBYTE(v4) = sub_1800641B0(a1, a2);
      v9 = *(_QWORD *)(a1 + 136);
      if ( v9 )
      {
        sub_18009E7AC(a1, v9, *a2);
        sub_1800643AC(a1, v6);
        LOBYTE(v4) = sub_180064320(a1, 8);
        if ( (_BYTE)v4 || (v10 = sub_1800642F0(a1), LOBYTE(v4) = sub_180078098(v10, 1, 8), (_BYTE)v4) )
        {
          v11 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 136);
          *(_QWORD *)(a1 + 136) = 0LL;
          if ( v11 )
            LOBYTE(v4) = (**v11)(v11, 1LL);
        }
      }
    }
  }
  return v4;
}
