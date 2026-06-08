/*
 * XREFs of GetHwpPerfControlHandler @ 0x1C0006670
 * Callers:
 *     <none>
 * Callees:
 *     IsHwpFastMsrSupported @ 0x1C0006998 (IsHwpFastMsrSupported.c)
 *     IsHwpIdleOptimizationSupported @ 0x1C0006A98 (IsHwpIdleOptimizationSupported.c)
 *     IsHwpPackageControlSupported @ 0x1C0006B1C (IsHwpPackageControlSupported.c)
 */

__int64 __fastcall GetHwpPerfControlHandler(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned __int64 *a4,
        _QWORD *a5,
        bool *a6,
        _DWORD *a7,
        int *a8)
{
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // r11
  unsigned int v11; // edi
  int v12; // ebx

  v8 = *(_QWORD *)(a1 + 112);
  v9 = 0LL;
  v10 = 0LL;
  v11 = -1073741637;
  if ( *(_BYTE *)(a1 + 93) )
  {
    if ( *(_BYTE *)(v8 + 68) != 127 || *(_BYTE *)(v8 + 69) != 8 || *(_BYTE *)(v8 + 70) != 16 )
      return v11;
    v9 = *(_QWORD *)(v8 + 72);
    v10 = 16711680LL;
  }
  if ( *(_BYTE *)(a1 + 94) )
  {
    if ( *(_BYTE *)(v8 + 80) != 127 || *(_BYTE *)(v8 + 81) != 8 || *(_BYTE *)(v8 + 82) )
      return v11;
    if ( v9 )
    {
      if ( v9 != *(_QWORD *)(v8 + 84) )
        return v11;
    }
    else
    {
      v9 = *(_QWORD *)(v8 + 84);
    }
    v10 |= 0xFFuLL;
  }
  if ( *(_BYTE *)(a1 + 95) )
  {
    if ( *(_BYTE *)(v8 + 92) != 127 || *(_BYTE *)(v8 + 93) != 8 || *(_BYTE *)(v8 + 94) != 8 )
      return v11;
    if ( v9 )
    {
      if ( v9 != *(_QWORD *)(v8 + 96) )
        return v11;
    }
    else
    {
      v9 = *(_QWORD *)(v8 + 96);
    }
    v10 |= 0xFF00uLL;
  }
  if ( *(_BYTE *)(a1 + 96) )
  {
    if ( *(_BYTE *)(v8 + 212) != 127 || *(_BYTE *)(v8 + 213) != 8 || *(_BYTE *)(v8 + 214) != 24 )
      return v11;
    if ( v9 )
    {
      if ( v9 != *(_QWORD *)(v8 + 216) )
        return v11;
    }
    else
    {
      v9 = *(_QWORD *)(v8 + 216);
    }
    v10 |= 0xFF000000uLL;
  }
  if ( *(_BYTE *)(a1 + 97) )
  {
    if ( *(_BYTE *)(v8 + 200) != 127 || *(_BYTE *)(v8 + 201) != 10 || *(_BYTE *)(v8 + 202) != 32 )
      return v11;
    if ( v9 )
    {
      if ( v9 != *(_QWORD *)(v8 + 204) )
        return v11;
    }
    else
    {
      v9 = *(_QWORD *)(v8 + 204);
    }
    v10 |= 0x3FF00000000uLL;
  }
  if ( !*(_BYTE *)(a1 + 98) && ((v9 - 1906) & 0xFFFFFFFFFFFFFFFDuLL) == 0 )
  {
    v11 = 0;
    *(_QWORD *)(a1 + 144) = v10;
    *a5 = PerfSelectionHwp;
    *a2 = PerfControlHwp;
    *a3 = PerfControlHwpHidden;
    *a4 = (unsigned __int64)PerfControlHwpPackage & -(__int64)((unsigned __int8)IsHwpPackageControlSupported() != 0);
    v12 = (unsigned __int8)IsHwpFastMsrSupported() != 0 ? 500 : 1000;
    *a6 = (unsigned __int8)IsHwpIdleOptimizationSupported() == 0;
    *a7 = 1000;
    *a8 = v12;
  }
  return v11;
}
