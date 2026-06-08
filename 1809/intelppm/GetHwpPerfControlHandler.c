/*
 * XREFs of GetHwpPerfControlHandler @ 0x1C0006A60
 * Callers:
 *     <none>
 * Callees:
 *     IsHwpFastMsrSupported @ 0x1C0006D78 (IsHwpFastMsrSupported.c)
 *     IsHwpIdleOptimizationSupported @ 0x1C0006E5C (IsHwpIdleOptimizationSupported.c)
 *     IsHwpPackageControlSupported @ 0x1C0006ED4 (IsHwpPackageControlSupported.c)
 */

__int64 __fastcall GetHwpPerfControlHandler(
        __int64 a1,
        _QWORD *a2,
        __int64 (__fastcall **a3)(__int64 a1, __int64 a2, char a3, char a4),
        unsigned __int64 *a4,
        _QWORD *a5,
        bool *a6,
        bool *a7)
{
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v9; // r11
  unsigned int v10; // ebx

  v7 = *(_QWORD *)(a1 + 112);
  v8 = 0LL;
  v9 = 0LL;
  v10 = -1073741637;
  if ( *(_BYTE *)(a1 + 93) )
  {
    if ( *(_BYTE *)(v7 + 68) != 127 || *(_BYTE *)(v7 + 69) != 8 || *(_BYTE *)(v7 + 70) != 16 )
      return v10;
    v8 = *(_QWORD *)(v7 + 72);
    v9 = 16711680LL;
  }
  if ( *(_BYTE *)(a1 + 94) )
  {
    if ( *(_BYTE *)(v7 + 80) != 127 || *(_BYTE *)(v7 + 81) != 8 || *(_BYTE *)(v7 + 82) )
      return v10;
    if ( v8 )
    {
      if ( v8 != *(_QWORD *)(v7 + 84) )
        return v10;
    }
    else
    {
      v8 = *(_QWORD *)(v7 + 84);
    }
    v9 |= 0xFFuLL;
  }
  if ( *(_BYTE *)(a1 + 95) )
  {
    if ( *(_BYTE *)(v7 + 92) != 127 || *(_BYTE *)(v7 + 93) != 8 || *(_BYTE *)(v7 + 94) != 8 )
      return v10;
    if ( v8 )
    {
      if ( v8 != *(_QWORD *)(v7 + 96) )
        return v10;
    }
    else
    {
      v8 = *(_QWORD *)(v7 + 96);
    }
    v9 |= 0xFF00uLL;
  }
  if ( *(_BYTE *)(a1 + 96) )
  {
    if ( *(_BYTE *)(v7 + 212) != 127 || *(_BYTE *)(v7 + 213) != 8 || *(_BYTE *)(v7 + 214) != 24 )
      return v10;
    if ( v8 )
    {
      if ( v8 != *(_QWORD *)(v7 + 216) )
        return v10;
    }
    else
    {
      v8 = *(_QWORD *)(v7 + 216);
    }
    v9 |= 0xFF000000uLL;
  }
  if ( *(_BYTE *)(a1 + 97) )
  {
    if ( *(_BYTE *)(v7 + 200) != 127 || *(_BYTE *)(v7 + 201) != 10 || *(_BYTE *)(v7 + 202) != 32 )
      return v10;
    if ( v8 )
    {
      if ( v8 != *(_QWORD *)(v7 + 204) )
        return v10;
    }
    else
    {
      v8 = *(_QWORD *)(v7 + 204);
    }
    v9 |= 0x3FF00000000uLL;
  }
  if ( !*(_BYTE *)(a1 + 98) && ((v8 - 1906) & 0xFFFFFFFFFFFFFFFDuLL) == 0 )
  {
    v10 = 0;
    *(_QWORD *)(a1 + 144) = v9;
    *a5 = PerfSelectionHwp;
    *a2 = PerfControlHwp;
    *a3 = PerfControlHwpHidden;
    *a4 = (unsigned __int64)PerfControlHwpPackage & -(__int64)((unsigned __int8)IsHwpPackageControlSupported() != 0);
    *a6 = (unsigned __int8)IsHwpIdleOptimizationSupported() == 0;
    *a7 = (unsigned __int8)IsHwpFastMsrSupported() != 0;
  }
  return v10;
}
