/*
 * XREFs of sub_180033108 @ 0x180033108
 * Callers:
 *     sub_180033250 @ 0x180033250 (sub_180033250.c)
 * Callees:
 *     sub_180033B10 @ 0x180033B10 (sub_180033B10.c)
 *     sub_18006D658 @ 0x18006D658 (sub_18006D658.c)
 *     sub_18011DA98 @ 0x18011DA98 (sub_18011DA98.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180033108(_QWORD *a1)
{
  volatile signed __int32 *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  signed __int32 v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx

  *a1 = &Spectre::Engine::D3D11::CommandListD3D11::`vftable';
  v2 = 0LL;
  v3 = a1[10];
  if ( v3 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(v3 + 8);
      if ( !v7 )
        break;
      if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v7 + 1, v7) )
      {
        v8 = a1[9];
        v2 = (volatile signed __int32 *)a1[10];
        if ( !v8 || !(unsigned __int8)sub_18006D658(v8) )
          break;
        v9 = a1[18];
        if ( v9 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 880LL))(v9);
          sub_180033B10(a1, 0LL);
        }
        goto LABEL_3;
      }
    }
  }
  sub_18011DA98(&unk_1802590F8, 3LL, "WARNING: CommandListD3D11 destroyed after RenderDeviceD3D11 has been shutdown.\n");
LABEL_3:
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  v4 = a1[19];
  if ( v4 )
  {
    a1[19] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = a1[18];
  if ( v5 )
  {
    a1[18] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return sub_18006A22C(a1);
}
