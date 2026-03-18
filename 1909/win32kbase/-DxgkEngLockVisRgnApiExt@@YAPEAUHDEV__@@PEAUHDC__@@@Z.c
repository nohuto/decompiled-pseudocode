/*
 * XREFs of ?DxgkEngLockVisRgnApiExt@@YAPEAUHDEV__@@PEAUHDC__@@@Z @ 0x1C011FC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkEngLockVisRgnApiExt(HDC a1)
{
  int v2; // eax
  __int64 v3; // rdx

  v2 = IsDxgkEngLockVisRgnSupported();
  v3 = 0LL;
  if ( v2 >= 0 )
    return DxgkEngLockVisRgn(a1, 0LL);
  return v3;
}
