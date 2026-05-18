/*
 * XREFs of sub_18009D920 @ 0x18009D920
 * Callers:
 *     sub_1800F4B70 @ 0x1800F4B70 (sub_1800F4B70.c)
 * Callees:
 *     sub_1800642C0 @ 0x1800642C0 (sub_1800642C0.c)
 *     sub_180064400 @ 0x180064400 (sub_180064400.c)
 *     sub_180064430 @ 0x180064430 (sub_180064430.c)
 *     sub_1800644BC @ 0x1800644BC (sub_1800644BC.c)
 *     sub_18006CEC8 @ 0x18006CEC8 (sub_18006CEC8.c)
 *     sub_1800781A8 @ 0x1800781A8 (sub_1800781A8.c)
 *     sub_18009E8BC @ 0x18009E8BC (sub_18009E8BC.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_18009D920(__int64 a1, __int64 *a2)
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
    v4 = sub_18006CEC8(*a2);
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
      LOBYTE(v4) = sub_1800642C0(a1, a2);
      v9 = *(_QWORD *)(a1 + 136);
      if ( v9 )
      {
        sub_18009E8BC(a1, v9, *a2);
        sub_1800644BC(a1, v6);
        LOBYTE(v4) = sub_180064430(a1, 8);
        if ( (_BYTE)v4 || (v10 = sub_180064400(a1), LOBYTE(v4) = sub_1800781A8(v10, 1, 8), (_BYTE)v4) )
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
