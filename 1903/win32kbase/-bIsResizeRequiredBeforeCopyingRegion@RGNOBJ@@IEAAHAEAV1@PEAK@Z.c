/*
 * XREFs of ?bIsResizeRequiredBeforeCopyingRegion@RGNOBJ@@IEAAHAEAV1@PEAK@Z @ 0x1C003D834
 * Callers:
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C003D770 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RGNOBJ::bIsResizeRequiredBeforeCopyingRegion(RGNOBJ *this, struct RGNOBJ *a2, unsigned int *a3)
{
  __int64 v3; // r9
  unsigned int v4; // edx
  unsigned int v5; // eax
  unsigned int v6; // ecx

  v3 = *(_QWORD *)a2;
  v4 = *(_DWORD *)(*(_QWORD *)this + 24LL);
  v5 = 216;
  v6 = *(_DWORD *)(v3 + 80);
  if ( (v4 >= v6 || *(_DWORD *)(v3 + 24) <= 0xD8u) && (v4 <= 0xD8 || *(_DWORD *)(v3 + 24) > 0xD8u) )
    return 0LL;
  if ( v6 > 0xD8 )
    v5 = *(_DWORD *)(v3 + 80);
  *a3 = v5;
  return 1LL;
}
