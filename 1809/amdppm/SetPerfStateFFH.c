/*
 * XREFs of SetPerfStateFFH @ 0x1C0002FD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ii @ 0x1C0001C90 (WPP_RECORDER_SF_ii.c)
 */

__int64 __fastcall SetPerfStateFFH(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r10
  unsigned int v3; // r8d
  unsigned int v5; // ecx
  unsigned __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // r10
  unsigned __int64 v9; // rax
  __int64 v10; // rcx

  v2 = a2[4];
  v3 = 0;
  v5 = *(_DWORD *)(a1 + 4);
  if ( v2 )
    v6 = a2[2] | __readmsr(v5) & v2;
  else
    v6 = a2[2];
  __writemsr(v5, v6);
  v7 = *(_QWORD *)(a1 + 16);
  if ( v7 )
  {
    v8 = a2[3];
    if ( v8 )
    {
      v9 = __readmsr(v7);
      v10 = a2[5];
      if ( v10 )
        v9 &= v10;
      if ( v9 != v8 )
      {
        WPP_RECORDER_SF_ii(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x19u,
          (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids,
          v8,
          v9);
        return (unsigned int)-1073741823;
      }
    }
  }
  return v3;
}
