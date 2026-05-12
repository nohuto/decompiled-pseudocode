/*
 * XREFs of StorpLogSystemEvent @ 0x1C0040F9C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E3C0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0007964 (RaidAdapterFindUnit.c)
 *     WPP_SF_ddd @ 0x1C003BA34 (WPP_SF_ddd.c)
 *     StorCreateSystemLogEntry @ 0x1C00460D0 (StorCreateSystemLogEntry.c)
 */

__int64 __fastcall StorpLogSystemEvent(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  int v4; // ecx
  int v5; // ecx
  unsigned __int8 v6; // si
  unsigned __int8 v7; // bp
  unsigned __int8 v8; // r14
  __int64 Unit; // rax
  void *v10; // rcx
  int v11; // [rsp+58h] [rbp+10h]

  if ( (*(_DWORD *)a2 & 0xFFFFFF00) > 0x100 )
  {
    *(_DWORD *)a2 = 511;
    return 3238002699LL;
  }
  if ( *(_DWORD *)(a2 + 40) && !*(_QWORD *)(a2 + 48) )
    return 3238002694LL;
  if ( *(_DWORD *)(a2 + 56) && !*(_QWORD *)(a2 + 64) )
    return 3238002694LL;
  v3 = **(_QWORD **)(a1 - 16);
  if ( !v3 )
    return 3238002694LL;
  if ( KeGetCurrentIrql() > 2u )
    return 3238002696LL;
  v4 = *(_DWORD *)(a2 + 12);
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        return 3238002694LL;
    }
    else
    {
      v6 = *(_BYTE *)(a2 + 16);
      v7 = *(_BYTE *)(a2 + 20);
      v8 = *(_BYTE *)(a2 + 24);
      LOBYTE(v11) = v6;
      BYTE1(v11) = v7;
      BYTE2(v11) = v8;
      Unit = RaidAdapterFindUnit(v3, v11);
      if ( Unit )
      {
        v10 = *(void **)(Unit + 8);
        return StorCreateSystemLogEntry(v10);
      }
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
      {
        WPP_SF_ddd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x18u,
          (__int64)&WPP_890ff0257e5a37fc61b1814295f1a13c_Traceguids,
          v6,
          v7,
          v8);
      }
    }
  }
  v10 = *(void **)(v3 + 8);
  return StorCreateSystemLogEntry(v10);
}
