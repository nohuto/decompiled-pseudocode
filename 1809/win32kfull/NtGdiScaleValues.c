/*
 * XREFs of NtGdiScaleValues @ 0x1C0293400
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0163300 (memmove.c)
 *     GreScaleValues @ 0x1C0282768 (GreScaleValues.c)
 */

__int64 __fastcall NtGdiScaleValues(HDC a1, char *a2, unsigned int a3)
{
  unsigned __int64 v6; // rax
  unsigned int v7; // edi
  void *v8; // rbx
  char *v9; // rcx
  SIZE_T v10; // r14
  unsigned int v11; // edi

  v6 = 4LL * a3;
  if ( v6 > 0xFFFFFFFF )
    return 0LL;
  v7 = 4 * a3;
  v8 = (void *)AllocFreeTmpBuffer((unsigned int)v6);
  if ( !v8 )
    return 0LL;
  if ( v7 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = &a2[v7];
    if ( (unsigned __int64)v9 > MmUserProbeAddress || v9 < a2 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v10 = v7;
  memmove(v8, a2, v7);
  v11 = GreScaleValues(a1, (int *)v8, a3);
  if ( v11 )
  {
    ProbeForWrite(a2, v10, 4u);
    memmove(a2, v8, v10);
  }
  FreeTmpBuffer(v8);
  return v11;
}
