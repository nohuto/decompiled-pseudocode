/*
 * XREFs of ?DxgkEngDetectGDIPathApiExt@@YAHPEBXPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C0122350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkEngDetectGDIPathApiExt(const void *a1, HDEV a2, HWND a3, HRGN a4)
{
  int v8; // eax
  unsigned int v9; // r10d

  v8 = IsDxgkEngDetectGDIPathSupported();
  v9 = 0;
  if ( v8 >= 0 )
    return (unsigned int)DxgkEngDetectGDIPath(a1, a2, a3, a4);
  return v9;
}
