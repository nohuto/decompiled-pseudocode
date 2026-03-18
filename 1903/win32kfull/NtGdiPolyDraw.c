/*
 * XREFs of NtGdiPolyDraw @ 0x1C02A8BD0
 * Callers:
 *     <none>
 * Callees:
 *     GrePolyDraw @ 0x1C026A524 (GrePolyDraw.c)
 */

__int64 __fastcall NtGdiPolyDraw(HDC a1, struct _POINTL *Address, char *a3, SIZE_T Size)
{
  SIZE_T v4; // r15
  unsigned int v8; // ebx
  HANDLE v9; // rsi
  HANDLE v10; // rdi
  SIZE_T v11; // rdx

  v4 = (unsigned int)Size;
  v8 = 1;
  v9 = 0LL;
  v10 = 0LL;
  if ( (unsigned int)Size <= 0x1FFFFFFF )
  {
    v11 = (unsigned int)Size;
    if ( v11 * 8 )
    {
      if ( ((unsigned __int8)Address & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Address[v11] > MmUserProbeAddress || &Address[v11] < Address )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    if ( (_DWORD)Size
      && ((unsigned __int64)&a3[(unsigned int)Size] > MmUserProbeAddress || &a3[(unsigned int)Size] < a3) )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    v9 = MmSecureVirtualMemory(Address, v11 * 8, 2u);
    v10 = MmSecureVirtualMemory(a3, v4, 2u);
  }
  if ( !v9 || !v10 )
    v8 = 0;
  if ( v8 )
    v8 = GrePolyDraw(a1, Address, a3, v4);
  if ( v9 )
    MmUnsecureVirtualMemory(v9);
  if ( v10 )
    MmUnsecureVirtualMemory(v10);
  return v8;
}
